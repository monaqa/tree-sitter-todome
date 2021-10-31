#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 20

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
  sym_meta = 28,
  sym__meta = 29,
  sym_status = 30,
  sym_priority = 31,
  sym_due = 32,
  sym_keyval = 33,
  sym_category = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_meta_repeat1 = 36,
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
  [sym_meta] = "meta",
  [sym__meta] = "_meta",
  [sym_status] = "status",
  [sym_priority] = "priority",
  [sym_due] = "due",
  [sym_keyval] = "keyval",
  [sym_category] = "category",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_meta_repeat1] = "meta_repeat1",
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
  [sym_meta] = sym_meta,
  [sym__meta] = sym__meta,
  [sym_status] = sym_status,
  [sym_priority] = sym_priority,
  [sym_due] = sym_due,
  [sym_keyval] = sym_keyval,
  [sym_category] = sym_category,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 4},
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
    {field_text, 0},
  [1] =
    {field_meta, 0},
  [2] =
    {field_category, 0, .inherited = true},
    {field_due, 0, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_priority, 0, .inherited = true},
  [6] =
    {field_status, 0},
  [7] =
    {field_priority, 0},
  [8] =
    {field_due, 0},
  [9] =
    {field_keyval, 0},
  [10] =
    {field_category, 0},
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
    {field_status, 0},
    {field_text, 1},
  [20] =
    {field_meta, 1},
    {field_status, 0},
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
      if (eof) ADVANCE(22);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '*' || '/' < lookahead)) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '(' &&
          (lookahead < '*' || '/' < lookahead) &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(53);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_status_todo);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_status_todo);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_status_doing);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_status_doing);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_status_done);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_status_done);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_status_cancel);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_status_cancel);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_date_value);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_value);
      if (!sym_value_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if ((',' <= lookahead && lookahead <= '.')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (('*' <= lookahead && lookahead <= '/')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '(' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21, .external_lex_state = 2},
  [3] = {.lex_state = 21, .external_lex_state = 2},
  [4] = {.lex_state = 21, .external_lex_state = 2},
  [5] = {.lex_state = 21, .external_lex_state = 2},
  [6] = {.lex_state = 21, .external_lex_state = 2},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21, .external_lex_state = 2},
  [10] = {.lex_state = 21, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 3},
  [12] = {.lex_state = 5, .external_lex_state = 3},
  [13] = {.lex_state = 5, .external_lex_state = 3},
  [14] = {.lex_state = 21, .external_lex_state = 2},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21, .external_lex_state = 2},
  [18] = {.lex_state = 21, .external_lex_state = 2},
  [19] = {.lex_state = 21, .external_lex_state = 2},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21, .external_lex_state = 2},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21, .external_lex_state = 2},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 5, .external_lex_state = 3},
  [27] = {.lex_state = 5, .external_lex_state = 3},
  [28] = {.lex_state = 5, .external_lex_state = 3},
  [29] = {.lex_state = 5, .external_lex_state = 3},
  [30] = {.lex_state = 5, .external_lex_state = 3},
  [31] = {.lex_state = 5, .external_lex_state = 3},
  [32] = {.lex_state = 5, .external_lex_state = 3},
  [33] = {.lex_state = 5, .external_lex_state = 3},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 5, .external_lex_state = 3},
  [36] = {.lex_state = 6, .external_lex_state = 3},
  [37] = {.lex_state = 6, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 42},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 9},
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
    [sym_source_file] = STATE(49),
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(46),
    [sym__header_line] = STATE(38),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym_block] = STATE(24),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(42),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym_block] = STATE(22),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(42),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym_block] = STATE(20),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(42),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym_block] = STATE(16),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(42),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(12),
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
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(42),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(12),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(23),
  },
  [7] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym__task_line] = STATE(46),
    [sym__header_line] = STATE(38),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_status_todo] = ACTIONS(27),
    [sym_status_doing] = ACTIONS(27),
    [sym_status_done] = ACTIONS(27),
    [sym_status_cancel] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_text] = ACTIONS(39),
    [sym_comment] = ACTIONS(17),
  },
  [8] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym__task_line] = STATE(46),
    [sym__header_line] = STATE(38),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(42),
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
  [9] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(42),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(12),
    [sym_status_todo] = ACTIONS(27),
    [sym_status_doing] = ACTIONS(27),
    [sym_status_done] = ACTIONS(27),
    [sym_status_cancel] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_text] = ACTIONS(39),
    [sym_comment] = ACTIONS(17),
    [sym__dedent] = ACTIONS(25),
  },
  [10] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(43),
    [sym__header_line] = STATE(42),
    [sym_meta] = STATE(37),
    [sym__meta] = STATE(35),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(34),
    [sym_due] = STATE(33),
    [sym_keyval] = STATE(32),
    [sym_category] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(12),
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
  [0] = 13,
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
      aux_sym_meta_repeat1,
    STATE(31), 1,
      sym_category,
    STATE(32), 1,
      sym_keyval,
    STATE(33), 1,
      sym_due,
    STATE(34), 1,
      sym_priority,
    STATE(35), 1,
      sym__meta,
    STATE(36), 1,
      sym_meta,
    ACTIONS(48), 2,
      sym__newline,
      sym__indent,
  [41] = 12,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_text,
    STATE(13), 1,
      aux_sym_meta_repeat1,
    STATE(31), 1,
      sym_category,
    STATE(32), 1,
      sym_keyval,
    STATE(33), 1,
      sym_due,
    STATE(34), 1,
      sym_priority,
    STATE(35), 1,
      sym__meta,
    ACTIONS(52), 2,
      sym__newline,
      sym__indent,
  [79] = 12,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      sym_text,
    STATE(13), 1,
      aux_sym_meta_repeat1,
    STATE(31), 1,
      sym_category,
    STATE(32), 1,
      sym_keyval,
    STATE(33), 1,
      sym_due,
    STATE(34), 1,
      sym_priority,
    STATE(35), 1,
      sym__meta,
    ACTIONS(65), 2,
      sym__newline,
      sym__indent,
  [117] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__dedent,
    ACTIONS(67), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [134] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [151] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [168] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__dedent,
    ACTIONS(73), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [185] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__dedent,
    ACTIONS(79), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [202] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym__dedent,
    ACTIONS(83), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [219] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [236] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [253] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym__dedent,
    ACTIONS(89), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [270] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [287] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym__dedent,
    ACTIONS(77), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [304] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 8,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [321] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym__newline,
      sym__indent,
    ACTIONS(91), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
  [335] = 3,
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
  [349] = 3,
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
  [363] = 3,
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
  [377] = 3,
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
  [391] = 3,
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
  [405] = 3,
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
  [419] = 3,
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
  [433] = 3,
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
  [447] = 3,
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
  [461] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_text,
    ACTIONS(133), 2,
      sym__newline,
      sym__indent,
  [472] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_text,
    ACTIONS(137), 2,
      sym__newline,
      sym__indent,
  [483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym__newline,
    ACTIONS(141), 1,
      sym__indent,
  [493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      sym__newline,
      sym__indent,
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_date_value,
    ACTIONS(147), 1,
      sym_key,
  [511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      sym__newline,
      sym__indent,
  [519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__newline,
    ACTIONS(153), 1,
      sym__indent,
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__newline,
    ACTIONS(157), 1,
      sym__indent,
  [539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      sym__newline,
      sym__indent,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym__newline,
      sym__indent,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym__newline,
    ACTIONS(165), 1,
      sym__indent,
  [565] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_value,
  [572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
  [593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
  [600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
  [607] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_category_name,
  [614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COLON,
  [621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_priority_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 41,
  [SMALL_STATE(13)] = 79,
  [SMALL_STATE(14)] = 117,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 168,
  [SMALL_STATE(18)] = 185,
  [SMALL_STATE(19)] = 202,
  [SMALL_STATE(20)] = 219,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 270,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 304,
  [SMALL_STATE(26)] = 321,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 349,
  [SMALL_STATE(29)] = 363,
  [SMALL_STATE(30)] = 377,
  [SMALL_STATE(31)] = 391,
  [SMALL_STATE(32)] = 405,
  [SMALL_STATE(33)] = 419,
  [SMALL_STATE(34)] = 433,
  [SMALL_STATE(35)] = 447,
  [SMALL_STATE(36)] = 461,
  [SMALL_STATE(37)] = 472,
  [SMALL_STATE(38)] = 483,
  [SMALL_STATE(39)] = 493,
  [SMALL_STATE(40)] = 501,
  [SMALL_STATE(41)] = 511,
  [SMALL_STATE(42)] = 519,
  [SMALL_STATE(43)] = 529,
  [SMALL_STATE(44)] = 539,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 555,
  [SMALL_STATE(47)] = 565,
  [SMALL_STATE(48)] = 572,
  [SMALL_STATE(49)] = 579,
  [SMALL_STATE(50)] = 586,
  [SMALL_STATE(51)] = 593,
  [SMALL_STATE(52)] = 600,
  [SMALL_STATE(53)] = 607,
  [SMALL_STATE(54)] = 614,
  [SMALL_STATE(55)] = 621,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 1, .production_id = 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 3),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(55),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(40),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(53),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 9),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 17),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 17),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 10),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 16),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 16),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_due, 3, .production_id = 15),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_due, 3, .production_id = 15),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 7),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 7),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 13),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 11),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 18),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
