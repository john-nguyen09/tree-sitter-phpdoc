#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym__name = 1,
  sym__begin = 2,
  anon_sym_ATauthor = 3,
  anon_sym_LT = 4,
  anon_sym_GT = 5,
  anon_sym_ATdeprecated = 6,
  anon_sym_ATsince = 7,
  anon_sym_ATglobal = 8,
  anon_sym_ATinternal = 9,
  anon_sym_ATlink = 10,
  anon_sym_ATmethod = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_ATparam = 14,
  anon_sym_ATproperty = 15,
  anon_sym_ATproperty_DASHread = 16,
  anon_sym_ATproperty_DASHwrite = 17,
  anon_sym_ATreturn = 18,
  anon_sym_ATsee = 19,
  anon_sym_ATthrows = 20,
  sym_author_name = 21,
  sym_email_address = 22,
  anon_sym_ATapi = 23,
  anon_sym_ATcategory = 24,
  anon_sym_ATcopyright = 25,
  anon_sym_ATexample = 26,
  anon_sym_ATfilesource = 27,
  anon_sym_ATignore = 28,
  anon_sym_ATlicense = 29,
  anon_sym_ATpackage = 30,
  anon_sym_ATsource = 31,
  anon_sym_ATsubpackage = 32,
  anon_sym_ATtodo = 33,
  anon_sym_ATuses = 34,
  anon_sym_ATvar = 35,
  anon_sym_ATversion = 36,
  anon_sym_LF = 37,
  anon_sym_CR_LF = 38,
  sym_text = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  sym_version = 42,
  sym_uri = 43,
  anon_sym_PIPE = 44,
  anon_sym_LBRACK_RBRACK = 45,
  anon_sym_BSLASH = 46,
  sym_static = 47,
  anon_sym_DOLLAR = 48,
  sym__end = 49,
  sym_document = 50,
  sym_tag = 51,
  sym__author_tag = 52,
  sym__version_tag = 53,
  sym__global_tag = 54,
  sym__internal_tag = 55,
  sym__internal_inline_tag = 56,
  sym__link_tag = 57,
  sym__link_inline_tag = 58,
  sym__method_tag = 59,
  sym__variable_tag_with_type = 60,
  sym__return_tag = 61,
  sym__see_tag = 62,
  sym__see_inline_tag = 63,
  sym__throws_tag = 64,
  sym_tag_name = 65,
  sym_description = 66,
  sym_text_line = 67,
  sym_inline_tag = 68,
  sym__type_name = 69,
  sym_param = 70,
  sym_qualified_name = 71,
  sym__namespace_name = 72,
  sym__namespace_name_as_prefix = 73,
  sym_variable_name = 74,
  aux_sym_document_repeat1 = 75,
  aux_sym__method_tag_repeat1 = 76,
  aux_sym_description_repeat1 = 77,
  aux_sym_text_line_repeat1 = 78,
  aux_sym__type_name_repeat1 = 79,
  aux_sym__namespace_name_repeat1 = 80,
  alias_sym_name = 81,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__name] = "_name",
  [sym__begin] = "_begin",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATdeprecated] = "tag_name",
  [anon_sym_ATsince] = "tag_name",
  [anon_sym_ATglobal] = "tag_name",
  [anon_sym_ATinternal] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [anon_sym_ATmethod] = "tag_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ATparam] = "tag_name",
  [anon_sym_ATproperty] = "tag_name",
  [anon_sym_ATproperty_DASHread] = "tag_name",
  [anon_sym_ATproperty_DASHwrite] = "tag_name",
  [anon_sym_ATreturn] = "tag_name",
  [anon_sym_ATsee] = "tag_name",
  [anon_sym_ATthrows] = "tag_name",
  [sym_author_name] = "author_name",
  [sym_email_address] = "email_address",
  [anon_sym_ATapi] = "@api",
  [anon_sym_ATcategory] = "@category",
  [anon_sym_ATcopyright] = "@copyright",
  [anon_sym_ATexample] = "@example",
  [anon_sym_ATfilesource] = "@filesource",
  [anon_sym_ATignore] = "@ignore",
  [anon_sym_ATlicense] = "@license",
  [anon_sym_ATpackage] = "@package",
  [anon_sym_ATsource] = "@source",
  [anon_sym_ATsubpackage] = "@subpackage",
  [anon_sym_ATtodo] = "@todo",
  [anon_sym_ATuses] = "@uses",
  [anon_sym_ATvar] = "@var",
  [anon_sym_ATversion] = "@version",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_version] = "version",
  [sym_uri] = "uri",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_BSLASH] = "\\",
  [sym_static] = "static",
  [anon_sym_DOLLAR] = "$",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_tag] = "tag",
  [sym__author_tag] = "_author_tag",
  [sym__version_tag] = "_version_tag",
  [sym__global_tag] = "_global_tag",
  [sym__internal_tag] = "_internal_tag",
  [sym__internal_inline_tag] = "_internal_inline_tag",
  [sym__link_tag] = "_link_tag",
  [sym__link_inline_tag] = "_link_inline_tag",
  [sym__method_tag] = "_method_tag",
  [sym__variable_tag_with_type] = "_variable_tag_with_type",
  [sym__return_tag] = "_return_tag",
  [sym__see_tag] = "_see_tag",
  [sym__see_inline_tag] = "_see_inline_tag",
  [sym__throws_tag] = "_throws_tag",
  [sym_tag_name] = "tag_name",
  [sym_description] = "description",
  [sym_text_line] = "text_line",
  [sym_inline_tag] = "inline_tag",
  [sym__type_name] = "_type_name",
  [sym_param] = "param",
  [sym_qualified_name] = "type",
  [sym__namespace_name] = "_namespace_name",
  [sym__namespace_name_as_prefix] = "_namespace_name_as_prefix",
  [sym_variable_name] = "variable_name",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__method_tag_repeat1] = "_method_tag_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_text_line_repeat1] = "text_line_repeat1",
  [aux_sym__type_name_repeat1] = "_type_name_repeat1",
  [aux_sym__namespace_name_repeat1] = "_namespace_name_repeat1",
  [alias_sym_name] = "name",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__name] = sym__name,
  [sym__begin] = sym__begin,
  [anon_sym_ATauthor] = sym_tag_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ATdeprecated] = sym_tag_name,
  [anon_sym_ATsince] = sym_tag_name,
  [anon_sym_ATglobal] = sym_tag_name,
  [anon_sym_ATinternal] = sym_tag_name,
  [anon_sym_ATlink] = sym_tag_name,
  [anon_sym_ATmethod] = sym_tag_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ATparam] = sym_tag_name,
  [anon_sym_ATproperty] = sym_tag_name,
  [anon_sym_ATproperty_DASHread] = sym_tag_name,
  [anon_sym_ATproperty_DASHwrite] = sym_tag_name,
  [anon_sym_ATreturn] = sym_tag_name,
  [anon_sym_ATsee] = sym_tag_name,
  [anon_sym_ATthrows] = sym_tag_name,
  [sym_author_name] = sym_author_name,
  [sym_email_address] = sym_email_address,
  [anon_sym_ATapi] = anon_sym_ATapi,
  [anon_sym_ATcategory] = anon_sym_ATcategory,
  [anon_sym_ATcopyright] = anon_sym_ATcopyright,
  [anon_sym_ATexample] = anon_sym_ATexample,
  [anon_sym_ATfilesource] = anon_sym_ATfilesource,
  [anon_sym_ATignore] = anon_sym_ATignore,
  [anon_sym_ATlicense] = anon_sym_ATlicense,
  [anon_sym_ATpackage] = anon_sym_ATpackage,
  [anon_sym_ATsource] = anon_sym_ATsource,
  [anon_sym_ATsubpackage] = anon_sym_ATsubpackage,
  [anon_sym_ATtodo] = anon_sym_ATtodo,
  [anon_sym_ATuses] = anon_sym_ATuses,
  [anon_sym_ATvar] = anon_sym_ATvar,
  [anon_sym_ATversion] = anon_sym_ATversion,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_version] = sym_version,
  [sym_uri] = sym_uri,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_static] = sym_static,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym__end] = sym__end,
  [sym_document] = sym_document,
  [sym_tag] = sym_tag,
  [sym__author_tag] = sym__author_tag,
  [sym__version_tag] = sym__version_tag,
  [sym__global_tag] = sym__global_tag,
  [sym__internal_tag] = sym__internal_tag,
  [sym__internal_inline_tag] = sym__internal_inline_tag,
  [sym__link_tag] = sym__link_tag,
  [sym__link_inline_tag] = sym__link_inline_tag,
  [sym__method_tag] = sym__method_tag,
  [sym__variable_tag_with_type] = sym__variable_tag_with_type,
  [sym__return_tag] = sym__return_tag,
  [sym__see_tag] = sym__see_tag,
  [sym__see_inline_tag] = sym__see_inline_tag,
  [sym__throws_tag] = sym__throws_tag,
  [sym_tag_name] = sym_tag_name,
  [sym_description] = sym_description,
  [sym_text_line] = sym_text_line,
  [sym_inline_tag] = sym_inline_tag,
  [sym__type_name] = sym__type_name,
  [sym_param] = sym_param,
  [sym_qualified_name] = sym_qualified_name,
  [sym__namespace_name] = sym__namespace_name,
  [sym__namespace_name_as_prefix] = sym__namespace_name_as_prefix,
  [sym_variable_name] = sym_variable_name,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__method_tag_repeat1] = aux_sym__method_tag_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_text_line_repeat1] = aux_sym_text_line_repeat1,
  [aux_sym__type_name_repeat1] = aux_sym__type_name_repeat1,
  [aux_sym__namespace_name_repeat1] = aux_sym__namespace_name_repeat1,
  [alias_sym_name] = alias_sym_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATauthor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdeprecated] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsince] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATglobal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATinternal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATmethod] = {
    .visible = true,
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
  [anon_sym_ATparam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty_DASHread] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty_DASHwrite] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsee] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATthrows] = {
    .visible = true,
    .named = true,
  },
  [sym_author_name] = {
    .visible = true,
    .named = true,
  },
  [sym_email_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATapi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcategory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcopyright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATexample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfilesource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATignore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATlicense] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsubpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATtodo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__author_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__version_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__global_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__internal_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__internal_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__method_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_tag_with_type] = {
    .visible = false,
    .named = true,
  },
  [sym__return_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__see_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__see_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__throws_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__type_name] = {
    .visible = false,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym__namespace_name] = {
    .visible = false,
    .named = true,
  },
  [sym__namespace_name_as_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__method_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__namespace_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_description,
  },
  [2] = {
    [1] = alias_sym_name,
  },
  [3] = {
    [2] = sym_description,
  },
  [4] = {
    [2] = alias_sym_name,
  },
  [5] = {
    [3] = alias_sym_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(164)
      if (lookahead == '\r') SKIP(164)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '}') ADVANCE(208);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '|') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '@') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '@') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == ' ') SKIP(14)
      if (lookahead == '*') SKIP(14)
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '*') SKIP(15)
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') SKIP(16)
      if (lookahead == '*') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '}') ADVANCE(208);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '}') ADVANCE(208);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(166);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(214);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 156:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      if (lookahead == '\t') SKIP(164)
      if (lookahead == '\n') SKIP(164)
      if (lookahead == '\r') SKIP(164)
      if (lookahead == ' ') SKIP(164)
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '}') ADVANCE(208);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(15);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(203);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(4)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(4)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '*') SKIP(4)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_static);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ATdeprecated] = ACTIONS(1),
    [anon_sym_ATsince] = ACTIONS(1),
    [anon_sym_ATglobal] = ACTIONS(1),
    [anon_sym_ATinternal] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_ATmethod] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_ATproperty] = ACTIONS(1),
    [anon_sym_ATproperty_DASHread] = ACTIONS(1),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATthrows] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATpackage] = ACTIONS(1),
    [anon_sym_ATsource] = ACTIONS(1),
    [anon_sym_ATsubpackage] = ACTIONS(1),
    [anon_sym_ATtodo] = ACTIONS(1),
    [anon_sym_ATuses] = ACTIONS(1),
    [anon_sym_ATvar] = ACTIONS(1),
    [anon_sym_ATversion] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_static] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(97),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(6),
    [sym__author_tag] = STATE(43),
    [sym__version_tag] = STATE(43),
    [sym__global_tag] = STATE(43),
    [sym__internal_tag] = STATE(43),
    [sym__link_tag] = STATE(43),
    [sym__method_tag] = STATE(43),
    [sym__variable_tag_with_type] = STATE(43),
    [sym__return_tag] = STATE(43),
    [sym__see_tag] = STATE(43),
    [sym__throws_tag] = STATE(43),
    [sym_tag_name] = STATE(14),
    [sym_description] = STATE(5),
    [sym_text_line] = STATE(17),
    [sym_inline_tag] = STATE(58),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_description_repeat1] = STATE(17),
    [aux_sym_text_line_repeat1] = STATE(58),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATsince] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATapi] = ACTIONS(27),
    [anon_sym_ATcategory] = ACTIONS(27),
    [anon_sym_ATcopyright] = ACTIONS(27),
    [anon_sym_ATexample] = ACTIONS(27),
    [anon_sym_ATfilesource] = ACTIONS(27),
    [anon_sym_ATignore] = ACTIONS(27),
    [anon_sym_ATlicense] = ACTIONS(27),
    [anon_sym_ATpackage] = ACTIONS(27),
    [anon_sym_ATsource] = ACTIONS(27),
    [anon_sym_ATsubpackage] = ACTIONS(27),
    [anon_sym_ATtodo] = ACTIONS(27),
    [anon_sym_ATuses] = ACTIONS(27),
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATversion] = ACTIONS(27),
    [sym_text] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym__end] = ACTIONS(33),
  },
  [3] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(43),
    [sym__version_tag] = STATE(43),
    [sym__global_tag] = STATE(43),
    [sym__internal_tag] = STATE(43),
    [sym__link_tag] = STATE(43),
    [sym__method_tag] = STATE(43),
    [sym__variable_tag_with_type] = STATE(43),
    [sym__return_tag] = STATE(43),
    [sym__see_tag] = STATE(43),
    [sym__throws_tag] = STATE(43),
    [sym_tag_name] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATauthor] = ACTIONS(35),
    [anon_sym_ATdeprecated] = ACTIONS(38),
    [anon_sym_ATsince] = ACTIONS(38),
    [anon_sym_ATglobal] = ACTIONS(41),
    [anon_sym_ATinternal] = ACTIONS(44),
    [anon_sym_ATlink] = ACTIONS(47),
    [anon_sym_ATmethod] = ACTIONS(50),
    [anon_sym_ATparam] = ACTIONS(53),
    [anon_sym_ATproperty] = ACTIONS(56),
    [anon_sym_ATproperty_DASHread] = ACTIONS(53),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(53),
    [anon_sym_ATreturn] = ACTIONS(59),
    [anon_sym_ATsee] = ACTIONS(62),
    [anon_sym_ATthrows] = ACTIONS(65),
    [anon_sym_ATapi] = ACTIONS(68),
    [anon_sym_ATcategory] = ACTIONS(68),
    [anon_sym_ATcopyright] = ACTIONS(68),
    [anon_sym_ATexample] = ACTIONS(68),
    [anon_sym_ATfilesource] = ACTIONS(68),
    [anon_sym_ATignore] = ACTIONS(68),
    [anon_sym_ATlicense] = ACTIONS(68),
    [anon_sym_ATpackage] = ACTIONS(68),
    [anon_sym_ATsource] = ACTIONS(68),
    [anon_sym_ATsubpackage] = ACTIONS(68),
    [anon_sym_ATtodo] = ACTIONS(68),
    [anon_sym_ATuses] = ACTIONS(68),
    [anon_sym_ATvar] = ACTIONS(68),
    [anon_sym_ATversion] = ACTIONS(68),
    [sym__end] = ACTIONS(71),
  },
  [4] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(43),
    [sym__version_tag] = STATE(43),
    [sym__global_tag] = STATE(43),
    [sym__internal_tag] = STATE(43),
    [sym__link_tag] = STATE(43),
    [sym__method_tag] = STATE(43),
    [sym__variable_tag_with_type] = STATE(43),
    [sym__return_tag] = STATE(43),
    [sym__see_tag] = STATE(43),
    [sym__throws_tag] = STATE(43),
    [sym_tag_name] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATsince] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATapi] = ACTIONS(27),
    [anon_sym_ATcategory] = ACTIONS(27),
    [anon_sym_ATcopyright] = ACTIONS(27),
    [anon_sym_ATexample] = ACTIONS(27),
    [anon_sym_ATfilesource] = ACTIONS(27),
    [anon_sym_ATignore] = ACTIONS(27),
    [anon_sym_ATlicense] = ACTIONS(27),
    [anon_sym_ATpackage] = ACTIONS(27),
    [anon_sym_ATsource] = ACTIONS(27),
    [anon_sym_ATsubpackage] = ACTIONS(27),
    [anon_sym_ATtodo] = ACTIONS(27),
    [anon_sym_ATuses] = ACTIONS(27),
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATversion] = ACTIONS(27),
    [sym__end] = ACTIONS(73),
  },
  [5] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(43),
    [sym__version_tag] = STATE(43),
    [sym__global_tag] = STATE(43),
    [sym__internal_tag] = STATE(43),
    [sym__link_tag] = STATE(43),
    [sym__method_tag] = STATE(43),
    [sym__variable_tag_with_type] = STATE(43),
    [sym__return_tag] = STATE(43),
    [sym__see_tag] = STATE(43),
    [sym__throws_tag] = STATE(43),
    [sym_tag_name] = STATE(14),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATsince] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATapi] = ACTIONS(27),
    [anon_sym_ATcategory] = ACTIONS(27),
    [anon_sym_ATcopyright] = ACTIONS(27),
    [anon_sym_ATexample] = ACTIONS(27),
    [anon_sym_ATfilesource] = ACTIONS(27),
    [anon_sym_ATignore] = ACTIONS(27),
    [anon_sym_ATlicense] = ACTIONS(27),
    [anon_sym_ATpackage] = ACTIONS(27),
    [anon_sym_ATsource] = ACTIONS(27),
    [anon_sym_ATsubpackage] = ACTIONS(27),
    [anon_sym_ATtodo] = ACTIONS(27),
    [anon_sym_ATuses] = ACTIONS(27),
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATversion] = ACTIONS(27),
    [sym__end] = ACTIONS(75),
  },
  [6] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(43),
    [sym__version_tag] = STATE(43),
    [sym__global_tag] = STATE(43),
    [sym__internal_tag] = STATE(43),
    [sym__link_tag] = STATE(43),
    [sym__method_tag] = STATE(43),
    [sym__variable_tag_with_type] = STATE(43),
    [sym__return_tag] = STATE(43),
    [sym__see_tag] = STATE(43),
    [sym__throws_tag] = STATE(43),
    [sym_tag_name] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATsince] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(21),
    [anon_sym_ATsee] = ACTIONS(23),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATapi] = ACTIONS(27),
    [anon_sym_ATcategory] = ACTIONS(27),
    [anon_sym_ATcopyright] = ACTIONS(27),
    [anon_sym_ATexample] = ACTIONS(27),
    [anon_sym_ATfilesource] = ACTIONS(27),
    [anon_sym_ATignore] = ACTIONS(27),
    [anon_sym_ATlicense] = ACTIONS(27),
    [anon_sym_ATpackage] = ACTIONS(27),
    [anon_sym_ATsource] = ACTIONS(27),
    [anon_sym_ATsubpackage] = ACTIONS(27),
    [anon_sym_ATtodo] = ACTIONS(27),
    [anon_sym_ATuses] = ACTIONS(27),
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATversion] = ACTIONS(27),
    [sym__end] = ACTIONS(75),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_ATproperty,
    ACTIONS(81), 1,
      sym_version,
    STATE(32), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(77), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [54] = 7,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_ATproperty,
    STATE(31), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(83), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [105] = 7,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_ATproperty,
    STATE(33), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(87), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [156] = 7,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_ATproperty,
    STATE(30), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(91), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [207] = 7,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_ATproperty,
    STATE(35), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(95), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [258] = 7,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_ATproperty,
    STATE(37), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(99), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [309] = 7,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_ATproperty,
    STATE(38), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(103), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [360] = 7,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_ATproperty,
    STATE(45), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(107), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [411] = 5,
    ACTIONS(115), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    STATE(84), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(113), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(111), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [457] = 6,
    ACTIONS(122), 1,
      anon_sym_ATproperty,
    ACTIONS(124), 1,
      sym_text,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(120), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [505] = 6,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_ATproperty,
    STATE(16), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(130), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [553] = 4,
    ACTIONS(138), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(136), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(134), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [595] = 4,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(142), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(140), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [637] = 4,
    ACTIONS(138), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(149), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(147), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [679] = 3,
    ACTIONS(155), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(153), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(151), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [719] = 2,
    ACTIONS(142), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(140), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [756] = 2,
    ACTIONS(159), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(157), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [793] = 2,
    ACTIONS(153), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(151), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [830] = 2,
    ACTIONS(163), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(161), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [866] = 2,
    ACTIONS(167), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(165), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [902] = 2,
    ACTIONS(171), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(169), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [938] = 3,
    ACTIONS(175), 1,
      anon_sym_ATproperty,
    ACTIONS(177), 1,
      sym_author_name,
    ACTIONS(173), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [975] = 3,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      anon_sym_ATproperty,
    ACTIONS(179), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1012] = 2,
    ACTIONS(187), 1,
      anon_sym_ATproperty,
    ACTIONS(185), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1046] = 2,
    ACTIONS(191), 1,
      anon_sym_ATproperty,
    ACTIONS(189), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1080] = 2,
    ACTIONS(85), 1,
      anon_sym_ATproperty,
    ACTIONS(83), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1114] = 2,
    ACTIONS(195), 1,
      anon_sym_ATproperty,
    ACTIONS(193), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1148] = 2,
    ACTIONS(199), 1,
      anon_sym_ATproperty,
    ACTIONS(197), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1182] = 2,
    ACTIONS(203), 1,
      anon_sym_ATproperty,
    ACTIONS(201), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1216] = 2,
    ACTIONS(207), 1,
      anon_sym_ATproperty,
    ACTIONS(205), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1250] = 2,
    ACTIONS(211), 1,
      anon_sym_ATproperty,
    ACTIONS(209), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1284] = 2,
    ACTIONS(215), 1,
      anon_sym_ATproperty,
    ACTIONS(213), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1318] = 2,
    ACTIONS(219), 1,
      anon_sym_ATproperty,
    ACTIONS(217), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1352] = 2,
    ACTIONS(223), 1,
      anon_sym_ATproperty,
    ACTIONS(221), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1386] = 2,
    ACTIONS(227), 1,
      anon_sym_ATproperty,
    ACTIONS(225), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1420] = 2,
    ACTIONS(231), 1,
      anon_sym_ATproperty,
    ACTIONS(229), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1454] = 2,
    ACTIONS(109), 1,
      anon_sym_ATproperty,
    ACTIONS(107), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1488] = 2,
    ACTIONS(235), 1,
      anon_sym_ATproperty,
    ACTIONS(233), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1522] = 2,
    ACTIONS(239), 1,
      anon_sym_ATproperty,
    ACTIONS(237), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1556] = 2,
    ACTIONS(243), 1,
      anon_sym_ATproperty,
    ACTIONS(241), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1590] = 2,
    ACTIONS(247), 1,
      anon_sym_ATproperty,
    ACTIONS(245), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [1624] = 10,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_qualified_name,
    STATE(88), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
    STATE(53), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1656] = 10,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_qualified_name,
    STATE(88), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
    STATE(51), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1688] = 10,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_qualified_name,
    STATE(88), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
    STATE(48), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1720] = 10,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_qualified_name,
    STATE(88), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
    STATE(53), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1752] = 10,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_qualified_name,
    STATE(88), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
    STATE(53), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1784] = 10,
    ACTIONS(265), 1,
      sym__name,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_qualified_name,
    STATE(88), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
    STATE(53), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1816] = 10,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_qualified_name,
    STATE(88), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
    STATE(52), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
  [1848] = 7,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(278), 1,
      sym__name,
    ACTIONS(280), 1,
      sym_static,
    STATE(77), 1,
      sym_qualified_name,
    STATE(110), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
  [1870] = 5,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      sym_text,
    STATE(36), 1,
      sym_description,
    STATE(17), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(58), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1888] = 6,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      sym__name,
    STATE(77), 1,
      sym_qualified_name,
    STATE(96), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
  [1907] = 4,
    ACTIONS(288), 1,
      sym_text,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(59), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1922] = 4,
    ACTIONS(294), 1,
      sym_text,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(59), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1937] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    ACTIONS(300), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(84), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(111), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [1952] = 6,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(302), 1,
      sym__name,
    STATE(12), 1,
      sym__type_name,
    STATE(18), 1,
      sym_qualified_name,
    STATE(112), 1,
      sym__namespace_name,
    STATE(117), 1,
      sym__namespace_name_as_prefix,
  [1971] = 6,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    STATE(77), 1,
      sym_qualified_name,
    STATE(81), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
  [1990] = 6,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(302), 1,
      sym__name,
    STATE(11), 1,
      sym__type_name,
    STATE(18), 1,
      sym_qualified_name,
    STATE(112), 1,
      sym__namespace_name,
    STATE(117), 1,
      sym__namespace_name_as_prefix,
  [2009] = 6,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    STATE(77), 1,
      sym_qualified_name,
    STATE(82), 1,
      sym__type_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
  [2028] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    ACTIONS(300), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(111), 2,
      sym__name,
      anon_sym_PIPE,
  [2045] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    ACTIONS(300), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      aux_sym__namespace_name_repeat1,
    ACTIONS(111), 2,
      sym__name,
      anon_sym_PIPE,
  [2062] = 4,
    ACTIONS(308), 1,
      anon_sym_ATinternal,
    ACTIONS(310), 1,
      anon_sym_ATlink,
    ACTIONS(312), 1,
      anon_sym_ATsee,
    STATE(105), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [2077] = 5,
    ACTIONS(249), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    STATE(78), 1,
      sym_qualified_name,
    STATE(111), 1,
      sym__namespace_name_as_prefix,
    STATE(112), 1,
      sym__namespace_name,
  [2093] = 5,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    ACTIONS(302), 1,
      sym__name,
    STATE(22), 1,
      sym_qualified_name,
    STATE(112), 1,
      sym__namespace_name,
    STATE(117), 1,
      sym__namespace_name_as_prefix,
  [2109] = 1,
    ACTIONS(314), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [2116] = 1,
    ACTIONS(161), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [2123] = 1,
    ACTIONS(316), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [2130] = 2,
    ACTIONS(318), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(151), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2139] = 3,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    STATE(74), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(140), 2,
      sym__name,
      anon_sym_DOLLAR,
  [2150] = 1,
    ACTIONS(323), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [2157] = 3,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    STATE(74), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(147), 2,
      sym__name,
      anon_sym_DOLLAR,
  [2168] = 3,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(134), 2,
      sym__name,
      anon_sym_DOLLAR,
  [2179] = 1,
    ACTIONS(140), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2185] = 1,
    ACTIONS(157), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2191] = 1,
    ACTIONS(151), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2197] = 2,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_variable_name,
  [2204] = 2,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(9), 1,
      sym_variable_name,
  [2211] = 2,
    ACTIONS(329), 1,
      sym__name,
    STATE(99), 1,
      sym__namespace_name,
  [2218] = 2,
    ACTIONS(332), 1,
      anon_sym_BSLASH,
    STATE(89), 1,
      aux_sym__namespace_name_repeat1,
  [2225] = 2,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
    STATE(84), 1,
      aux_sym__namespace_name_repeat1,
  [2232] = 2,
    ACTIONS(335), 1,
      sym_text,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
  [2239] = 2,
    ACTIONS(339), 1,
      sym_text,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
  [2246] = 2,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    STATE(70), 1,
      sym_variable_name,
  [2253] = 2,
    ACTIONS(343), 1,
      anon_sym_BSLASH,
    STATE(89), 1,
      aux_sym__namespace_name_repeat1,
  [2260] = 1,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
  [2264] = 1,
    ACTIONS(348), 1,
      anon_sym_GT,
  [2268] = 1,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
  [2272] = 1,
    ACTIONS(352), 1,
      anon_sym_BSLASH,
  [2276] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [2280] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [2284] = 1,
    ACTIONS(358), 1,
      sym__name,
  [2288] = 1,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
  [2292] = 1,
    ACTIONS(362), 1,
      sym__name,
  [2296] = 1,
    ACTIONS(364), 1,
      anon_sym_BSLASH,
  [2300] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
  [2304] = 1,
    ACTIONS(368), 1,
      sym__name,
  [2308] = 1,
    ACTIONS(370), 1,
      sym__name,
  [2312] = 1,
    ACTIONS(372), 1,
      sym_email_address,
  [2316] = 1,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
  [2320] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [2324] = 1,
    ACTIONS(378), 1,
      sym_uri,
  [2328] = 1,
    ACTIONS(380), 1,
      sym_uri,
  [2332] = 1,
    ACTIONS(382), 1,
      sym_text,
  [2336] = 1,
    ACTIONS(384), 1,
      sym__name,
  [2340] = 1,
    ACTIONS(386), 1,
      sym__name,
  [2344] = 1,
    ACTIONS(388), 1,
      sym__name,
  [2348] = 1,
    ACTIONS(390), 1,
      anon_sym_BSLASH,
  [2352] = 1,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
  [2356] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [2360] = 1,
    ACTIONS(394), 1,
      sym_uri,
  [2364] = 1,
    ACTIONS(396), 1,
      sym_uri,
  [2368] = 1,
    ACTIONS(398), 1,
      sym__name,
  [2372] = 1,
    ACTIONS(400), 1,
      sym__name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 309,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 457,
  [SMALL_STATE(17)] = 505,
  [SMALL_STATE(18)] = 553,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 637,
  [SMALL_STATE(21)] = 679,
  [SMALL_STATE(22)] = 719,
  [SMALL_STATE(23)] = 756,
  [SMALL_STATE(24)] = 793,
  [SMALL_STATE(25)] = 830,
  [SMALL_STATE(26)] = 866,
  [SMALL_STATE(27)] = 902,
  [SMALL_STATE(28)] = 938,
  [SMALL_STATE(29)] = 975,
  [SMALL_STATE(30)] = 1012,
  [SMALL_STATE(31)] = 1046,
  [SMALL_STATE(32)] = 1080,
  [SMALL_STATE(33)] = 1114,
  [SMALL_STATE(34)] = 1148,
  [SMALL_STATE(35)] = 1182,
  [SMALL_STATE(36)] = 1216,
  [SMALL_STATE(37)] = 1250,
  [SMALL_STATE(38)] = 1284,
  [SMALL_STATE(39)] = 1318,
  [SMALL_STATE(40)] = 1352,
  [SMALL_STATE(41)] = 1386,
  [SMALL_STATE(42)] = 1420,
  [SMALL_STATE(43)] = 1454,
  [SMALL_STATE(44)] = 1488,
  [SMALL_STATE(45)] = 1522,
  [SMALL_STATE(46)] = 1556,
  [SMALL_STATE(47)] = 1590,
  [SMALL_STATE(48)] = 1624,
  [SMALL_STATE(49)] = 1656,
  [SMALL_STATE(50)] = 1688,
  [SMALL_STATE(51)] = 1720,
  [SMALL_STATE(52)] = 1752,
  [SMALL_STATE(53)] = 1784,
  [SMALL_STATE(54)] = 1816,
  [SMALL_STATE(55)] = 1848,
  [SMALL_STATE(56)] = 1870,
  [SMALL_STATE(57)] = 1888,
  [SMALL_STATE(58)] = 1907,
  [SMALL_STATE(59)] = 1922,
  [SMALL_STATE(60)] = 1937,
  [SMALL_STATE(61)] = 1952,
  [SMALL_STATE(62)] = 1971,
  [SMALL_STATE(63)] = 1990,
  [SMALL_STATE(64)] = 2009,
  [SMALL_STATE(65)] = 2028,
  [SMALL_STATE(66)] = 2045,
  [SMALL_STATE(67)] = 2062,
  [SMALL_STATE(68)] = 2077,
  [SMALL_STATE(69)] = 2093,
  [SMALL_STATE(70)] = 2109,
  [SMALL_STATE(71)] = 2116,
  [SMALL_STATE(72)] = 2123,
  [SMALL_STATE(73)] = 2130,
  [SMALL_STATE(74)] = 2139,
  [SMALL_STATE(75)] = 2150,
  [SMALL_STATE(76)] = 2157,
  [SMALL_STATE(77)] = 2168,
  [SMALL_STATE(78)] = 2179,
  [SMALL_STATE(79)] = 2185,
  [SMALL_STATE(80)] = 2191,
  [SMALL_STATE(81)] = 2197,
  [SMALL_STATE(82)] = 2204,
  [SMALL_STATE(83)] = 2211,
  [SMALL_STATE(84)] = 2218,
  [SMALL_STATE(85)] = 2225,
  [SMALL_STATE(86)] = 2232,
  [SMALL_STATE(87)] = 2239,
  [SMALL_STATE(88)] = 2246,
  [SMALL_STATE(89)] = 2253,
  [SMALL_STATE(90)] = 2260,
  [SMALL_STATE(91)] = 2264,
  [SMALL_STATE(92)] = 2268,
  [SMALL_STATE(93)] = 2272,
  [SMALL_STATE(94)] = 2276,
  [SMALL_STATE(95)] = 2280,
  [SMALL_STATE(96)] = 2284,
  [SMALL_STATE(97)] = 2288,
  [SMALL_STATE(98)] = 2292,
  [SMALL_STATE(99)] = 2296,
  [SMALL_STATE(100)] = 2300,
  [SMALL_STATE(101)] = 2304,
  [SMALL_STATE(102)] = 2308,
  [SMALL_STATE(103)] = 2312,
  [SMALL_STATE(104)] = 2316,
  [SMALL_STATE(105)] = 2320,
  [SMALL_STATE(106)] = 2324,
  [SMALL_STATE(107)] = 2328,
  [SMALL_STATE(108)] = 2332,
  [SMALL_STATE(109)] = 2336,
  [SMALL_STATE(110)] = 2340,
  [SMALL_STATE(111)] = 2344,
  [SMALL_STATE(112)] = 2348,
  [SMALL_STATE(113)] = 2352,
  [SMALL_STATE(114)] = 2356,
  [SMALL_STATE(115)] = 2360,
  [SMALL_STATE(116)] = 2364,
  [SMALL_STATE(117)] = 2368,
  [SMALL_STATE(118)] = 2372,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(28),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(62),
  [11] = {.count = 1, .reusable = true}, SHIFT(10),
  [13] = {.count = 1, .reusable = true}, SHIFT(116),
  [15] = {.count = 1, .reusable = true}, SHIFT(55),
  [17] = {.count = 1, .reusable = true}, SHIFT(64),
  [19] = {.count = 1, .reusable = false}, SHIFT(64),
  [21] = {.count = 1, .reusable = true}, SHIFT(61),
  [23] = {.count = 1, .reusable = true}, SHIFT(115),
  [25] = {.count = 1, .reusable = true}, SHIFT(63),
  [27] = {.count = 1, .reusable = true}, SHIFT(26),
  [29] = {.count = 1, .reusable = false}, SHIFT(58),
  [31] = {.count = 1, .reusable = true}, SHIFT(67),
  [33] = {.count = 1, .reusable = true}, SHIFT(114),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [56] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(90),
  [75] = {.count = 1, .reusable = true}, SHIFT(104),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(8),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 3),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 3),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 2),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(24),
  [117] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 1), SHIFT(102),
  [120] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [122] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(58),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(67),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1),
  [138] = {.count = 1, .reusable = true}, SHIFT(69),
  [140] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [142] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(69),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 2),
  [155] = {.count = 1, .reusable = true}, SHIFT(23),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 3),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [177] = {.count = 1, .reusable = true}, SHIFT(29),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [181] = {.count = 1, .reusable = true}, SHIFT(103),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 3),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 4),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 4),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 3),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 3),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym__see_tag, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym__see_tag, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [249] = {.count = 1, .reusable = true}, SHIFT(60),
  [251] = {.count = 1, .reusable = true}, SHIFT(46),
  [253] = {.count = 1, .reusable = true}, SHIFT(83),
  [255] = {.count = 1, .reusable = true}, SHIFT(118),
  [257] = {.count = 1, .reusable = true}, SHIFT(34),
  [259] = {.count = 1, .reusable = true}, SHIFT(47),
  [261] = {.count = 1, .reusable = true}, SHIFT(40),
  [263] = {.count = 1, .reusable = true}, SHIFT(42),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(60),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(83),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(118),
  [276] = {.count = 1, .reusable = true}, SHIFT(44),
  [278] = {.count = 1, .reusable = false}, SHIFT(65),
  [280] = {.count = 1, .reusable = false}, SHIFT(57),
  [282] = {.count = 1, .reusable = true}, SHIFT(58),
  [284] = {.count = 1, .reusable = true}, SHIFT(66),
  [286] = {.count = 1, .reusable = false}, SHIFT(27),
  [288] = {.count = 1, .reusable = false}, SHIFT(59),
  [290] = {.count = 1, .reusable = false}, SHIFT(67),
  [292] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [294] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(59),
  [297] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(67),
  [300] = {.count = 1, .reusable = true}, SHIFT(80),
  [302] = {.count = 1, .reusable = true}, SHIFT(15),
  [304] = {.count = 1, .reusable = true}, SHIFT(49),
  [306] = {.count = 1, .reusable = true}, SHIFT(50),
  [308] = {.count = 1, .reusable = true}, SHIFT(108),
  [310] = {.count = 1, .reusable = true}, SHIFT(107),
  [312] = {.count = 1, .reusable = true}, SHIFT(106),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [318] = {.count = 1, .reusable = true}, SHIFT(79),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(68),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [325] = {.count = 1, .reusable = true}, SHIFT(68),
  [327] = {.count = 1, .reusable = true}, SHIFT(98),
  [329] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 1), SHIFT(85),
  [332] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 2), SHIFT(102),
  [335] = {.count = 1, .reusable = true}, SHIFT(94),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [339] = {.count = 1, .reusable = true}, SHIFT(95),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 2),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(102),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [348] = {.count = 1, .reusable = true}, SHIFT(41),
  [350] = {.count = 1, .reusable = true}, SHIFT(54),
  [352] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 3),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 3, .production_id = 3),
  [358] = {.count = 1, .reusable = true}, SHIFT(92),
  [360] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [362] = {.count = 1, .reusable = true}, SHIFT(25),
  [364] = {.count = 1, .reusable = true}, SHIFT(109),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 2),
  [370] = {.count = 1, .reusable = true}, SHIFT(93),
  [372] = {.count = 1, .reusable = true}, SHIFT(91),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [376] = {.count = 1, .reusable = true}, SHIFT(72),
  [378] = {.count = 1, .reusable = true}, SHIFT(87),
  [380] = {.count = 1, .reusable = true}, SHIFT(86),
  [382] = {.count = 1, .reusable = true}, SHIFT(100),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 3),
  [386] = {.count = 1, .reusable = true}, SHIFT(113),
  [388] = {.count = 1, .reusable = true}, SHIFT(73),
  [390] = {.count = 1, .reusable = true}, SHIFT(101),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [394] = {.count = 1, .reusable = true}, SHIFT(56),
  [396] = {.count = 1, .reusable = true}, SHIFT(13),
  [398] = {.count = 1, .reusable = true}, SHIFT(21),
  [400] = {.count = 1, .reusable = true}, SHIFT(71),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_phpdoc(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__name,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
