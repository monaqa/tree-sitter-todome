#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 68
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
  sym_meta = 33,
  sym__meta = 34,
  sym_status = 35,
  sym_priority = 36,
  sym_due = 37,
  sym_keyval = 38,
  sym_category = 39,
  sym_text = 40,
  sym__text_start = 41,
  sym__text_subsequent = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_meta_repeat1 = 44,
  aux_sym_text_repeat1 = 45,
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
  [14] = {.lex_state = 17, .external_lex_state = 2},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17, .external_lex_state = 2},
  [19] = {.lex_state = 17, .external_lex_state = 2},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17, .external_lex_state = 2},
  [22] = {.lex_state = 17, .external_lex_state = 2},
  [23] = {.lex_state = 17, .external_lex_state = 2},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17, .external_lex_state = 2},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17, .external_lex_state = 3},
  [29] = {.lex_state = 17, .external_lex_state = 3},
  [30] = {.lex_state = 17, .external_lex_state = 3},
  [31] = {.lex_state = 3, .external_lex_state = 3},
  [32] = {.lex_state = 17, .external_lex_state = 3},
  [33] = {.lex_state = 17, .external_lex_state = 3},
  [34] = {.lex_state = 3, .external_lex_state = 3},
  [35] = {.lex_state = 17, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 3},
  [37] = {.lex_state = 17, .external_lex_state = 3},
  [38] = {.lex_state = 3, .external_lex_state = 3},
  [39] = {.lex_state = 17, .external_lex_state = 3},
  [40] = {.lex_state = 17, .external_lex_state = 3},
  [41] = {.lex_state = 17, .external_lex_state = 3},
  [42] = {.lex_state = 17, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0, .external_lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0, .external_lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 8},
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
    [sym_source_file] = STATE(61),
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(56),
    [sym__memo_line] = STATE(6),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym_block] = STATE(25),
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(7),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym_block] = STATE(18),
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(7),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(9),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym_block] = STATE(16),
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(9),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(56),
    [sym__memo_line] = STATE(8),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(10),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(56),
    [sym__memo_line] = STATE(8),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(10),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym__task_line] = STATE(54),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(10),
    [sym_meta] = STATE(42),
    [sym__meta] = STATE(30),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(40),
    [sym_due] = STATE(39),
    [sym_keyval] = STATE(29),
    [sym_category] = STATE(33),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(12),
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
  [0] = 17,
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
      aux_sym_meta_repeat1,
    STATE(29), 1,
      sym_keyval,
    STATE(30), 1,
      sym__meta,
    STATE(33), 1,
      sym_category,
    STATE(34), 1,
      sym__text_start,
    STATE(39), 1,
      sym_due,
    STATE(40), 1,
      sym_priority,
    STATE(41), 1,
      sym_meta,
    STATE(43), 1,
      sym_text,
    ACTIONS(63), 2,
      sym__newline,
      sym__indent,
  [53] = 12,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(67), 1,
      sym__text_start_ptn,
    STATE(13), 1,
      aux_sym_meta_repeat1,
    STATE(29), 1,
      sym_keyval,
    STATE(30), 1,
      sym__meta,
    STATE(33), 1,
      sym_category,
    STATE(39), 1,
      sym_due,
    STATE(40), 1,
      sym_priority,
    ACTIONS(65), 3,
      sym__newline,
      sym__indent,
      sym_tag,
  [92] = 12,
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
    STATE(13), 1,
      aux_sym_meta_repeat1,
    STATE(29), 1,
      sym_keyval,
    STATE(30), 1,
      sym__meta,
    STATE(33), 1,
      sym_category,
    STATE(39), 1,
      sym_due,
    STATE(40), 1,
      sym_priority,
    ACTIONS(78), 3,
      sym__newline,
      sym__indent,
      sym_tag,
  [131] = 3,
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
  [151] = 3,
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
  [171] = 3,
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
  [191] = 3,
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
  [211] = 3,
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
  [231] = 3,
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
  [251] = 3,
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
  [271] = 3,
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
  [291] = 3,
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
  [311] = 3,
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
  [331] = 3,
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
  [351] = 3,
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
  [371] = 3,
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
  [391] = 3,
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
  [411] = 3,
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
  [427] = 3,
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
  [442] = 3,
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
  [457] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(122), 1,
      sym_tag,
    ACTIONS(126), 1,
      sym__text_subsequent_ptn,
    STATE(38), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(124), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [476] = 3,
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
  [491] = 3,
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
  [506] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(136), 1,
      sym_tag,
    ACTIONS(140), 1,
      sym__text_subsequent_ptn,
    STATE(31), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(138), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [525] = 3,
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
  [540] = 3,
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
  [555] = 3,
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
  [570] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(154), 1,
      sym_tag,
    ACTIONS(159), 1,
      sym__text_subsequent_ptn,
    STATE(38), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(157), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [589] = 3,
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
  [604] = 3,
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
  [619] = 6,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(21), 1,
      sym__text_start_ptn,
    STATE(34), 1,
      sym__text_start,
    STATE(45), 1,
      sym_text,
    ACTIONS(170), 2,
      sym__newline,
      sym__indent,
  [639] = 6,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(21), 1,
      sym__text_start_ptn,
    STATE(34), 1,
      sym__text_start,
    STATE(46), 1,
      sym_text,
    ACTIONS(172), 2,
      sym__newline,
      sym__indent,
  [659] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(174), 1,
      sym_memo,
    ACTIONS(176), 2,
      sym__newline,
      sym__indent,
  [670] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(178), 1,
      sym_memo,
    ACTIONS(180), 2,
      sym__newline,
      sym__indent,
  [681] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(182), 1,
      sym_memo,
    ACTIONS(184), 2,
      sym__newline,
      sym__indent,
  [692] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(186), 1,
      sym_memo,
    ACTIONS(188), 2,
      sym__newline,
      sym__indent,
  [703] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(190), 2,
      sym__newline,
      sym__indent,
  [711] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(192), 1,
      sym_date_value,
    ACTIONS(194), 1,
      sym_priority_inner,
  [721] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(196), 2,
      sym__newline,
      sym__indent,
  [729] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(198), 2,
      sym__newline,
      sym__indent,
  [737] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(200), 1,
      sym__newline,
    ACTIONS(202), 1,
      sym__indent,
  [747] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(204), 2,
      sym__newline,
      sym__indent,
  [755] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(206), 2,
      sym__newline,
      sym__indent,
  [763] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(208), 1,
      sym__newline,
    ACTIONS(210), 1,
      sym__indent,
  [773] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(212), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__indent,
  [783] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(216), 1,
      sym__newline,
    ACTIONS(218), 1,
      sym__indent,
  [793] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [800] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
  [807] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [814] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(226), 1,
      sym_value,
  [821] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [828] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(230), 1,
      sym__newline,
  [835] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [842] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
  [849] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(236), 1,
      sym__newline,
  [856] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(238), 1,
      sym_category_name,
  [863] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(240), 1,
      sym_key,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 53,
  [SMALL_STATE(13)] = 92,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 151,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 211,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 271,
  [SMALL_STATE(22)] = 291,
  [SMALL_STATE(23)] = 311,
  [SMALL_STATE(24)] = 331,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 391,
  [SMALL_STATE(28)] = 411,
  [SMALL_STATE(29)] = 427,
  [SMALL_STATE(30)] = 442,
  [SMALL_STATE(31)] = 457,
  [SMALL_STATE(32)] = 476,
  [SMALL_STATE(33)] = 491,
  [SMALL_STATE(34)] = 506,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 540,
  [SMALL_STATE(37)] = 555,
  [SMALL_STATE(38)] = 570,
  [SMALL_STATE(39)] = 589,
  [SMALL_STATE(40)] = 604,
  [SMALL_STATE(41)] = 619,
  [SMALL_STATE(42)] = 639,
  [SMALL_STATE(43)] = 659,
  [SMALL_STATE(44)] = 670,
  [SMALL_STATE(45)] = 681,
  [SMALL_STATE(46)] = 692,
  [SMALL_STATE(47)] = 703,
  [SMALL_STATE(48)] = 711,
  [SMALL_STATE(49)] = 721,
  [SMALL_STATE(50)] = 729,
  [SMALL_STATE(51)] = 737,
  [SMALL_STATE(52)] = 747,
  [SMALL_STATE(53)] = 755,
  [SMALL_STATE(54)] = 763,
  [SMALL_STATE(55)] = 773,
  [SMALL_STATE(56)] = 783,
  [SMALL_STATE(57)] = 793,
  [SMALL_STATE(58)] = 800,
  [SMALL_STATE(59)] = 807,
  [SMALL_STATE(60)] = 814,
  [SMALL_STATE(61)] = 821,
  [SMALL_STATE(62)] = 828,
  [SMALL_STATE(63)] = 835,
  [SMALL_STATE(64)] = 842,
  [SMALL_STATE(65)] = 849,
  [SMALL_STATE(66)] = 856,
  [SMALL_STATE(67)] = 863,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 1, .production_id = 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(48),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(67),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(66),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 9),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 16),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 16),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 17),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 17),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 10),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 10),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__memo_line, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__memo_line, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 7),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_due, 3, .production_id = 15),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_due, 3, .production_id = 15),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3, .production_id = 15),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3, .production_id = 15),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(38),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(38),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 12),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 13),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 8),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 18),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 11),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 11),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 13),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 4, .production_id = 18),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
