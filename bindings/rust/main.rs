use std::{fmt::Display, path::PathBuf, slice::SliceIndex};

use anyhow::*;
use itertools::Itertools;
use tree_sitter::{Parser, TreeCursor};

use structopt::StructOpt;
use tree_sitter_todome::syntax::{
    ast::{AstNode, SourceFile},
    green::GreenNode,
};

#[derive(Debug, Clone, StructOpt)]
struct Opts {
    input: PathBuf,
    #[structopt(short = "a", long)]
    display_annonymous: bool,
    #[structopt(short = "e", long)]
    display_extra: bool,
}

fn main() -> Result<()> {
    let opts = Opts::from_args();

    let language_todome = tree_sitter_todome::language();
    let mut parser = Parser::new();
    parser.set_language(language_todome)?;

    let text = std::fs::read_to_string(opts.input).context(anyhow!("The input file not found!"))?;
    // let tree = parser
    //     .parse(&text, None)
    //     .with_context(|| anyhow!("parse failed!"))?;
    // let node = tree.root_node();
    // let mut cursor = node.walk();

    // let cst = Cst::from_cursor(&mut cursor, &text);

    // println!(
    //     "{}",
    //     cst.display(opts.display_annonymous, opts.display_extra)
    // );

    // let node = GreenNode::new_root(text)?;
    // println!("{:#?}", node);
    //
    // let a = node
    //     .as_node()
    //     .unwrap()
    //     .children()
    //     .get(0)
    //     .unwrap()
    //     .as_node()
    //     .unwrap()
    //     .children()
    //     .get(2)
    //     .unwrap();
    // println!("{}", a.text());
    let source_file = SourceFile::parse(text)?;
    let green_node = source_file.syntax().green();
    // dbg!(&source_file);
    let items = source_file.items().collect_vec();
    dbg!(&items);

    Ok(())
}

#[derive(Debug, Clone)]
struct Cst {
    kind: String,
    substr: String,
    range: CstRange,
    children: Vec<Cst>,
    field_name: Option<String>,
    named: bool,
    extra: bool,
    error: bool,
    missing: bool,
}

#[derive(Debug, Clone)]
struct CstRange {
    start: (usize, usize),
    end: (usize, usize),
}

impl Cst {
    /// TODO: もっと効率良い方法がありそう
    fn from_cursor(cursor: &mut TreeCursor, text: &str) -> Cst {
        let node = cursor.node();
        let field_name = cursor.field_name().map(|s| s.to_owned());
        let kind = node.kind().to_owned();
        let range = {
            let start = node.start_position();
            let end = node.end_position();
            CstRange {
                start: (start.row, start.column),
                end: (end.row, end.column),
            }
        };
        let substr = {
            let start = node.start_byte();
            let end = node.end_byte();
            &text[start..end]
        }
        .to_owned();
        let children = node
            .children(cursor)
            .into_iter()
            .map(|child| {
                let mut cursor = child.walk();
                Cst::from_cursor(&mut cursor, text)
            })
            .collect();
        Cst {
            kind,
            range,
            substr,
            children,
            field_name,
            named: node.is_named(),
            extra: node.is_extra(),
            error: node.is_error(),
            missing: node.is_missing(),
        }
    }

    fn stringify(&self, display_annonymous: bool, display_extra: bool, indent: usize) -> String {
        if !display_annonymous && !self.named {
            return "".to_owned();
        }
        if !display_extra && self.extra {
            return "".to_owned();
        }
        let mut s = String::new();
        let indent_str = " ".repeat(indent * 2);
        s.push_str(&indent_str);
        if let Some(field_name) = &self.field_name {
            s.push_str(&format!("{}:", field_name,));
        }
        if self.error {
            s.push_str(&format!("[!{}!]", self.kind,));
        } else if self.missing {
            s.push_str(&format!("[?{}?]", self.kind,));
        } else if !self.named {
            s.push_str(&format!(r#"('{}')"#, self.kind,));
        } else if self.extra {
            s.push_str(&format!("(%{}%)", self.kind,));
        } else {
            s.push_str(&format!("[{}]", self.kind,));
        }
        if !self.substr.contains('\n') && self.substr.len() < 50 {
            s.push_str(&format!(r#" "{}""#, self.substr));
        } else {
            s.push_str(&format!(
                " ({}:{} .. {}:{})",
                self.range.start.0 + 1,
                self.range.start.1 + 1,
                self.range.end.0 + 1,
                self.range.end.1 + 1,
            ));
        }
        s.push('\n');
        for child in &self.children {
            let text = child.stringify(display_annonymous, display_extra, indent + 1);
            s.push_str(&text);
        }
        s
    }
}

struct CstDisplay<'a> {
    cst: &'a Cst,
    display_annonymous: bool,
    display_extra: bool,
}

impl Cst {
    fn display(&self, display_annonymous: bool, display_extra: bool) -> CstDisplay<'_> {
        CstDisplay {
            cst: self,
            display_annonymous,
            display_extra,
        }
    }
}
impl<'a> Display for CstDisplay<'a> {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(
            f,
            "{}",
            self.cst
                .stringify(self.display_annonymous, self.display_extra, 0)
        )
    }
}
