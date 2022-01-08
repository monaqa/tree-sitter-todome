use std::path::PathBuf;

use anyhow::*;

use structopt::StructOpt;
use tree_sitter_todome::syntax::ast::{AstNode, SourceFile};

#[derive(Debug, Clone, StructOpt)]
struct Opts {
    input: PathBuf,
}

fn main() -> Result<()> {
    let opts = Opts::from_args();

    let text = std::fs::read_to_string(opts.input).context(anyhow!("The input file not found!"))?;
    let source_file = SourceFile::parse(text)?;
    println!("{}", source_file.syntax().display_recursive());

    Ok(())
}
