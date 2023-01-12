use thiserror::Error;

use crate::syntax::red::SyntaxNode;

#[derive(Debug, Clone, Error)]
pub enum TSTodomeError {
    #[error("parser does not respond any results")]
    ParserReturnedNone,
    #[error("casting to '{node_name}' failed")]
    CastFailed {
        node_name: String,
        syntax_node: SyntaxNode,
    },
    #[error("parser internal error: {message}")]
    InternalError { message: String },
}

impl TSTodomeError {
    pub fn parse_returned_none() -> Self {
        TSTodomeError::ParserReturnedNone
    }

    pub fn cast_failed(node_name: &str, syntax_node: SyntaxNode) -> Self {
        TSTodomeError::CastFailed {
            node_name: node_name.to_owned(),
            syntax_node,
        }
    }

    pub fn internal_error(message: &str) -> Self {
        TSTodomeError::InternalError {
            message: message.to_owned(),
        }
    }
}
