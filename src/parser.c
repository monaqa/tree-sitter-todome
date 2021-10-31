#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  sym_date_value = 8,
  anon_sym_LBRACE = 9,
  anon_sym_COLON = 10,
  anon_sym_RBRACE = 11,
  sym_key = 12,
  sym_value = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_category_name = 16,
  sym_tag = 17,
  sym__text_start = 18,
  sym__text_subsequent = 19,
  sym_comment = 20,
  sym__newline = 21,
  sym__indent = 22,
  sym__dedent = 23,
  sym_source_file = 24,
  sym_task = 25,
  sym_header = 26,
  sym_block = 27,
  sym__task_line = 28,
  sym__header_line = 29,
  sym_meta = 30,
  sym__meta = 31,
  sym_status = 32,
  sym_priority = 33,
  sym_due = 34,
  sym_keyval = 35,
  sym_category = 36,
  sym_text = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_meta_repeat1 = 39,
  aux_sym_text_repeat1 = 40,
  aux_sym_text_repeat2 = 41,
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
  [sym_date_value] = "date_value",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [sym_key] = "key",
  [sym_value] = "value",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_category_name] = "category_name",
  [sym_tag] = "tag",
  [sym__text_start] = "_text_start",
  [sym__text_subsequent] = "_text_subsequent",
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
  [sym_text] = "text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_text_repeat2] = "text_repeat2",
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
  [sym_date_value] = sym_date_value,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_category_name] = sym_category_name,
  [sym_tag] = sym_tag,
  [sym__text_start] = sym__text_start,
  [sym__text_subsequent] = sym__text_subsequent,
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
  [sym_text] = sym_text,
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
  [sym_date_value] = {
    .visible = true,
    .named = true,
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
  [sym_tag] = {
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
  [sym_text] = {
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
      if (eof) ADVANCE(24);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          (lookahead < '*' || '/' < lookahead) &&
          lookahead != '=') ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '(' &&
          (lookahead < '*' || '/' < lookahead) &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 21:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          (lookahead < ',' || '.' < lookahead) &&
          lookahead != '=') ADVANCE(56);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_status_todo);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_status_todo);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_status_doing);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_status_doing);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_status_done);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_status_done);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_status_cancel);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_status_cancel);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_date_value);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_value);
      if (!sym_value_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__text_start);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if ((',' <= lookahead && lookahead <= '.') ||
          lookahead == '=') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__text_start);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__text_start);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__text_start);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == '(' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == '{') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__text_start);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__text_subsequent);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__text_subsequent);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__text_subsequent);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23, .external_lex_state = 2},
  [3] = {.lex_state = 23, .external_lex_state = 2},
  [4] = {.lex_state = 23, .external_lex_state = 2},
  [5] = {.lex_state = 23, .external_lex_state = 2},
  [6] = {.lex_state = 23, .external_lex_state = 2},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23, .external_lex_state = 2},
  [10] = {.lex_state = 23, .external_lex_state = 2},
  [11] = {.lex_state = 6, .external_lex_state = 3},
  [12] = {.lex_state = 6, .external_lex_state = 3},
  [13] = {.lex_state = 6, .external_lex_state = 3},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23, .external_lex_state = 2},
  [18] = {.lex_state = 23, .external_lex_state = 2},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23, .external_lex_state = 2},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23, .external_lex_state = 2},
  [23] = {.lex_state = 23, .external_lex_state = 2},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23, .external_lex_state = 2},
  [26] = {.lex_state = 6, .external_lex_state = 3},
  [27] = {.lex_state = 6, .external_lex_state = 3},
  [28] = {.lex_state = 6, .external_lex_state = 3},
  [29] = {.lex_state = 6, .external_lex_state = 3},
  [30] = {.lex_state = 6, .external_lex_state = 3},
  [31] = {.lex_state = 6, .external_lex_state = 3},
  [32] = {.lex_state = 6, .external_lex_state = 3},
  [33] = {.lex_state = 6, .external_lex_state = 3},
  [34] = {.lex_state = 6, .external_lex_state = 3},
  [35] = {.lex_state = 6, .external_lex_state = 3},
  [36] = {.lex_state = 7, .external_lex_state = 3},
  [37] = {.lex_state = 7, .external_lex_state = 3},
  [38] = {.lex_state = 1, .external_lex_state = 3},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 10},
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
    [sym_date_value] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(49),
    [sym__header_line] = STATE(48),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym__text_start] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym_block] = STATE(25),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(52),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym__text_start] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__dedent] = ACTIONS(21),
  },
  [3] = {
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym_block] = STATE(23),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(52),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym__text_start] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__dedent] = ACTIONS(21),
  },
  [4] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym_block] = STATE(16),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(52),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym__text_start] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__dedent] = ACTIONS(23),
  },
  [5] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym_block] = STATE(19),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(52),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym__text_start] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__dedent] = ACTIONS(23),
  },
  [6] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(52),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym__text_start] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__dedent] = ACTIONS(25),
  },
  [7] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym__task_line] = STATE(49),
    [sym__header_line] = STATE(48),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_status_todo] = ACTIONS(29),
    [sym_status_doing] = ACTIONS(29),
    [sym_status_done] = ACTIONS(29),
    [sym_status_cancel] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_tag] = ACTIONS(41),
    [sym__text_start] = ACTIONS(44),
    [sym_comment] = ACTIONS(19),
  },
  [8] = {
    [sym_task] = STATE(7),
    [sym_header] = STATE(7),
    [sym__task_line] = STATE(49),
    [sym__header_line] = STATE(48),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym__text_start] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [9] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(52),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [sym_status_todo] = ACTIONS(29),
    [sym_status_doing] = ACTIONS(29),
    [sym_status_done] = ACTIONS(29),
    [sym_status_cancel] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_tag] = ACTIONS(41),
    [sym__text_start] = ACTIONS(44),
    [sym_comment] = ACTIONS(19),
    [sym__dedent] = ACTIONS(27),
  },
  [10] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(52),
    [sym_meta] = STATE(36),
    [sym__meta] = STATE(28),
    [sym_status] = STATE(11),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(34),
    [sym_keyval] = STATE(26),
    [sym_category] = STATE(27),
    [sym_text] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_meta_repeat1] = STATE(12),
    [aux_sym_text_repeat2] = STATE(44),
    [sym_status_todo] = ACTIONS(7),
    [sym_status_doing] = ACTIONS(7),
    [sym_status_done] = ACTIONS(7),
    [sym_status_cancel] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [sym__text_start] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__dedent] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(17), 1,
      sym__text_start,
    ACTIONS(19), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_meta_repeat1,
    STATE(26), 1,
      sym_keyval,
    STATE(27), 1,
      sym_category,
    STATE(28), 1,
      sym__meta,
    STATE(30), 1,
      sym_priority,
    STATE(34), 1,
      sym_due,
    STATE(37), 1,
      sym_meta,
    STATE(44), 1,
      aux_sym_text_repeat2,
    STATE(47), 1,
      sym_text,
    ACTIONS(51), 2,
      sym__newline,
      sym__indent,
  [50] = 12,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_meta_repeat1,
    STATE(26), 1,
      sym_keyval,
    STATE(27), 1,
      sym_category,
    STATE(28), 1,
      sym__meta,
    STATE(30), 1,
      sym_priority,
    STATE(34), 1,
      sym_due,
    ACTIONS(53), 2,
      sym_tag,
      sym__text_start,
    ACTIONS(55), 2,
      sym__newline,
      sym__indent,
  [89] = 12,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym_meta_repeat1,
    STATE(26), 1,
      sym_keyval,
    STATE(27), 1,
      sym_category,
    STATE(28), 1,
      sym__meta,
    STATE(30), 1,
      sym_priority,
    STATE(34), 1,
      sym_due,
    ACTIONS(66), 2,
      sym_tag,
      sym__text_start,
    ACTIONS(68), 2,
      sym__newline,
      sym__indent,
  [128] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [146] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [164] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [182] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym__dedent,
    ACTIONS(76), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [200] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym__dedent,
    ACTIONS(72), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [218] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [236] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym__dedent,
    ACTIONS(86), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [254] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [272] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__dedent,
    ACTIONS(92), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [290] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym__dedent,
    ACTIONS(84), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [308] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [326] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__dedent,
    ACTIONS(80), 9,
      sym_status_todo,
      sym_status_doing,
      sym_status_done,
      sym_status_cancel,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [344] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(96), 2,
      sym__newline,
      sym__indent,
    ACTIONS(94), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [359] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(100), 2,
      sym__newline,
      sym__indent,
    ACTIONS(98), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [374] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(104), 2,
      sym__newline,
      sym__indent,
    ACTIONS(102), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [389] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(108), 2,
      sym__newline,
      sym__indent,
    ACTIONS(106), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [404] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(112), 2,
      sym__newline,
      sym__indent,
    ACTIONS(110), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [419] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(116), 2,
      sym__newline,
      sym__indent,
    ACTIONS(114), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [434] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(120), 2,
      sym__newline,
      sym__indent,
    ACTIONS(118), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [449] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(124), 2,
      sym__newline,
      sym__indent,
    ACTIONS(122), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [464] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(128), 2,
      sym__newline,
      sym__indent,
    ACTIONS(126), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [479] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(132), 2,
      sym__newline,
      sym__indent,
    ACTIONS(130), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym__text_start,
  [494] = 6,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym__text_start,
    STATE(44), 1,
      aux_sym_text_repeat2,
    STATE(50), 1,
      sym_text,
    ACTIONS(136), 2,
      sym__newline,
      sym__indent,
  [514] = 6,
    ACTIONS(15), 1,
      sym_tag,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym__text_start,
    STATE(44), 1,
      aux_sym_text_repeat2,
    STATE(46), 1,
      sym_text,
    ACTIONS(138), 2,
      sym__newline,
      sym__indent,
  [534] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_tag,
    ACTIONS(142), 1,
      sym__text_subsequent,
    STATE(39), 1,
      aux_sym_text_repeat1,
    ACTIONS(144), 2,
      sym__newline,
      sym__indent,
  [551] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_tag,
    ACTIONS(148), 1,
      sym__text_subsequent,
    STATE(41), 1,
      aux_sym_text_repeat1,
    ACTIONS(150), 2,
      sym__newline,
      sym__indent,
  [568] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_tag,
    ACTIONS(154), 1,
      sym__text_subsequent,
    STATE(42), 1,
      aux_sym_text_repeat1,
    ACTIONS(150), 2,
      sym__newline,
      sym__indent,
  [585] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_tag,
    ACTIONS(159), 1,
      sym__text_subsequent,
    STATE(41), 1,
      aux_sym_text_repeat1,
    ACTIONS(162), 2,
      sym__newline,
      sym__indent,
  [602] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_tag,
    ACTIONS(148), 1,
      sym__text_subsequent,
    STATE(41), 1,
      aux_sym_text_repeat1,
    ACTIONS(164), 2,
      sym__newline,
      sym__indent,
  [619] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_tag,
    ACTIONS(169), 1,
      sym__text_subsequent,
    STATE(43), 1,
      aux_sym_text_repeat2,
  [632] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_tag,
    ACTIONS(173), 1,
      sym__text_subsequent,
    STATE(43), 1,
      aux_sym_text_repeat2,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      sym__newline,
      sym__indent,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym__newline,
      sym__indent,
  [661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym__newline,
      sym__indent,
  [669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym__newline,
    ACTIONS(183), 1,
      sym__indent,
  [679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym__newline,
    ACTIONS(187), 1,
      sym__indent,
  [689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      sym__newline,
      sym__indent,
  [697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(193), 1,
      sym__indent,
  [707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__newline,
    ACTIONS(197), 1,
      sym__indent,
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_priority_token1,
    ACTIONS(201), 1,
      sym_date_value,
  [727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
  [734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
  [741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [748] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_value,
  [755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [776] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_category_name,
  [783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_key,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 50,
  [SMALL_STATE(13)] = 89,
  [SMALL_STATE(14)] = 128,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 182,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 218,
  [SMALL_STATE(20)] = 236,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 344,
  [SMALL_STATE(27)] = 359,
  [SMALL_STATE(28)] = 374,
  [SMALL_STATE(29)] = 389,
  [SMALL_STATE(30)] = 404,
  [SMALL_STATE(31)] = 419,
  [SMALL_STATE(32)] = 434,
  [SMALL_STATE(33)] = 449,
  [SMALL_STATE(34)] = 464,
  [SMALL_STATE(35)] = 479,
  [SMALL_STATE(36)] = 494,
  [SMALL_STATE(37)] = 514,
  [SMALL_STATE(38)] = 534,
  [SMALL_STATE(39)] = 551,
  [SMALL_STATE(40)] = 568,
  [SMALL_STATE(41)] = 585,
  [SMALL_STATE(42)] = 602,
  [SMALL_STATE(43)] = 619,
  [SMALL_STATE(44)] = 632,
  [SMALL_STATE(45)] = 645,
  [SMALL_STATE(46)] = 653,
  [SMALL_STATE(47)] = 661,
  [SMALL_STATE(48)] = 669,
  [SMALL_STATE(49)] = 679,
  [SMALL_STATE(50)] = 689,
  [SMALL_STATE(51)] = 697,
  [SMALL_STATE(52)] = 707,
  [SMALL_STATE(53)] = 717,
  [SMALL_STATE(54)] = 727,
  [SMALL_STATE(55)] = 734,
  [SMALL_STATE(56)] = 741,
  [SMALL_STATE(57)] = 748,
  [SMALL_STATE(58)] = 755,
  [SMALL_STATE(59)] = 762,
  [SMALL_STATE(60)] = 769,
  [SMALL_STATE(61)] = 776,
  [SMALL_STATE(62)] = 783,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 1, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(53),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(62),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14), SHIFT_REPEAT(61),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 14),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 9),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 9),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 17),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 17),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 16),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 16),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 10),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 7),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 1, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 19),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_due, 3, .production_id = 15),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_due, 3, .production_id = 15),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 12),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(41),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(41),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat2, 2), SHIFT_REPEAT(43),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat2, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 8),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 18),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 11),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
