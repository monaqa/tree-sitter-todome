use std::{fmt::Display, path::PathBuf};

use anyhow::*;
use itertools::Itertools;
use tree_sitter::{Parser, TreeCursor};

use structopt::StructOpt;
use tree_sitter_todome::syntax::ast::{AstNode, SourceFile};

#[derive(Debug, Clone, StructOpt)]
struct Opts {
    input: PathBuf,
}

fn main() -> Result<()> {
    let opts = Opts::from_args();

    let language_todome = tree_sitter_todome::language();
    let mut parser = Parser::new();
    parser.set_language(language_todome)?;

    let text = std::fs::read_to_string(opts.input).context(anyhow!("The input file not found!"))?;
    let source_file = SourceFile::parse(text)?;
    println!("{}", source_file.syntax().display_recursive());

    Ok(())
}
