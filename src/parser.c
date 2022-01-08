#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 47
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
  aux_sym_text_repeat2 = 46,
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
  [sym_memo] = sym_memo,
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
  [sym_memo] = {
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
      ACCEPT_TOKEN(aux_sym__text_start_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__text_start_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__text_start_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__text_subsequent_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__text_subsequent_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__text_subsequent_token1);
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
  [6] = {.lex_state = 17, .external_lex_state = 2},
  [7] = {.lex_state = 17, .external_lex_state = 2},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17, .external_lex_state = 2},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17, .external_lex_state = 3},
  [12] = {.lex_state = 17, .external_lex_state = 3},
  [13] = {.lex_state = 17, .external_lex_state = 3},
  [14] = {.lex_state = 17, .external_lex_state = 2},
  [15] = {.lex_state = 17},
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
  [27] = {.lex_state = 17, .external_lex_state = 2},
  [28] = {.lex_state = 17, .external_lex_state = 3},
  [29] = {.lex_state = 3, .external_lex_state = 3},
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
  [40] = {.lex_state = 17, .external_lex_state = 3},
  [41] = {.lex_state = 17, .external_lex_state = 3},
  [42] = {.lex_state = 3, .external_lex_state = 3},
  [43] = {.lex_state = 17, .external_lex_state = 3},
  [44] = {.lex_state = 3, .external_lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0, .external_lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0, .external_lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 8},
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
    [sym_source_file] = STATE(65),
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(56),
    [sym__header_line] = STATE(57),
    [sym__memo_line] = STATE(10),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
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
    [aux_sym__text_start_token1] = ACTIONS(21),
  },
  [2] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym_block] = STATE(24),
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(54),
    [sym__memo_line] = STATE(7),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
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
    [aux_sym__text_start_token1] = ACTIONS(21),
    [sym__dedent] = ACTIONS(25),
  },
  [3] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym_block] = STATE(23),
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(54),
    [sym__memo_line] = STATE(7),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
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
    [aux_sym__text_start_token1] = ACTIONS(21),
    [sym__dedent] = ACTIONS(25),
  },
  [4] = {
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym_block] = STATE(17),
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(54),
    [sym__memo_line] = STATE(6),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
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
    [aux_sym__text_start_token1] = ACTIONS(21),
    [sym__dedent] = ACTIONS(27),
  },
  [5] = {
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym_block] = STATE(16),
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(54),
    [sym__memo_line] = STATE(6),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
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
    [aux_sym__text_start_token1] = ACTIONS(21),
    [sym__dedent] = ACTIONS(27),
  },
  [6] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(54),
    [sym__memo_line] = STATE(9),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
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
    [aux_sym__text_start_token1] = ACTIONS(21),
    [sym__dedent] = ACTIONS(29),
  },
  [7] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(54),
    [sym__memo_line] = STATE(9),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
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
    [aux_sym__text_start_token1] = ACTIONS(21),
    [sym__dedent] = ACTIONS(31),
  },
  [8] = {
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(56),
    [sym__header_line] = STATE(57),
    [sym__memo_line] = STATE(8),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
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
    [aux_sym__text_start_token1] = ACTIONS(53),
  },
  [9] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(55),
    [sym__header_line] = STATE(54),
    [sym__memo_line] = STATE(9),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_status_todo] = ACTIONS(44),
    [sym_status_doing] = ACTIONS(44),
    [sym_status_done] = ACTIONS(44),
    [sym_status_cancel] = ACTIONS(44),
    [sym_status_other] = ACTIONS(44),
    [sym_tag] = ACTIONS(47),
    [sym_memo] = ACTIONS(56),
    [sym_whitespace] = ACTIONS(19),
    [aux_sym__text_start_token1] = ACTIONS(53),
    [sym__dedent] = ACTIONS(33),
  },
  [10] = {
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(56),
    [sym__header_line] = STATE(57),
    [sym__memo_line] = STATE(8),
    [sym_meta] = STATE(30),
    [sym__meta] = STATE(31),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(32),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(35),
    [sym_category] = STATE(37),
    [sym_text] = STATE(47),
    [sym__text_start] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_meta_repeat1] = STATE(13),
    [aux_sym_text_repeat2] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(59),
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
    [aux_sym__text_start_token1] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
      aux_sym__text_start_token1,
    ACTIONS(61), 1,
      sym_memo,
    STATE(13), 1,
      aux_sym_meta_repeat1,
    STATE(31), 1,
      sym__meta,
    STATE(32), 1,
      sym_priority,
    STATE(33), 1,
      sym_meta,
    STATE(34), 1,
      sym_due,
    STATE(35), 1,
      sym_keyval,
    STATE(37), 1,
      sym_category,
    STATE(44), 1,
      sym__text_start,
    STATE(45), 1,
      aux_sym_text_repeat2,
    STATE(50), 1,
      sym_text,
    ACTIONS(63), 2,
      sym__newline,
      sym__indent,
  [56] = 12,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      aux_sym__text_start_token1,
    STATE(12), 1,
      aux_sym_meta_repeat1,
    STATE(31), 1,
      sym__meta,
    STATE(32), 1,
      sym_priority,
    STATE(34), 1,
      sym_due,
    STATE(35), 1,
      sym_keyval,
    STATE(37), 1,
      sym_category,
    ACTIONS(74), 3,
      sym__newline,
      sym__indent,
      sym_tag,
  [95] = 12,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(80), 1,
      aux_sym__text_start_token1,
    STATE(12), 1,
      aux_sym_meta_repeat1,
    STATE(31), 1,
      sym__meta,
    STATE(32), 1,
      sym_priority,
    STATE(34), 1,
      sym_due,
    STATE(35), 1,
      sym_keyval,
    STATE(37), 1,
      sym_category,
    ACTIONS(78), 3,
      sym__newline,
      sym__indent,
      sym_tag,
  [134] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(84), 1,
      aux_sym__text_start_token1,
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
  [154] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(88), 1,
      aux_sym__text_start_token1,
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
  [174] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(92), 1,
      aux_sym__text_start_token1,
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
  [194] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(96), 1,
      aux_sym__text_start_token1,
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
  [214] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(100), 1,
      aux_sym__text_start_token1,
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
  [234] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(104), 1,
      aux_sym__text_start_token1,
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
  [254] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(108), 1,
      aux_sym__text_start_token1,
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
  [274] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(100), 1,
      aux_sym__text_start_token1,
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
  [294] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(108), 1,
      aux_sym__text_start_token1,
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
  [314] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(96), 1,
      aux_sym__text_start_token1,
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
  [334] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(92), 1,
      aux_sym__text_start_token1,
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
  [354] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(84), 1,
      aux_sym__text_start_token1,
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
  [374] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(104), 1,
      aux_sym__text_start_token1,
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
  [394] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(88), 1,
      aux_sym__text_start_token1,
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
  [414] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(112), 1,
      aux_sym__text_start_token1,
    ACTIONS(110), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [430] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(114), 1,
      sym_tag,
    ACTIONS(118), 1,
      aux_sym__text_subsequent_token1,
    STATE(42), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(116), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [449] = 7,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(21), 1,
      aux_sym__text_start_token1,
    STATE(44), 1,
      sym__text_start,
    STATE(45), 1,
      aux_sym_text_repeat2,
    STATE(49), 1,
      sym_text,
    ACTIONS(120), 2,
      sym__newline,
      sym__indent,
  [472] = 3,
    ACTIONS(19), 1,
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
  [487] = 3,
    ACTIONS(19), 1,
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
  [502] = 7,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(21), 1,
      aux_sym__text_start_token1,
    STATE(44), 1,
      sym__text_start,
    STATE(45), 1,
      aux_sym_text_repeat2,
    STATE(48), 1,
      sym_text,
    ACTIONS(130), 2,
      sym__newline,
      sym__indent,
  [525] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(134), 1,
      aux_sym__text_start_token1,
    ACTIONS(132), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [540] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(138), 1,
      aux_sym__text_start_token1,
    ACTIONS(136), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [555] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(142), 1,
      aux_sym__text_start_token1,
    ACTIONS(140), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [570] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(146), 1,
      aux_sym__text_start_token1,
    ACTIONS(144), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [585] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(148), 1,
      sym_tag,
    ACTIONS(150), 1,
      aux_sym__text_subsequent_token1,
    STATE(39), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(116), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [604] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(114), 1,
      sym_tag,
    ACTIONS(118), 1,
      aux_sym__text_subsequent_token1,
    STATE(42), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(152), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [623] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(156), 1,
      aux_sym__text_start_token1,
    ACTIONS(154), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [638] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(160), 1,
      aux_sym__text_start_token1,
    ACTIONS(158), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [653] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(162), 1,
      sym_tag,
    ACTIONS(167), 1,
      aux_sym__text_subsequent_token1,
    STATE(42), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(165), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [672] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(172), 1,
      aux_sym__text_start_token1,
    ACTIONS(170), 6,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
  [687] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(174), 1,
      sym_tag,
    ACTIONS(178), 1,
      aux_sym__text_subsequent_token1,
    STATE(29), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(176), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [706] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(180), 1,
      sym_tag,
    ACTIONS(182), 1,
      aux_sym__text_subsequent_token1,
    STATE(38), 1,
      sym__text_subsequent,
    STATE(46), 1,
      aux_sym_text_repeat2,
  [722] = 4,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(184), 1,
      sym_tag,
    ACTIONS(187), 1,
      aux_sym__text_subsequent_token1,
    STATE(46), 1,
      aux_sym_text_repeat2,
  [735] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(189), 1,
      sym_memo,
    ACTIONS(191), 2,
      sym__newline,
      sym__indent,
  [746] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(193), 1,
      sym_memo,
    ACTIONS(195), 2,
      sym__newline,
      sym__indent,
  [757] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(197), 1,
      sym_memo,
    ACTIONS(199), 2,
      sym__newline,
      sym__indent,
  [768] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(201), 1,
      sym_memo,
    ACTIONS(203), 2,
      sym__newline,
      sym__indent,
  [779] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(205), 2,
      sym__newline,
      sym__indent,
  [787] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(207), 2,
      sym__newline,
      sym__indent,
  [795] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(209), 2,
      sym__newline,
      sym__indent,
  [803] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(211), 1,
      sym__newline,
    ACTIONS(213), 1,
      sym__indent,
  [813] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(215), 1,
      sym__newline,
    ACTIONS(217), 1,
      sym__indent,
  [823] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(219), 1,
      sym__newline,
    ACTIONS(221), 1,
      sym__indent,
  [833] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(223), 1,
      sym__newline,
    ACTIONS(225), 1,
      sym__indent,
  [843] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(227), 2,
      sym__newline,
      sym__indent,
  [851] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(229), 1,
      sym_date_value,
    ACTIONS(231), 1,
      sym_priority_inner,
  [861] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(233), 2,
      sym__newline,
      sym__indent,
  [869] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(235), 1,
      sym_value,
  [876] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
  [883] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
  [890] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(241), 1,
      anon_sym_COLON,
  [897] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [904] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(245), 1,
      sym__newline,
  [911] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
  [918] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
  [925] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(251), 1,
      sym__newline,
  [932] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(253), 1,
      sym_category_name,
  [939] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(255), 1,
      sym_key,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 56,
  [SMALL_STATE(13)] = 95,
  [SMALL_STATE(14)] = 134,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 194,
  [SMALL_STATE(18)] = 214,
  [SMALL_STATE(19)] = 234,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 294,
  [SMALL_STATE(23)] = 314,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 374,
  [SMALL_STATE(27)] = 394,
  [SMALL_STATE(28)] = 414,
  [SMALL_STATE(29)] = 430,
  [SMALL_STATE(30)] = 449,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 487,
  [SMALL_STATE(33)] = 502,
  [SMALL_STATE(34)] = 525,
  [SMALL_STATE(35)] = 540,
  [SMALL_STATE(36)] = 555,
  [SMALL_STATE(37)] = 570,
  [SMALL_STATE(38)] = 585,
  [SMALL_STATE(39)] = 604,
  [SMALL_STATE(40)] = 623,
  [SMALL_STATE(41)] = 638,
  [SMALL_STATE(42)] = 653,
  [SMALL_STATE(43)] = 672,
  [SMALL_STATE(44)] = 687,
  [SMALL_STATE(45)] = 706,
  [SMALL_STATE(46)] = 722,
  [SMALL_STATE(47)] = 735,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 757,
  [SMALL_STATE(50)] = 768,
  [SMALL_STATE(51)] = 779,
  [SMALL_STATE(52)] = 787,
  [SMALL_STATE(53)] = 795,
  [SMALL_STATE(54)] = 803,
  [SMALL_STATE(55)] = 813,
  [SMALL_STATE(56)] = 823,
  [SMALL_STATE(57)] = 833,
  [SMALL_STATE(58)] = 843,
  [SMALL_STATE(59)] = 851,
  [SMALL_STATE(60)] = 861,
  [SMALL_STATE(61)] = 869,
  [SMALL_STATE(62)] = 876,
  [SMALL_STATE(63)] = 883,
  [SMALL_STATE(64)] = 890,
  [SMALL_STATE(65)] = 897,
  [SMALL_STATE(66)] = 904,
  [SMALL_STATE(67)] = 911,
  [SMALL_STATE(68)] = 918,
  [SMALL_STATE(69)] = 925,
  [SMALL_STATE(70)] = 932,
  [SMALL_STATE(71)] = 939,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 3),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(59),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(71),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(70),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 1, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__memo_line, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__memo_line, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 17),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 17),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 16),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 16),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 10),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 10),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 9),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 9),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 12),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_due, 3, .production_id = 15),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_due, 3, .production_id = 15),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3, .production_id = 15),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3, .production_id = 15),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(42),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(42),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat2, 2), SHIFT_REPEAT(46),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat2, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 8),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 18),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 11),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 13),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 11),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 13),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 4, .production_id = 18),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 8),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
