#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 25

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_TILDE = 3,
  anon_sym_BANG = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COLON = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  sym_status_todo = 10,
  sym_status_doing = 11,
  sym_status_done = 12,
  sym_status_cancel = 13,
  sym_status_other = 14,
  sym_tag = 15,
  sym_date_value = 16,
  sym_key = 17,
  sym_value = 18,
  sym_priority_inner = 19,
  sym_category_name = 20,
  sym_memo = 21,
  sym_whitespace = 22,
  sym__text_start_ptn = 23,
  sym__text_subsequent_ptn = 24,
  sym__newline = 25,
  sym__indent = 26,
  sym__dedent = 27,
  sym_source_file = 28,
  sym_task = 29,
  sym_header = 30,
  sym_block = 31,
  sym__task_line = 32,
  sym__header_line = 33,
  sym__memo_line = 34,
  sym__meta = 35,
  sym_status = 36,
  sym_priority = 37,
  sym_date = 38,
  sym__date_inner = 39,
  sym_keyval = 40,
  sym_category = 41,
  sym_text = 42,
  sym__text_start = 43,
  sym__text_subsequent = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym__task_line_repeat1 = 46,
  aux_sym_text_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
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
  [sym_date] = "date",
  [sym__date_inner] = "_date_inner",
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
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
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
  [sym_date] = sym_date,
  [sym__date_inner] = sym__date_inner,
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym__date_inner] = {
    .visible = false,
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
  field_date = 3,
  field_deadline = 4,
  field_key = 5,
  field_keyval = 6,
  field_priority = 7,
  field_start = 8,
  field_status = 9,
  field_target = 10,
  field_text = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_category] = "category",
  [field_children] = "children",
  [field_date] = "date",
  [field_deadline] = "deadline",
  [field_key] = "key",
  [field_keyval] = "keyval",
  [field_priority] = "priority",
  [field_start] = "start",
  [field_status] = "status",
  [field_target] = "target",
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
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 3},
  [17] = {.index = 23, .length = 3},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_category, 0, .inherited = true},
    {field_date, 0, .inherited = true},
    {field_keyval, 0, .inherited = true},
    {field_priority, 0, .inherited = true},
  [4] =
    {field_status, 0},
  [5] =
    {field_priority, 0},
  [6] =
    {field_date, 0},
  [7] =
    {field_keyval, 0},
  [8] =
    {field_category, 0},
  [9] =
    {field_text, 0},
  [10] =
    {field_target, 0},
  [11] =
    {field_status, 0, .inherited = true},
    {field_text, 0, .inherited = true},
  [13] =
    {field_status, 0, .inherited = true},
  [14] =
    {field_status, 0},
    {field_text, 1},
  [16] =
    {field_text, 1},
  [17] =
    {field_start, 0},
  [18] =
    {field_deadline, 0},
  [19] =
    {field_value, 1},
  [20] =
    {field_deadline, 1, .inherited = true},
    {field_start, 1, .inherited = true},
    {field_target, 1, .inherited = true},
  [23] =
    {field_children, 2},
    {field_status, 0, .inherited = true},
    {field_text, 0, .inherited = true},
  [26] =
    {field_children, 2},
    {field_status, 0, .inherited = true},
  [28] =
    {field_status, 0},
    {field_text, 2},
  [30] =
    {field_start, 0},
    {field_target, 2},
  [32] =
    {field_deadline, 2},
    {field_start, 0},
  [34] =
    {field_deadline, 2},
    {field_target, 0},
  [36] =
    {field_key, 1},
    {field_value, 3},
  [38] =
    {field_deadline, 4},
    {field_start, 0},
    {field_target, 2},
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 16,
  [24] = 21,
  [25] = 25,
  [26] = 19,
  [27] = 18,
  [28] = 25,
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
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 74,
  [79] = 79,
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
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(42);
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
          lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(49);
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
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_status_todo);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_status_doing);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_status_done);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_status_cancel);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_status_other);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_date_value);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_value);
      if (!sym_value_character_set_1(lookahead)) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_priority_inner);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_category_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_memo);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__text_start_ptn);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__text_start_ptn);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__text_start_ptn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__text_subsequent_ptn);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__text_subsequent_ptn);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__text_subsequent_ptn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(52);
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
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17, .external_lex_state = 2},
  [18] = {.lex_state = 17, .external_lex_state = 2},
  [19] = {.lex_state = 17, .external_lex_state = 2},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
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
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0, .external_lex_state = 4},
  [79] = {.lex_state = 4},
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
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
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
    [sym_source_file] = STATE(77),
    [sym_task] = STATE(6),
    [sym_header] = STATE(6),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(60),
    [sym__memo_line] = STATE(6),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
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
    [sym_block] = STATE(16),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(58),
    [sym__memo_line] = STATE(7),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
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
    [sym_block] = STATE(21),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(58),
    [sym__memo_line] = STATE(7),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
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
    [sym_task] = STATE(9),
    [sym_header] = STATE(9),
    [sym_block] = STATE(24),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(58),
    [sym__memo_line] = STATE(9),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
    [sym__text_start] = STATE(41),
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
    [sym_block] = STATE(23),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(58),
    [sym__memo_line] = STATE(9),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
    [sym__text_start] = STATE(41),
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
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(60),
    [sym__memo_line] = STATE(8),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
    [sym__text_start] = STATE(41),
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
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(58),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
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
    [sym_task] = STATE(8),
    [sym_header] = STATE(8),
    [sym__task_line] = STATE(52),
    [sym__header_line] = STATE(60),
    [sym__memo_line] = STATE(8),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
    [sym__text_start] = STATE(41),
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
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(58),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
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
    [sym__dedent] = ACTIONS(56),
  },
  [10] = {
    [sym_task] = STATE(10),
    [sym_header] = STATE(10),
    [sym__task_line] = STATE(51),
    [sym__header_line] = STATE(58),
    [sym__memo_line] = STATE(10),
    [sym__meta] = STATE(34),
    [sym_status] = STATE(12),
    [sym_priority] = STATE(30),
    [sym_date] = STATE(36),
    [sym_keyval] = STATE(33),
    [sym_category] = STATE(31),
    [sym_text] = STATE(46),
    [sym__text_start] = STATE(41),
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
    STATE(14), 1,
      aux_sym__task_line_repeat1,
    STATE(30), 1,
      sym_priority,
    STATE(31), 1,
      sym_category,
    STATE(33), 1,
      sym_keyval,
    STATE(34), 1,
      sym__meta,
    STATE(36), 1,
      sym_date,
    STATE(41), 1,
      sym__text_start,
    STATE(44), 1,
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
      sym_category,
    STATE(33), 1,
      sym_keyval,
    STATE(34), 1,
      sym__meta,
    STATE(36), 1,
      sym_date,
    STATE(41), 1,
      sym__text_start,
    STATE(47), 1,
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
      sym_category,
    STATE(33), 1,
      sym_keyval,
    STATE(34), 1,
      sym__meta,
    STATE(36), 1,
      sym_date,
    STATE(41), 1,
      sym__text_start,
    STATE(42), 1,
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
      sym_category,
    STATE(33), 1,
      sym_keyval,
    STATE(34), 1,
      sym__meta,
    STATE(36), 1,
      sym_date,
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
  [210] = 3,
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
  [230] = 3,
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
  [250] = 3,
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
  [270] = 3,
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
  [290] = 3,
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
  [310] = 3,
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
  [330] = 3,
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
  [350] = 3,
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
  [370] = 3,
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
  [430] = 3,
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
  [450] = 3,
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
  [698] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(178), 1,
      sym_date_value,
    ACTIONS(180), 1,
      sym_priority_inner,
    STATE(75), 1,
      sym__date_inner,
  [711] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(182), 1,
      sym_memo,
    ACTIONS(184), 2,
      sym__newline,
      sym__indent,
  [722] = 4,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_TILDE,
    ACTIONS(190), 1,
      anon_sym_BANG,
    ACTIONS(192), 1,
      sym_whitespace,
  [735] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(194), 1,
      sym_memo,
    ACTIONS(196), 2,
      sym__newline,
      sym__indent,
  [746] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(198), 1,
      sym_memo,
    ACTIONS(200), 2,
      sym__newline,
      sym__indent,
  [757] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(202), 2,
      sym__newline,
      sym__indent,
  [765] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 1,
      sym_date_value,
  [775] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(63), 2,
      sym__newline,
      sym__indent,
  [783] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(208), 1,
      sym__newline,
    ACTIONS(210), 1,
      sym__indent,
  [793] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(212), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym__indent,
  [803] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(216), 2,
      sym__newline,
      sym__indent,
  [811] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(218), 2,
      sym__newline,
      sym__indent,
  [819] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(220), 2,
      sym__newline,
      sym__indent,
  [827] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(222), 2,
      sym__newline,
      sym__indent,
  [835] = 3,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      sym_whitespace,
  [845] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(230), 1,
      sym__newline,
    ACTIONS(232), 1,
      sym__indent,
  [855] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(234), 2,
      sym__newline,
      sym__indent,
  [863] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(236), 1,
      sym__newline,
    ACTIONS(238), 1,
      sym__indent,
  [873] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
  [880] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
  [887] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
  [894] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(246), 1,
      anon_sym_BANG,
  [901] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [908] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(250), 1,
      sym_value,
  [915] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(252), 1,
      anon_sym_BANG,
  [922] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
  [929] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(256), 1,
      sym_date_value,
  [936] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(258), 1,
      sym_key,
  [943] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(260), 1,
      sym_date_value,
  [950] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
  [957] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(264), 1,
      anon_sym_COLON,
  [964] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(266), 1,
      sym__newline,
  [971] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [978] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
  [985] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [992] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(274), 1,
      sym__newline,
  [999] = 2,
    ACTIONS(19), 1,
      sym_whitespace,
    ACTIONS(276), 1,
      sym_category_name,
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
  [SMALL_STATE(44)] = 711,
  [SMALL_STATE(45)] = 722,
  [SMALL_STATE(46)] = 735,
  [SMALL_STATE(47)] = 746,
  [SMALL_STATE(48)] = 757,
  [SMALL_STATE(49)] = 765,
  [SMALL_STATE(50)] = 775,
  [SMALL_STATE(51)] = 783,
  [SMALL_STATE(52)] = 793,
  [SMALL_STATE(53)] = 803,
  [SMALL_STATE(54)] = 811,
  [SMALL_STATE(55)] = 819,
  [SMALL_STATE(56)] = 827,
  [SMALL_STATE(57)] = 835,
  [SMALL_STATE(58)] = 845,
  [SMALL_STATE(59)] = 855,
  [SMALL_STATE(60)] = 863,
  [SMALL_STATE(61)] = 873,
  [SMALL_STATE(62)] = 880,
  [SMALL_STATE(63)] = 887,
  [SMALL_STATE(64)] = 894,
  [SMALL_STATE(65)] = 901,
  [SMALL_STATE(66)] = 908,
  [SMALL_STATE(67)] = 915,
  [SMALL_STATE(68)] = 922,
  [SMALL_STATE(69)] = 929,
  [SMALL_STATE(70)] = 936,
  [SMALL_STATE(71)] = 943,
  [SMALL_STATE(72)] = 950,
  [SMALL_STATE(73)] = 957,
  [SMALL_STATE(74)] = 964,
  [SMALL_STATE(75)] = 971,
  [SMALL_STATE(76)] = 978,
  [SMALL_STATE(77)] = 985,
  [SMALL_STATE(78)] = 992,
  [SMALL_STATE(79)] = 999,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 1),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(43),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(70),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2), SHIFT_REPEAT(79),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, .production_id = 10),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, .production_id = 10),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 18),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 18),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, .production_id = 9),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2, .production_id = 9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__memo_line, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__memo_line, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, .production_id = 17),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, .production_id = 17),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 3, .production_id = 15),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 3, .production_id = 15),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 6),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyval, 5, .production_id = 23),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyval, 5, .production_id = 23),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_line_repeat1, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__task_line_repeat1, 1, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, .production_id = 16),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, .production_id = 16),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta, 1, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta, 1, .production_id = 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 12),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 19),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_inner, 1, .production_id = 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 1, .production_id = 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 11),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_inner, 2, .production_id = 13),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 2, .production_id = 7),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 11),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_line, 3, .production_id = 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 3, .production_id = 12),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_inner, 3, .production_id = 20),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task_line, 4, .production_id = 19),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_inner, 2, .production_id = 14),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_inner, 4, .production_id = 22),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_inner, 6, .production_id = 24),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_inner, 4, .production_id = 21),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [272] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
