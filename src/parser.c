#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_LBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  sym_status_todo = 8,
  sym_status_doing = 9,
  sym_status_done = 10,
  sym_status_cancel = 11,
  sym_status_other = 12,
  sym_tag = 13,
  sym_date_value = 14,
  sym_key = 15,
  sym_value = 16,
  sym_priority_inner = 17,
  sym_category_name = 18,
  sym_comment = 19,
  sym_whitespace = 20,
  aux_sym__text_start_token1 = 21,
  aux_sym__text_subsequent_token1 = 22,
  sym__newline = 23,
  sym__indent = 24,
  sym__dedent = 25,
  sym_source_file = 26,
  sym_task = 27,
  sym_header = 28,
  sym_block = 29,
  sym__task_line = 30,
  sym__header_line = 31,
  sym_meta = 32,
  sym__meta = 33,
  sym_status = 34,
  sym_priority = 35,
  sym_due = 36,
  sym_keyval = 37,
  sym_category = 38,
  sym_text = 39,
  sym__text_start = 40,
  sym__text_subsequent = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_meta_repeat1 = 43,
  aux_sym_text_repeat1 = 44,
  aux_sym_text_repeat2 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_status_todo] = "status_todo",
  [sym_status_doing] = "status_doing",
  [sym_status_done] = "status_done",
  [sym_status_cancel] = "status_cancel",
  [sym_status_other] = "status_other",
  [sym_tag] = "tag",
  [sym_date_value] = "date_value",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_priority_inner] = "priority_inner",
  [sym_category_name] = "category_name",
  [sym_comment] = "comment",
  [sym_whitespace] = "whitespace",
  [aux_sym__text_start_token1] = "subtext",
  [aux_sym__text_subsequent_token1] = "subtext",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_task] = "task",
  [sym_header] = "header",
  [sym_block] = "block",
  [sym__task_line] = "_task_line",
  [sym__header_line] = "_header_line",
  [sym_meta] = "meta",
  [sym__meta] = "_meta",
  [sym_status] = "status",
  [sym_priority] = "priority",
  [sym_due] = "due",
  [sym_keyval] = "keyval",
  [sym_category] = "category",
  [sym_text] = "text",
  [sym__text_start] = "_text_start",
  [sym__text_subsequent] = "_text_subsequent",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_text_repeat2] = "text_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_status_todo] = sym_status_todo,
  [sym_status_doing] = sym_status_doing,
  [sym_status_done] = sym_status_done,
  [sym_status_cancel] = sym_status_cancel,
  [sym_status_other] = sym_status_other,
  [sym_tag] = sym_tag,
  [sym_date_value] = sym_date_value,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_priority_inner] = sym_priority_inner,
  [sym_category_name] = sym_category_name,
  [sym_comment] = sym_comment,
  [sym_whitespace] = sym_whitespace,
  [aux_sym__text_start_token1] = aux_sym__text_start_token1,
  [aux_sym__text_subsequent_token1] = aux_sym__text_start_token1,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_task] = sym_task,
  [sym_header] = sym_header,
  [sym_block] = sym_block,
  [sym__task_line] = sym__task_line,
  [sym__header_line] = sym__header_line,
  [sym_meta] = sym_meta,
  [sym__meta] = sym__meta,
  [sym_status] = sym_status,
  [sym_priority] = sym_priority,
  [sym_due] = sym_due,
  [sym_keyval] = sym_keyval,
  [sym_category] = sym_category,
  [sym_text] = sym_text,
  [sym__text_start] = sym__text_start,
  [sym__text_subsequent] = sym__text_subsequent,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_text_repeat2] = aux_sym_text_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_status_other] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_date_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_priority_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_category_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text_start_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_subsequent_token1] = {
    .visible = true,
    .named = false,
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
  [sym_meta] = {
    .visible = true,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text_start] = {
    .visible = false,
    .named = true,
  },
  [sym__text_subsequent] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_category = 1,
  field_children = 2,
  field_due = 3,
  field_key = 4,
  field_keyval = 5,
  field_meta = 6,
  field_priority = 7,
  field_status = 8,
  field_text = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_category] = "category",
  [field_children] = "children",
  [field_due] = "due",
  [field_key] = "key",
  [field_keyval] = "keyval",
  [field_meta] = "meta",
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
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 8},
  [15] = {.index = 30, .length = 1},
  [16] = {.index = 31, .length = 4},
  [17] = {.index = 35, .length = 3},
  [18] = {.index = 38, .length = 3},
  [19] = {.index = 41, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_meta, 0},
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
    {field_text, 0},
  [11] =
    {field_meta, 0, .inherited = true},
    {field_status, 0, .inherited = true},
    {field_text, 0, .inherited = true},
  [14] =
    {field_meta, 0, .inherited = true},
    {field_status, 0, .inherited = true},
  [16] =
    {field_meta, 0},
    {field_text, 1},
  [18] =
    {field_meta, 1},
    {field_status, 0},
  [20] =
    {field_status, 0},
    {field_text, 1},
  [22] =
    {field_category, 0, .inherited = true},
    {field_category, 1, .inherited = true},
    {field_due, 0, .inherited = true},
    {field_due, 1, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_keyval, 1, .inherited = true},
    {field_priority, 0, .inherited = true},
    {field_priority, 1, .inherited = true},
  [30] =
    {field_value, 1},
  [31] =
    {field_children, 2},
    {field_meta, 0, .inherited = true},
    {field_status, 0, .inherited = true},
    {field_text, 0, .inherited = true},
  [35] =
    {field_children, 2},
    {field_meta, 0, .inherited = true},
    {field_status, 0, .inherited = true},
  [38] =
    {field_meta, 1},
    {field_status, 0},
    {field_text, 2},
  [41] =
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
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(48);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_status_todo);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_status_doing);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_status_done);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_status_cancel);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_status_other);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_date_value);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_value);
      if (!sym_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_priority_inner);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__text_start_token1);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__text_start_token1);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__text_start_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__text_subsequent_token1);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__text_subsequent_token1);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__text_subsequent_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17, .external_lex_state = 2},
  [3] = {.lex_state = 17, .external_lex_state = 2},
  [4] = {.lex_state = 17, .external_lex_state = 2},
  [5] = {.lex_state = 17, .external_lex_state = 2},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17, .external_lex_state = 2},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17, .external_lex_state = 2},
  [10] = {.lex_state = 17, .external_lex_state = 2},
  [11] = {.lex_state = 17, .external_lex_state = 3},
  [12] = {.lex_state = 17, .external_lex_state = 3},
  [13] = {.lex_state = 17, .external_lex_state = 3},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17, .external_lex_state = 2},
  [18] = {.lex_state = 17, .external_lex_state = 2},
  [19] = {.lex_state = 17, .external_lex_state = 2},
  [20] = {.lex_state = 17, .external_lex_state = 2},
  [21] = {.lex_state = 17, .external_lex_state = 2},
  [22] = {.lex_state = 17, .external_lex_state = 2},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17, .external_lex_state = 3},
  [27] = {.lex_state = 17, .external_lex_state = 3},
  [28] = {.lex_state = 17, .external_lex_state = 3},
  [29] = {.lex_state = 17, .external_lex_state = 3},
  [30] = {.lex_state = 17, .external_lex_state = 3},
  [31] = {.lex_state = 17, .external_lex_state = 3},
  [32] = {.lex_state = 17, .external_lex_state = 3},
  [33] = {.lex_state = 17, .external_lex_state = 3},
  [34] = {.lex_state = 17, .external_lex_state = 3},
  [35] = {.lex_state = 17, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 3},
  [37] = {.lex_state = 17, .external_lex_state = 3},
  [38] = {.lex_state = 3, .external_lex_state = 3},
  [39] = {.lex_state = 3, .external_lex_state = 3},
  [40] = {.lex_state = 3, .external_lex_state = 3},
  [41] = {.lex_state = 3, .external_lex_state = 3},
  [42] = {.lex_state = 3, .external_lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 6},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_status_todo] = ACTIONS(1),
    [sym_status_doing] = ACTIONS(1),
    [sym_status_done] = ACTIONS(1),
    [sym_status_cancel] = ACTIONS(1),
    [sym_status_other] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_date_value] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_priority_inner] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym__task_line] = STATE(45),
    [sym__header_line] = STATE(51),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(19),
  },
  [2] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym_block] = STATE(19),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(53),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(19),
    [sym__dedent] = ACTIONS(21),
  },
  [3] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym_block] = STATE(22),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(53),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(19),
    [sym__dedent] = ACTIONS(21),
  },
  [4] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym_block] = STATE(24),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(53),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(19),
    [sym__dedent] = ACTIONS(23),
  },
  [5] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym_block] = STATE(25),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(53),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(19),
    [sym__dedent] = ACTIONS(23),
  },
  [6] = {
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(45),
    [sym__header_line] = STATE(51),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(19),
  },
  [7] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(53),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(19),
    [sym__dedent] = ACTIONS(27),
  },
  [8] = {
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(45),
    [sym__header_line] = STATE(51),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_status_todo] = ACTIONS(40),
    [sym_status_doing] = ACTIONS(40),
    [sym_status_done] = ACTIONS(40),
    [sym_status_cancel] = ACTIONS(40),
    [sym_status_other] = ACTIONS(40),
    [sym_tag] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(46),
  },
  [9] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(53),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(19),
    [sym__dedent] = ACTIONS(49),
  },
  [10] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(53),
    [sym_meta] = STATE(28),
    [sym__meta] = STATE(26),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(29),
    [sym_due] = STATE(27),
    [sym_keyval] = STATE(37),
    [sym_category] = STATE(33),
    [sym_text] = STATE(50),
    [sym__text_start] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_status_todo] = ACTIONS(40),
    [sym_status_doing] = ACTIONS(40),
    [sym_status_done] = ACTIONS(40),
    [sym_status_cancel] = ACTIONS(40),
    [sym_status_other] = ACTIONS(40),
    [sym_tag] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_whitespace] = ACTIONS(17),
    [aux_sym__text_start_token1] = ACTIONS(46),
    [sym__dedent] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(19), 1,
      aux_sym__text_start_token1,
    STATE(13), 1,
      aux_sym_meta_repeat1,
    STATE(26), 1,
      sym__meta,
    STATE(27), 1,
      sym_due,
    STATE(29), 1,
      sym_priority,
    STATE(30), 1,
      sym_meta,
    STATE(33), 1,
      sym_category,
    STATE(37), 1,
      sym_keyval,
    STATE(42), 1,
      sym__text_start,
    STATE(43), 1,
      aux_sym_text_repeat2,
    STATE(49), 1,
      sym_text,
    ACTIONS(51), 2,
      sym__newline,
      sym__indent,
  [56] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      aux_sym__text_start_token1,
    STATE(12), 1,
      aux_sym_meta_repeat1,
    STATE(26), 1,
      sym__meta,
    STATE(27), 1,
      sym_due,
    STATE(29), 1,
      sym_priority,
    STATE(33), 1,
      sym_category,
    STATE(37), 1,
      sym_keyval,
    ACTIONS(62), 3,
      sym__newline,
      sym__indent,
      sym_tag,
  [98] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(68), 1,
      aux_sym__text_start_token1,
    STATE(12), 1,
      aux_sym_meta_repeat1,
    STATE(26), 1,
      sym__meta,
    STATE(27), 1,
      sym_due,
    STATE(29), 1,
      sym_priority,
    STATE(33), 1,
      sym_category,
    STATE(37), 1,
      sym_keyval,
    ACTIONS(66), 3,
      sym__newline,
      sym__indent,
      sym_tag,
  [140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(72), 1,
      aux_sym__text_start_token1,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(76), 1,
      aux_sym__text_start_token1,
    ACTIONS(74), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(80), 1,
      aux_sym__text_start_token1,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(84), 1,
      aux_sym__text_start_token1,
    ACTIONS(82), 10,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(80), 1,
      aux_sym__text_start_token1,
    ACTIONS(78), 10,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(88), 1,
      aux_sym__text_start_token1,
    ACTIONS(86), 10,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(72), 1,
      aux_sym__text_start_token1,
    ACTIONS(70), 10,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(76), 1,
      aux_sym__text_start_token1,
    ACTIONS(74), 10,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(92), 1,
      aux_sym__text_start_token1,
    ACTIONS(90), 10,
      sym__dedent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(84), 1,
      aux_sym__text_start_token1,
    ACTIONS(82), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(88), 1,
      aux_sym__text_start_token1,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(92), 1,
      aux_sym__text_start_token1,
    ACTIONS(90), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      sym_status_other,
      sym_tag,
  [404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(96), 1,
      aux_sym__text_start_token1,
    ACTIONS(94), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(100), 1,
      aux_sym__text_start_token1,
    ACTIONS(98), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(19), 1,
      aux_sym__text_start_token1,
    STATE(42), 1,
      sym__text_start,
    STATE(43), 1,
      aux_sym_text_repeat2,
    STATE(47), 1,
      sym_text,
    ACTIONS(102), 2,
      sym__newline,
      sym__indent,
  [466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(106), 1,
      aux_sym__text_start_token1,
    ACTIONS(104), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [484] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(19), 1,
      aux_sym__text_start_token1,
    STATE(42), 1,
      sym__text_start,
    STATE(43), 1,
      aux_sym_text_repeat2,
    STATE(46), 1,
      sym_text,
    ACTIONS(108), 2,
      sym__newline,
      sym__indent,
  [510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(112), 1,
      aux_sym__text_start_token1,
    ACTIONS(110), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(116), 1,
      aux_sym__text_start_token1,
    ACTIONS(114), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(120), 1,
      aux_sym__text_start_token1,
    ACTIONS(118), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(124), 1,
      aux_sym__text_start_token1,
    ACTIONS(122), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(128), 1,
      aux_sym__text_start_token1,
    ACTIONS(126), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(132), 1,
      aux_sym__text_start_token1,
    ACTIONS(130), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(136), 1,
      aux_sym__text_start_token1,
    ACTIONS(134), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(138), 1,
      sym_tag,
    ACTIONS(141), 1,
      aux_sym__text_subsequent_token1,
    ACTIONS(144), 2,
      sym__newline,
      sym__indent,
    STATE(38), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
  [657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(146), 1,
      sym_tag,
    ACTIONS(148), 1,
      aux_sym__text_subsequent_token1,
    ACTIONS(150), 2,
      sym__newline,
      sym__indent,
    STATE(38), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
  [678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(146), 1,
      sym_tag,
    ACTIONS(148), 1,
      aux_sym__text_subsequent_token1,
    ACTIONS(152), 2,
      sym__newline,
      sym__indent,
    STATE(38), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
  [699] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(154), 1,
      sym_tag,
    ACTIONS(156), 1,
      aux_sym__text_subsequent_token1,
    ACTIONS(152), 2,
      sym__newline,
      sym__indent,
    STATE(39), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
  [720] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(158), 1,
      sym_tag,
    ACTIONS(160), 1,
      aux_sym__text_subsequent_token1,
    ACTIONS(162), 2,
      sym__newline,
      sym__indent,
    STATE(40), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
  [741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(164), 1,
      sym_tag,
    ACTIONS(166), 1,
      aux_sym__text_subsequent_token1,
    STATE(41), 1,
      sym__text_subsequent,
    STATE(44), 1,
      aux_sym_text_repeat2,
  [760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(168), 1,
      sym_tag,
    ACTIONS(171), 1,
      aux_sym__text_subsequent_token1,
    STATE(44), 1,
      aux_sym_text_repeat2,
  [776] = 3,
    ACTIONS(173), 1,
      sym__newline,
    ACTIONS(175), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [787] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(177), 2,
      sym__newline,
      sym__indent,
  [796] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(179), 2,
      sym__newline,
      sym__indent,
  [805] = 3,
    ACTIONS(181), 1,
      sym_date_value,
    ACTIONS(183), 1,
      sym_priority_inner,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [816] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(185), 2,
      sym__newline,
      sym__indent,
  [825] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
    ACTIONS(187), 2,
      sym__newline,
      sym__indent,
  [834] = 3,
    ACTIONS(189), 1,
      sym__newline,
    ACTIONS(191), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [845] = 3,
    ACTIONS(193), 1,
      sym__newline,
    ACTIONS(195), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [856] = 3,
    ACTIONS(197), 1,
      sym__newline,
    ACTIONS(199), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [867] = 2,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [875] = 2,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [883] = 2,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [891] = 2,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [899] = 2,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(211), 1,
      sym_value,
  [917] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
  [925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_whitespace,
    ACTIONS(215), 1,
      sym_category_name,
  [935] = 2,
    ACTIONS(217), 1,
      sym_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 56,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 184,
  [SMALL_STATE(17)] = 206,
  [SMALL_STATE(18)] = 228,
  [SMALL_STATE(19)] = 250,
  [SMALL_STATE(20)] = 272,
  [SMALL_STATE(21)] = 294,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 338,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 404,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 466,
  [SMALL_STATE(30)] = 484,
  [SMALL_STATE(31)] = 510,
  [SMALL_STATE(32)] = 528,
  [SMALL_STATE(33)] = 546,
  [SMALL_STATE(34)] = 564,
  [SMALL_STATE(35)] = 582,
  [SMALL_STATE(36)] = 600,
  [SMALL_STATE(37)] = 618,
  [SMALL_STATE(38)] = 636,
  [SMALL_STATE(39)] = 657,
  [SMALL_STATE(40)] = 678,
  [SMALL_STATE(41)] = 699,
  [SMALL_STATE(42)] = 720,
  [SMALL_STATE(43)] = 741,
  [SMALL_STATE(44)] = 760,
  [SMALL_STATE(45)] = 776,
  [SMALL_STATE(46)] = 787,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 805,
  [SMALL_STATE(49)] = 816,
  [SMALL_STATE(50)] = 825,
  [SMALL_STATE(51)] = 834,
  [SMALL_STATE(52)] = 845,
  [SMALL_STATE(53)] = 856,
  [SMALL_STATE(54)] = 867,
  [SMALL_STATE(55)] = 875,
  [SMALL_STATE(56)] = 883,
  [SMALL_STATE(57)] = 891,
  [SMALL_STATE(58)] = 899,
  [SMALL_STATE(59)] = 907,
  [SMALL_STATE(60)] = 917,
  [SMALL_STATE(61)] = 925,
  [SMALL_STATE(62)] = 935,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 3),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(48),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(62),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(61),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 1, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 10),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 10),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 9),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 9),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 17),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 17),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 16),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 16),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 12),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_due, 3, .production_id = 15),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_due, 3, .production_id = 15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3, .production_id = 15),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3, .production_id = 15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(38),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(38),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat2, 2), SHIFT_REPEAT(44),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat2, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 18),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 11),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 13),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
