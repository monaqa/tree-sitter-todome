#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 17

enum {
  sym_status_todo = 1,
  sym_status_doing = 2,
  sym_status_done = 3,
  sym_status_cancel = 4,
  anon_sym_LPAREN = 5,
  aux_sym_priority_token1 = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_date_value = 10,
  anon_sym_COLON = 11,
  sym_key = 12,
  sym_value = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_category_name = 16,
  sym_text = 17,
  sym_comment = 18,
  sym__newline = 19,
  sym__indent = 20,
  sym__dedent = 21,
  sym_source_file = 22,
  sym_task = 23,
  sym_header = 24,
  sym_block = 25,
  sym__task_line = 26,
  sym__header_line = 27,
  sym__meta = 28,
  sym_status = 29,
  sym_priority = 30,
  sym_due = 31,
  sym_keyval = 32,
  sym_category = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym__task_line_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_status_todo] = "status_todo",
  [sym_status_doing] = "status_doing",
  [sym_status_done] = "status_done",
  [sym_status_cancel] = "status_cancel",
  [anon_sym_LPAREN] = "(",
  [aux_sym_priority_token1] = "priority_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_date_value] = "date_value",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_value] = "value",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_category_name] = "category_name",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_task] = "task",
  [sym_header] = "header",
  [sym_block] = "block",
  [sym__task_line] = "_task_line",
  [sym__header_line] = "_header_line",
  [sym__meta] = "_meta",
  [sym_status] = "status",
  [sym_priority] = "priority",
  [sym_due] = "due",
  [sym_keyval] = "keyval",
  [sym_category] = "category",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__task_line_repeat1] = "_task_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_status_todo] = sym_status_todo,
  [sym_status_doing] = sym_status_doing,
  [sym_status_done] = sym_status_done,
  [sym_status_cancel] = sym_status_cancel,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_priority_token1] = aux_sym_priority_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_date_value] = sym_date_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_category_name] = sym_category_name,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_task] = sym_task,
  [sym_header] = sym_header,
  [sym_block] = sym_block,
  [sym__task_line] = sym__task_line,
  [sym__header_line] = sym__header_line,
  [sym__meta] = sym__meta,
  [sym_status] = sym_status,
  [sym_priority] = sym_priority,
  [sym_due] = sym_due,
  [sym_keyval] = sym_keyval,
  [sym_category] = sym_category,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__task_line_repeat1] = aux_sym__task_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_status_todo] = {
    .visible = true,
    .named = true,
  },
  [sym_status_doing] = {
    .visible = true,
    .named = true,
  },
  [sym_status_done] = {
    .visible = true,
    .named = true,
  },
  [sym_status_cancel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_priority_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_date_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_category_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__task_line] = {
    .visible = false,
    .named = true,
  },
  [sym__header_line] = {
    .visible = false,
    .named = true,
  },
  [sym__meta] = {
    .visible = false,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_due] = {
    .visible = true,
    .named = true,
  },
  [sym_keyval] = {
    .visible = true,
    .named = true,
  },
  [sym_category] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__task_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_category = 1,
  field_due = 2,
  field_key = 3,
  field_keyval = 4,
  field_priority = 5,
  field_status = 6,
  field_text = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_category] = "category",
  [field_due] = "due",
  [field_key] = "key",
  [field_keyval] = "keyval",
  [field_priority] = "priority",
  [field_status] = "status",
  [field_text] = "text",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 4},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 6},
  [9] = {.index = 16, .length = 5},
  [10] = {.index = 21, .length = 2},
  [11] = {.index = 23, .length = 5},
  [12] = {.index = 28, .length = 5},
  [13] = {.index = 33, .length = 8},
  [14] = {.index = 41, .length = 1},
  [15] = {.index = 42, .length = 6},
  [16] = {.index = 48, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 0},
  [1] =
    {field_category, 0, .inherited = true},
    {field_due, 0, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_priority, 0, .inherited = true},
  [5] =
    {field_status, 0},
  [6] =
    {field_priority, 0},
  [7] =
    {field_due, 0},
  [8] =
    {field_keyval, 0},
  [9] =
    {field_category, 0},
  [10] =
    {field_category, 0, .inherited = true},
    {field_due, 0, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_priority, 0, .inherited = true},
    {field_status, 0, .inherited = true},
    {field_text, 0, .inherited = true},
  [16] =
    {field_category, 0, .inherited = true},
    {field_due, 0, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_priority, 0, .inherited = true},
    {field_status, 0, .inherited = true},
  [21] =
    {field_status, 0},
    {field_text, 1},
  [23] =
    {field_category, 1, .inherited = true},
    {field_due, 1, .inherited = true},
    {field_keyval, 1, .inherited = true},
    {field_priority, 1, .inherited = true},
    {field_status, 0},
  [28] =
    {field_category, 0, .inherited = true},
    {field_due, 0, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_priority, 0, .inherited = true},
    {field_text, 1},
  [33] =
    {field_category, 0, .inherited = true},
    {field_category, 1, .inherited = true},
    {field_due, 0, .inherited = true},
    {field_due, 1, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_keyval, 1, .inherited = true},
    {field_priority, 0, .inherited = true},
    {field_priority, 1, .inherited = true},
  [41] =
    {field_value, 1},
  [42] =
    {field_category, 1, .inherited = true},
    {field_due, 1, .inherited = true},
    {field_keyval, 1, .inherited = true},
    {field_priority, 1, .inherited = true},
    {field_status, 0},
    {field_text, 2},
  [48] =
    {field_key, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_value_character_set_1(int32_t c) {
  return (c < '('
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == '#'))
    : (c <= ')' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '*' || '/' < lookahead)) ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(51);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_status_todo);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_status_todo);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_status_doing);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_status_doing);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_status_done);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_status_done);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_status_cancel);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_status_cancel);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_date_value);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_value);
      if (!sym_value_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if ((',' <= lookahead && lookahead <= '.')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (('*' <= lookahead && lookahead <= '/')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20, .external_lex_state = 2},
  [3] = {.lex_state = 20, .external_lex_state = 2},
  [4] = {.lex_state = 20, .external_lex_state = 2},
  [5] = {.lex_state = 20, .external_lex_state = 2},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20, .external_lex_state = 2},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20, .external_lex_state = 2},
  [10] = {.lex_state = 20, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 3},
  [12] = {.lex_state = 5, .external_lex_state = 3},
  [13] = {.lex_state = 5, .external_lex_state = 3},
  [14] = {.lex_state = 5, .external_lex_state = 3},
  [15] = {.lex_state = 20, .external_lex_state = 2},
  [16] = {.lex_state = 20, .external_lex_state = 2},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20, .external_lex_state = 2},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20, .external_lex_state = 2},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20, .external_lex_state = 2},
  [26] = {.lex_state = 20, .external_lex_state = 2},
  [27] = {.lex_state = 5, .external_lex_state = 3},
  [28] = {.lex_state = 5, .external_lex_state = 3},
  [29] = {.lex_state = 5, .external_lex_state = 3},
  [30] = {.lex_state = 5, .external_lex_state = 3},
  [31] = {.lex_state = 5, .external_lex_state = 3},
  [32] = {.lex_state = 5, .external_lex_state = 3},
  [33] = {.lex_state = 5, .external_lex_state = 3},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 5, .external_lex_state = 3},
  [36] = {.lex_state = 5, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 8},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_status_todo] = ACTIONS(1),
    [sym_status_doing] = ACTIONS(1),
    [sym_status_done] = ACTIONS(1),
    [sym_status_cancel] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_priority_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_date_value] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym__task_line] = STATE(41),
    [sym__header_line] = STATE(37),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym__task_line_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
  [2] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym_block] = STATE(15),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(44),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__task_line_repeat1] = STATE(14),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(19),
  },
  [3] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym_block] = STATE(26),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(44),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__task_line_repeat1] = STATE(14),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(19),
  },
  [4] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym_block] = STATE(17),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(44),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym__task_line_repeat1] = STATE(14),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(21),
  },
  [5] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym_block] = STATE(19),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(44),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym__task_line_repeat1] = STATE(14),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(21),
  },
  [6] = {
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(41),
    [sym__header_line] = STATE(37),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym__task_line_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
  [7] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(44),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__task_line_repeat1] = STATE(14),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(25),
  },
  [8] = {
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(41),
    [sym__header_line] = STATE(37),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym__task_line_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_status_todo] = ACTIONS(29),
    [sym_status_doing] = ACTIONS(29),
    [sym_status_done] = ACTIONS(29),
    [sym_status_cancel] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_text] = ACTIONS(41),
    [sym_comment] = ACTIONS(17),
  },
  [9] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(44),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__task_line_repeat1] = STATE(14),
    [sym_status_todo] = ACTIONS(29),
    [sym_status_doing] = ACTIONS(29),
    [sym_status_done] = ACTIONS(29),
    [sym_status_cancel] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_text] = ACTIONS(41),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(27),
  },
  [10] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(44),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(13),
    [sym_priority] = STATE(33),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__task_line_repeat1] = STATE(14),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(44),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_text,
    STATE(12), 1,
      aux_sym__task_line_repeat1,
    STATE(27), 1,
      sym_due,
    STATE(28), 1,
      sym_category,
    STATE(30), 1,
      sym__meta,
    STATE(33), 1,
      sym_priority,
    STATE(35), 1,
      sym_keyval,
    ACTIONS(48), 2,
      sym__newline,
      sym__indent,
  [38] = 12,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      sym_text,
    STATE(12), 1,
      aux_sym__task_line_repeat1,
    STATE(27), 1,
      sym_due,
    STATE(28), 1,
      sym_category,
    STATE(30), 1,
      sym__meta,
    STATE(33), 1,
      sym_priority,
    STATE(35), 1,
      sym_keyval,
    ACTIONS(61), 2,
      sym__newline,
      sym__indent,
  [76] = 12,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_text,
    STATE(11), 1,
      aux_sym__task_line_repeat1,
    STATE(27), 1,
      sym_due,
    STATE(28), 1,
      sym_category,
    STATE(30), 1,
      sym__meta,
    STATE(33), 1,
      sym_priority,
    STATE(35), 1,
      sym_keyval,
    ACTIONS(65), 2,
      sym__newline,
      sym__indent,
  [114] = 12,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_text,
    STATE(12), 1,
      aux_sym__task_line_repeat1,
    STATE(27), 1,
      sym_due,
    STATE(28), 1,
      sym_category,
    STATE(30), 1,
      sym__meta,
    STATE(33), 1,
      sym_priority,
    STATE(35), 1,
      sym_keyval,
    ACTIONS(69), 2,
      sym__newline,
      sym__indent,
  [152] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__dedent,
    ACTIONS(71), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [169] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__dedent,
    ACTIONS(75), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [186] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [203] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [220] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [237] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [254] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym__dedent,
    ACTIONS(87), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [271] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [288] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym__dedent,
    ACTIONS(91), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [305] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [322] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym__dedent,
    ACTIONS(85), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [339] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__dedent,
    ACTIONS(81), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [356] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__newline,
      sym__indent,
    ACTIONS(95), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [370] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym__newline,
      sym__indent,
    ACTIONS(99), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [384] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym__newline,
      sym__indent,
    ACTIONS(103), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [398] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(109), 2,
      sym__newline,
      sym__indent,
    ACTIONS(107), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [412] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(113), 2,
      sym__newline,
      sym__indent,
    ACTIONS(111), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [426] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(117), 2,
      sym__newline,
      sym__indent,
    ACTIONS(115), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [440] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(121), 2,
      sym__newline,
      sym__indent,
    ACTIONS(119), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [454] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym__newline,
      sym__indent,
    ACTIONS(123), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [468] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym__newline,
      sym__indent,
    ACTIONS(127), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [482] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym__newline,
      sym__indent,
    ACTIONS(131), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym__newline,
    ACTIONS(137), 1,
      sym__indent,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      sym__newline,
      sym__indent,
  [514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      sym__newline,
      sym__indent,
  [522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      sym__newline,
      sym__indent,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym__newline,
    ACTIONS(147), 1,
      sym__indent,
  [540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      sym__newline,
      sym__indent,
  [548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__newline,
    ACTIONS(153), 1,
      sym__indent,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__newline,
    ACTIONS(157), 1,
      sym__indent,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_date_value,
    ACTIONS(161), 1,
      sym_key,
  [578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
  [599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COLON,
  [606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [613] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_value,
  [620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [627] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_category_name,
  [634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_priority_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 38,
  [SMALL_STATE(13)] = 76,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 169,
  [SMALL_STATE(17)] = 186,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 220,
  [SMALL_STATE(20)] = 237,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 288,
  [SMALL_STATE(24)] = 305,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 370,
  [SMALL_STATE(29)] = 384,
  [SMALL_STATE(30)] = 398,
  [SMALL_STATE(31)] = 412,
  [SMALL_STATE(32)] = 426,
  [SMALL_STATE(33)] = 440,
  [SMALL_STATE(34)] = 454,
  [SMALL_STATE(35)] = 468,
  [SMALL_STATE(36)] = 482,
  [SMALL_STATE(37)] = 496,
  [SMALL_STATE(38)] = 506,
  [SMALL_STATE(39)] = 514,
  [SMALL_STATE(40)] = 522,
  [SMALL_STATE(41)] = 530,
  [SMALL_STATE(42)] = 540,
  [SMALL_STATE(43)] = 548,
  [SMALL_STATE(44)] = 558,
  [SMALL_STATE(45)] = 568,
  [SMALL_STATE(46)] = 578,
  [SMALL_STATE(47)] = 585,
  [SMALL_STATE(48)] = 592,
  [SMALL_STATE(49)] = 599,
  [SMALL_STATE(50)] = 606,
  [SMALL_STATE(51)] = 613,
  [SMALL_STATE(52)] = 620,
  [SMALL_STATE(53)] = 627,
  [SMALL_STATE(54)] = 634,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 11),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 2, .production_id = 13), SHIFT_REPEAT(54),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 2, .production_id = 13), SHIFT_REPEAT(45),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 2, .production_id = 13), SHIFT_REPEAT(53),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 2, .production_id = 13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2, .production_id = 13),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 9),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 8),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 8),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 9),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 1, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 1, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_due, 3, .production_id = 14),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_due, 3, .production_id = 14),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 16),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 16),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 15),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 10),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_todome_external_scanner_create(void);
void tree_sitter_todome_external_scanner_destroy(void *);
bool tree_sitter_todome_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_todome_external_scanner_serialize(void *, char *);
void tree_sitter_todome_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_todome(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_todome_external_scanner_create,
      tree_sitter_todome_external_scanner_destroy,
      tree_sitter_todome_external_scanner_scan,
      tree_sitter_todome_external_scanner_serialize,
      tree_sitter_todome_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
