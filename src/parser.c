#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 1
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACK = 1,
  aux_sym_section_name_token1 = 2,
  anon_sym_RBRACK = 3,
  anon_sym_COLON = 4,
  sym_field_name = 5,
  aux_sym_field_value_token1 = 6,
  aux_sym_field_value_token2 = 7,
  sym_comment = 8,
  sym_document = 9,
  sym_section = 10,
  sym_section_name = 11,
  sym_field = 12,
  sym_field_value = 13,
  aux_sym_document_repeat1 = 14,
  aux_sym_section_repeat1 = 15,
  aux_sym_field_value_repeat1 = 16,
  alias_sym_section_body = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_name_token1] = "text",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [sym_field_name] = "field_name",
  [aux_sym_field_value_token1] = "field_value_token1",
  [aux_sym_field_value_token2] = "field_value_token2",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_field] = "field",
  [sym_field_value] = "field_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_field_value_repeat1] = "field_value_repeat1",
  [alias_sym_section_body] = "section_body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_field_name] = sym_field_name,
  [aux_sym_field_value_token1] = aux_sym_field_value_token1,
  [aux_sym_field_value_token2] = aux_sym_field_value_token2,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym_field] = sym_field,
  [sym_field_value] = sym_field_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_field_value_repeat1] = aux_sym_field_value_repeat1,
  [alias_sym_section_body] = alias_sym_section_body,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_field_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
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
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_section_body] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_section_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_section_repeat1, 2,
    aux_sym_section_repeat1,
    alias_sym_section_body,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_field_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_field_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_field_value_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 12},
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
    [sym_document] = STATE(16),
    [sym_section] = STATE(3),
    [sym_section_name] = STATE(2),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_field_name,
    STATE(4), 1,
      aux_sym_section_repeat1,
    STATE(11), 1,
      sym_field,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [17] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_section_name,
    STATE(5), 2,
      sym_section,
      aux_sym_document_repeat1,
  [34] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_field_name,
    STATE(6), 1,
      aux_sym_section_repeat1,
    STATE(11), 1,
      sym_field,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [51] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_section_name,
    STATE(5), 2,
      sym_section,
      aux_sym_document_repeat1,
  [68] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym_field_name,
    STATE(6), 1,
      aux_sym_section_repeat1,
    STATE(11), 1,
      sym_field,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [85] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_field_value_token2,
    ACTIONS(33), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_field_value_repeat1,
    ACTIONS(29), 2,
      anon_sym_LBRACK,
      sym_field_name,
  [102] = 5,
    ACTIONS(31), 1,
      aux_sym_field_value_token2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_field_value_repeat1,
    ACTIONS(37), 2,
      anon_sym_LBRACK,
      sym_field_name,
  [119] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_field_value_token2,
    STATE(9), 1,
      aux_sym_field_value_repeat1,
    ACTIONS(41), 2,
      anon_sym_LBRACK,
      sym_field_name,
  [136] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_field_value_token2,
    ACTIONS(41), 2,
      anon_sym_LBRACK,
      sym_field_name,
  [148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_field_name,
  [157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_field_name,
  [166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_field_name,
  [175] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(52), 1,
      aux_sym_field_value_token1,
    STATE(13), 1,
      sym_field_value,
  [185] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_section_name_token1,
  [192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
  [206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COLON,
  [213] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(62), 1,
      aux_sym_field_value_token1,
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
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 166,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 206,
  [SMALL_STATE(19)] = 213,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_value, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_value, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_value_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_value_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_value_repeat1, 2), SHIFT_REPEAT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
