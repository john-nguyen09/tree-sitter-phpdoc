#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 2
#define TOKEN_COUNT 52
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
  sym_text = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  sym_version = 42,
  sym_uri = 43,
  anon_sym_PIPE = 44,
  anon_sym_EQ = 45,
  sym_param_value = 46,
  anon_sym_LBRACK_RBRACK = 47,
  anon_sym_BSLASH = 48,
  sym_static = 49,
  anon_sym_DOLLAR = 50,
  sym__end = 51,
  sym_program = 52,
  sym_document = 53,
  sym_tag = 54,
  sym__author_tag = 55,
  sym__version_tag = 56,
  sym__global_tag = 57,
  sym__internal_tag = 58,
  sym__internal_inline_tag = 59,
  sym__link_tag = 60,
  sym__link_inline_tag = 61,
  sym__method_tag = 62,
  sym__variable_tag_with_type = 63,
  sym__return_tag = 64,
  sym__see_tag = 65,
  sym__see_inline_tag = 66,
  sym__throws_tag = 67,
  sym__var_tag = 68,
  sym_tag_name = 69,
  sym_description = 70,
  sym_inline_tag = 71,
  sym__type_name = 72,
  sym_param = 73,
  sym_qualified_name = 74,
  sym__namespace_name = 75,
  sym_variable_name = 76,
  aux_sym_program_repeat1 = 77,
  aux_sym_document_repeat1 = 78,
  aux_sym__method_tag_repeat1 = 79,
  aux_sym_description_repeat1 = 80,
  aux_sym__type_name_repeat1 = 81,
  aux_sym_qualified_name_repeat1 = 82,
  aux_sym__namespace_name_repeat1 = 83,
  aux_sym__namespace_name_repeat2 = 84,
  alias_sym_name = 85,
  alias_sym_type = 86,
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
  [sym_program] = "program",
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
  [sym_inline_tag] = "inline_tag",
  [sym__type_name] = "_type_name",
  [sym_param] = "param",
  [sym_qualified_name] = "qualified_name",
  [sym__namespace_name] = "_namespace_name",
  [sym_variable_name] = "variable_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__method_tag_repeat1] = "_method_tag_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
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
  [sym_program] = sym_program,
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
  [sym_inline_tag] = sym_inline_tag,
  [sym__type_name] = sym__type_name,
  [sym_param] = sym_param,
  [sym_qualified_name] = sym_qualified_name,
  [sym__namespace_name] = sym__namespace_name,
  [sym_variable_name] = sym_variable_name,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__method_tag_repeat1] = aux_sym__method_tag_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
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
  [sym_program] = {
    .visible = true,
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(184);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(182)
      if (lookahead == '\r') SKIP(182)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead == '}') ADVANCE(227);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(8)
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(8)
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(10)
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(10)
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == ' ') SKIP(14)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == ' ') SKIP(14)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') SKIP(16)
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') SKIP(16)
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(18)
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') SKIP(18)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(18)
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') SKIP(18)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(20)
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == ' ') SKIP(20)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(20)
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == ' ') SKIP(20)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 25:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 26:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 27:
      if (lookahead == '\t') SKIP(28)
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == ' ') SKIP(28)
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '@') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 28:
      if (lookahead == '\t') SKIP(28)
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == ' ') SKIP(28)
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '@') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 29:
      if (lookahead == '\t') SKIP(29)
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == ' ') SKIP(29)
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == '*') SKIP(29)
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      END_STATE();
    case 30:
      if (lookahead == '\t') SKIP(30)
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == ' ') SKIP(30)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') SKIP(30)
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(225);
      END_STATE();
    case 31:
      if (lookahead == '\t') SKIP(31)
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(31)
      if (lookahead == ' ') SKIP(31)
      if (lookahead == '*') SKIP(31)
      if (lookahead == '\\') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead == '$' ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      END_STATE();
    case 32:
      if (lookahead == '\t') SKIP(32)
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == ' ') SKIP(32)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') SKIP(32)
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(225);
      END_STATE();
    case 33:
      if (lookahead == '\t') SKIP(33)
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == ' ') SKIP(33)
      if (lookahead == '*') SKIP(33)
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(225);
      END_STATE();
    case 34:
      if (lookahead == '\t') SKIP(34)
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == ' ') SKIP(34)
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '*') SKIP(34)
      if (lookahead == '}') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(225);
      END_STATE();
    case 35:
      if (lookahead == '\t') ADVANCE(235);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(235);
      if (lookahead == ' ') SKIP(35)
      if (lookahead == '*') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(236);
      END_STATE();
    case 36:
      if (lookahead == '\t') SKIP(36)
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == ' ') SKIP(36)
      if (lookahead == '*') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(185);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(230);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '@') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 109:
      if (lookahead == 'k') ADVANCE(193);
      END_STATE();
    case 110:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 174:
      if (lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 176:
      if (lookahead == 'y') ADVANCE(211);
      END_STATE();
    case 177:
      if (lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 178:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 182:
      if (eof) ADVANCE(184);
      if (lookahead == '\t') SKIP(182)
      if (lookahead == '\n') SKIP(182)
      if (lookahead == '\r') SKIP(182)
      if (lookahead == ' ') SKIP(182)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 183:
      if (eof) ADVANCE(184);
      if (lookahead == '\t') SKIP(183)
      if (lookahead == '\n') SKIP(183)
      if (lookahead == '\r') SKIP(183)
      if (lookahead == ' ') SKIP(183)
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') SKIP(183)
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead == '$' ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\t') ADVANCE(235);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(235);
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(232);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__end);
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
  [1] = {.lex_state = 183},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 183},
  [95] = {.lex_state = 183},
  [96] = {.lex_state = 183},
  [97] = {.lex_state = 183},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 31},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 31},
  [110] = {.lex_state = 30},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 29},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 29},
  [124] = {.lex_state = 29},
  [125] = {.lex_state = 32},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 183},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 183},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 183},
  [135] = {.lex_state = 183},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 183},
  [142] = {.lex_state = 183},
  [143] = {.lex_state = 183},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 183},
  [146] = {.lex_state = 29},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 183},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 183},
  [151] = {.lex_state = 183},
  [152] = {.lex_state = 34},
  [153] = {.lex_state = 183},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 183},
  [156] = {.lex_state = 183},
  [157] = {.lex_state = 33},
  [158] = {.lex_state = 183},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 183},
  [162] = {.lex_state = 33},
  [163] = {.lex_state = 183},
  [164] = {.lex_state = 33},
  [165] = {.lex_state = 183},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 35},
  [169] = {.lex_state = 29},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 183},
  [173] = {.lex_state = 35},
  [174] = {.lex_state = 31},
  [175] = {.lex_state = 33},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 183},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 29},
  [183] = {.lex_state = 29},
  [184] = {.lex_state = 31},
  [185] = {.lex_state = 183},
  [186] = {.lex_state = 29},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 29},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 29},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
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
    [sym_program] = STATE(187),
    [sym_document] = STATE(132),
    [aux_sym_program_repeat1] = STATE(132),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(76),
    [sym__version_tag] = STATE(76),
    [sym__global_tag] = STATE(76),
    [sym__internal_tag] = STATE(76),
    [sym__link_tag] = STATE(76),
    [sym__method_tag] = STATE(76),
    [sym__variable_tag_with_type] = STATE(76),
    [sym__return_tag] = STATE(76),
    [sym__see_tag] = STATE(76),
    [sym__throws_tag] = STATE(76),
    [sym__var_tag] = STATE(76),
    [sym_tag_name] = STATE(49),
    [sym_description] = STATE(5),
    [sym_inline_tag] = STATE(60),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_description_repeat1] = STATE(60),
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
  [3] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(76),
    [sym__version_tag] = STATE(76),
    [sym__global_tag] = STATE(76),
    [sym__internal_tag] = STATE(76),
    [sym__link_tag] = STATE(76),
    [sym__method_tag] = STATE(76),
    [sym__variable_tag_with_type] = STATE(76),
    [sym__return_tag] = STATE(76),
    [sym__see_tag] = STATE(76),
    [sym__throws_tag] = STATE(76),
    [sym__var_tag] = STATE(76),
    [sym_tag_name] = STATE(49),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_ATauthor] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(40),
    [anon_sym_ATsince] = ACTIONS(40),
    [anon_sym_ATglobal] = ACTIONS(43),
    [anon_sym_ATinternal] = ACTIONS(46),
    [anon_sym_ATlink] = ACTIONS(49),
    [anon_sym_ATmethod] = ACTIONS(52),
    [anon_sym_ATparam] = ACTIONS(55),
    [anon_sym_ATproperty] = ACTIONS(58),
    [anon_sym_ATproperty_DASHread] = ACTIONS(55),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(55),
    [anon_sym_ATreturn] = ACTIONS(61),
    [anon_sym_ATsee] = ACTIONS(64),
    [anon_sym_ATthrows] = ACTIONS(67),
    [anon_sym_ATvar] = ACTIONS(70),
    [anon_sym_ATapi] = ACTIONS(73),
    [anon_sym_ATcategory] = ACTIONS(73),
    [anon_sym_ATcopyright] = ACTIONS(73),
    [anon_sym_ATexample] = ACTIONS(73),
    [anon_sym_ATfilesource] = ACTIONS(73),
    [anon_sym_ATignore] = ACTIONS(73),
    [anon_sym_ATlicense] = ACTIONS(73),
    [anon_sym_ATpackage] = ACTIONS(73),
    [anon_sym_ATsource] = ACTIONS(73),
    [anon_sym_ATsubpackage] = ACTIONS(73),
    [anon_sym_ATtodo] = ACTIONS(73),
    [anon_sym_ATuses] = ACTIONS(73),
    [anon_sym_ATversion] = ACTIONS(73),
    [sym__end] = ACTIONS(76),
  },
  [4] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(76),
    [sym__version_tag] = STATE(76),
    [sym__global_tag] = STATE(76),
    [sym__internal_tag] = STATE(76),
    [sym__link_tag] = STATE(76),
    [sym__method_tag] = STATE(76),
    [sym__variable_tag_with_type] = STATE(76),
    [sym__return_tag] = STATE(76),
    [sym__see_tag] = STATE(76),
    [sym__throws_tag] = STATE(76),
    [sym__var_tag] = STATE(76),
    [sym_tag_name] = STATE(49),
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
    [sym__end] = ACTIONS(78),
  },
  [5] = {
    [sym_tag] = STATE(6),
    [sym__author_tag] = STATE(76),
    [sym__version_tag] = STATE(76),
    [sym__global_tag] = STATE(76),
    [sym__internal_tag] = STATE(76),
    [sym__link_tag] = STATE(76),
    [sym__method_tag] = STATE(76),
    [sym__variable_tag_with_type] = STATE(76),
    [sym__return_tag] = STATE(76),
    [sym__see_tag] = STATE(76),
    [sym__throws_tag] = STATE(76),
    [sym__var_tag] = STATE(76),
    [sym_tag_name] = STATE(49),
    [aux_sym_document_repeat1] = STATE(6),
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
    [sym__end] = ACTIONS(78),
  },
  [6] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(76),
    [sym__version_tag] = STATE(76),
    [sym__global_tag] = STATE(76),
    [sym__internal_tag] = STATE(76),
    [sym__link_tag] = STATE(76),
    [sym__method_tag] = STATE(76),
    [sym__variable_tag_with_type] = STATE(76),
    [sym__return_tag] = STATE(76),
    [sym__see_tag] = STATE(76),
    [sym__throws_tag] = STATE(76),
    [sym__var_tag] = STATE(76),
    [sym_tag_name] = STATE(49),
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
    [sym__end] = ACTIONS(80),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(84), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(82), 32,
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
  [45] = 4,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(90), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(88), 32,
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
  [90] = 4,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(94), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(92), 32,
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
  [135] = 8,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_ATproperty,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym_variable_name,
    STATE(74), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(96), 28,
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
  [188] = 4,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(90), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(88), 32,
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
  [233] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(104), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(102), 32,
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
  [278] = 4,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(16), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(84), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(82), 31,
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
  [322] = 2,
    ACTIONS(104), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(102), 33,
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
  [362] = 4,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    STATE(21), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(90), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(88), 31,
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
  [406] = 4,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(90), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(88), 31,
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
  [450] = 4,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    STATE(22), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(90), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(88), 31,
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
  [494] = 4,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(84), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(82), 31,
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
  [538] = 4,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(94), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(92), 31,
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
  [582] = 4,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(104), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(102), 31,
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
  [626] = 4,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(21), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(104), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(102), 31,
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
  [670] = 4,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    STATE(21), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(94), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(92), 31,
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
  [714] = 4,
    ACTIONS(123), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(23), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(121), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(119), 31,
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
  [758] = 4,
    ACTIONS(130), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(23), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 31,
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
  [802] = 4,
    ACTIONS(136), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(24), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(134), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(132), 31,
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
  [846] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      anon_sym_ATproperty,
    ACTIONS(142), 1,
      sym_version,
    STATE(82), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(138), 28,
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
  [896] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(148), 1,
      anon_sym_ATproperty,
    STATE(81), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(144), 28,
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
  [946] = 4,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(19), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(90), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(88), 31,
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
  [990] = 4,
    ACTIONS(150), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(55), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(134), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(132), 30,
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
  [1033] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_ATproperty,
    STATE(77), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(152), 28,
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
  [1080] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_ATproperty,
    STATE(86), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(156), 28,
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
  [1127] = 4,
    ACTIONS(164), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(162), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(160), 30,
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
  [1170] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_ATproperty,
    STATE(87), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [1217] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_ATproperty,
    STATE(88), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [1264] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_ATproperty,
    STATE(81), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(144), 28,
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
  [1311] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_ATproperty,
    STATE(91), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [1358] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      anon_sym_ATproperty,
    STATE(92), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [1405] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym_ATproperty,
    STATE(93), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(182), 28,
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
  [1452] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_ATproperty,
    STATE(70), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(186), 28,
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
  [1499] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_ATproperty,
    STATE(75), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(190), 28,
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
  [1546] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_ATproperty,
    STATE(84), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(194), 28,
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
  [1593] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      anon_sym_ATproperty,
    STATE(73), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(198), 28,
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
  [1640] = 4,
    ACTIONS(202), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(53), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 30,
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
  [1683] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      anon_sym_ATproperty,
    STATE(78), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(204), 28,
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
  [1730] = 4,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(210), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(208), 30,
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
  [1773] = 4,
    ACTIONS(215), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(43), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(134), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(132), 30,
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
  [1816] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_ATproperty,
    STATE(90), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [1863] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_ATproperty,
    STATE(89), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [1910] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      anon_sym_ATproperty,
    STATE(71), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [1957] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_ATproperty,
    STATE(79), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [2004] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_ATproperty,
    STATE(85), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
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
  [2051] = 4,
    ACTIONS(237), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(52), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(121), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(119), 30,
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
  [2094] = 4,
    ACTIONS(240), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(53), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(121), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(119), 30,
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
  [2137] = 4,
    ACTIONS(164), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(245), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(243), 30,
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
  [2180] = 4,
    ACTIONS(247), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(52), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 30,
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
  [2223] = 2,
    ACTIONS(104), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(102), 32,
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
  [2262] = 2,
    ACTIONS(104), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(102), 32,
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
  [2301] = 4,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(210), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(208), 29,
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
  [2343] = 5,
    ACTIONS(254), 1,
      anon_sym_ATproperty,
    ACTIONS(256), 1,
      sym_text,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(59), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(252), 28,
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
  [2387] = 5,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_ATproperty,
    ACTIONS(266), 1,
      sym_text,
    STATE(59), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
    ACTIONS(262), 28,
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
  [2431] = 2,
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
  [2469] = 4,
    ACTIONS(272), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(162), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(160), 29,
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
  [2511] = 4,
    ACTIONS(272), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(245), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(243), 29,
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
  [2553] = 2,
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
  [2590] = 2,
    ACTIONS(276), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(274), 29,
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
  [2626] = 2,
    ACTIONS(280), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(278), 29,
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
  [2662] = 2,
    ACTIONS(284), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(282), 29,
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
  [2698] = 3,
    ACTIONS(288), 1,
      anon_sym_ATproperty,
    ACTIONS(290), 1,
      sym_author_name,
    ACTIONS(286), 28,
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
  [2735] = 3,
    ACTIONS(294), 1,
      anon_sym_LT,
    ACTIONS(296), 1,
      anon_sym_ATproperty,
    ACTIONS(292), 28,
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
  [2772] = 2,
    ACTIONS(180), 1,
      anon_sym_ATproperty,
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
  [2806] = 2,
    ACTIONS(300), 1,
      anon_sym_ATproperty,
    ACTIONS(298), 28,
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
  [2840] = 2,
    ACTIONS(304), 1,
      anon_sym_ATproperty,
    ACTIONS(302), 28,
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
  [2874] = 2,
    ACTIONS(308), 1,
      anon_sym_ATproperty,
    ACTIONS(306), 28,
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
  [2908] = 2,
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
  [2942] = 2,
    ACTIONS(312), 1,
      anon_sym_ATproperty,
    ACTIONS(310), 28,
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
  [2976] = 2,
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
  [3010] = 2,
    ACTIONS(316), 1,
      anon_sym_ATproperty,
    ACTIONS(314), 28,
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
  [3044] = 2,
    ACTIONS(154), 1,
      anon_sym_ATproperty,
    ACTIONS(152), 28,
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
  [3078] = 2,
    ACTIONS(320), 1,
      anon_sym_ATproperty,
    ACTIONS(318), 28,
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
  [3112] = 2,
    ACTIONS(324), 1,
      anon_sym_ATproperty,
    ACTIONS(322), 28,
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
  [3146] = 2,
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
  [3180] = 2,
    ACTIONS(196), 1,
      anon_sym_ATproperty,
    ACTIONS(194), 28,
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
  [3214] = 2,
    ACTIONS(328), 1,
      anon_sym_ATproperty,
    ACTIONS(326), 28,
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
  [3248] = 2,
    ACTIONS(332), 1,
      anon_sym_ATproperty,
    ACTIONS(330), 28,
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
  [3282] = 2,
    ACTIONS(336), 1,
      anon_sym_ATproperty,
    ACTIONS(334), 28,
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
  [3316] = 2,
    ACTIONS(206), 1,
      anon_sym_ATproperty,
    ACTIONS(204), 28,
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
  [3350] = 2,
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
  [3384] = 2,
    ACTIONS(340), 1,
      anon_sym_ATproperty,
    ACTIONS(338), 28,
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
  [3418] = 2,
    ACTIONS(344), 1,
      anon_sym_ATproperty,
    ACTIONS(342), 28,
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
  [3452] = 2,
    ACTIONS(348), 1,
      anon_sym_ATproperty,
    ACTIONS(346), 28,
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
  [3486] = 2,
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
  [3520] = 2,
    ACTIONS(172), 1,
      anon_sym_ATproperty,
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
  [3554] = 2,
    ACTIONS(352), 1,
      anon_sym_ATproperty,
    ACTIONS(350), 28,
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
  [3588] = 10,
    ACTIONS(354), 1,
      sym__name,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      sym__namespace_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
    STATE(150), 1,
      sym_param,
    STATE(151), 1,
      sym_variable_name,
    STATE(159), 1,
      sym__type_name,
  [3619] = 10,
    ACTIONS(354), 1,
      sym__name,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__namespace_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(143), 1,
      sym_param,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
    STATE(151), 1,
      sym_variable_name,
    STATE(159), 1,
      sym__type_name,
  [3650] = 10,
    ACTIONS(354), 1,
      sym__name,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__namespace_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(134), 1,
      sym_param,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
    STATE(151), 1,
      sym_variable_name,
    STATE(159), 1,
      sym__type_name,
  [3681] = 9,
    ACTIONS(354), 1,
      sym__name,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      sym__namespace_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
    STATE(151), 1,
      sym_variable_name,
    STATE(156), 1,
      sym_param,
    STATE(159), 1,
      sym__type_name,
  [3709] = 7,
    ACTIONS(366), 1,
      sym__name,
    ACTIONS(368), 1,
      anon_sym_BSLASH,
    ACTIONS(370), 1,
      sym_static,
    STATE(131), 1,
      sym__namespace_name,
    STATE(136), 1,
      sym_qualified_name,
    STATE(139), 1,
      aux_sym__namespace_name_repeat1,
    STATE(177), 1,
      sym__type_name,
  [3731] = 4,
    ACTIONS(90), 1,
      sym_text,
    ACTIONS(372), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(88), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [3746] = 6,
    ACTIONS(374), 1,
      sym__name,
    ACTIONS(376), 1,
      anon_sym_BSLASH,
    STATE(40), 1,
      sym__type_name,
    STATE(46), 1,
      sym__namespace_name,
    STATE(62), 1,
      sym_qualified_name,
    STATE(138), 1,
      aux_sym__namespace_name_repeat1,
  [3765] = 6,
    ACTIONS(368), 1,
      anon_sym_BSLASH,
    ACTIONS(378), 1,
      sym__name,
    STATE(131), 1,
      sym__namespace_name,
    STATE(136), 1,
      sym_qualified_name,
    STATE(139), 1,
      aux_sym__namespace_name_repeat1,
    STATE(179), 1,
      sym__type_name,
  [3784] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    STATE(126), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(82), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [3799] = 6,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      sym__name,
    STATE(25), 1,
      sym__namespace_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
    STATE(166), 1,
      sym__type_name,
  [3818] = 4,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(82), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [3833] = 6,
    ACTIONS(388), 1,
      sym__name,
    ACTIONS(390), 1,
      sym_uri,
    ACTIONS(392), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      sym_qualified_name,
    STATE(29), 1,
      sym__namespace_name,
    STATE(144), 1,
      aux_sym__namespace_name_repeat1,
  [3852] = 6,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      sym__name,
    STATE(25), 1,
      sym__namespace_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
    STATE(154), 1,
      sym__type_name,
  [3871] = 4,
    ACTIONS(94), 1,
      sym_text,
    ACTIONS(372), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(92), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [3886] = 4,
    ACTIONS(90), 1,
      sym_text,
    ACTIONS(372), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(88), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [3901] = 6,
    ACTIONS(394), 1,
      sym__name,
    ACTIONS(396), 1,
      sym_uri,
    ACTIONS(398), 1,
      anon_sym_BSLASH,
    STATE(120), 1,
      sym__namespace_name,
    STATE(137), 1,
      aux_sym__namespace_name_repeat1,
    STATE(152), 1,
      sym_qualified_name,
  [3920] = 4,
    ACTIONS(104), 1,
      sym_text,
    ACTIONS(400), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(102), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [3935] = 6,
    ACTIONS(374), 1,
      sym__name,
    ACTIONS(376), 1,
      anon_sym_BSLASH,
    STATE(42), 1,
      sym__type_name,
    STATE(46), 1,
      sym__namespace_name,
    STATE(62), 1,
      sym_qualified_name,
    STATE(138), 1,
      aux_sym__namespace_name_repeat1,
  [3954] = 6,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      sym__name,
    STATE(10), 1,
      sym__type_name,
    STATE(25), 1,
      sym__namespace_name,
    STATE(32), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
  [3973] = 4,
    ACTIONS(403), 1,
      anon_sym_ATinternal,
    ACTIONS(405), 1,
      anon_sym_ATlink,
    ACTIONS(407), 1,
      anon_sym_ATsee,
    STATE(167), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [3988] = 4,
    ACTIONS(84), 1,
      sym_text,
    ACTIONS(372), 1,
      anon_sym_BSLASH,
    STATE(108), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(82), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4003] = 3,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(92), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4015] = 4,
    ACTIONS(121), 1,
      sym_text,
    ACTIONS(409), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(116), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(119), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4029] = 5,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      sym__name,
    STATE(25), 1,
      sym__namespace_name,
    STATE(61), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
  [4045] = 5,
    ACTIONS(368), 1,
      anon_sym_BSLASH,
    ACTIONS(412), 1,
      sym__name,
    STATE(131), 1,
      sym__namespace_name,
    STATE(139), 1,
      aux_sym__namespace_name_repeat1,
    STATE(160), 1,
      sym_qualified_name,
  [4061] = 3,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    STATE(126), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(82), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4073] = 4,
    ACTIONS(134), 1,
      sym_text,
    ACTIONS(414), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(125), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(132), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4087] = 2,
    ACTIONS(104), 1,
      sym_text,
    ACTIONS(102), 4,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
  [4097] = 4,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_text,
    STATE(72), 1,
      sym_description,
    STATE(60), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [4111] = 5,
    ACTIONS(374), 1,
      sym__name,
    ACTIONS(376), 1,
      anon_sym_BSLASH,
    STATE(46), 1,
      sym__namespace_name,
    STATE(64), 1,
      sym_qualified_name,
    STATE(138), 1,
      aux_sym__namespace_name_repeat1,
  [4127] = 3,
    ACTIONS(418), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(102), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4139] = 4,
    ACTIONS(128), 1,
      sym_text,
    ACTIONS(421), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(116), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(126), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4153] = 3,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(88), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4165] = 3,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    STATE(115), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(88), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4177] = 3,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    ACTIONS(425), 1,
      sym__begin,
    STATE(128), 2,
      sym_document,
      aux_sym_program_repeat1,
  [4188] = 3,
    ACTIONS(428), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(129), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(119), 2,
      sym__name,
      anon_sym_PIPE,
  [4199] = 1,
    ACTIONS(102), 4,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
  [4206] = 3,
    ACTIONS(431), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(133), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(132), 2,
      sym__name,
      anon_sym_PIPE,
  [4217] = 3,
    ACTIONS(3), 1,
      sym__begin,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    STATE(128), 2,
      sym_document,
      aux_sym_program_repeat1,
  [4228] = 3,
    ACTIONS(435), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(129), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(126), 2,
      sym__name,
      anon_sym_PIPE,
  [4239] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      aux_sym__method_tag_repeat1,
  [4249] = 2,
    ACTIONS(443), 1,
      anon_sym_EQ,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4257] = 3,
    ACTIONS(160), 1,
      sym__name,
    ACTIONS(445), 1,
      anon_sym_PIPE,
    STATE(140), 1,
      aux_sym__type_name_repeat1,
  [4267] = 3,
    ACTIONS(447), 1,
      sym__name,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
  [4277] = 3,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(451), 1,
      sym__name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
  [4287] = 3,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(453), 1,
      sym__name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
  [4297] = 3,
    ACTIONS(243), 1,
      sym__name,
    ACTIONS(445), 1,
      anon_sym_PIPE,
    STATE(147), 1,
      aux_sym__type_name_repeat1,
  [4307] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym__method_tag_repeat1,
  [4317] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym__method_tag_repeat1,
  [4327] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym__method_tag_repeat1,
  [4337] = 3,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(461), 1,
      sym__name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
  [4347] = 1,
    ACTIONS(282), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [4353] = 3,
    ACTIONS(449), 1,
      anon_sym_BSLASH,
    ACTIONS(463), 1,
      sym__name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
  [4363] = 3,
    ACTIONS(208), 1,
      sym__name,
    ACTIONS(465), 1,
      anon_sym_PIPE,
    STATE(147), 1,
      aux_sym__type_name_repeat1,
  [4373] = 3,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym__method_tag_repeat1,
  [4383] = 3,
    ACTIONS(473), 1,
      sym__name,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
  [4393] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym__method_tag_repeat1,
  [4403] = 2,
    ACTIONS(482), 1,
      anon_sym_EQ,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4411] = 3,
    ACTIONS(484), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(486), 1,
      sym_text,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
  [4421] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym__method_tag_repeat1,
  [4431] = 2,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_variable_name,
  [4438] = 1,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      sym__begin,
  [4443] = 1,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4448] = 2,
    ACTIONS(494), 1,
      sym_text,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
  [4455] = 1,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4460] = 2,
    ACTIONS(500), 1,
      anon_sym_DOLLAR,
    STATE(135), 1,
      sym_variable_name,
  [4467] = 1,
    ACTIONS(268), 2,
      sym__name,
      anon_sym_PIPE,
  [4472] = 1,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      sym__begin,
  [4477] = 2,
    ACTIONS(504), 1,
      sym_text,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
  [4484] = 1,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4489] = 2,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    ACTIONS(510), 1,
      sym_text,
  [4496] = 1,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      sym__begin,
  [4501] = 2,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_variable_name,
  [4508] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
  [4512] = 1,
    ACTIONS(516), 1,
      sym_param_value,
  [4516] = 1,
    ACTIONS(518), 1,
      sym__name,
  [4520] = 1,
    ACTIONS(520), 1,
      sym__name,
  [4524] = 1,
    ACTIONS(522), 1,
      sym_email_address,
  [4528] = 1,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
  [4532] = 1,
    ACTIONS(526), 1,
      sym_param_value,
  [4536] = 1,
    ACTIONS(528), 1,
      sym_uri,
  [4540] = 1,
    ACTIONS(530), 1,
      sym_text,
  [4544] = 1,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
  [4548] = 1,
    ACTIONS(534), 1,
      sym__name,
  [4552] = 1,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
  [4556] = 1,
    ACTIONS(538), 1,
      sym__name,
  [4560] = 1,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
  [4564] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
  [4568] = 1,
    ACTIONS(542), 1,
      sym__name,
  [4572] = 1,
    ACTIONS(544), 1,
      sym__name,
  [4576] = 1,
    ACTIONS(546), 1,
      sym_uri,
  [4580] = 1,
    ACTIONS(548), 1,
      anon_sym_GT,
  [4584] = 1,
    ACTIONS(550), 1,
      sym__name,
  [4588] = 1,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [4592] = 1,
    ACTIONS(554), 1,
      sym__name,
  [4596] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [4600] = 1,
    ACTIONS(558), 1,
      sym__name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 322,
  [SMALL_STATE(15)] = 362,
  [SMALL_STATE(16)] = 406,
  [SMALL_STATE(17)] = 450,
  [SMALL_STATE(18)] = 494,
  [SMALL_STATE(19)] = 538,
  [SMALL_STATE(20)] = 582,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 670,
  [SMALL_STATE(23)] = 714,
  [SMALL_STATE(24)] = 758,
  [SMALL_STATE(25)] = 802,
  [SMALL_STATE(26)] = 846,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 946,
  [SMALL_STATE(29)] = 990,
  [SMALL_STATE(30)] = 1033,
  [SMALL_STATE(31)] = 1080,
  [SMALL_STATE(32)] = 1127,
  [SMALL_STATE(33)] = 1170,
  [SMALL_STATE(34)] = 1217,
  [SMALL_STATE(35)] = 1264,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1358,
  [SMALL_STATE(38)] = 1405,
  [SMALL_STATE(39)] = 1452,
  [SMALL_STATE(40)] = 1499,
  [SMALL_STATE(41)] = 1546,
  [SMALL_STATE(42)] = 1593,
  [SMALL_STATE(43)] = 1640,
  [SMALL_STATE(44)] = 1683,
  [SMALL_STATE(45)] = 1730,
  [SMALL_STATE(46)] = 1773,
  [SMALL_STATE(47)] = 1816,
  [SMALL_STATE(48)] = 1863,
  [SMALL_STATE(49)] = 1910,
  [SMALL_STATE(50)] = 1957,
  [SMALL_STATE(51)] = 2004,
  [SMALL_STATE(52)] = 2051,
  [SMALL_STATE(53)] = 2094,
  [SMALL_STATE(54)] = 2137,
  [SMALL_STATE(55)] = 2180,
  [SMALL_STATE(56)] = 2223,
  [SMALL_STATE(57)] = 2262,
  [SMALL_STATE(58)] = 2301,
  [SMALL_STATE(59)] = 2343,
  [SMALL_STATE(60)] = 2387,
  [SMALL_STATE(61)] = 2431,
  [SMALL_STATE(62)] = 2469,
  [SMALL_STATE(63)] = 2511,
  [SMALL_STATE(64)] = 2553,
  [SMALL_STATE(65)] = 2590,
  [SMALL_STATE(66)] = 2626,
  [SMALL_STATE(67)] = 2662,
  [SMALL_STATE(68)] = 2698,
  [SMALL_STATE(69)] = 2735,
  [SMALL_STATE(70)] = 2772,
  [SMALL_STATE(71)] = 2806,
  [SMALL_STATE(72)] = 2840,
  [SMALL_STATE(73)] = 2874,
  [SMALL_STATE(74)] = 2908,
  [SMALL_STATE(75)] = 2942,
  [SMALL_STATE(76)] = 2976,
  [SMALL_STATE(77)] = 3010,
  [SMALL_STATE(78)] = 3044,
  [SMALL_STATE(79)] = 3078,
  [SMALL_STATE(80)] = 3112,
  [SMALL_STATE(81)] = 3146,
  [SMALL_STATE(82)] = 3180,
  [SMALL_STATE(83)] = 3214,
  [SMALL_STATE(84)] = 3248,
  [SMALL_STATE(85)] = 3282,
  [SMALL_STATE(86)] = 3316,
  [SMALL_STATE(87)] = 3350,
  [SMALL_STATE(88)] = 3384,
  [SMALL_STATE(89)] = 3418,
  [SMALL_STATE(90)] = 3452,
  [SMALL_STATE(91)] = 3486,
  [SMALL_STATE(92)] = 3520,
  [SMALL_STATE(93)] = 3554,
  [SMALL_STATE(94)] = 3588,
  [SMALL_STATE(95)] = 3619,
  [SMALL_STATE(96)] = 3650,
  [SMALL_STATE(97)] = 3681,
  [SMALL_STATE(98)] = 3709,
  [SMALL_STATE(99)] = 3731,
  [SMALL_STATE(100)] = 3746,
  [SMALL_STATE(101)] = 3765,
  [SMALL_STATE(102)] = 3784,
  [SMALL_STATE(103)] = 3799,
  [SMALL_STATE(104)] = 3818,
  [SMALL_STATE(105)] = 3833,
  [SMALL_STATE(106)] = 3852,
  [SMALL_STATE(107)] = 3871,
  [SMALL_STATE(108)] = 3886,
  [SMALL_STATE(109)] = 3901,
  [SMALL_STATE(110)] = 3920,
  [SMALL_STATE(111)] = 3935,
  [SMALL_STATE(112)] = 3954,
  [SMALL_STATE(113)] = 3973,
  [SMALL_STATE(114)] = 3988,
  [SMALL_STATE(115)] = 4003,
  [SMALL_STATE(116)] = 4015,
  [SMALL_STATE(117)] = 4029,
  [SMALL_STATE(118)] = 4045,
  [SMALL_STATE(119)] = 4061,
  [SMALL_STATE(120)] = 4073,
  [SMALL_STATE(121)] = 4087,
  [SMALL_STATE(122)] = 4097,
  [SMALL_STATE(123)] = 4111,
  [SMALL_STATE(124)] = 4127,
  [SMALL_STATE(125)] = 4139,
  [SMALL_STATE(126)] = 4153,
  [SMALL_STATE(127)] = 4165,
  [SMALL_STATE(128)] = 4177,
  [SMALL_STATE(129)] = 4188,
  [SMALL_STATE(130)] = 4199,
  [SMALL_STATE(131)] = 4206,
  [SMALL_STATE(132)] = 4217,
  [SMALL_STATE(133)] = 4228,
  [SMALL_STATE(134)] = 4239,
  [SMALL_STATE(135)] = 4249,
  [SMALL_STATE(136)] = 4257,
  [SMALL_STATE(137)] = 4267,
  [SMALL_STATE(138)] = 4277,
  [SMALL_STATE(139)] = 4287,
  [SMALL_STATE(140)] = 4297,
  [SMALL_STATE(141)] = 4307,
  [SMALL_STATE(142)] = 4317,
  [SMALL_STATE(143)] = 4327,
  [SMALL_STATE(144)] = 4337,
  [SMALL_STATE(145)] = 4347,
  [SMALL_STATE(146)] = 4353,
  [SMALL_STATE(147)] = 4363,
  [SMALL_STATE(148)] = 4373,
  [SMALL_STATE(149)] = 4383,
  [SMALL_STATE(150)] = 4393,
  [SMALL_STATE(151)] = 4403,
  [SMALL_STATE(152)] = 4411,
  [SMALL_STATE(153)] = 4421,
  [SMALL_STATE(154)] = 4431,
  [SMALL_STATE(155)] = 4438,
  [SMALL_STATE(156)] = 4443,
  [SMALL_STATE(157)] = 4448,
  [SMALL_STATE(158)] = 4455,
  [SMALL_STATE(159)] = 4460,
  [SMALL_STATE(160)] = 4467,
  [SMALL_STATE(161)] = 4472,
  [SMALL_STATE(162)] = 4477,
  [SMALL_STATE(163)] = 4484,
  [SMALL_STATE(164)] = 4489,
  [SMALL_STATE(165)] = 4496,
  [SMALL_STATE(166)] = 4501,
  [SMALL_STATE(167)] = 4508,
  [SMALL_STATE(168)] = 4512,
  [SMALL_STATE(169)] = 4516,
  [SMALL_STATE(170)] = 4520,
  [SMALL_STATE(171)] = 4524,
  [SMALL_STATE(172)] = 4528,
  [SMALL_STATE(173)] = 4532,
  [SMALL_STATE(174)] = 4536,
  [SMALL_STATE(175)] = 4540,
  [SMALL_STATE(176)] = 4544,
  [SMALL_STATE(177)] = 4548,
  [SMALL_STATE(178)] = 4552,
  [SMALL_STATE(179)] = 4556,
  [SMALL_STATE(180)] = 4560,
  [SMALL_STATE(181)] = 4564,
  [SMALL_STATE(182)] = 4568,
  [SMALL_STATE(183)] = 4572,
  [SMALL_STATE(184)] = 4576,
  [SMALL_STATE(185)] = 4580,
  [SMALL_STATE(186)] = 4584,
  [SMALL_STATE(187)] = 4588,
  [SMALL_STATE(188)] = 4592,
  [SMALL_STATE(189)] = 4596,
  [SMALL_STATE(190)] = 4600,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(68),
  [7] = {.count = 1, .reusable = true}, SHIFT(26),
  [9] = {.count = 1, .reusable = true}, SHIFT(103),
  [11] = {.count = 1, .reusable = true}, SHIFT(48),
  [13] = {.count = 1, .reusable = true}, SHIFT(105),
  [15] = {.count = 1, .reusable = true}, SHIFT(98),
  [17] = {.count = 1, .reusable = true}, SHIFT(106),
  [19] = {.count = 1, .reusable = false}, SHIFT(106),
  [21] = {.count = 1, .reusable = true}, SHIFT(100),
  [23] = {.count = 1, .reusable = true}, SHIFT(184),
  [25] = {.count = 1, .reusable = true}, SHIFT(111),
  [27] = {.count = 1, .reusable = true}, SHIFT(112),
  [29] = {.count = 1, .reusable = true}, SHIFT(65),
  [31] = {.count = 1, .reusable = false}, SHIFT(60),
  [33] = {.count = 1, .reusable = true}, SHIFT(113),
  [35] = {.count = 1, .reusable = true}, SHIFT(165),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(184),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.count = 1, .reusable = true}, SHIFT(155),
  [80] = {.count = 1, .reusable = true}, SHIFT(161),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 1),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 1),
  [86] = {.count = 1, .reusable = true}, SHIFT(170),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 2),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 2),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 3),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 3),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 2),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 2),
  [100] = {.count = 1, .reusable = true}, SHIFT(169),
  [102] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2),
  [104] = {.count = 1, .reusable = false}, REDUCE(aux_sym__namespace_name_repeat2, 2),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(170),
  [109] = {.count = 1, .reusable = true}, SHIFT(188),
  [111] = {.count = 1, .reusable = true}, SHIFT(182),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(188),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(182),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [121] = {.count = 1, .reusable = false}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(23),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 2),
  [130] = {.count = 1, .reusable = true}, SHIFT(23),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(24),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 1),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 1),
  [142] = {.count = 1, .reusable = true}, SHIFT(41),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [146] = {.count = 1, .reusable = true}, SHIFT(47),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [150] = {.count = 1, .reusable = true}, SHIFT(55),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 8),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 8),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 8),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 8),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1, .production_id = 1),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1, .production_id = 1),
  [164] = {.count = 1, .reusable = true}, SHIFT(117),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 6),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 6),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 6),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 6),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 3),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 4),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 2),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 2),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 2),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 2),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 2),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 2),
  [202] = {.count = 1, .reusable = true}, SHIFT(53),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 8),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 8),
  [208] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [210] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(117),
  [215] = {.count = 1, .reusable = true}, SHIFT(43),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 6),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 6),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 3),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(52),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(53),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2, .production_id = 1),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 2, .production_id = 1),
  [247] = {.count = 1, .reusable = true}, SHIFT(52),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(123),
  [252] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [254] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [256] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(59),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(113),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [266] = {.count = 1, .reusable = false}, SHIFT(59),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2, .production_id = 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2, .production_id = 3),
  [272] = {.count = 1, .reusable = true}, SHIFT(123),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_inline_tag, 3),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [290] = {.count = 1, .reusable = true}, SHIFT(69),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [294] = {.count = 1, .reusable = true}, SHIFT(171),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym__see_tag, 3),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym__see_tag, 3),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 3),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 3),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 9, .production_id = 8),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 9, .production_id = 8),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 6),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 6),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 3),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 3),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 4),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 4),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 4),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 4),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 4),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 4),
  [354] = {.count = 1, .reusable = false}, SHIFT(7),
  [356] = {.count = 1, .reusable = true}, SHIFT(36),
  [358] = {.count = 1, .reusable = true}, SHIFT(146),
  [360] = {.count = 1, .reusable = false}, SHIFT(183),
  [362] = {.count = 1, .reusable = true}, SHIFT(31),
  [364] = {.count = 1, .reusable = true}, SHIFT(39),
  [366] = {.count = 1, .reusable = false}, SHIFT(104),
  [368] = {.count = 1, .reusable = true}, SHIFT(139),
  [370] = {.count = 1, .reusable = false}, SHIFT(101),
  [372] = {.count = 1, .reusable = true}, SHIFT(190),
  [374] = {.count = 1, .reusable = true}, SHIFT(13),
  [376] = {.count = 1, .reusable = true}, SHIFT(138),
  [378] = {.count = 1, .reusable = true}, SHIFT(102),
  [380] = {.count = 1, .reusable = true}, SHIFT(94),
  [382] = {.count = 1, .reusable = true}, SHIFT(186),
  [384] = {.count = 1, .reusable = true}, SHIFT(7),
  [386] = {.count = 1, .reusable = true}, SHIFT(96),
  [388] = {.count = 1, .reusable = false}, SHIFT(18),
  [390] = {.count = 1, .reusable = true}, SHIFT(35),
  [392] = {.count = 1, .reusable = true}, SHIFT(144),
  [394] = {.count = 1, .reusable = false}, SHIFT(114),
  [396] = {.count = 1, .reusable = true}, SHIFT(164),
  [398] = {.count = 1, .reusable = true}, SHIFT(137),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(190),
  [403] = {.count = 1, .reusable = true}, SHIFT(175),
  [405] = {.count = 1, .reusable = true}, SHIFT(109),
  [407] = {.count = 1, .reusable = true}, SHIFT(174),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(116),
  [412] = {.count = 1, .reusable = true}, SHIFT(119),
  [414] = {.count = 1, .reusable = true}, SHIFT(125),
  [416] = {.count = 1, .reusable = true}, SHIFT(60),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(186),
  [421] = {.count = 1, .reusable = true}, SHIFT(116),
  [423] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(129),
  [431] = {.count = 1, .reusable = true}, SHIFT(133),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [435] = {.count = 1, .reusable = true}, SHIFT(129),
  [437] = {.count = 1, .reusable = true}, SHIFT(97),
  [439] = {.count = 1, .reusable = true}, SHIFT(37),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [443] = {.count = 1, .reusable = true}, SHIFT(173),
  [445] = {.count = 1, .reusable = true}, SHIFT(118),
  [447] = {.count = 1, .reusable = true}, SHIFT(99),
  [449] = {.count = 1, .reusable = true}, SHIFT(149),
  [451] = {.count = 1, .reusable = true}, SHIFT(28),
  [453] = {.count = 1, .reusable = true}, SHIFT(127),
  [455] = {.count = 1, .reusable = true}, SHIFT(50),
  [457] = {.count = 1, .reusable = true}, SHIFT(34),
  [459] = {.count = 1, .reusable = true}, SHIFT(44),
  [461] = {.count = 1, .reusable = true}, SHIFT(17),
  [463] = {.count = 1, .reusable = true}, SHIFT(8),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(118),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(97),
  [471] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [473] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(149),
  [478] = {.count = 1, .reusable = true}, SHIFT(33),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [482] = {.count = 1, .reusable = true}, SHIFT(168),
  [484] = {.count = 1, .reusable = true}, SHIFT(157),
  [486] = {.count = 1, .reusable = false}, SHIFT(189),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [490] = {.count = 1, .reusable = true}, SHIFT(30),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [494] = {.count = 1, .reusable = true}, SHIFT(178),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_param, 4),
  [500] = {.count = 1, .reusable = true}, SHIFT(183),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [504] = {.count = 1, .reusable = true}, SHIFT(176),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 2),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_param, 3),
  [510] = {.count = 1, .reusable = true}, SHIFT(189),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [514] = {.count = 1, .reusable = true}, SHIFT(66),
  [516] = {.count = 1, .reusable = true}, SHIFT(163),
  [518] = {.count = 1, .reusable = true}, SHIFT(67),
  [520] = {.count = 1, .reusable = true}, SHIFT(14),
  [522] = {.count = 1, .reusable = true}, SHIFT(185),
  [524] = {.count = 1, .reusable = true}, SHIFT(95),
  [526] = {.count = 1, .reusable = true}, SHIFT(158),
  [528] = {.count = 1, .reusable = true}, SHIFT(162),
  [530] = {.count = 1, .reusable = true}, SHIFT(181),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 3, .production_id = 5),
  [534] = {.count = 1, .reusable = true}, SHIFT(180),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 4, .production_id = 7),
  [538] = {.count = 1, .reusable = true}, SHIFT(172),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 2),
  [542] = {.count = 1, .reusable = true}, SHIFT(56),
  [544] = {.count = 1, .reusable = true}, SHIFT(145),
  [546] = {.count = 1, .reusable = true}, SHIFT(122),
  [548] = {.count = 1, .reusable = true}, SHIFT(80),
  [550] = {.count = 1, .reusable = true}, SHIFT(130),
  [552] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [554] = {.count = 1, .reusable = true}, SHIFT(57),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 5),
  [558] = {.count = 1, .reusable = true}, SHIFT(121),
};

#ifdef __cplusplus
extern "C" {
#endif
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
#ifdef __cplusplus
}
#endif
