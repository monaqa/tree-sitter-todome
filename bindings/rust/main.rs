use std::path::PathBuf;

use anyhow::Context;
use structopt::StructOpt;
use tree_sitter_todome::syntax::ast::{AstNode, SourceFile};

#[derive(Debug, Clone, StructOpt)]
struct Opts {
    input: PathBuf,
}

fn main() -> anyhow::Result<()> {
    let opts = Opts::from_args();

    let text = std::fs::read_to_string(opts.input).context("failed to load input file.")?;
    let source_file = SourceFile::parse(text).context("parse failed.")?;
    println!("{}", source_file.syntax().display_recursive());

    Ok(())
}
