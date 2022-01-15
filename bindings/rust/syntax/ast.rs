//! Type definition for syntactic node.
//!
//! See <https://github.com/rust-analyzer/rust-analyzer/blob/master/docs/dev/syntax.md>

use anyhow::*;
use chrono::NaiveDate;
use itertools::Itertools;
use std::sync::Arc;

use super::{green::GreenNode, red::SyntaxNode};

pub trait AstNode {
    fn cast(syntax: SyntaxNode) -> Option<Self>
    where
        Self: Sized;

    fn syntax(&self) -> &SyntaxNode;
}

macro_rules! register_ast_node {
    ($struct_name:ident, $syntax_name:literal) => {
        /// pub struct for $syntax_name
        #[derive(Debug, Clone, PartialEq, Eq, Hash)]
        pub struct $struct_name {
            syntax: SyntaxNode,
        }

        impl AstNode for $struct_name {
            fn cast(syntax: SyntaxNode) -> Option<Self> {
                match syntax.green().kind().as_str() {
                    $syntax_name => Some($struct_name { syntax }),
                    _ => None,
                }
            }

            fn syntax(&self) -> &SyntaxNode {
                &self.syntax
            }
        }
    };
}

register_ast_node!(SourceFile, "source_file");
register_ast_node!(Task, "task");
register_ast_node!(Header, "header");
register_ast_node!(Block, "block");
register_ast_node!(Status, "status");
register_ast_node!(Priority, "priority");
register_ast_node!(Due, "due");
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

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub enum Item {
    Task(Task),
    Header(Header),
    Memo(Memo),
}

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub enum Meta {
    Priority(Priority),
    Due(Due),
    Keyval(Keyval),
    Category(Category),
}

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
            Item::Task(t) => t.meta().collect_vec(),
            Item::Header(h) => h.meta().collect_vec(),
            Item::Memo(_) => vec![],
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
    pub fn scoped_statuses(&self) -> impl Iterator<Item = Status> + '_ {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .filter_map(|item| item.status())
    }

    /// 自身にかかる priorities を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって `.next()` で「現在有効な」 priority を取得できる。
    pub fn scoped_proiorities(&self) -> impl Iterator<Item = Priority> + '_ {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_priority())
    }

    /// 自身にかかる dues を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって `.next()` で「現在有効な」 priority を取得できる。
    pub fn scoped_dues(&self) -> impl Iterator<Item = Due> + '_ {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_due())
    }

    /// 自身にかかる keyvals を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって `.next()` で「現在有効な」 priority を取得できる。
    pub fn scoped_keyvals(&self) -> impl Iterator<Item = Keyval> + '_ {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_keyval())
    }

    /// 自身にかかる categories を列挙する。
    /// 最も後に出たものから順番に出力される。
    /// したがって全ての category を正しい順番で得るには
    /// `.reverse()` などで逆順にする必要がある。
    pub fn scoped_categories(&self) -> impl Iterator<Item = Category> + '_ {
        Some(self.clone())
            .into_iter()
            .chain(self.ancestors())
            .flat_map(|item| item.meta())
            .flat_map(|meta| meta.try_into_category())
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

    pub fn as_due(&self) -> Option<&Due> {
        if let Self::Due(v) = self {
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

    pub fn try_into_due(self) -> Option<Due> {
        if let Self::Due(v) = self {
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
        SourceFile { syntax }
    }

    pub fn parse(text: String) -> Result<SourceFile> {
        let green_node = GreenNode::new_root(text)?;
        let syntax_node = SyntaxNode::new_root(Arc::new(green_node));
        Ok(SourceFile::new_root(syntax_node))
    }
}

impl AstNode for Item {
    fn cast(syntax: SyntaxNode) -> Option<Self> {
        match syntax.green().kind().as_str() {
            "task" => Some(Item::Task(Task::cast(syntax).unwrap())),
            "header" => Some(Item::Header(Header::cast(syntax).unwrap())),
            _ => None,
        }
    }

    fn syntax(&self) -> &SyntaxNode {
        match self {
            Item::Task(Task { syntax }) => syntax,
            Item::Header(Header { syntax }) => syntax,
            Item::Memo(Memo { syntax }) => syntax,
        }
    }
}

impl AstNode for Meta {
    fn cast(syntax: SyntaxNode) -> Option<Self> {
        match syntax.green().kind().as_str() {
            "priority" => Some(Meta::Priority(Priority::cast(syntax).unwrap())),
            "due" => Some(Meta::Due(Due::cast(syntax).unwrap())),
            "keyval" => Some(Meta::Keyval(Keyval::cast(syntax).unwrap())),
            "category" => Some(Meta::Category(Category::cast(syntax).unwrap())),
            _ => None,
        }
    }

    fn syntax(&self) -> &SyntaxNode {
        match self {
            Meta::Priority(Priority { syntax }) => syntax,
            Meta::Due(Due { syntax }) => syntax,
            Meta::Keyval(Keyval { syntax }) => syntax,
            Meta::Category(Category { syntax }) => syntax,
        }
    }
}

impl SourceFile {
    pub fn items(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax.children().filter_map(Item::cast)
    }

    pub fn items_nested(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax
            .children_recursive()
            .into_iter()
            .filter_map(Item::cast)
    }
}

impl Block {
    pub fn items(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax.children().filter_map(Item::cast)
    }
}

impl Task {
    pub fn into_item(self) -> Item {
        Item::Task(self)
    }

    pub fn status(&self) -> Option<Status> {
        self.syntax.children().find_map(Status::cast)
    }

    pub fn meta(&self) -> impl Iterator<Item = Meta> + '_ {
        self.syntax.children().filter_map(Meta::cast)
    }

    // pub fn meta_items(&self) -> impl Iterator<Item = Meta> + '_ {
    //     // self.meta()
    //     //     .map(|meta| meta.syntax.children().filter_map(MetaItem::cast))
    //     //     .into_iter()
    //     //     .flatten()
    //     self.meta()
    //         .into_iter()
    //         .flat_map(|meta| meta.syntax.children().filter_map(Meta::cast))
    // }

    pub fn text(&self) -> Option<Text> {
        self.syntax.children().find_map(Text::cast)
    }

    pub fn subitems(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax.children().filter_map(Item::cast)
    }
}

impl Header {
    pub fn into_item(self) -> Item {
        Item::Header(self)
    }

    pub fn status(&self) -> Option<Status> {
        self.syntax.children().find_map(Status::cast)
    }

    pub fn meta(&self) -> impl Iterator<Item = Meta> + '_ {
        self.syntax.children().filter_map(Meta::cast)
    }

    pub fn subitems(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax.children().filter_map(Item::cast)
    }
}

impl Status {
    pub fn kind(&self) -> StatusKind {
        match self.syntax().text().as_str() {
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

impl Due {
    pub fn try_as_date(&self) -> Option<NaiveDate> {
        let date_str = self
            .syntax()
            .children()
            .find(|n| n.green().kind().as_str() == "date_value")?
            .text();
        NaiveDate::parse_from_str(&date_str, "%Y-%m-%d").ok()
    }
}

impl Category {
    pub fn name(&self) -> String {
        self.syntax()
            .children()
            .find(|n| n.green().kind().as_str() == "category_name")
            .unwrap()
            .text()
    }
}

impl Text {
    pub fn tags(&self) -> impl Iterator<Item = Tag> + '_ {
        self.syntax.children().filter_map(Tag::cast)
    }
}

impl Tag {
    pub fn name(&self) -> String {
        self.syntax().text()[1..].to_string()
    }
}
