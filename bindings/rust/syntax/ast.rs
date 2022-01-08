use anyhow::*;
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
register_ast_node!(Meta, "meta");
register_ast_node!(Status, "status");
register_ast_node!(Priority, "priority");
register_ast_node!(Due, "due");
register_ast_node!(Keyval, "keyval");
register_ast_node!(Category, "categtory");
register_ast_node!(Text, "text");
register_ast_node!(Tag, "tag");

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub enum Item {
    Task(Task),
    Header(Header),
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
        }
    }
}

impl SourceFile {
    pub fn items(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax.children().filter_map(Item::cast)
    }
}

impl Block {
    pub fn items(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax.children().filter_map(Item::cast)
    }
}

impl Task {
    pub fn meta(&self) -> Option<Meta> {
        self.syntax.children().find_map(Meta::cast)
    }

    pub fn text(&self) -> Option<Text> {
        self.syntax.children().find_map(Text::cast)
    }

    pub fn subitems(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax.children().filter_map(Item::cast)
    }
}

impl Header {
    pub fn meta(&self) -> Option<Meta> {
        self.syntax.children().find_map(Meta::cast)
    }

    pub fn subitems(&self) -> impl Iterator<Item = Item> + '_ {
        self.syntax.children().filter_map(Item::cast)
    }
}

impl Meta {
    pub fn priorities(&self) -> impl Iterator<Item = Priority> + '_ {
        self.syntax.children().filter_map(Priority::cast)
    }

    pub fn dues(&self) -> impl Iterator<Item = Due> + '_ {
        self.syntax.children().filter_map(Due::cast)
    }

    pub fn keyvals(&self) -> impl Iterator<Item = Keyval> + '_ {
        self.syntax.children().filter_map(Keyval::cast)
    }

    pub fn categories(&self) -> impl Iterator<Item = Category> + '_ {
        self.syntax.children().filter_map(Category::cast)
    }
}

impl Text {
    pub fn tags(&self) -> impl Iterator<Item = Tag> + '_ {
        self.syntax.children().filter_map(Tag::cast)
    }
}
