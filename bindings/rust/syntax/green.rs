//! Type definition for green node.
//!
//! See <https://github.com/rust-analyzer/rust-analyzer/blob/master/docs/dev/syntax.md>

use itertools::Itertools;
use std::{borrow::Cow, ops::Deref, sync::Arc};
use tree_sitter::{Parser, TreeCursor};

use crate::errors::TSTodomeError;

/// Green Node: a purely-functional tree with arbitrary arity.
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub struct GreenNode(Arc<GreenNodeData>);

/// 構文要素の種類。 tree-sitter のノード名に対応。
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SyntaxKind(&'static str);

/// InnerNode の子要素。
/// GreenNode::children() の返り値の Vec の要素。
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub struct GreenNodeChild {
    pub field: Option<&'static str>,
    pub node: GreenNode,
}

/// GreenNode の中身。子要素を持つ Inner node か、子要素を持たない token のいずれか。
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub(crate) enum GreenNodeData {
    Inner(InnerNode),
    Token(Token),
}

/// 子要素を持つ GreenNode。
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub(crate) struct InnerNode {
    kind: SyntaxKind,
    is_error: bool,
    text_len: usize,
    children: Vec<GreenNodeChild>,
}

/// トークン。子要素を持たない GreenNode。
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub(crate) struct Token {
    kind: SyntaxKind,
    is_error: bool,
    text: String,
}

impl GreenNode {
    pub(crate) fn new(data: GreenNodeData) -> GreenNode {
        GreenNode(Arc::new(data))
    }

    pub fn ptr_eq(&self, other: &Self) -> bool {
        Arc::ptr_eq(&self.0, &other.0)
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

    pub fn text(&self) -> Cow<str> {
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

impl SyntaxKind {
    pub fn as_str(&self) -> &'static str {
        self.0
    }
}

impl GreenNodeChild {
    pub fn node(&self) -> GreenNode {
        self.node.clone()
    }

    pub fn field(&self) -> Option<&'static str> {
        self.field
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

    fn text(&self) -> Cow<str> {
        match self {
            GreenNodeData::Inner(InnerNode { children, .. }) => {
                let s = children.iter().map(|child| child.node.0.text()).join("");
                Cow::Owned(s)
            }
            GreenNodeData::Token(Token { text, .. }) => Cow::Borrowed(text),
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
        let source_file = GreenNode::new_root("(A) foo".to_string()).unwrap();
        assert_eq!(source_file.kind().as_str(), "source_file");
        assert_eq!(source_file.text_len(), 7);

        let GreenNodeChild { field, node: task } = source_file.children().get(0).unwrap();
        assert_eq!(field, &None);
        assert_eq!(task.kind().as_str(), "task");
        assert_eq!(task.text(), "(A) foo");
        assert_eq!(task.text_len(), 7);

        let GreenNodeChild {
            field,
            node: priority,
        } = task.children().get(0).unwrap();
        assert_eq!(field, &Some("priority"));
        assert_eq!(priority.kind().as_str(), "priority");
        assert_eq!(priority.text(), "(A)");
        assert_eq!(priority.text_len(), 3);

        let GreenNodeChild {
            field,
            node: priority,
        } = priority.children().get(1).unwrap();
        assert_eq!(field, &Some("value"));
        assert_eq!(priority.kind().as_str(), "priority_inner");
        assert_eq!(priority.text(), "A");
        assert_eq!(priority.text_len(), 1);
    }
}
