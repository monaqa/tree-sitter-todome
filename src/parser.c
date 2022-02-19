#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 69
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 17,
  [25] = 23,
  [26] = 15,
  [27] = 18,
  [28] = 21,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 47,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 63,
  [67] = 67,
  [68] = 68,
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
  [8] = {.lex_state = 17, .external_lex_state = 2},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17, .external_lex_state = 2},
  [11] = {.lex_state = 17, .external_lex_state = 3},
  [12] = {.lex_state = 17, .external_lex_state = 3},
  [13] = {.lex_state = 17, .external_lex_state = 3},
  [14] = {.lex_state = 17, .external_lex_state = 3},
  [15] = {.lex_state = 17, .external_lex_state = 2},
  [16] = {.lex_state = 17, .external_lex_state = 2},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17, .external_lex_state = 2},
  [21] = {.lex_state = 17, .external_lex_state = 2},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17, .external_lex_state = 2},
  [24] = {.lex_state = 17, .external_lex_state = 2},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17, .external_lex_state = 2},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17, .external_lex_state = 3},
  [30] = {.lex_state = 17, .external_lex_state = 3},
  [31] = {.lex_state = 17, .external_lex_state = 3},
  [32] = {.lex_state = 17, .external_lex_state = 3},
  [33] = {.lex_state = 17, .external_lex_state = 3},
  [34] = {.lex_state = 17, .external_lex_state = 3},
  [35] = {.lex_state = 17, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 3},
  [37] = {.lex_state = 17, .external_lex_state = 3},
  [38] = {.lex_state = 17, .external_lex_state = 3},
  [39] = {.lex_state = 3, .external_lex_state = 3},
  [40] = {.lex_state = 3, .external_lex_state = 3},
  [41] = {.lex_state = 3, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0, .external_lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 0, .external_lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 8},
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
    [sym_source_file] = STATE(62),
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym__task_line] = STATE(56),
    [sym__header_line] = STATE(47),
    [sym__memo_line] = STATE(6),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
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
    [sym_block] = STATE(24),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(7),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
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
    [sym_block] = STATE(27),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(7),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
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
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym_block] = STATE(17),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(8),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym_block] = STATE(18),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(8),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(56),
    [sym__header_line] = STATE(47),
    [sym__memo_line] = STATE(9),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(9),
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
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
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
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
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
    [sym__dedent] = ACTIONS(33),
  },
  [9] = {
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym__task_line] = STATE(56),
    [sym__header_line] = STATE(47),
    [sym__memo_line] = STATE(9),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__task_line_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_status_todo] = ACTIONS(46),
    [sym_status_doing] = ACTIONS(46),
    [sym_status_done] = ACTIONS(46),
    [sym_status_cancel] = ACTIONS(46),
    [sym_status_other] = ACTIONS(46),
    [sym_tag] = ACTIONS(49),
    [sym_memo] = ACTIONS(52),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(55),
  },
  [10] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(51),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(32),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_due] = STATE(31),
    [sym_keyval] = STATE(38),
    [sym_category] = STATE(37),
    [sym_text] = STATE(44),
    [sym__text_start] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym__task_line_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_status_todo] = ACTIONS(46),
    [sym_status_doing] = ACTIONS(46),
    [sym_status_done] = ACTIONS(46),
    [sym_status_cancel] = ACTIONS(46),
    [sym_status_other] = ACTIONS(46),
    [sym_tag] = ACTIONS(49),
    [sym_memo] = ACTIONS(58),
    [sym_whitespace] = ACTIONS(19),
    [sym__text_start_ptn] = ACTIONS(55),
    [sym__dedent] = ACTIONS(35),
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
    STATE(14), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym_due,
    STATE(32), 1,
      sym__meta,
    STATE(37), 1,
      sym_category,
    STATE(38), 1,
      sym_keyval,
    STATE(41), 1,
      sym__text_start,
    STATE(45), 1,
      sym_text,
    ACTIONS(63), 2,
      sym__newline,
      sym__indent,
  [50] = 16,
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
    ACTIONS(65), 1,
      sym_memo,
    STATE(11), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym_due,
    STATE(32), 1,
      sym__meta,
    STATE(37), 1,
      sym_category,
    STATE(38), 1,
      sym_keyval,
    STATE(41), 1,
      sym__text_start,
    STATE(42), 1,
      sym_text,
    ACTIONS(67), 2,
      sym__newline,
      sym__indent,
  [100] = 16,
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
    ACTIONS(69), 1,
      sym_memo,
    STATE(14), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym_due,
    STATE(32), 1,
      sym__meta,
    STATE(37), 1,
      sym_category,
    STATE(38), 1,
      sym_keyval,
    STATE(41), 1,
      sym__text_start,
    STATE(43), 1,
      sym_text,
    ACTIONS(71), 2,
      sym__newline,
      sym__indent,
  [150] = 12,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      sym__text_start_ptn,
    STATE(14), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym_due,
    STATE(32), 1,
      sym__meta,
    STATE(37), 1,
      sym_category,
    STATE(38), 1,
      sym_keyval,
    ACTIONS(82), 4,
      sym__newline,
      sym__indent,
      sym_tag,
      sym_memo,
  [190] = 3,
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
  [210] = 3,
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
  [230] = 3,
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
  [250] = 3,
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
  [270] = 3,
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
  [290] = 3,
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
  [310] = 3,
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
  [330] = 3,
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
  [350] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(112), 1,
      sym__text_start_ptn,
    ACTIONS(110), 11,
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
  [370] = 3,
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
  [390] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(112), 1,
      sym__text_start_ptn,
    ACTIONS(110), 11,
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
  [410] = 3,
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
  [430] = 3,
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
  [450] = 3,
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
  [470] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(116), 1,
      sym__text_start_ptn,
    ACTIONS(114), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [486] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(120), 1,
      sym__text_start_ptn,
    ACTIONS(118), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [502] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(124), 1,
      sym__text_start_ptn,
    ACTIONS(122), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [518] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(128), 1,
      sym__text_start_ptn,
    ACTIONS(126), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [534] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(132), 1,
      sym__text_start_ptn,
    ACTIONS(130), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [550] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(136), 1,
      sym__text_start_ptn,
    ACTIONS(134), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [566] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(140), 1,
      sym__text_start_ptn,
    ACTIONS(138), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [582] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(144), 1,
      sym__text_start_ptn,
    ACTIONS(142), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [598] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(148), 1,
      sym__text_start_ptn,
    ACTIONS(146), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [614] = 3,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(152), 1,
      sym__text_start_ptn,
    ACTIONS(150), 7,
      sym__newline,
      sym__indent,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_tag,
      sym_memo,
  [630] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(154), 1,
      sym_tag,
    ACTIONS(158), 1,
      sym__text_subsequent_ptn,
    STATE(40), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(156), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [649] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(160), 1,
      sym_tag,
    ACTIONS(165), 1,
      sym__text_subsequent_ptn,
    STATE(40), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(163), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [668] = 5,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(168), 1,
      sym_tag,
    ACTIONS(172), 1,
      sym__text_subsequent_ptn,
    STATE(39), 2,
      sym__text_subsequent,
      aux_sym_text_repeat1,
    ACTIONS(170), 3,
      sym__newline,
      sym__indent,
      sym_memo,
  [687] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(174), 1,
      sym_memo,
    ACTIONS(176), 2,
      sym__newline,
      sym__indent,
  [698] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(178), 1,
      sym_memo,
    ACTIONS(180), 2,
      sym__newline,
      sym__indent,
  [709] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(182), 1,
      sym_memo,
    ACTIONS(184), 2,
      sym__newline,
      sym__indent,
  [720] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(186), 1,
      sym_memo,
    ACTIONS(188), 2,
      sym__newline,
      sym__indent,
  [731] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(190), 2,
      sym__newline,
      sym__indent,
  [739] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(192), 1,
      sym__newline,
    ACTIONS(194), 1,
      sym__indent,
  [749] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(196), 2,
      sym__newline,
      sym__indent,
  [757] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(198), 2,
      sym__newline,
      sym__indent,
  [765] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(200), 2,
      sym__newline,
      sym__indent,
  [773] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(202), 1,
      sym__newline,
    ACTIONS(204), 1,
      sym__indent,
  [783] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(206), 1,
      sym__newline,
    ACTIONS(208), 1,
      sym__indent,
  [793] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(210), 2,
      sym__newline,
      sym__indent,
  [801] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(212), 1,
      sym_date_value,
    ACTIONS(214), 1,
      sym_priority_inner,
  [811] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(63), 2,
      sym__newline,
      sym__indent,
  [819] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(216), 1,
      sym__newline,
    ACTIONS(218), 1,
      sym__indent,
  [829] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(220), 2,
      sym__newline,
      sym__indent,
  [837] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(222), 1,
      anon_sym_COLON,
  [844] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [851] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
  [858] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
  [865] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [872] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(232), 1,
      sym__newline,
  [879] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
  [886] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(236), 1,
      sym_value,
  [893] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(238), 1,
      sym__newline,
  [900] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(240), 1,
      sym_category_name,
  [907] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(242), 1,
      sym_key,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 50,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 290,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 330,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 390,
  [SMALL_STATE(26)] = 410,
  [SMALL_STATE(27)] = 430,
  [SMALL_STATE(28)] = 450,
  [SMALL_STATE(29)] = 470,
  [SMALL_STATE(30)] = 486,
  [SMALL_STATE(31)] = 502,
  [SMALL_STATE(32)] = 518,
  [SMALL_STATE(33)] = 534,
  [SMALL_STATE(34)] = 550,
  [SMALL_STATE(35)] = 566,
  [SMALL_STATE(36)] = 582,
  [SMALL_STATE(37)] = 598,
  [SMALL_STATE(38)] = 614,
  [SMALL_STATE(39)] = 630,
  [SMALL_STATE(40)] = 649,
  [SMALL_STATE(41)] = 668,
  [SMALL_STATE(42)] = 687,
  [SMALL_STATE(43)] = 698,
  [SMALL_STATE(44)] = 709,
  [SMALL_STATE(45)] = 720,
  [SMALL_STATE(46)] = 731,
  [SMALL_STATE(47)] = 739,
  [SMALL_STATE(48)] = 749,
  [SMALL_STATE(49)] = 757,
  [SMALL_STATE(50)] = 765,
  [SMALL_STATE(51)] = 773,
  [SMALL_STATE(52)] = 783,
  [SMALL_STATE(53)] = 793,
  [SMALL_STATE(54)] = 801,
  [SMALL_STATE(55)] = 811,
  [SMALL_STATE(56)] = 819,
  [SMALL_STATE(57)] = 829,
  [SMALL_STATE(58)] = 837,
  [SMALL_STATE(59)] = 844,
  [SMALL_STATE(60)] = 851,
  [SMALL_STATE(61)] = 858,
  [SMALL_STATE(62)] = 865,
  [SMALL_STATE(63)] = 872,
  [SMALL_STATE(64)] = 879,
  [SMALL_STATE(65)] = 886,
  [SMALL_STATE(66)] = 893,
  [SMALL_STATE(67)] = 900,
  [SMALL_STATE(68)] = 907,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(54),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(68),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(67),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 8),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 8),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 14),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 14),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 13),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 13),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 9),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 9),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__memo_line, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__memo_line, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 16),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 16),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 1, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 1, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_due, 3, .production_id = 12),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_due, 3, .production_id = 12),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3, .production_id = 12),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3, .production_id = 12),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 10),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 11),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 15),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 7),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 3, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 11),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 4, .production_id = 15),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 10),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
