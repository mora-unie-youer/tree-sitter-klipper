#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACK = 1,
  aux_sym_section_name_token1 = 2,
  anon_sym_RBRACK = 3,
  anon_sym_LF = 4,
  aux_sym_section_field_token1 = 5,
  anon_sym_COLON = 6,
  aux_sym_section_field_content_token1 = 7,
  aux_sym_section_field_content_token2 = 8,
  sym_comment = 9,
  sym_source_file = 10,
  sym_section = 11,
  sym_section_name = 12,
  sym_section_field = 13,
  sym_section_field_content = 14,
  aux_sym_source_file_repeat1 = 15,
  aux_sym_section_repeat1 = 16,
  aux_sym_section_field_content_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_name_token1] = "text",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LF] = "\n",
  [aux_sym_section_field_token1] = "name",
  [anon_sym_COLON] = ":",
  [aux_sym_section_field_content_token1] = "section_field_content_token1",
  [aux_sym_section_field_content_token2] = "section_field_content_token2",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_section_field] = "section_field",
  [sym_section_field_content] = "value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_section_field_content_repeat1] = "section_field_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_section_field_token1] = aux_sym_section_field_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_section_field_content_token1] = aux_sym_section_field_content_token1,
  [aux_sym_section_field_content_token2] = aux_sym_section_field_content_token2,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym_section_field] = sym_section_field,
  [sym_section_field_content] = sym_section_field_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_section_field_content_repeat1] = aux_sym_section_field_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_name_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_field_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_field_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_field_content_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_field] = {
    .visible = true,
    .named = true,
  },
  [sym_section_field_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_field_content_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(18);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(18);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_section_field_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_section_field_content_token1);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_section_field_content_token1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_section_field_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_section_field_content_token2);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_section] = STATE(5),
    [sym_section_name] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      aux_sym_section_field_token1,
    ACTIONS(16), 1,
      sym_comment,
    STATE(2), 2,
      sym_section_field,
      aux_sym_section_repeat1,
  [17] = 5,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      aux_sym_section_field_content_token2,
    STATE(3), 1,
      aux_sym_section_field_content_repeat1,
    ACTIONS(20), 2,
      anon_sym_LBRACK,
      aux_sym_section_field_token1,
  [34] = 5,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      aux_sym_section_field_token1,
    STATE(8), 2,
      sym_section_field,
      aux_sym_section_repeat1,
  [51] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_section_name,
    STATE(9), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [68] = 5,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_section_field_content_token2,
    STATE(3), 1,
      aux_sym_section_field_content_repeat1,
    ACTIONS(35), 2,
      anon_sym_LBRACK,
      aux_sym_section_field_token1,
  [85] = 5,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_section_field_content_token2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_section_field_content_repeat1,
    ACTIONS(41), 2,
      anon_sym_LBRACK,
      aux_sym_section_field_token1,
  [102] = 5,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym_section_field_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    STATE(2), 2,
      sym_section_field,
      aux_sym_section_repeat1,
  [119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_section_name,
    STATE(9), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [136] = 3,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 3,
      anon_sym_LBRACK,
      aux_sym_section_field_token1,
      aux_sym_section_field_content_token2,
  [148] = 3,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      aux_sym_section_field_token1,
  [159] = 3,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      aux_sym_section_field_token1,
  [170] = 3,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym_section_field_content_token1,
    STATE(11), 1,
      sym_section_field_content,
  [180] = 2,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_section_name_token1,
  [187] = 2,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LF,
  [194] = 2,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LF,
  [201] = 2,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym_section_field_content_token1,
  [208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_COLON,
  [215] = 2,
    ACTIONS(16), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LF,
  [222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
  [229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 159,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 194,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 208,
  [SMALL_STATE(19)] = 215,
  [SMALL_STATE(20)] = 222,
  [SMALL_STATE(21)] = 229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(18),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_field_content_repeat1, 2),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_field_content_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_field_content_repeat1, 2), SHIFT_REPEAT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_field_content, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_field_content, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_field_content, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_field_content, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_field_content_repeat1, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_field_content_repeat1, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_field, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_field, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_name, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_klipper(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
