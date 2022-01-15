#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 17

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
  sym_memo = 19,
  sym_whitespace = 20,
  sym__text_start_ptn = 21,
  sym__text_subsequent_ptn = 22,
  sym__newline = 23,
  sym__indent = 24,
  sym__dedent = 25,
  sym_source_file = 26,
  sym_task = 27,
  sym_header = 28,
  sym_block = 29,
  sym__task_line = 30,
  sym__header_line = 31,
  sym__memo_line = 32,
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
  aux_sym__task_line_repeat1 = 43,
  aux_sym_text_repeat1 = 44,
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
  [sym_memo] = "memo",
  [sym_whitespace] = "whitespace",
  [sym__text_start_ptn] = "subtext",
  [sym__text_subsequent_ptn] = "subtext",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_task] = "task",
  [sym_header] = "header",
  [sym_block] = "block",
  [sym__task_line] = "_task_line",
  [sym__header_line] = "_header_line",
  [sym__memo_line] = "_memo_line",
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
  [aux_sym__task_line_repeat1] = "_task_line_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
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
  [sym_memo] = sym_memo,
  [sym_whitespace] = sym_whitespace,
  [sym__text_start_ptn] = sym__text_start_ptn,
  [sym__text_subsequent_ptn] = sym__text_start_ptn,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_task] = sym_task,
  [sym_header] = sym_header,
  [sym_block] = sym_block,
  [sym__task_line] = sym__task_line,
  [sym__header_line] = sym__header_line,
  [sym__memo_line] = sym__memo_line,
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
  [aux_sym__task_line_repeat1] = aux_sym__task_line_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
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
  [sym_memo] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym__text_start_ptn] = {
    .visible = true,
    .named = true,
  },
  [sym__text_subsequent_ptn] = {
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
  [sym__memo_line] = {
    .visible = false,
    .named = true,
  },
  [sym__meta] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [aux_sym__task_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
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
  field_priority = 6,
  field_status = 7,
  field_text = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_category] = "category",
  [field_children] = "children",
  [field_due] = "due",
  [field_key] = "key",
  [field_keyval] = "keyval",
  [field_priority] = "priority",
  [field_status] = "status",
  [field_text] = "text",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 1},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_category, 0, .inherited = true},
    {field_due, 0, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_priority, 0, .inherited = true},
  [4] =
    {field_status, 0},
  [5] =
    {field_priority, 0},
  [6] =
    {field_due, 0},
  [7] =
    {field_keyval, 0},
  [8] =
    {field_category, 0},
  [9] =
    {field_text, 0},
  [10] =
    {field_status, 0, .inherited = true},
    {field_text, 0, .inherited = true},
  [12] =
    {field_status, 0, .inherited = true},
  [13] =
    {field_status, 0},
    {field_text, 1},
  [15] =
    {field_text, 1},
  [16] =
    {field_value, 1},
  [17] =
    {field_children, 2},
    {field_status, 0, .inherited = true},
    {field_text, 0, .inherited = true},
  [20] =
    {field_children, 2},
    {field_status, 0, .inherited = true},
  [22] =
    {field_status, 0},
    {field_text, 2},
  [24] =
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
      if (lookahead == '#') ADVANCE(41);
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
          lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
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
      if (lookahead == '\r') ADVANCE(42);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(47);
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
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_value);
      if (!sym_value_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_priority_inner);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_memo);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__text_start_ptn);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__text_start_ptn);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__text_start_ptn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__text_subsequent_ptn);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__text_subsequent_ptn);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__text_subsequent_ptn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(50);
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
  [14] = {.lex_state = 17, .external_lex_state = 3},
  [15] = {.lex_state = 17, .external_lex_state = 2},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17, .external_lex_state = 2},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17, .external_lex_state = 2},
  [22] = {.lex_state = 17, .external_lex_state = 2},
  [23] = {.lex_state = 17, .external_lex_state = 2},
  [24] = {.lex_state = 17, .external_lex_state = 2},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17, .external_lex_state = 2},
  [29] = {.lex_state = 17, .external_lex_state = 3},
  [30] = {.lex_state = 17, .external_lex_state = 3},
  [31] = {.lex_state = 17, .external_lex_state = 3},
  [32] = {.lex_state = 3, .external_lex_state = 3},
  [33] = {.lex_state = 17, .external_lex_state = 3},
  [34] = {.lex_state = 17, .external_lex_state = 3},
  [35] = {.lex_state = 3, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 3},
  [37] = {.lex_state = 17, .external_lex_state = 3},
  [38] = {.lex_state = 17, .external_lex_state = 3},
  [39] = {.lex_state = 3, .external_lex_state = 3},
  [40] = {.lex_state = 17, .external_lex_state = 3},
  [41] = {.lex_state = 17, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0, .external_lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0, .external_lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 8},
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
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
  [4] = {
    [ts_external_token__newline] = true,
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
    [sym_memo] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(55),
    [sym__memo_line] = STATE(6),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym__task_line_repeat1] = STATE(13),
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
    [sym_memo] = ACTIONS(17),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(21),
  },
  [2] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym_block] = STATE(23),
    [sym__task_line] = STATE(53),
    [sym__header_line] = STATE(49),
    [sym__memo_line] = STATE(7),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__task_line_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_memo] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(21),
    [sym__dedent] = ACTIONS(25),
  },
  [3] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym_block] = STATE(24),
    [sym__task_line] = STATE(53),
    [sym__header_line] = STATE(49),
    [sym__memo_line] = STATE(7),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym__task_line_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_memo] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(21),
    [sym__dedent] = ACTIONS(25),
  },
  [4] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym_block] = STATE(20),
    [sym__task_line] = STATE(53),
    [sym__header_line] = STATE(49),
    [sym__memo_line] = STATE(9),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__task_line_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_memo] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(21),
    [sym__dedent] = ACTIONS(27),
  },
  [5] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym_block] = STATE(17),
    [sym__task_line] = STATE(53),
    [sym__header_line] = STATE(49),
    [sym__memo_line] = STATE(9),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__task_line_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_memo] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(21),
    [sym__dedent] = ACTIONS(27),
  },
  [6] = {
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(55),
    [sym__memo_line] = STATE(8),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym__task_line_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_memo] = ACTIONS(17),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(21),
  },
  [7] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(53),
    [sym__header_line] = STATE(49),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym__task_line_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_memo] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(21),
    [sym__dedent] = ACTIONS(31),
  },
  [8] = {
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(55),
    [sym__memo_line] = STATE(8),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym__task_line_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_status_todo] = ACTIONS(44),
    [sym_status_doing] = ACTIONS(44),
    [sym_status_done] = ACTIONS(44),
    [sym_status_cancel] = ACTIONS(44),
    [sym_status_other] = ACTIONS(44),
    [sym_tag] = ACTIONS(47),
    [sym_memo] = ACTIONS(50),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(53),
  },
  [9] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(53),
    [sym__header_line] = STATE(49),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym__task_line_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_status_todo] = ACTIONS(13),
    [sym_status_doing] = ACTIONS(13),
    [sym_status_done] = ACTIONS(13),
    [sym_status_cancel] = ACTIONS(13),
    [sym_status_other] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym_memo] = ACTIONS(23),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(21),
    [sym__dedent] = ACTIONS(56),
  },
  [10] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(53),
    [sym__header_line] = STATE(49),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(41),
    [sym_keyval] = STATE(40),
    [sym_category] = STATE(34),
    [sym_text] = STATE(43),
    [sym__text_start] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym__task_line_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_status_todo] = ACTIONS(44),
    [sym_status_doing] = ACTIONS(44),
    [sym_status_done] = ACTIONS(44),
    [sym_status_cancel] = ACTIONS(44),
    [sym_status_other] = ACTIONS(44),
    [sym_tag] = ACTIONS(47),
    [sym_memo] = ACTIONS(58),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(53),
    [sym__dedent] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(21), 1,
      sym__text_start_ptn,
    ACTIONS(61), 1,
      sym_memo,
    STATE(12), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym__meta,
    STATE(34), 1,
      sym_category,
    STATE(35), 1,
      sym__text_start,
    STATE(40), 1,
      sym_keyval,
    STATE(41), 1,
      sym_due,
    STATE(42), 1,
      sym_text,
    ACTIONS(63), 2,
      sym__newline,
      sym__indent,
  [50] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(21), 1,
      sym__text_start_ptn,
    STATE(14), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym__meta,
    STATE(34), 1,
      sym_category,
    STATE(35), 1,
      sym__text_start,
    STATE(40), 1,
      sym_keyval,
    STATE(41), 1,
      sym_due,
    STATE(45), 1,
      sym_text,
    ACTIONS(65), 2,
      sym__newline,
      sym__indent,
  [97] = 15,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(21), 1,
      sym__text_start_ptn,
    STATE(14), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym__meta,
    STATE(34), 1,
      sym_category,
    STATE(35), 1,
      sym__text_start,
    STATE(40), 1,
      sym_keyval,
    STATE(41), 1,
      sym_due,
    STATE(44), 1,
      sym_text,
    ACTIONS(67), 2,
      sym__newline,
      sym__indent,
  [144] = 12,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      sym__text_start_ptn,
    STATE(14), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym__meta,
    STATE(34), 1,
      sym_category,
    STATE(40), 1,
      sym_keyval,
    STATE(41), 1,
      sym_due,
    ACTIONS(78), 3,
      sym__newline,
      sym__indent,
      sym_tag,
  [183] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(84), 1,
      sym__text_start_ptn,
    ACTIONS(82), 11,
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
      sym_memo,
  [203] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(84), 1,
      sym__text_start_ptn,
    ACTIONS(82), 11,
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
      sym_memo,
  [223] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(88), 1,
      sym__text_start_ptn,
    ACTIONS(86), 11,
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
      sym_memo,
  [243] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(92), 1,
      sym__text_start_ptn,
    ACTIONS(90), 11,
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
      sym_memo,
  [263] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(96), 1,
      sym__text_start_ptn,
    ACTIONS(94), 11,
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
      sym_memo,
  [283] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(100), 1,
      sym__text_start_ptn,
    ACTIONS(98), 11,
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
      sym_memo,
  [303] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(104), 1,
      sym__text_start_ptn,
    ACTIONS(102), 11,
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
      sym_memo,
  [323] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(108), 1,
      sym__text_start_ptn,
    ACTIONS(106), 11,
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
      sym_memo,
  [343] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(100), 1,
      sym__text_start_ptn,
    ACTIONS(98), 11,
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
      sym_memo,
  [363] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(88), 1,
      sym__text_start_ptn,
    ACTIONS(86), 11,
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
      sym_memo,
  [383] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(108), 1,
      sym__text_start_ptn,
    ACTIONS(106), 11,
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
      sym_memo,
  [403] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(104), 1,
      sym__text_start_ptn,
    ACTIONS(102), 11,
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
      sym_memo,
  [423] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(96), 1,
      sym__text_start_ptn,
    ACTIONS(94), 11,
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
      sym_memo,
  [443] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(92), 1,
      sym__text_start_ptn,
    ACTIONS(90), 11,
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
      sym_memo,
  [463] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(112), 1,
      sym__text_start_ptn,
    ACTIONS(110), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [479] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(116), 1,
      sym__text_start_ptn,
    ACTIONS(114), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [494] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(120), 1,
      sym__text_start_ptn,
    ACTIONS(118), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [509] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(122), 1,
      sym_tag,
    ACTIONS(126), 1,
      sym__text_subsequent_ptn,
    STATE(39), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(124), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [528] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(130), 1,
      sym__text_start_ptn,
    ACTIONS(128), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [543] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(134), 1,
      sym__text_start_ptn,
    ACTIONS(132), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [558] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(136), 1,
      sym_tag,
    ACTIONS(140), 1,
      sym__text_subsequent_ptn,
    STATE(32), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(138), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [577] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(144), 1,
      sym__text_start_ptn,
    ACTIONS(142), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [592] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(148), 1,
      sym__text_start_ptn,
    ACTIONS(146), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [607] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(152), 1,
      sym__text_start_ptn,
    ACTIONS(150), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [622] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(154), 1,
      sym_tag,
    ACTIONS(159), 1,
      sym__text_subsequent_ptn,
    STATE(39), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(157), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [641] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(164), 1,
      sym__text_start_ptn,
    ACTIONS(162), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [656] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(168), 1,
      sym__text_start_ptn,
    ACTIONS(166), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [671] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(170), 1,
      sym_memo,
    ACTIONS(172), 2,
      sym__newline,
      sym__indent,
  [682] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(174), 1,
      sym_memo,
    ACTIONS(176), 2,
      sym__newline,
      sym__indent,
  [693] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(178), 1,
      sym_memo,
    ACTIONS(180), 2,
      sym__newline,
      sym__indent,
  [704] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(182), 1,
      sym_memo,
    ACTIONS(184), 2,
      sym__newline,
      sym__indent,
  [715] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(186), 1,
      sym_date_value,
    ACTIONS(188), 1,
      sym_priority_inner,
  [725] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(190), 2,
      sym__newline,
      sym__indent,
  [733] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(192), 2,
      sym__newline,
      sym__indent,
  [741] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      sym__indent,
  [751] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(198), 2,
      sym__newline,
      sym__indent,
  [759] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(200), 2,
      sym__newline,
      sym__indent,
  [767] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(65), 2,
      sym__newline,
      sym__indent,
  [775] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(202), 1,
      sym__newline,
    ACTIONS(204), 1,
      sym__indent,
  [785] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(206), 1,
      sym__newline,
    ACTIONS(208), 1,
      sym__indent,
  [795] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(210), 1,
      sym__newline,
    ACTIONS(212), 1,
      sym__indent,
  [805] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [812] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
  [819] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
  [826] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(220), 1,
      sym_value,
  [833] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [840] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(224), 1,
      sym__newline,
  [847] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [854] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
  [861] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(230), 1,
      sym__newline,
  [868] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(232), 1,
      sym_category_name,
  [875] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(234), 1,
      sym_key,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 50,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 144,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 223,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 263,
  [SMALL_STATE(20)] = 283,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 323,
  [SMALL_STATE(23)] = 343,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 383,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 443,
  [SMALL_STATE(29)] = 463,
  [SMALL_STATE(30)] = 479,
  [SMALL_STATE(31)] = 494,
  [SMALL_STATE(32)] = 509,
  [SMALL_STATE(33)] = 528,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 558,
  [SMALL_STATE(36)] = 577,
  [SMALL_STATE(37)] = 592,
  [SMALL_STATE(38)] = 607,
  [SMALL_STATE(39)] = 622,
  [SMALL_STATE(40)] = 641,
  [SMALL_STATE(41)] = 656,
  [SMALL_STATE(42)] = 671,
  [SMALL_STATE(43)] = 682,
  [SMALL_STATE(44)] = 693,
  [SMALL_STATE(45)] = 704,
  [SMALL_STATE(46)] = 715,
  [SMALL_STATE(47)] = 725,
  [SMALL_STATE(48)] = 733,
  [SMALL_STATE(49)] = 741,
  [SMALL_STATE(50)] = 751,
  [SMALL_STATE(51)] = 759,
  [SMALL_STATE(52)] = 767,
  [SMALL_STATE(53)] = 775,
  [SMALL_STATE(54)] = 785,
  [SMALL_STATE(55)] = 795,
  [SMALL_STATE(56)] = 805,
  [SMALL_STATE(57)] = 812,
  [SMALL_STATE(58)] = 819,
  [SMALL_STATE(59)] = 826,
  [SMALL_STATE(60)] = 833,
  [SMALL_STATE(61)] = 840,
  [SMALL_STATE(62)] = 847,
  [SMALL_STATE(63)] = 854,
  [SMALL_STATE(64)] = 861,
  [SMALL_STATE(65)] = 868,
  [SMALL_STATE(66)] = 875,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(46),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(66),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(65),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 9),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 9),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 13),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 13),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 14),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 14),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 8),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 8),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__memo_line, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__memo_line, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 1, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 1, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 16),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 16),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_due, 3, .production_id = 12),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_due, 3, .production_id = 12),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3, .production_id = 12),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3, .production_id = 12),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(39),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 10),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 11),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 15),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 10),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 11),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 4, .production_id = 15),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [222] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
