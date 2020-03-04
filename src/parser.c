#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 2
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

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
  anon_sym_LPAREN_RPAREN = 11,
  anon_sym_ATmethod = 12,
  anon_sym_LPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  anon_sym_ATparam = 16,
  anon_sym_ATproperty = 17,
  anon_sym_ATproperty_DASHread = 18,
  anon_sym_ATproperty_DASHwrite = 19,
  anon_sym_ATreturn = 20,
  anon_sym_ATsee = 21,
  anon_sym_ATthrows = 22,
  anon_sym_ATvar = 23,
  sym_author_name = 24,
  sym_email_address = 25,
  anon_sym_ATapi = 26,
  anon_sym_ATcategory = 27,
  anon_sym_ATcopyright = 28,
  anon_sym_ATexample = 29,
  anon_sym_ATfilesource = 30,
  anon_sym_ATignore = 31,
  anon_sym_ATlicense = 32,
  anon_sym_ATpackage = 33,
  anon_sym_ATsource = 34,
  anon_sym_ATsubpackage = 35,
  anon_sym_ATtodo = 36,
  anon_sym_ATuses = 37,
  anon_sym_ATversion = 38,
  anon_sym_LF = 39,
  anon_sym_CR_LF = 40,
  sym_text = 41,
  anon_sym_LBRACE = 42,
  anon_sym_RBRACE = 43,
  sym_version = 44,
  sym_uri = 45,
  anon_sym_PIPE = 46,
  anon_sym_EQ = 47,
  sym_param_value = 48,
  anon_sym_LBRACK_RBRACK = 49,
  anon_sym_BSLASH = 50,
  sym_static = 51,
  anon_sym_DOLLAR = 52,
  sym__end = 53,
  sym_document = 54,
  sym_tag = 55,
  sym__author_tag = 56,
  sym__version_tag = 57,
  sym__global_tag = 58,
  sym__internal_tag = 59,
  sym__internal_inline_tag = 60,
  sym__link_tag = 61,
  sym__link_inline_tag = 62,
  sym__method_tag = 63,
  sym__variable_tag_with_type = 64,
  sym__return_tag = 65,
  sym__see_tag = 66,
  sym__see_inline_tag = 67,
  sym__throws_tag = 68,
  sym__var_tag = 69,
  sym_tag_name = 70,
  sym_description = 71,
  sym_text_line = 72,
  sym_inline_tag = 73,
  sym__type_name = 74,
  sym_param = 75,
  sym_qualified_name = 76,
  sym__namespace_name = 77,
  sym_variable_name = 78,
  aux_sym_document_repeat1 = 79,
  aux_sym__method_tag_repeat1 = 80,
  aux_sym_description_repeat1 = 81,
  aux_sym_text_line_repeat1 = 82,
  aux_sym__type_name_repeat1 = 83,
  aux_sym_qualified_name_repeat1 = 84,
  aux_sym__namespace_name_repeat1 = 85,
  aux_sym__namespace_name_repeat2 = 86,
  alias_sym_name = 87,
  alias_sym_type = 88,
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
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_ATmethod] = "tag_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ATparam] = "tag_name",
  [anon_sym_ATproperty] = "tag_name",
  [anon_sym_ATproperty_DASHread] = "tag_name",
  [anon_sym_ATproperty_DASHwrite] = "tag_name",
  [anon_sym_ATreturn] = "tag_name",
  [anon_sym_ATsee] = "tag_name",
  [anon_sym_ATthrows] = "tag_name",
  [anon_sym_ATvar] = "tag_name",
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
  [anon_sym_ATversion] = "@version",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_version] = "version",
  [sym_uri] = "uri",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [sym_param_value] = "param_value",
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
  [sym__var_tag] = "_var_tag",
  [sym_tag_name] = "tag_name",
  [sym_description] = "description",
  [sym_text_line] = "text_line",
  [sym_inline_tag] = "inline_tag",
  [sym__type_name] = "_type_name",
  [sym_param] = "param",
  [sym_qualified_name] = "qualified_name",
  [sym__namespace_name] = "_namespace_name",
  [sym_variable_name] = "variable_name",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__method_tag_repeat1] = "_method_tag_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_text_line_repeat1] = "text_line_repeat1",
  [aux_sym__type_name_repeat1] = "_type_name_repeat1",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
  [aux_sym__namespace_name_repeat1] = "_namespace_name_repeat1",
  [aux_sym__namespace_name_repeat2] = "_namespace_name_repeat2",
  [alias_sym_name] = "name",
  [alias_sym_type] = "type",
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
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_ATmethod] = sym_tag_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ATparam] = sym_tag_name,
  [anon_sym_ATproperty] = sym_tag_name,
  [anon_sym_ATproperty_DASHread] = sym_tag_name,
  [anon_sym_ATproperty_DASHwrite] = sym_tag_name,
  [anon_sym_ATreturn] = sym_tag_name,
  [anon_sym_ATsee] = sym_tag_name,
  [anon_sym_ATthrows] = sym_tag_name,
  [anon_sym_ATvar] = sym_tag_name,
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
  [anon_sym_ATversion] = anon_sym_ATversion,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_version] = sym_version,
  [sym_uri] = sym_uri,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_param_value] = sym_param_value,
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
  [sym__var_tag] = sym__var_tag,
  [sym_tag_name] = sym_tag_name,
  [sym_description] = sym_description,
  [sym_text_line] = sym_text_line,
  [sym_inline_tag] = sym_inline_tag,
  [sym__type_name] = sym__type_name,
  [sym_param] = sym_param,
  [sym_qualified_name] = sym_qualified_name,
  [sym__namespace_name] = sym__namespace_name,
  [sym_variable_name] = sym_variable_name,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__method_tag_repeat1] = aux_sym__method_tag_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_text_line_repeat1] = aux_sym_text_line_repeat1,
  [aux_sym__type_name_repeat1] = aux_sym__type_name_repeat1,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
  [aux_sym__namespace_name_repeat1] = aux_sym__namespace_name_repeat1,
  [aux_sym__namespace_name_repeat2] = aux_sym__namespace_name_repeat2,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_type] = alias_sym_type,
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
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmethod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_ATvar] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_param_value] = {
    .visible = true,
    .named = true,
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
  [sym__var_tag] = {
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
  [aux_sym_qualified_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__namespace_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__namespace_name_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type,
  },
  [2] = {
    [1] = sym_description,
  },
  [3] = {
    [1] = alias_sym_type,
  },
  [4] = {
    [1] = alias_sym_name,
  },
  [5] = {
    [2] = sym_description,
  },
  [6] = {
    [2] = alias_sym_name,
  },
  [7] = {
    [3] = sym_description,
  },
  [8] = {
    [3] = alias_sym_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(185);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(184)
      if (lookahead == '\r') SKIP(184)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(231);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') SKIP(1)
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '$') ADVANCE(243);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '$') ADVANCE(243);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '$') ADVANCE(243);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '$') ADVANCE(243);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '$') ADVANCE(243);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '$') ADVANCE(243);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '$') ADVANCE(243);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '$') ADVANCE(243);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(21)
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(25)
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == ' ') SKIP(25)
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 25:
      if (lookahead == '\t') SKIP(25)
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == ' ') SKIP(25)
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 26:
      if (lookahead == '\t') SKIP(27)
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == ' ') SKIP(27)
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '@') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(208);
      END_STATE();
    case 27:
      if (lookahead == '\t') SKIP(27)
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(27)
      if (lookahead == ' ') SKIP(27)
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '@') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(208);
      END_STATE();
    case 28:
      if (lookahead == '\t') SKIP(28)
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == ' ') SKIP(28)
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '*') SKIP(28)
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 29:
      if (lookahead == '\t') SKIP(29)
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == ' ') SKIP(29)
      if (lookahead == '*') SKIP(29)
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 30:
      if (lookahead == '\t') SKIP(30)
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == ' ') SKIP(30)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') SKIP(30)
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(229);
      END_STATE();
    case 31:
      if (lookahead == '\t') SKIP(31)
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == ' ') SKIP(31)
      if (lookahead == '*') SKIP(31)
      if (lookahead == '\\') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == '$' ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 32:
      if (lookahead == '\t') SKIP(32)
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == ' ') SKIP(32)
      if (lookahead == '*') SKIP(32)
      if (lookahead == '{') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == '\t') SKIP(33)
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == ' ') SKIP(33)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') SKIP(33)
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(229);
      END_STATE();
    case 34:
      if (lookahead == '\t') SKIP(34)
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == ' ') SKIP(34)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') SKIP(34)
      if (lookahead == '}') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(229);
      END_STATE();
    case 35:
      if (lookahead == '\t') SKIP(35)
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == ' ') SKIP(35)
      if (lookahead == '*') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(239);
      if (lookahead == ' ') SKIP(36)
      if (lookahead == '*') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(240);
      END_STATE();
    case 37:
      if (lookahead == '\t') SKIP(37)
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(37)
      if (lookahead == ' ') SKIP(37)
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(231);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 38:
      if (lookahead == '\t') SKIP(37)
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(37)
      if (lookahead == ' ') SKIP(37)
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(231);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(186);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '@') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(241);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(194);
      END_STATE();
    case 112:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 113:
      if (lookahead == 'k') ADVANCE(58);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 176:
      if (lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 177:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 178:
      if (lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 179:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 180:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 184:
      if (eof) ADVANCE(185);
      if (lookahead == '\t') SKIP(184)
      if (lookahead == '\n') SKIP(184)
      if (lookahead == '\r') SKIP(184)
      if (lookahead == ' ') SKIP(184)
      if (lookahead == '$') ADVANCE(244);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(231);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(32);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == '$' ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(239);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(236);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(226);
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
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 25},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 25},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 28},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 28},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 32},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 30},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 28},
  [120] = {.lex_state = 28},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 28},
  [124] = {.lex_state = 28},
  [125] = {.lex_state = 28},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 33},
  [130] = {.lex_state = 28},
  [131] = {.lex_state = 28},
  [132] = {.lex_state = 28},
  [133] = {.lex_state = 28},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 28},
  [139] = {.lex_state = 28},
  [140] = {.lex_state = 28},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 28},
  [143] = {.lex_state = 28},
  [144] = {.lex_state = 34},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 28},
  [149] = {.lex_state = 28},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 29},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 31},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 28},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 28},
  [183] = {.lex_state = 28},
  [184] = {.lex_state = 28},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 28},
  [187] = {.lex_state = 28},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 28},
  [190] = {.lex_state = 31},
  [191] = {.lex_state = 28},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_ATproperty] = ACTIONS(1),
    [anon_sym_ATproperty_DASHread] = ACTIONS(1),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATthrows] = ACTIONS(1),
    [anon_sym_ATvar] = ACTIONS(1),
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
    [anon_sym_ATversion] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_static] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(175),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(84),
    [sym__version_tag] = STATE(84),
    [sym__global_tag] = STATE(84),
    [sym__internal_tag] = STATE(84),
    [sym__link_tag] = STATE(84),
    [sym__method_tag] = STATE(84),
    [sym__variable_tag_with_type] = STATE(84),
    [sym__return_tag] = STATE(84),
    [sym__see_tag] = STATE(84),
    [sym__throws_tag] = STATE(84),
    [sym__var_tag] = STATE(84),
    [sym_tag_name] = STATE(19),
    [sym_description] = STATE(5),
    [sym_text_line] = STATE(48),
    [sym_inline_tag] = STATE(114),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_description_repeat1] = STATE(48),
    [aux_sym_text_line_repeat1] = STATE(114),
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
    [anon_sym_ATvar] = ACTIONS(27),
    [anon_sym_ATapi] = ACTIONS(29),
    [anon_sym_ATcategory] = ACTIONS(29),
    [anon_sym_ATcopyright] = ACTIONS(29),
    [anon_sym_ATexample] = ACTIONS(29),
    [anon_sym_ATfilesource] = ACTIONS(29),
    [anon_sym_ATignore] = ACTIONS(29),
    [anon_sym_ATlicense] = ACTIONS(29),
    [anon_sym_ATpackage] = ACTIONS(29),
    [anon_sym_ATsource] = ACTIONS(29),
    [anon_sym_ATsubpackage] = ACTIONS(29),
    [anon_sym_ATtodo] = ACTIONS(29),
    [anon_sym_ATuses] = ACTIONS(29),
    [anon_sym_ATversion] = ACTIONS(29),
    [sym_text] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym__end] = ACTIONS(35),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(37), 1,
      anon_sym_ATauthor,
    ACTIONS(43), 1,
      anon_sym_ATglobal,
    ACTIONS(46), 1,
      anon_sym_ATinternal,
    ACTIONS(49), 1,
      anon_sym_ATlink,
    ACTIONS(52), 1,
      anon_sym_ATmethod,
    ACTIONS(58), 1,
      anon_sym_ATproperty,
    ACTIONS(61), 1,
      anon_sym_ATreturn,
    ACTIONS(64), 1,
      anon_sym_ATsee,
    ACTIONS(67), 1,
      anon_sym_ATthrows,
    ACTIONS(70), 1,
      anon_sym_ATvar,
    ACTIONS(76), 1,
      sym__end,
    STATE(19), 1,
      sym_tag_name,
    ACTIONS(40), 2,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
    STATE(3), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(55), 3,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(84), 11,
      sym__author_tag,
      sym__version_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__variable_tag_with_type,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
    ACTIONS(73), 13,
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
      anon_sym_ATversion,
  [78] = 17,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(9), 1,
      anon_sym_ATglobal,
    ACTIONS(11), 1,
      anon_sym_ATinternal,
    ACTIONS(13), 1,
      anon_sym_ATlink,
    ACTIONS(15), 1,
      anon_sym_ATmethod,
    ACTIONS(19), 1,
      anon_sym_ATproperty,
    ACTIONS(21), 1,
      anon_sym_ATreturn,
    ACTIONS(23), 1,
      anon_sym_ATsee,
    ACTIONS(25), 1,
      anon_sym_ATthrows,
    ACTIONS(27), 1,
      anon_sym_ATvar,
    ACTIONS(78), 1,
      sym__end,
    STATE(19), 1,
      sym_tag_name,
    ACTIONS(7), 2,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
    STATE(3), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(17), 3,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(84), 11,
      sym__author_tag,
      sym__version_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__variable_tag_with_type,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
    ACTIONS(29), 13,
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
      anon_sym_ATversion,
  [156] = 17,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(9), 1,
      anon_sym_ATglobal,
    ACTIONS(11), 1,
      anon_sym_ATinternal,
    ACTIONS(13), 1,
      anon_sym_ATlink,
    ACTIONS(15), 1,
      anon_sym_ATmethod,
    ACTIONS(19), 1,
      anon_sym_ATproperty,
    ACTIONS(21), 1,
      anon_sym_ATreturn,
    ACTIONS(23), 1,
      anon_sym_ATsee,
    ACTIONS(25), 1,
      anon_sym_ATthrows,
    ACTIONS(27), 1,
      anon_sym_ATvar,
    ACTIONS(78), 1,
      sym__end,
    STATE(19), 1,
      sym_tag_name,
    ACTIONS(7), 2,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
    STATE(6), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(17), 3,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(84), 11,
      sym__author_tag,
      sym__version_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__variable_tag_with_type,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
    ACTIONS(29), 13,
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
      anon_sym_ATversion,
  [234] = 17,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(9), 1,
      anon_sym_ATglobal,
    ACTIONS(11), 1,
      anon_sym_ATinternal,
    ACTIONS(13), 1,
      anon_sym_ATlink,
    ACTIONS(15), 1,
      anon_sym_ATmethod,
    ACTIONS(19), 1,
      anon_sym_ATproperty,
    ACTIONS(21), 1,
      anon_sym_ATreturn,
    ACTIONS(23), 1,
      anon_sym_ATsee,
    ACTIONS(25), 1,
      anon_sym_ATthrows,
    ACTIONS(27), 1,
      anon_sym_ATvar,
    ACTIONS(80), 1,
      sym__end,
    STATE(19), 1,
      sym_tag_name,
    ACTIONS(7), 2,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
    STATE(3), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(17), 3,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(84), 11,
      sym__author_tag,
      sym__version_tag,
      sym__global_tag,
      sym__internal_tag,
      sym__link_tag,
      sym__method_tag,
      sym__variable_tag_with_type,
      sym__return_tag,
      sym__see_tag,
      sym__throws_tag,
      sym__var_tag,
    ACTIONS(29), 13,
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
      anon_sym_ATversion,
  [312] = 9,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_ATproperty,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_variable_name,
    STATE(80), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(82), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [369] = 8,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(92), 1,
      anon_sym_ATproperty,
    STATE(72), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(88), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [423] = 8,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_ATproperty,
    ACTIONS(98), 1,
      sym_version,
    STATE(76), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(94), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [477] = 4,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(21), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(102), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(100), 32,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_DOLLAR,
      sym__end,
  [522] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_ATproperty,
    STATE(72), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(88), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [573] = 4,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(102), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(100), 32,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_DOLLAR,
      sym__end,
  [618] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_ATproperty,
    STATE(85), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(106), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [669] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      anon_sym_ATproperty,
    STATE(87), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(110), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [720] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_ATproperty,
    STATE(83), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(114), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [771] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_ATproperty,
    STATE(82), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(118), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [822] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_ATproperty,
    STATE(75), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(122), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [873] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_ATproperty,
    STATE(92), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(126), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [924] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_ATproperty,
    STATE(70), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [975] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      anon_sym_ATproperty,
    STATE(91), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(134), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1026] = 4,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(140), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(138), 32,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_DOLLAR,
      sym__end,
  [1071] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_ATproperty,
    STATE(74), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(142), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1122] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_ATproperty,
    STATE(88), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(146), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1173] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_ATproperty,
    STATE(86), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(150), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1224] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_ATproperty,
    STATE(93), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(154), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1275] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_ATproperty,
    STATE(71), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(158), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1326] = 4,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(164), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(162), 32,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_DOLLAR,
      sym__end,
  [1371] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_ATproperty,
    STATE(81), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(166), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1422] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_ATproperty,
    STATE(89), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(170), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1473] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_ATproperty,
    STATE(79), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(174), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1524] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      anon_sym_ATproperty,
    STATE(77), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(178), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1575] = 4,
    ACTIONS(186), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(184), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(182), 32,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_DOLLAR,
      sym__end,
  [1620] = 6,
    ACTIONS(191), 1,
      anon_sym_ATproperty,
    ACTIONS(193), 1,
      sym_text,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(33), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [1668] = 4,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(38), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(102), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(100), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [1712] = 4,
    ACTIONS(201), 1,
      anon_sym_BSLASH,
    STATE(45), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(102), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(100), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [1756] = 2,
    ACTIONS(184), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(182), 33,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
      sym__end,
  [1796] = 4,
    ACTIONS(201), 1,
      anon_sym_BSLASH,
    STATE(41), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(102), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(100), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [1840] = 4,
    ACTIONS(203), 1,
      anon_sym_BSLASH,
    STATE(38), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(184), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(182), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [1884] = 4,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(38), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(140), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(138), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [1928] = 4,
    ACTIONS(201), 1,
      anon_sym_BSLASH,
    STATE(37), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(164), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(162), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [1972] = 4,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    STATE(41), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(184), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(182), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [2016] = 4,
    ACTIONS(213), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(43), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(211), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(209), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [2060] = 4,
    ACTIONS(219), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(44), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(217), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(215), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [2104] = 4,
    ACTIONS(225), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(44), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(223), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(221), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [2148] = 4,
    ACTIONS(201), 1,
      anon_sym_BSLASH,
    STATE(41), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(140), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(138), 31,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [2192] = 4,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(102), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(100), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [2236] = 4,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(164), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(162), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [2280] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      anon_sym_ATproperty,
    STATE(33), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(228), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [2328] = 4,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    STATE(53), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(234), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(232), 30,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      sym__end,
  [2371] = 4,
    ACTIONS(238), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(52), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(211), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(209), 30,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [2414] = 4,
    ACTIONS(240), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(55), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(217), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(215), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [2457] = 4,
    ACTIONS(242), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(58), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(217), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(215), 30,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [2500] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    STATE(53), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(246), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(244), 30,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      sym__end,
  [2543] = 2,
    ACTIONS(184), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(182), 32,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
      sym__end,
  [2582] = 4,
    ACTIONS(251), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(55), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(223), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(221), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [2625] = 2,
    ACTIONS(184), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(182), 32,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
      sym__end,
  [2664] = 4,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(256), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(254), 30,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      sym__end,
  [2707] = 4,
    ACTIONS(258), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(58), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(223), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(221), 30,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [2750] = 4,
    ACTIONS(261), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(51), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(211), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(209), 30,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [2793] = 4,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(234), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(232), 29,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [2835] = 4,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(246), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(244), 29,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [2877] = 4,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(256), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(254), 29,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [2919] = 2,
    ACTIONS(270), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(268), 31,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
      sym__end,
  [2957] = 2,
    ACTIONS(270), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(268), 30,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      sym__end,
  [2994] = 2,
    ACTIONS(274), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(272), 29,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [3030] = 2,
    ACTIONS(278), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(276), 29,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [3066] = 2,
    ACTIONS(282), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(280), 29,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [3102] = 3,
    ACTIONS(286), 1,
      anon_sym_LT,
    ACTIONS(288), 1,
      anon_sym_ATproperty,
    ACTIONS(284), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3139] = 3,
    ACTIONS(292), 1,
      anon_sym_ATproperty,
    ACTIONS(294), 1,
      sym_author_name,
    ACTIONS(290), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3176] = 2,
    ACTIONS(298), 1,
      anon_sym_ATproperty,
    ACTIONS(296), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3210] = 2,
    ACTIONS(168), 1,
      anon_sym_ATproperty,
    ACTIONS(166), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3244] = 2,
    ACTIONS(136), 1,
      anon_sym_ATproperty,
    ACTIONS(134), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3278] = 2,
    ACTIONS(302), 1,
      anon_sym_ATproperty,
    ACTIONS(300), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3312] = 2,
    ACTIONS(306), 1,
      anon_sym_ATproperty,
    ACTIONS(304), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3346] = 2,
    ACTIONS(310), 1,
      anon_sym_ATproperty,
    ACTIONS(308), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3380] = 2,
    ACTIONS(156), 1,
      anon_sym_ATproperty,
    ACTIONS(154), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3414] = 2,
    ACTIONS(314), 1,
      anon_sym_ATproperty,
    ACTIONS(312), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3448] = 2,
    ACTIONS(318), 1,
      anon_sym_ATproperty,
    ACTIONS(316), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3482] = 2,
    ACTIONS(322), 1,
      anon_sym_ATproperty,
    ACTIONS(320), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3516] = 2,
    ACTIONS(124), 1,
      anon_sym_ATproperty,
    ACTIONS(122), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3550] = 2,
    ACTIONS(326), 1,
      anon_sym_ATproperty,
    ACTIONS(324), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3584] = 2,
    ACTIONS(330), 1,
      anon_sym_ATproperty,
    ACTIONS(328), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3618] = 2,
    ACTIONS(128), 1,
      anon_sym_ATproperty,
    ACTIONS(126), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3652] = 2,
    ACTIONS(132), 1,
      anon_sym_ATproperty,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3686] = 2,
    ACTIONS(112), 1,
      anon_sym_ATproperty,
    ACTIONS(110), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3720] = 2,
    ACTIONS(334), 1,
      anon_sym_ATproperty,
    ACTIONS(332), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3754] = 2,
    ACTIONS(120), 1,
      anon_sym_ATproperty,
    ACTIONS(118), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3788] = 2,
    ACTIONS(160), 1,
      anon_sym_ATproperty,
    ACTIONS(158), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3822] = 2,
    ACTIONS(338), 1,
      anon_sym_ATproperty,
    ACTIONS(336), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3856] = 2,
    ACTIONS(342), 1,
      anon_sym_ATproperty,
    ACTIONS(340), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3890] = 2,
    ACTIONS(346), 1,
      anon_sym_ATproperty,
    ACTIONS(344), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3924] = 2,
    ACTIONS(152), 1,
      anon_sym_ATproperty,
    ACTIONS(150), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3958] = 2,
    ACTIONS(350), 1,
      anon_sym_ATproperty,
    ACTIONS(348), 28,
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
      anon_sym_ATvar,
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
      anon_sym_ATversion,
      sym__end,
  [3992] = 10,
    ACTIONS(352), 1,
      sym__name,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym__namespace_name,
    STATE(57), 1,
      sym_qualified_name,
    STATE(147), 1,
      sym_variable_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(152), 1,
      sym_param,
    STATE(160), 1,
      sym__type_name,
  [4023] = 10,
    ACTIONS(352), 1,
      sym__name,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym__namespace_name,
    STATE(57), 1,
      sym_qualified_name,
    STATE(147), 1,
      sym_variable_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(151), 1,
      sym_param,
    STATE(160), 1,
      sym__type_name,
  [4054] = 10,
    ACTIONS(352), 1,
      sym__name,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym__namespace_name,
    STATE(57), 1,
      sym_qualified_name,
    STATE(145), 1,
      sym_param,
    STATE(147), 1,
      sym_variable_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(160), 1,
      sym__type_name,
  [4085] = 9,
    ACTIONS(352), 1,
      sym__name,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym__namespace_name,
    STATE(57), 1,
      sym_qualified_name,
    STATE(147), 1,
      sym_variable_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(157), 1,
      sym_param,
    STATE(160), 1,
      sym__type_name,
  [4113] = 7,
    ACTIONS(364), 1,
      sym__name,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    ACTIONS(368), 1,
      sym_static,
    STATE(130), 1,
      sym__namespace_name,
    STATE(137), 1,
      sym_qualified_name,
    STATE(142), 1,
      aux_sym__namespace_name_repeat1,
    STATE(186), 1,
      sym__type_name,
  [4135] = 5,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      sym_text,
    STATE(78), 1,
      sym_description,
    STATE(48), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(114), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [4153] = 4,
    ACTIONS(184), 1,
      sym_text,
    ACTIONS(372), 1,
      anon_sym_BSLASH,
    STATE(100), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(182), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4168] = 6,
    ACTIONS(375), 1,
      sym__name,
    ACTIONS(377), 1,
      anon_sym_BSLASH,
    STATE(30), 1,
      sym__type_name,
    STATE(50), 1,
      sym__namespace_name,
    STATE(62), 1,
      sym_qualified_name,
    STATE(139), 1,
      aux_sym__namespace_name_repeat1,
  [4187] = 6,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      sym__name,
    STATE(7), 1,
      sym__type_name,
    STATE(42), 1,
      sym__namespace_name,
    STATE(57), 1,
      sym_qualified_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
  [4206] = 6,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      sym__name,
    STATE(42), 1,
      sym__namespace_name,
    STATE(57), 1,
      sym_qualified_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(156), 1,
      sym__type_name,
  [4225] = 6,
    ACTIONS(375), 1,
      sym__name,
    ACTIONS(377), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym__type_name,
    STATE(50), 1,
      sym__namespace_name,
    STATE(62), 1,
      sym_qualified_name,
    STATE(139), 1,
      aux_sym__namespace_name_repeat1,
  [4244] = 4,
    ACTIONS(164), 1,
      sym_text,
    ACTIONS(381), 1,
      anon_sym_BSLASH,
    STATE(111), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(162), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4259] = 4,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    STATE(122), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(162), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4274] = 4,
    ACTIONS(387), 1,
      anon_sym_ATinternal,
    ACTIONS(389), 1,
      anon_sym_ATlink,
    ACTIONS(391), 1,
      anon_sym_ATsee,
    STATE(179), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [4289] = 6,
    ACTIONS(393), 1,
      sym__name,
    ACTIONS(395), 1,
      sym_uri,
    ACTIONS(397), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_qualified_name,
    STATE(59), 1,
      sym__namespace_name,
    STATE(143), 1,
      aux_sym__namespace_name_repeat1,
  [4308] = 6,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      sym__name,
    STATE(42), 1,
      sym__namespace_name,
    STATE(57), 1,
      sym_qualified_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(163), 1,
      sym__type_name,
  [4327] = 6,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    ACTIONS(399), 1,
      sym__name,
    STATE(130), 1,
      sym__namespace_name,
    STATE(137), 1,
      sym_qualified_name,
    STATE(142), 1,
      aux_sym__namespace_name_repeat1,
    STATE(182), 1,
      sym__type_name,
  [4346] = 4,
    ACTIONS(102), 1,
      sym_text,
    ACTIONS(381), 1,
      anon_sym_BSLASH,
    STATE(100), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(100), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4361] = 4,
    ACTIONS(102), 1,
      sym_text,
    ACTIONS(381), 1,
      anon_sym_BSLASH,
    STATE(116), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(100), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4376] = 4,
    ACTIONS(403), 1,
      sym_text,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(113), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [4391] = 4,
    ACTIONS(411), 1,
      sym_text,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    ACTIONS(409), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(113), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [4406] = 6,
    ACTIONS(415), 1,
      sym__name,
    ACTIONS(417), 1,
      sym_uri,
    ACTIONS(419), 1,
      anon_sym_BSLASH,
    STATE(126), 1,
      sym__namespace_name,
    STATE(138), 1,
      aux_sym__namespace_name_repeat1,
    STATE(144), 1,
      sym_qualified_name,
  [4425] = 4,
    ACTIONS(140), 1,
      sym_text,
    ACTIONS(381), 1,
      anon_sym_BSLASH,
    STATE(100), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(138), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4440] = 4,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(162), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4455] = 4,
    ACTIONS(217), 1,
      sym_text,
    ACTIONS(423), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(129), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(215), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4469] = 3,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(138), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4481] = 3,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    STATE(119), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(100), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4493] = 3,
    ACTIONS(425), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(182), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4505] = 3,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(100), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4517] = 5,
    ACTIONS(375), 1,
      sym__name,
    ACTIONS(377), 1,
      anon_sym_BSLASH,
    STATE(50), 1,
      sym__namespace_name,
    STATE(64), 1,
      sym_qualified_name,
    STATE(139), 1,
      aux_sym__namespace_name_repeat1,
  [4533] = 3,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    STATE(122), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(162), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4545] = 5,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      sym__name,
    STATE(42), 1,
      sym__namespace_name,
    STATE(63), 1,
      sym_qualified_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
  [4561] = 4,
    ACTIONS(211), 1,
      sym_text,
    ACTIONS(428), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(118), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(209), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4575] = 5,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      sym__name,
    STATE(130), 1,
      sym__namespace_name,
    STATE(142), 1,
      aux_sym__namespace_name_repeat1,
    STATE(155), 1,
      sym_qualified_name,
  [4591] = 2,
    ACTIONS(184), 1,
      sym_text,
    ACTIONS(182), 4,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
  [4601] = 4,
    ACTIONS(223), 1,
      sym_text,
    ACTIONS(432), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(129), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(221), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4615] = 3,
    ACTIONS(435), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(132), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(209), 2,
      sym__name,
      anon_sym_PIPE,
  [4626] = 1,
    ACTIONS(182), 4,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
  [4633] = 3,
    ACTIONS(437), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(133), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(215), 2,
      sym__name,
      anon_sym_PIPE,
  [4644] = 3,
    ACTIONS(439), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(133), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(221), 2,
      sym__name,
      anon_sym_PIPE,
  [4655] = 1,
    ACTIONS(442), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [4662] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym__method_tag_repeat1,
  [4672] = 2,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4680] = 3,
    ACTIONS(254), 1,
      sym__name,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    STATE(141), 1,
      aux_sym__type_name_repeat1,
  [4690] = 3,
    ACTIONS(454), 1,
      sym__name,
    ACTIONS(456), 1,
      anon_sym_BSLASH,
    STATE(140), 1,
      aux_sym__namespace_name_repeat1,
  [4700] = 3,
    ACTIONS(456), 1,
      anon_sym_BSLASH,
    ACTIONS(458), 1,
      sym__name,
    STATE(140), 1,
      aux_sym__namespace_name_repeat1,
  [4710] = 3,
    ACTIONS(460), 1,
      sym__name,
    ACTIONS(462), 1,
      anon_sym_BSLASH,
    STATE(140), 1,
      aux_sym__namespace_name_repeat1,
  [4720] = 3,
    ACTIONS(232), 1,
      sym__name,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    STATE(148), 1,
      aux_sym__type_name_repeat1,
  [4730] = 3,
    ACTIONS(456), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym__name,
    STATE(140), 1,
      aux_sym__namespace_name_repeat1,
  [4740] = 3,
    ACTIONS(456), 1,
      anon_sym_BSLASH,
    ACTIONS(467), 1,
      sym__name,
    STATE(140), 1,
      aux_sym__namespace_name_repeat1,
  [4750] = 3,
    ACTIONS(469), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(471), 1,
      sym_text,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [4760] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym__method_tag_repeat1,
  [4770] = 1,
    ACTIONS(280), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [4776] = 2,
    ACTIONS(479), 1,
      anon_sym_EQ,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4784] = 3,
    ACTIONS(244), 1,
      sym__name,
    ACTIONS(481), 1,
      anon_sym_PIPE,
    STATE(148), 1,
      aux_sym__type_name_repeat1,
  [4794] = 3,
    ACTIONS(456), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      sym__name,
    STATE(140), 1,
      aux_sym__namespace_name_repeat1,
  [4804] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym__method_tag_repeat1,
  [4814] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym__method_tag_repeat1,
  [4824] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym__method_tag_repeat1,
  [4834] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym__method_tag_repeat1,
  [4844] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym__method_tag_repeat1,
  [4854] = 1,
    ACTIONS(268), 2,
      sym__name,
      anon_sym_PIPE,
  [4859] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_variable_name,
  [4866] = 1,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4871] = 2,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    ACTIONS(499), 1,
      sym_text,
  [4878] = 2,
    ACTIONS(501), 1,
      sym_text,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [4885] = 2,
    ACTIONS(505), 1,
      anon_sym_DOLLAR,
    STATE(136), 1,
      sym_variable_name,
  [4892] = 1,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4897] = 2,
    ACTIONS(509), 1,
      sym_text,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
  [4904] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_variable_name,
  [4911] = 1,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4916] = 1,
    ACTIONS(515), 1,
      sym__name,
  [4920] = 1,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
  [4924] = 1,
    ACTIONS(519), 1,
      sym_text,
  [4928] = 1,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
  [4932] = 1,
    ACTIONS(523), 1,
      sym_uri,
  [4936] = 1,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
  [4940] = 1,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
  [4944] = 1,
    ACTIONS(529), 1,
      sym_email_address,
  [4948] = 1,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
  [4952] = 1,
    ACTIONS(533), 1,
      sym__name,
  [4956] = 1,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
  [4960] = 1,
    ACTIONS(537), 1,
      anon_sym_GT,
  [4964] = 1,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
  [4968] = 1,
    ACTIONS(541), 1,
      sym_param_value,
  [4972] = 1,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [4976] = 1,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
  [4980] = 1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
  [4984] = 1,
    ACTIONS(549), 1,
      sym__name,
  [4988] = 1,
    ACTIONS(551), 1,
      sym__name,
  [4992] = 1,
    ACTIONS(553), 1,
      sym__name,
  [4996] = 1,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
  [5000] = 1,
    ACTIONS(555), 1,
      sym__name,
  [5004] = 1,
    ACTIONS(557), 1,
      sym__name,
  [5008] = 1,
    ACTIONS(559), 1,
      sym_param_value,
  [5012] = 1,
    ACTIONS(561), 1,
      sym__name,
  [5016] = 1,
    ACTIONS(563), 1,
      sym_uri,
  [5020] = 1,
    ACTIONS(565), 1,
      sym__name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 312,
  [SMALL_STATE(8)] = 369,
  [SMALL_STATE(9)] = 423,
  [SMALL_STATE(10)] = 477,
  [SMALL_STATE(11)] = 522,
  [SMALL_STATE(12)] = 573,
  [SMALL_STATE(13)] = 618,
  [SMALL_STATE(14)] = 669,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 771,
  [SMALL_STATE(17)] = 822,
  [SMALL_STATE(18)] = 873,
  [SMALL_STATE(19)] = 924,
  [SMALL_STATE(20)] = 975,
  [SMALL_STATE(21)] = 1026,
  [SMALL_STATE(22)] = 1071,
  [SMALL_STATE(23)] = 1122,
  [SMALL_STATE(24)] = 1173,
  [SMALL_STATE(25)] = 1224,
  [SMALL_STATE(26)] = 1275,
  [SMALL_STATE(27)] = 1326,
  [SMALL_STATE(28)] = 1371,
  [SMALL_STATE(29)] = 1422,
  [SMALL_STATE(30)] = 1473,
  [SMALL_STATE(31)] = 1524,
  [SMALL_STATE(32)] = 1575,
  [SMALL_STATE(33)] = 1620,
  [SMALL_STATE(34)] = 1668,
  [SMALL_STATE(35)] = 1712,
  [SMALL_STATE(36)] = 1756,
  [SMALL_STATE(37)] = 1796,
  [SMALL_STATE(38)] = 1840,
  [SMALL_STATE(39)] = 1884,
  [SMALL_STATE(40)] = 1928,
  [SMALL_STATE(41)] = 1972,
  [SMALL_STATE(42)] = 2016,
  [SMALL_STATE(43)] = 2060,
  [SMALL_STATE(44)] = 2104,
  [SMALL_STATE(45)] = 2148,
  [SMALL_STATE(46)] = 2192,
  [SMALL_STATE(47)] = 2236,
  [SMALL_STATE(48)] = 2280,
  [SMALL_STATE(49)] = 2328,
  [SMALL_STATE(50)] = 2371,
  [SMALL_STATE(51)] = 2414,
  [SMALL_STATE(52)] = 2457,
  [SMALL_STATE(53)] = 2500,
  [SMALL_STATE(54)] = 2543,
  [SMALL_STATE(55)] = 2582,
  [SMALL_STATE(56)] = 2625,
  [SMALL_STATE(57)] = 2664,
  [SMALL_STATE(58)] = 2707,
  [SMALL_STATE(59)] = 2750,
  [SMALL_STATE(60)] = 2793,
  [SMALL_STATE(61)] = 2835,
  [SMALL_STATE(62)] = 2877,
  [SMALL_STATE(63)] = 2919,
  [SMALL_STATE(64)] = 2957,
  [SMALL_STATE(65)] = 2994,
  [SMALL_STATE(66)] = 3030,
  [SMALL_STATE(67)] = 3066,
  [SMALL_STATE(68)] = 3102,
  [SMALL_STATE(69)] = 3139,
  [SMALL_STATE(70)] = 3176,
  [SMALL_STATE(71)] = 3210,
  [SMALL_STATE(72)] = 3244,
  [SMALL_STATE(73)] = 3278,
  [SMALL_STATE(74)] = 3312,
  [SMALL_STATE(75)] = 3346,
  [SMALL_STATE(76)] = 3380,
  [SMALL_STATE(77)] = 3414,
  [SMALL_STATE(78)] = 3448,
  [SMALL_STATE(79)] = 3482,
  [SMALL_STATE(80)] = 3516,
  [SMALL_STATE(81)] = 3550,
  [SMALL_STATE(82)] = 3584,
  [SMALL_STATE(83)] = 3618,
  [SMALL_STATE(84)] = 3652,
  [SMALL_STATE(85)] = 3686,
  [SMALL_STATE(86)] = 3720,
  [SMALL_STATE(87)] = 3754,
  [SMALL_STATE(88)] = 3788,
  [SMALL_STATE(89)] = 3822,
  [SMALL_STATE(90)] = 3856,
  [SMALL_STATE(91)] = 3890,
  [SMALL_STATE(92)] = 3924,
  [SMALL_STATE(93)] = 3958,
  [SMALL_STATE(94)] = 3992,
  [SMALL_STATE(95)] = 4023,
  [SMALL_STATE(96)] = 4054,
  [SMALL_STATE(97)] = 4085,
  [SMALL_STATE(98)] = 4113,
  [SMALL_STATE(99)] = 4135,
  [SMALL_STATE(100)] = 4153,
  [SMALL_STATE(101)] = 4168,
  [SMALL_STATE(102)] = 4187,
  [SMALL_STATE(103)] = 4206,
  [SMALL_STATE(104)] = 4225,
  [SMALL_STATE(105)] = 4244,
  [SMALL_STATE(106)] = 4259,
  [SMALL_STATE(107)] = 4274,
  [SMALL_STATE(108)] = 4289,
  [SMALL_STATE(109)] = 4308,
  [SMALL_STATE(110)] = 4327,
  [SMALL_STATE(111)] = 4346,
  [SMALL_STATE(112)] = 4361,
  [SMALL_STATE(113)] = 4376,
  [SMALL_STATE(114)] = 4391,
  [SMALL_STATE(115)] = 4406,
  [SMALL_STATE(116)] = 4425,
  [SMALL_STATE(117)] = 4440,
  [SMALL_STATE(118)] = 4455,
  [SMALL_STATE(119)] = 4469,
  [SMALL_STATE(120)] = 4481,
  [SMALL_STATE(121)] = 4493,
  [SMALL_STATE(122)] = 4505,
  [SMALL_STATE(123)] = 4517,
  [SMALL_STATE(124)] = 4533,
  [SMALL_STATE(125)] = 4545,
  [SMALL_STATE(126)] = 4561,
  [SMALL_STATE(127)] = 4575,
  [SMALL_STATE(128)] = 4591,
  [SMALL_STATE(129)] = 4601,
  [SMALL_STATE(130)] = 4615,
  [SMALL_STATE(131)] = 4626,
  [SMALL_STATE(132)] = 4633,
  [SMALL_STATE(133)] = 4644,
  [SMALL_STATE(134)] = 4655,
  [SMALL_STATE(135)] = 4662,
  [SMALL_STATE(136)] = 4672,
  [SMALL_STATE(137)] = 4680,
  [SMALL_STATE(138)] = 4690,
  [SMALL_STATE(139)] = 4700,
  [SMALL_STATE(140)] = 4710,
  [SMALL_STATE(141)] = 4720,
  [SMALL_STATE(142)] = 4730,
  [SMALL_STATE(143)] = 4740,
  [SMALL_STATE(144)] = 4750,
  [SMALL_STATE(145)] = 4760,
  [SMALL_STATE(146)] = 4770,
  [SMALL_STATE(147)] = 4776,
  [SMALL_STATE(148)] = 4784,
  [SMALL_STATE(149)] = 4794,
  [SMALL_STATE(150)] = 4804,
  [SMALL_STATE(151)] = 4814,
  [SMALL_STATE(152)] = 4824,
  [SMALL_STATE(153)] = 4834,
  [SMALL_STATE(154)] = 4844,
  [SMALL_STATE(155)] = 4854,
  [SMALL_STATE(156)] = 4859,
  [SMALL_STATE(157)] = 4866,
  [SMALL_STATE(158)] = 4871,
  [SMALL_STATE(159)] = 4878,
  [SMALL_STATE(160)] = 4885,
  [SMALL_STATE(161)] = 4892,
  [SMALL_STATE(162)] = 4897,
  [SMALL_STATE(163)] = 4904,
  [SMALL_STATE(164)] = 4911,
  [SMALL_STATE(165)] = 4916,
  [SMALL_STATE(166)] = 4920,
  [SMALL_STATE(167)] = 4924,
  [SMALL_STATE(168)] = 4928,
  [SMALL_STATE(169)] = 4932,
  [SMALL_STATE(170)] = 4936,
  [SMALL_STATE(171)] = 4940,
  [SMALL_STATE(172)] = 4944,
  [SMALL_STATE(173)] = 4948,
  [SMALL_STATE(174)] = 4952,
  [SMALL_STATE(175)] = 4956,
  [SMALL_STATE(176)] = 4960,
  [SMALL_STATE(177)] = 4964,
  [SMALL_STATE(178)] = 4968,
  [SMALL_STATE(179)] = 4972,
  [SMALL_STATE(180)] = 4976,
  [SMALL_STATE(181)] = 4980,
  [SMALL_STATE(182)] = 4984,
  [SMALL_STATE(183)] = 4988,
  [SMALL_STATE(184)] = 4992,
  [SMALL_STATE(185)] = 4996,
  [SMALL_STATE(186)] = 5000,
  [SMALL_STATE(187)] = 5004,
  [SMALL_STATE(188)] = 5008,
  [SMALL_STATE(189)] = 5012,
  [SMALL_STATE(190)] = 5016,
  [SMALL_STATE(191)] = 5020,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(69),
  [7] = {.count = 1, .reusable = true}, SHIFT(9),
  [9] = {.count = 1, .reusable = true}, SHIFT(109),
  [11] = {.count = 1, .reusable = true}, SHIFT(22),
  [13] = {.count = 1, .reusable = true}, SHIFT(108),
  [15] = {.count = 1, .reusable = true}, SHIFT(98),
  [17] = {.count = 1, .reusable = true}, SHIFT(103),
  [19] = {.count = 1, .reusable = false}, SHIFT(103),
  [21] = {.count = 1, .reusable = true}, SHIFT(104),
  [23] = {.count = 1, .reusable = true}, SHIFT(169),
  [25] = {.count = 1, .reusable = true}, SHIFT(101),
  [27] = {.count = 1, .reusable = true}, SHIFT(102),
  [29] = {.count = 1, .reusable = true}, SHIFT(66),
  [31] = {.count = 1, .reusable = false}, SHIFT(114),
  [33] = {.count = 1, .reusable = true}, SHIFT(107),
  [35] = {.count = 1, .reusable = true}, SHIFT(166),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(169),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.count = 1, .reusable = true}, SHIFT(173),
  [80] = {.count = 1, .reusable = true}, SHIFT(177),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 2),
  [86] = {.count = 1, .reusable = true}, SHIFT(174),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [90] = {.count = 1, .reusable = true}, SHIFT(20),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 1),
  [98] = {.count = 1, .reusable = true}, SHIFT(25),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 2),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 2),
  [104] = {.count = 1, .reusable = true}, SHIFT(165),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 4),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 4),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 6),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 6),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 6),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 6),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 8),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 8),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 6),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 6),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 2),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 2),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 8),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 8),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 1),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 1),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 8),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 8),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 3),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 2),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 2),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2),
  [184] = {.count = 1, .reusable = false}, REDUCE(aux_sym__namespace_name_repeat2, 2),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(165),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(114),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(107),
  [199] = {.count = 1, .reusable = true}, SHIFT(189),
  [201] = {.count = 1, .reusable = true}, SHIFT(183),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(189),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(183),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 1),
  [213] = {.count = 1, .reusable = true}, SHIFT(43),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(44),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(44),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2, .production_id = 1),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 2, .production_id = 1),
  [236] = {.count = 1, .reusable = true}, SHIFT(125),
  [238] = {.count = 1, .reusable = true}, SHIFT(52),
  [240] = {.count = 1, .reusable = true}, SHIFT(55),
  [242] = {.count = 1, .reusable = true}, SHIFT(58),
  [244] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [246] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(125),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(55),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1, .production_id = 1),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1, .production_id = 1),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(58),
  [261] = {.count = 1, .reusable = true}, SHIFT(51),
  [263] = {.count = 1, .reusable = true}, SHIFT(123),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(123),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2, .production_id = 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2, .production_id = 3),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [286] = {.count = 1, .reusable = true}, SHIFT(172),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [294] = {.count = 1, .reusable = true}, SHIFT(68),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 4),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 4),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym__see_tag, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym__see_tag, 3),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 3),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 9, .production_id = 8),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 9, .production_id = 8),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 6),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 6),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 4),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 4),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 4),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 4),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 3),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 3),
  [352] = {.count = 1, .reusable = false}, SHIFT(27),
  [354] = {.count = 1, .reusable = true}, SHIFT(15),
  [356] = {.count = 1, .reusable = true}, SHIFT(149),
  [358] = {.count = 1, .reusable = false}, SHIFT(184),
  [360] = {.count = 1, .reusable = true}, SHIFT(23),
  [362] = {.count = 1, .reusable = true}, SHIFT(13),
  [364] = {.count = 1, .reusable = false}, SHIFT(117),
  [366] = {.count = 1, .reusable = true}, SHIFT(142),
  [368] = {.count = 1, .reusable = false}, SHIFT(110),
  [370] = {.count = 1, .reusable = true}, SHIFT(114),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(191),
  [375] = {.count = 1, .reusable = true}, SHIFT(47),
  [377] = {.count = 1, .reusable = true}, SHIFT(139),
  [379] = {.count = 1, .reusable = true}, SHIFT(27),
  [381] = {.count = 1, .reusable = true}, SHIFT(191),
  [383] = {.count = 1, .reusable = true}, SHIFT(94),
  [385] = {.count = 1, .reusable = true}, SHIFT(187),
  [387] = {.count = 1, .reusable = true}, SHIFT(167),
  [389] = {.count = 1, .reusable = true}, SHIFT(115),
  [391] = {.count = 1, .reusable = true}, SHIFT(190),
  [393] = {.count = 1, .reusable = false}, SHIFT(40),
  [395] = {.count = 1, .reusable = true}, SHIFT(11),
  [397] = {.count = 1, .reusable = true}, SHIFT(143),
  [399] = {.count = 1, .reusable = true}, SHIFT(106),
  [401] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [403] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(113),
  [406] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(107),
  [409] = {.count = 1, .reusable = false}, SHIFT(65),
  [411] = {.count = 1, .reusable = false}, SHIFT(113),
  [413] = {.count = 1, .reusable = false}, SHIFT(107),
  [415] = {.count = 1, .reusable = false}, SHIFT(105),
  [417] = {.count = 1, .reusable = true}, SHIFT(158),
  [419] = {.count = 1, .reusable = true}, SHIFT(138),
  [421] = {.count = 1, .reusable = true}, SHIFT(96),
  [423] = {.count = 1, .reusable = true}, SHIFT(129),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(187),
  [428] = {.count = 1, .reusable = true}, SHIFT(118),
  [430] = {.count = 1, .reusable = true}, SHIFT(124),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(129),
  [435] = {.count = 1, .reusable = true}, SHIFT(132),
  [437] = {.count = 1, .reusable = true}, SHIFT(133),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(133),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [444] = {.count = 1, .reusable = true}, SHIFT(97),
  [446] = {.count = 1, .reusable = true}, SHIFT(28),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [450] = {.count = 1, .reusable = true}, SHIFT(188),
  [452] = {.count = 1, .reusable = true}, SHIFT(127),
  [454] = {.count = 1, .reusable = true}, SHIFT(112),
  [456] = {.count = 1, .reusable = true}, SHIFT(140),
  [458] = {.count = 1, .reusable = true}, SHIFT(46),
  [460] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(140),
  [465] = {.count = 1, .reusable = true}, SHIFT(120),
  [467] = {.count = 1, .reusable = true}, SHIFT(35),
  [469] = {.count = 1, .reusable = true}, SHIFT(162),
  [471] = {.count = 1, .reusable = false}, SHIFT(170),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [475] = {.count = 1, .reusable = true}, SHIFT(14),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [479] = {.count = 1, .reusable = true}, SHIFT(178),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(127),
  [484] = {.count = 1, .reusable = true}, SHIFT(10),
  [486] = {.count = 1, .reusable = true}, SHIFT(16),
  [488] = {.count = 1, .reusable = true}, SHIFT(26),
  [490] = {.count = 1, .reusable = true}, SHIFT(18),
  [492] = {.count = 1, .reusable = true}, SHIFT(24),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(97),
  [497] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [499] = {.count = 1, .reusable = true}, SHIFT(170),
  [501] = {.count = 1, .reusable = true}, SHIFT(168),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 2),
  [505] = {.count = 1, .reusable = true}, SHIFT(184),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_param, 4),
  [509] = {.count = 1, .reusable = true}, SHIFT(180),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_param, 3),
  [515] = {.count = 1, .reusable = true}, SHIFT(36),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [519] = {.count = 1, .reusable = true}, SHIFT(181),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 3, .production_id = 5),
  [523] = {.count = 1, .reusable = true}, SHIFT(99),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 5),
  [527] = {.count = 1, .reusable = true}, SHIFT(95),
  [529] = {.count = 1, .reusable = true}, SHIFT(176),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [533] = {.count = 1, .reusable = true}, SHIFT(67),
  [535] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [537] = {.count = 1, .reusable = true}, SHIFT(73),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [541] = {.count = 1, .reusable = true}, SHIFT(164),
  [543] = {.count = 1, .reusable = true}, SHIFT(134),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 4, .production_id = 7),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 2),
  [549] = {.count = 1, .reusable = true}, SHIFT(171),
  [551] = {.count = 1, .reusable = true}, SHIFT(54),
  [553] = {.count = 1, .reusable = true}, SHIFT(146),
  [555] = {.count = 1, .reusable = true}, SHIFT(185),
  [557] = {.count = 1, .reusable = true}, SHIFT(131),
  [559] = {.count = 1, .reusable = true}, SHIFT(161),
  [561] = {.count = 1, .reusable = true}, SHIFT(56),
  [563] = {.count = 1, .reusable = true}, SHIFT(159),
  [565] = {.count = 1, .reusable = true}, SHIFT(128),
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
