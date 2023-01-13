//! Type definition for green node.
//!
//! See <https://github.com/rust-analyzer/rust-analyzer/blob/master/docs/dev/syntax.md>

use itertools::Itertools;
use std::{ops::Deref, sync::Arc};
use tree_sitter::{Parser, TreeCursor};

use crate::errors::TSTodomeError;

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub struct GreenNode(Arc<GreenNodeData>);

impl GreenNode {
    pub fn ptr_eq(&self, other: &Self) -> bool {
        Arc::ptr_eq(&self.0, &other.0)
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub(crate) enum GreenNodeData {
    Inner(InnerNode),
    Token(Token),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SyntaxKind(&'static str);

impl SyntaxKind {
    pub fn as_str(&self) -> &'static str {
        self.0
    }
}

/// 子要素を持つ GreenNode。
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub(crate) struct InnerNode {
    kind: SyntaxKind,
    is_error: bool,
    text_len: usize,
    children: Vec<GreenNodeChild>,
}

/// InnerNode の子要素。
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub struct GreenNodeChild {
    field: Option<&'static str>,
    node: GreenNode,
}

impl GreenNodeChild {
    #[must_use]
    pub fn node(&self) -> GreenNode {
        self.node.clone()
    }

    #[must_use]
    pub fn field(&self) -> Option<&'static str> {
        self.field
    }
}

impl InnerNode {
    /// Get a reference to the node's children.
    pub fn children(&self) -> &[GreenNodeChild] {
        self.children.as_ref()
    }

    pub fn find_children_with_field(&self, field_name: &str) -> Vec<GreenNode> {
        self.children
            .iter()
            .filter(|child| child.field == Some(field_name))
            .map(|child| child.node.clone())
            .collect_vec()
    }

    pub fn get_children_with_field(&self) -> Vec<GreenNode> {
        self.children
            .iter()
            .filter(|child| child.field.is_some())
            .map(|child| child.node.clone())
            .collect_vec()
    }
}

/// トークン。子要素を持たない GreenNode のこと。
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub(crate) struct Token {
    kind: SyntaxKind,
    is_error: bool,
    text: String,
}

impl Token {
    /// Get a reference to the token's text.
    pub fn text(&self) -> &str {
        self.text.as_ref()
    }
}

impl GreenNode {
    pub(crate) fn new(data: GreenNodeData) -> GreenNode {
        GreenNode(Arc::new(data))
    }

    pub fn new_root(text: String) -> Result<GreenNode, TSTodomeError> {
        let language_todome = crate::language();
        let mut parser = Parser::new();
        parser.set_language(language_todome).expect("unreachable!");
        let tree = parser
            .parse(text.clone(), None)
            .ok_or(TSTodomeError::ParserReturnedNone)?;
        let node = tree.root_node();
        let mut cursor = node.walk();
        Ok(GreenNode::new(GreenNodeData::from_cursor(
            &text,
            &mut cursor,
        )))
    }

    pub fn text(&self) -> String {
        self.0.text()
    }

    pub fn kind(&self) -> SyntaxKind {
        self.0.kind()
    }

    pub fn is_error(&self) -> bool {
        self.0.is_error()
    }

    pub fn children(&self) -> &[GreenNodeChild] {
        self.0.children()
    }

    pub fn text_len(&self) -> usize {
        self.0.text_len()
    }

    pub fn is_node(&self) -> bool {
        self.0.is_node()
    }

    pub fn is_token(&self) -> bool {
        self.0.is_token()
    }
}

impl GreenNodeData {
    fn from_cursor(text: &str, cursor: &mut TreeCursor) -> GreenNodeData {
        let node = cursor.node();
        let kind = SyntaxKind(node.kind());

        let children = 'children: {
            let mut v = Vec::new();

            if !cursor.goto_first_child() {
                break 'children v;
            }
            v.push(GreenNodeChild {
                field: cursor.field_name(),
                node: GreenNode(Arc::new(GreenNodeData::from_cursor(text, cursor))),
            });
            while cursor.goto_next_sibling() {
                v.push(GreenNodeChild {
                    field: cursor.field_name(),
                    node: GreenNode(Arc::new(GreenNodeData::from_cursor(text, cursor))),
                });
            }

            cursor.goto_parent();
            v
        };

        let is_error = node.is_error();

        if children.is_empty() {
            GreenNodeData::Token(Token {
                kind,
                is_error,
                text: text[node.start_byte()..node.end_byte()].to_owned(),
            })
        } else {
            let text_len = node.end_byte() - node.start_byte();
            GreenNodeData::Inner(InnerNode {
                kind,
                is_error,
                text_len,
                children,
            })
        }
    }

    fn text(&self) -> String {
        match self {
            GreenNodeData::Inner(InnerNode { children, .. }) => {
                children.iter().map(|child| child.node.0.text()).join("")
            }
            GreenNodeData::Token(Token { text, .. }) => text.clone(),
        }
    }

    fn kind(&self) -> SyntaxKind {
        match self {
            GreenNodeData::Inner(InnerNode { kind, .. }) => *kind,
            GreenNodeData::Token(Token { kind, .. }) => *kind,
        }
    }

    fn is_error(&self) -> bool {
        match self {
            GreenNodeData::Inner(InnerNode { is_error, .. }) => *is_error,
            GreenNodeData::Token(Token { is_error, .. }) => *is_error,
        }
    }

    fn as_node(&self) -> Option<&InnerNode> {
        if let Self::Inner(v) = self {
            Some(v)
        } else {
            None
        }
    }

    fn as_token(&self) -> Option<&Token> {
        if let Self::Token(v) = self {
            Some(v)
        } else {
            None
        }
    }

    fn children(&self) -> &[GreenNodeChild] {
        match self {
            GreenNodeData::Inner(InnerNode { children, .. }) => children.deref(),
            _ => &[],
        }
    }

    fn text_len(&self) -> usize {
        match self {
            GreenNodeData::Inner(InnerNode { text_len, .. }) => *text_len,
            GreenNodeData::Token(Token { text, .. }) => text.len(),
        }
    }

    /// Returns `true` if the green node is [`Branch`].
    ///
    /// [`Branch`]: GreenNode::Branch
    fn is_node(&self) -> bool {
        matches!(self, Self::Inner(..))
    }

    /// Returns `true` if the green node is [`Token`].
    ///
    /// [`Token`]: GreenNode::Token
    fn is_token(&self) -> bool {
        matches!(self, Self::Token(..))
    }
}

#[cfg(test)]
mod tests {

    use super::*;

    #[test]
    fn test_green_node() {
        let root = GreenNode::new_root("foo".to_string()).unwrap();
        let source_file = root.0.as_node().unwrap();
        assert_eq!(source_file.text_len, 3);
        assert_eq!(source_file.kind, SyntaxKind("source_file"));
        let task = source_file.children().get(0).unwrap().node();
        let task = task.0.as_node().unwrap();
        assert_eq!(task.text_len, 3);
        assert_eq!(task.kind, SyntaxKind("task"));
        let text = task.children().get(0).unwrap().node();
        let text = text.0.as_node().unwrap();
        assert_eq!(text.text_len, 3);
        assert_eq!(text.kind, SyntaxKind("text"));
        let subtext = text.children().get(0).unwrap().node();
        let subtext = subtext.0.as_token().unwrap();
        assert_eq!(subtext.text, "foo".to_owned());
        assert_eq!(subtext.kind, SyntaxKind("subtext"));
    }
}
