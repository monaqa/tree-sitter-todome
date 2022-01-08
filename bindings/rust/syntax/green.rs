//! See <https://github.com/rust-analyzer/rust-analyzer/blob/master/docs/dev/syntax.md>

use anyhow::*;
use itertools::Itertools;
use std::{ops::Deref, sync::Arc};
use tree_sitter::{Parser, TreeCursor};

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub enum GreenNode {
    Node(Node),
    Token(Token),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SyntaxKind(&'static str);

impl SyntaxKind {
    pub fn as_str(&self) -> &'static str {
        self.0
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub struct Node {
    kind: SyntaxKind,
    text_len: usize,
    children: Vec<Arc<GreenNode>>,
}

impl Node {
    /// Get a reference to the node's children.
    pub fn children(&self) -> &[Arc<GreenNode>] {
        self.children.as_ref()
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub struct Token {
    kind: SyntaxKind,
    text: String,
}

impl Token {
    /// Get a reference to the token's text.
    pub fn text(&self) -> &str {
        self.text.as_ref()
    }
}

impl GreenNode {
    pub fn new_root(text: String) -> Result<GreenNode> {
        let language_todome = crate::language();
        let mut parser = Parser::new();
        parser.set_language(language_todome)?;
        let tree = parser
            .parse(text.clone(), None)
            .with_context(|| anyhow!("parse failed!"))?;
        let node = tree.root_node();
        let mut cursor = node.walk();
        Ok(GreenNode::from_cursor(&text, &mut cursor))
    }

    fn from_cursor(text: &str, cursor: &mut TreeCursor) -> GreenNode {
        let node = cursor.node();
        let kind = SyntaxKind(node.kind());
        let children = node
            .children(cursor)
            .map(|node| {
                let mut cursor = node.walk();
                Arc::new(GreenNode::from_cursor(text, &mut cursor))
            })
            .collect_vec();
        if children.is_empty() {
            GreenNode::Token(Token {
                kind,
                text: text[node.start_byte()..node.end_byte()].to_owned(),
            })
        } else {
            let text_len = node.end_byte() - node.start_byte();
            GreenNode::Node(Node {
                kind,
                text_len,
                children,
            })
        }
    }

    pub fn text(&self) -> String {
        match self {
            GreenNode::Node(Node { children, .. }) => {
                children.iter().map(|node| node.text()).join("")
            }
            GreenNode::Token(Token { text, .. }) => text.clone(),
        }
    }

    pub fn kind(&self) -> SyntaxKind {
        match self {
            GreenNode::Node(Node { kind, .. }) => *kind,
            GreenNode::Token(Token { kind, .. }) => *kind,
        }
    }

    pub fn as_node(&self) -> Option<&Node> {
        if let Self::Node(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn as_token(&self) -> Option<&Token> {
        if let Self::Token(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn children(&self) -> &[Arc<GreenNode>] {
        match self {
            GreenNode::Node(Node { children, .. }) => children.deref(),
            _ => &[],
        }
    }

    pub fn text_len(&self) -> usize {
        match self {
            GreenNode::Node(Node { text_len, .. }) => *text_len,
            GreenNode::Token(Token { text, .. }) => text.len(),
        }
    }

    /// Returns `true` if the green node is [`Node`].
    ///
    /// [`Node`]: GreenNode::Node
    pub fn is_node(&self) -> bool {
        matches!(self, Self::Node(..))
    }

    /// Returns `true` if the green node is [`Token`].
    ///
    /// [`Token`]: GreenNode::Token
    pub fn is_token(&self) -> bool {
        matches!(self, Self::Token(..))
    }
}

#[cfg(test)]
mod tests {

    use super::*;

    #[test]
    fn test_green_node() {
        let root = GreenNode::new_root("foo".to_string()).unwrap();
        let source_file = root.as_node().unwrap();
        assert_eq!(source_file.text_len, 3);
        assert_eq!(source_file.kind, SyntaxKind("source_file"));
        let task = source_file.children().get(0).unwrap().as_node().unwrap();
        assert_eq!(task.text_len, 3);
        assert_eq!(task.kind, SyntaxKind("task"));
        let text = task.children().get(0).unwrap().as_node().unwrap();
        assert_eq!(text.text_len, 3);
        assert_eq!(text.kind, SyntaxKind("text"));
        let subtext = text.children().get(0).unwrap().as_token().unwrap();
        assert_eq!(subtext.text, "foo".to_owned());
        assert_eq!(subtext.kind, SyntaxKind("subtext"));
    }
}
