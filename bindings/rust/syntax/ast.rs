//! Type definition for syntactic node.
//!
//! See <https://github.com/rust-analyzer/rust-analyzer/blob/master/docs/dev/syntax.md>

use chrono::NaiveDate;
use itertools::Itertools;
use std::ops::Deref;

use crate::errors::TSTodomeError;

use super::{green::GreenNode, red::SyntaxNode};

pub trait AstNode: Sized {
    fn try_cast(syntax: SyntaxNode) -> Result<Self, TSTodomeError>;

    fn cast(syntax: SyntaxNode) -> Option<Self> {
        AstNode::try_cast(syntax).ok()
    }

    fn syntax(&self) -> &SyntaxNode;

    fn find_from_parent<T: Deref<Target = SyntaxNode>>(parent: &T) -> Option<Self> {
        parent.children().find_map(|child| Self::cast(child.node()))
    }

    fn filter_from_parent<T: Deref<Target = SyntaxNode>>(parent: &T) -> Vec<Self> {
        parent
            .children()
            .filter_map(|child| Self::cast(child.node()))
            .collect()
    }
}

macro_rules! register_ast_node {
    ($struct_name:ident, $syntax_name:literal) => {
        /// pub struct for $syntax_name
        #[derive(Debug, Clone, PartialEq, Eq, Hash)]
        pub struct $struct_name(SyntaxNode);

        impl Deref for $struct_name {
            type Target = SyntaxNode;

            fn deref(&self) -> &Self::Target {
                &self.0
            }
        }

        impl AstNode for $struct_name {
            fn try_cast(syntax: SyntaxNode) -> Result<Self, TSTodomeError> {
                match syntax.green().kind().as_str() {
                    $syntax_name => Ok($struct_name(syntax)),
                    _ => Err(TSTodomeError::cast_failed($syntax_name, syntax)),
                }
            }

            fn syntax(&self) -> &SyntaxNode {
                &self.0
            }
        }
    };
}

macro_rules! register_supertype {
    ($struct_name:ident, { $( $branch:ident => $child:ident ),* }) => {
        #[derive(Debug, Clone, PartialEq, Eq, Hash)]
        pub enum $struct_name {
            $($branch($child),)*
        }
        impl AstNode for $struct_name {
            fn try_cast(syntax: SyntaxNode) -> Result<Self, TSTodomeError> {
                Err(TSTodomeError::internal_error("supertype has no variant"))
                    $(.or_else(|_| $child::try_cast(syntax.clone()).map($struct_name::$branch)))*
            }

            fn syntax(&self) -> &SyntaxNode {
                match self {
                    $($struct_name::$branch(header) => header.syntax(),)*
                }
            }
        }
    };
    ($struct_name:ident, { $( $branch:ident => $child:ident ),* , }) => {
        register_supertype!($struct_name, { $($branch => $child),* });
    };
}

register_ast_node!(SourceFile, "source_file");
register_ast_node!(Task, "task");
register_ast_node!(Header, "header");
register_ast_node!(Block, "block");
register_ast_node!(Status, "status");
register_ast_node!(Priority, "priority");
register_ast_node!(Date, "date");
// register_ast_node!(DateValue, "date_value");
register_ast_node!(Keyval, "keyval");
register_ast_node!(Category, "category");
register_ast_node!(Text, "text");
register_ast_node!(Tag, "tag");
register_ast_node!(Memo, "memo");

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum StatusKind {
    Todo,
    Doing,
    Done,
    Cancel,
    Other,
}

register_supertype!(Item, {
    Task => Task,
    Header => Header,
    Memo => Memo,
});

register_supertype!(Meta, {
    Priority => Priority,
    Date => Date,
    Keyval => Keyval,
    Category => Category,
});

impl Item {
    pub fn as_task(&self) -> Option<&Task> {
        if let Self::Task(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn as_header(&self) -> Option<&Header> {
        if let Self::Header(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn as_memo(&self) -> Option<&Memo> {
        if let Self::Memo(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn parent_item(&self) -> Option<Item> {
        let parent_item_node = self.syntax().parent()?.parent()?;
        Item::cast(parent_item_node)
    }

    /// 自身に近いものから順に親をさかのぼって列挙する。
    pub fn ancestors(&self) -> Vec<Item> {
        let mut v = vec![];
        let mut item = self.clone();
        while let Some(parent) = item.parent_item() {
            v.push(parent.clone());
            item = parent;
        }
        v
    }

    pub fn meta(&self) -> Vec<Meta> {
        match self {
            Item::Task(t) => t.meta(),
            Item::Header(h) => h.meta(),
            Item::Memo(_) => vec![],
        }
    }

    pub fn memo(&self) -> Option<Memo> {
        match self {
            Item::Task(t) => t.memo(),
            Item::Header(h) => h.memo(),
            Item::Memo(m) => Some(m.clone()),
        }
    }

    pub fn status(&self) -> Option<Status> {
        match self {
            Item::Task(t) => t.status(),
            Item::Header(h) => h.status(),
            Item::Memo(_) => None,
        }
    }

    /// 自身にかかる status を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって `.next()` で「現在有効な」 priority を取得できる。
    pub fn scoped_statuses(&self) -> Vec<Status> {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .filter_map(|item| item.status())
            .collect_vec()
    }

    /// 自身にかかる priorities を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって `.next()` で「現在有効な」 priority を取得できる。
    pub fn scoped_proiorities(&self) -> Vec<Priority> {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_priority())
            .collect_vec()
    }

    /// 自身にかかる dues を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって `.next()` で「現在有効な」 priority を取得できる。
    pub fn scoped_dues(&self) -> Vec<Date> {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_due())
            .collect_vec()
    }

    /// 自身にかかる keyvals を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって `.next()` で「現在有効な」 priority を取得できる。
    pub fn scoped_keyvals(&self) -> Vec<Keyval> {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_keyval())
            .collect_vec()
    }

    /// 自身にかかる categories を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって全ての category を正しい順番で得るには
    /// `.reverse()` などで逆順にする必要がある。
    pub fn scoped_categories(&self) -> Vec<Category> {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_category())
            .collect_vec()
    }
}

impl Meta {
    pub fn as_priority(&self) -> Option<&Priority> {
        if let Self::Priority(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn as_due(&self) -> Option<&Date> {
        if let Self::Date(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn as_keyval(&self) -> Option<&Keyval> {
        if let Self::Keyval(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn as_category(&self) -> Option<&Category> {
        if let Self::Category(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn try_into_priority(self) -> Option<Priority> {
        if let Self::Priority(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn try_into_due(self) -> Option<Date> {
        if let Self::Date(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn try_into_keyval(self) -> Option<Keyval> {
        if let Self::Keyval(v) = self {
            Some(v)
        } else {
            None
        }
    }

    pub fn try_into_category(self) -> Option<Category> {
        if let Self::Category(v) = self {
            Some(v)
        } else {
            None
        }
    }
}

impl SourceFile {
    pub fn new_root(syntax: SyntaxNode) -> SourceFile {
        SourceFile(syntax)
    }

    pub fn parse(text: String) -> Result<Self, TSTodomeError> {
        let green_node = GreenNode::new_root(text)?;
        let syntax = SyntaxNode::new_root(green_node);
        SourceFile::try_cast(syntax)
    }
}

// impl AstNode for Item {
//     fn cast(syntax: SyntaxNode) -> Option<Self> {
//         match syntax.green().kind().as_str() {
//             "task" => Some(Item::Task(Task::cast(syntax).unwrap())),
//             "header" => Some(Item::Header(Header::cast(syntax).unwrap())),
//             "memo" => Some(Item::Memo(Memo::cast(syntax).unwrap())),
//             _ => None,
//         }
//     }
//
//     fn syntax(&self) -> &SyntaxNode {
//         match self {
//             Item::Task(Task { syntax }) => syntax,
//             Item::Header(Header { syntax }) => syntax,
//             Item::Memo(Memo { syntax }) => syntax,
//         }
//     }
// }
//
// impl AstNode for Meta {
//     fn cast(syntax: SyntaxNode) -> Option<Self> {
//         match syntax.green().kind().as_str() {
//             "priority" => Some(Meta::Priority(Priority::cast(syntax).unwrap())),
//             "due" => Some(Meta::Due(Due::cast(syntax).unwrap())),
//             "keyval" => Some(Meta::Keyval(Keyval::cast(syntax).unwrap())),
//             "category" => Some(Meta::Category(Category::cast(syntax).unwrap())),
//             _ => None,
//         }
//     }
//
//     fn syntax(&self) -> &SyntaxNode {
//         match self {
//             Meta::Priority(Priority { syntax }) => syntax,
//             Meta::Due(Due { syntax }) => syntax,
//             Meta::Keyval(Keyval { syntax }) => syntax,
//             Meta::Category(Category { syntax }) => syntax,
//         }
//     }
// }

impl SourceFile {
    pub fn items(&self) -> Vec<Item> {
        Item::filter_from_parent(self)
    }

    pub fn items_nested(&self) -> Vec<Item> {
        self.0
            .children_recursive()
            .into_iter()
            .filter_map(Item::cast)
            .collect_vec()
    }
}

impl Block {
    pub fn items(&self) -> Vec<Item> {
        Item::filter_from_parent(self)
    }
}

impl Task {
    pub fn into_item(self) -> Item {
        Item::Task(self)
    }

    pub fn status(&self) -> Option<Status> {
        Status::find_from_parent(self)
    }

    pub fn meta(&self) -> Vec<Meta> {
        Meta::filter_from_parent(self)
    }

    pub fn memo(&self) -> Option<Memo> {
        Memo::find_from_parent(self)
    }

    pub fn text(&self) -> Option<Text> {
        Text::find_from_parent(self)
    }

    pub fn subitems(&self) -> Vec<Item> {
        let block = Block::find_from_parent(self);
        block.map(|b| b.items()).unwrap_or_default()
    }
}

impl Header {
    pub fn into_item(self) -> Item {
        Item::Header(self)
    }

    pub fn status(&self) -> Option<Status> {
        Status::find_from_parent(self)
    }

    pub fn meta(&self) -> Vec<Meta> {
        Meta::filter_from_parent(self)
    }

    pub fn memo(&self) -> Option<Memo> {
        Memo::find_from_parent(self)
    }

    pub fn subitems(&self) -> Vec<Item> {
        let block = Block::find_from_parent(self);
        block.map(|b| b.items()).unwrap_or_default()
    }
}

impl Status {
    pub fn kind(&self) -> StatusKind {
        match self.0.text().as_str() {
            "+" => StatusKind::Todo,
            "*" => StatusKind::Doing,
            "-" => StatusKind::Done,
            "=" => StatusKind::Cancel,
            "/" => StatusKind::Other,
            _ => unreachable!(),
        }
    }

    /// 未着手、進行中のいずれかであるかどうか。
    pub fn is_valid(&self) -> bool {
        matches!(
            self.kind(),
            StatusKind::Todo | StatusKind::Doing | StatusKind::Other
        )
    }
}

impl Priority {
    pub fn value(&self) -> String {
        self.syntax()
            .children()
            .map(|child| child.node())
            .find(|n| n.green().kind().as_str() == "priority_inner")
            .unwrap()
            .text()
    }
}

impl Keyval {
    pub fn key(&self) -> String {
        self.syntax()
            .children()
            .map(|child| child.node())
            .find(|n| n.green().kind().as_str() == "key")
            .unwrap()
            .text()
    }

    pub fn value(&self) -> String {
        self.syntax()
            .children()
            .map(|child| child.node())
            .find(|n| n.green().kind().as_str() == "value")
            .unwrap()
            .text()
    }
}

impl Date {
    pub fn start(&self) -> Option<NaiveDate> {
        self.syntax()
            .children()
            .find(|child| child.field() == Some("start"))
            .and_then(|child| NaiveDate::parse_from_str(&child.node().text(), "%Y-%m-%d").ok())
    }

    pub fn target(&self) -> Option<NaiveDate> {
        self.syntax()
            .children()
            .find(|child| child.field() == Some("target"))
            .and_then(|child| NaiveDate::parse_from_str(&child.node().text(), "%Y-%m-%d").ok())
    }

    pub fn deadline(&self) -> Option<NaiveDate> {
        self.syntax()
            .children()
            .find(|child| child.field() == Some("deadline"))
            .and_then(|child| NaiveDate::parse_from_str(&child.node().text(), "%Y-%m-%d").ok())
    }
}

impl Category {
    pub fn name(&self) -> String {
        self.syntax()
            .children()
            .find(|n| n.node().green().kind().as_str() == "category_name")
            .unwrap()
            .node()
            .text()
    }
}

impl Text {
    pub fn body(&self) -> String {
        self.0.text()
    }

    pub fn tags(&self) -> Vec<Tag> {
        Tag::filter_from_parent(self)
    }
}

impl Tag {
    pub fn name(&self) -> String {
        self.syntax().text()[1..].to_string()
    }
}

impl Memo {
    pub fn body(&self) -> String {
        self.syntax().text()[1..].to_string()
    }
}
