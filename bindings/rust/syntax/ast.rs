//! Type definition for syntactic node.
//!
//! See <https://github.com/rust-analyzer/rust-analyzer/blob/master/docs/dev/syntax.md>

use chrono::NaiveDate;
use itertools::Itertools;
use std::ops::Deref;

use crate::errors::TSTodomeError;

use super::{green::GreenNode, red::SyntaxNode};

fn find_from_parent<T: AstNode>(parent: &SyntaxNode) -> Option<T> {
    parent.children().find_map(|child| T::cast(child.node))
}

fn filter_from_parent<T: AstNode>(parent: &SyntaxNode) -> Vec<T> {
    parent
        .children()
        .filter_map(|child| T::cast(child.node))
        .collect()
}

pub trait AstNode: Sized {
    fn try_cast(syntax: SyntaxNode) -> Result<Self, TSTodomeError>;

    fn cast(syntax: SyntaxNode) -> Option<Self> {
        AstNode::try_cast(syntax).ok()
    }

    fn syntax(&self) -> &SyntaxNode;
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
    /// したがって `.next()` で「現在有効な」 status を取得できる。
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

    /// 自身にかかる dates を列挙する。
    /// 最も後に出たものから順番に出力される。
    pub fn scoped_dates(&self) -> Vec<Date> {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_date())
            .collect_vec()
    }

    /// 自身にかかる keyvals を列挙する。
    /// 最も後に出たものから順番に出力される。
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

    pub fn as_date(&self) -> Option<&Date> {
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

    pub fn try_into_date(self) -> Option<Date> {
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

impl SourceFile {
    pub fn items(&self) -> Vec<Item> {
        filter_from_parent(self)
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
        filter_from_parent(self)
    }
}

impl Task {
    pub fn into_item(self) -> Item {
        Item::Task(self)
    }

    pub fn status(&self) -> Option<Status> {
        find_from_parent(self)
    }

    pub fn meta(&self) -> Vec<Meta> {
        filter_from_parent(self)
    }

    pub fn memo(&self) -> Option<Memo> {
        find_from_parent(self)
    }

    pub fn text(&self) -> Option<Text> {
        find_from_parent(self)
    }

    pub fn subitems(&self) -> Vec<Item> {
        let block: Option<Block> = find_from_parent(self);
        block.map(|b| b.items()).unwrap_or_default()
    }
}

impl Header {
    pub fn into_item(self) -> Item {
        Item::Header(self)
    }

    pub fn status(&self) -> Option<Status> {
        find_from_parent(self)
    }

    pub fn meta(&self) -> Vec<Meta> {
        filter_from_parent(self)
    }

    pub fn memo(&self) -> Option<Memo> {
        find_from_parent(self)
    }

    pub fn subitems(&self) -> Vec<Item> {
        let block: Option<Block> = find_from_parent(self);
        block.map(|b| b.items()).unwrap_or_default()
    }
}

impl Status {
    pub fn kind(&self) -> StatusKind {
        match self.0.text().as_ref() {
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
            .into_owned()
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
            .into_owned()
    }

    pub fn value(&self) -> String {
        self.syntax()
            .children()
            .map(|child| child.node())
            .find(|n| n.green().kind().as_str() == "value")
            .unwrap()
            .text()
            .into_owned()
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
            .into_owned()
    }
}

impl Text {
    pub fn body(&self) -> String {
        self.0.text().into_owned()
    }

    pub fn tags(&self) -> Vec<Tag> {
        filter_from_parent(self)
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

#[cfg(test)]
mod tests {
    use super::*;
    use indoc::indoc;

    #[test]
    fn test_normal_todome() {
        let text = indoc! { r#"
                - テストタスク
                	(2022-12-14~2022-12-28 2023-01-10!) テストサブタスク
                [test category]
                	(A) 優先度付き
            "#
        };

        let source_file = SourceFile::parse(text.to_owned()).expect("parse failed.");
        let items = source_file.items();

        {
            let item0 = items.get(0).expect("expects item.");
            assert_eq!(
                item0.syntax().text(),
                indoc! { "
                    - テストタスク
                    	(2022-12-14~2022-12-28 2023-01-10!) テストサブタスク"
                }
            );

            let task = item0.as_task().expect("expects task.");
            let status = task.status().expect("expects status.");
            let text = task.text().expect("expects text.");
            let subitems = task.subitems();
            assert_eq!(status.kind(), StatusKind::Done);
            assert_eq!(text.body(), "テストタスク");
            assert_eq!(subitems.len(), 1);

            {
                let item0 = subitems.get(0).expect("expects item.");
                assert_eq!(
                    item0.syntax().text(),
                    "(2022-12-14~2022-12-28 2023-01-10!) テストサブタスク"
                );

                let task = item0.as_task().expect("expects task.");
                let meta = task.meta();
                let date = meta
                    .get(0)
                    .expect("expect meta.")
                    .as_date()
                    .expect("expect date.");
                assert_eq!(date.start(), Some(NaiveDate::from_ymd(2022, 12, 14)));
            }
        }

        let item1 = items.get(1).expect("expects item.");
        assert_eq!(
            item1.syntax().text(),
            indoc! {"
                [test category]
                	(A) 優先度付き"
            }
        );
    }
}
