#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 194
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 89
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
  sym_program = 54,
  sym_document = 55,
  sym_tag = 56,
  sym__author_tag = 57,
  sym__version_tag = 58,
  sym__global_tag = 59,
  sym__internal_tag = 60,
  sym__internal_inline_tag = 61,
  sym__link_tag = 62,
  sym__link_inline_tag = 63,
  sym__method_tag = 64,
  sym__variable_tag_with_type = 65,
  sym__return_tag = 66,
  sym__see_tag = 67,
  sym__see_inline_tag = 68,
  sym__throws_tag = 69,
  sym__var_tag = 70,
  sym_tag_name = 71,
  sym_description = 72,
  sym_text_line = 73,
  sym_inline_tag = 74,
  sym__type_name = 75,
  sym_param = 76,
  sym_qualified_name = 77,
  sym__namespace_name = 78,
  sym_variable_name = 79,
  aux_sym_program_repeat1 = 80,
  aux_sym_document_repeat1 = 81,
  aux_sym__method_tag_repeat1 = 82,
  aux_sym_description_repeat1 = 83,
  aux_sym_text_line_repeat1 = 84,
  aux_sym__type_name_repeat1 = 85,
  aux_sym_qualified_name_repeat1 = 86,
  aux_sym__namespace_name_repeat1 = 87,
  aux_sym__namespace_name_repeat2 = 88,
  alias_sym_name = 89,
  alias_sym_type = 90,
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
  [sym_text_line] = "text_line",
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
  [sym_text_line] = sym_text_line,
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
      if (lookahead == '\n') SKIP(183)
      if (lookahead == '\r') SKIP(183)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(242);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(242);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead == '}') ADVANCE(229);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(242);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '$') ADVANCE(241);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(6)
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '$') ADVANCE(241);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(8)
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(8)
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(10)
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(10)
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '$') ADVANCE(241);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '$') ADVANCE(241);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == ' ') SKIP(14)
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == ' ') SKIP(14)
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') SKIP(16)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') SKIP(16)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(18)
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') SKIP(18)
      if (lookahead == '$') ADVANCE(241);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(18)
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') SKIP(18)
      if (lookahead == '$') ADVANCE(241);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(20)
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == ' ') SKIP(20)
      if (lookahead == '$') ADVANCE(241);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(20)
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == ' ') SKIP(20)
      if (lookahead == '$') ADVANCE(241);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 21:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(22)
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == ' ') SKIP(22)
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 25:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 26:
      if (lookahead == '\t') SKIP(26)
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == ' ') SKIP(26)
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 27:
      if (lookahead == '\t') SKIP(28)
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(28)
      if (lookahead == ' ') SKIP(28)
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '@') ADVANCE(46);
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
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '@') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(208);
      END_STATE();
    case 29:
      if (lookahead == '\t') SKIP(29)
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == ' ') SKIP(29)
      if (lookahead == '*') SKIP(29)
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 30:
      if (lookahead == '\t') SKIP(30)
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == ' ') SKIP(30)
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '*') SKIP(30)
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      END_STATE();
    case 31:
      if (lookahead == '\t') SKIP(31)
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == ' ') SKIP(31)
      if (lookahead == '*') SKIP(31)
      if (lookahead == '{') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 32:
      if (lookahead == '\t') SKIP(32)
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == ' ') SKIP(32)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') SKIP(32)
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == '\t') SKIP(33)
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == ' ') SKIP(33)
      if (lookahead == '*') SKIP(33)
      if (lookahead == '\\') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (lookahead == '$' ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      END_STATE();
    case 34:
      if (lookahead == '\t') SKIP(34)
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(34)
      if (lookahead == ' ') SKIP(34)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') SKIP(34)
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(227);
      END_STATE();
    case 35:
      if (lookahead == '\t') SKIP(35)
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(35)
      if (lookahead == ' ') SKIP(35)
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') SKIP(35)
      if (lookahead == '}') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(227);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == '\t') ADVANCE(237);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == ' ') SKIP(37)
      if (lookahead == '*') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(238);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(186);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(232);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '@') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(239);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'g') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 110:
      if (lookahead == 'k') ADVANCE(194);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 175:
      if (lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 177:
      if (lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 178:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 179:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 183:
      if (eof) ADVANCE(185);
      if (lookahead == '\t') SKIP(183)
      if (lookahead == '\n') SKIP(183)
      if (lookahead == '\r') SKIP(183)
      if (lookahead == ' ') SKIP(183)
      if (lookahead == '$') ADVANCE(242);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 184:
      if (eof) ADVANCE(185);
      if (lookahead == '\t') SKIP(184)
      if (lookahead == '\n') SKIP(184)
      if (lookahead == '\r') SKIP(184)
      if (lookahead == ' ') SKIP(184)
      if (lookahead == '$') ADVANCE(242);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') SKIP(184)
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
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
      if (lookahead == '-') ADVANCE(154);
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
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(182);
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
      if (lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (lookahead == '$' ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\t') ADVANCE(237);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(234);
      END_STATE();
    case 243:
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
  [1] = {.lex_state = 184},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 20},
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
  [94] = {.lex_state = 184},
  [95] = {.lex_state = 184},
  [96] = {.lex_state = 184},
  [97] = {.lex_state = 184},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 30},
  [103] = {.lex_state = 30},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 32},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 32},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 30},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 34},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 30},
  [124] = {.lex_state = 34},
  [125] = {.lex_state = 30},
  [126] = {.lex_state = 32},
  [127] = {.lex_state = 30},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 30},
  [130] = {.lex_state = 30},
  [131] = {.lex_state = 184},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 30},
  [134] = {.lex_state = 184},
  [135] = {.lex_state = 30},
  [136] = {.lex_state = 30},
  [137] = {.lex_state = 184},
  [138] = {.lex_state = 184},
  [139] = {.lex_state = 30},
  [140] = {.lex_state = 184},
  [141] = {.lex_state = 30},
  [142] = {.lex_state = 184},
  [143] = {.lex_state = 30},
  [144] = {.lex_state = 184},
  [145] = {.lex_state = 184},
  [146] = {.lex_state = 30},
  [147] = {.lex_state = 184},
  [148] = {.lex_state = 184},
  [149] = {.lex_state = 30},
  [150] = {.lex_state = 30},
  [151] = {.lex_state = 30},
  [152] = {.lex_state = 184},
  [153] = {.lex_state = 30},
  [154] = {.lex_state = 30},
  [155] = {.lex_state = 184},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 184},
  [159] = {.lex_state = 30},
  [160] = {.lex_state = 184},
  [161] = {.lex_state = 184},
  [162] = {.lex_state = 184},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 184},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 184},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 30},
  [173] = {.lex_state = 30},
  [174] = {.lex_state = 36},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 33},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 184},
  [180] = {.lex_state = 30},
  [181] = {.lex_state = 30},
  [182] = {.lex_state = 184},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 37},
  [185] = {.lex_state = 30},
  [186] = {.lex_state = 30},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 184},
  [189] = {.lex_state = 30},
  [190] = {.lex_state = 37},
  [191] = {.lex_state = 30},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 30},
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
    [sym_program] = STATE(183),
    [sym_document] = STATE(134),
    [aux_sym_program_repeat1] = STATE(134),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(3),
    [sym__author_tag] = STATE(73),
    [sym__version_tag] = STATE(73),
    [sym__global_tag] = STATE(73),
    [sym__internal_tag] = STATE(73),
    [sym__link_tag] = STATE(73),
    [sym__method_tag] = STATE(73),
    [sym__variable_tag_with_type] = STATE(73),
    [sym__return_tag] = STATE(73),
    [sym__see_tag] = STATE(73),
    [sym__throws_tag] = STATE(73),
    [sym__var_tag] = STATE(73),
    [sym_tag_name] = STATE(22),
    [sym_description] = STATE(6),
    [sym_text_line] = STATE(38),
    [sym_inline_tag] = STATE(117),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_description_repeat1] = STATE(38),
    [aux_sym_text_line_repeat1] = STATE(117),
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
    ACTIONS(37), 1,
      sym__end,
    STATE(22), 1,
      sym_tag_name,
    ACTIONS(7), 2,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
    STATE(4), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(17), 3,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(73), 11,
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
  [78] = 17,
    ACTIONS(39), 1,
      anon_sym_ATauthor,
    ACTIONS(45), 1,
      anon_sym_ATglobal,
    ACTIONS(48), 1,
      anon_sym_ATinternal,
    ACTIONS(51), 1,
      anon_sym_ATlink,
    ACTIONS(54), 1,
      anon_sym_ATmethod,
    ACTIONS(60), 1,
      anon_sym_ATproperty,
    ACTIONS(63), 1,
      anon_sym_ATreturn,
    ACTIONS(66), 1,
      anon_sym_ATsee,
    ACTIONS(69), 1,
      anon_sym_ATthrows,
    ACTIONS(72), 1,
      anon_sym_ATvar,
    ACTIONS(78), 1,
      sym__end,
    STATE(22), 1,
      sym_tag_name,
    ACTIONS(42), 2,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
    STATE(4), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(57), 3,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(73), 11,
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
    ACTIONS(75), 13,
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
    ACTIONS(80), 1,
      sym__end,
    STATE(22), 1,
      sym_tag_name,
    ACTIONS(7), 2,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
    STATE(4), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(17), 3,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(73), 11,
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
    ACTIONS(37), 1,
      sym__end,
    STATE(22), 1,
      sym_tag_name,
    ACTIONS(7), 2,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
    STATE(5), 2,
      sym_tag,
      aux_sym_document_repeat1,
    ACTIONS(17), 3,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
    STATE(73), 11,
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
    STATE(15), 1,
      sym_variable_name,
    STATE(77), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
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
      anon_sym_ATproperty,
    ACTIONS(92), 1,
      sym_version,
    STATE(83), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
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
      anon_sym_LPAREN_RPAREN,
    ACTIONS(98), 1,
      anon_sym_ATproperty,
    STATE(78), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
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
  [477] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_ATproperty,
    STATE(90), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(100), 28,
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
  [528] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_ATproperty,
    STATE(85), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(104), 28,
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
  [579] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_ATproperty,
    STATE(93), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(108), 28,
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
  [630] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_ATproperty,
    STATE(92), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(112), 28,
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
  [681] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(118), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(116), 32,
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
  [726] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_ATproperty,
    STATE(86), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
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
  [777] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(118), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(116), 32,
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
  [822] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 32,
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
  [867] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_ATproperty,
    STATE(76), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(133), 28,
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
  [918] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_ATproperty,
    STATE(74), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(137), 28,
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
  [969] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(143), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(141), 32,
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
  [1014] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_ATproperty,
    STATE(79), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(145), 28,
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
  [1065] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_ATproperty,
    STATE(87), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(149), 28,
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
  [1116] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_ATproperty,
    STATE(70), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(153), 28,
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
  [1167] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_ATproperty,
    STATE(80), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(157), 28,
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
  [1218] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_ATproperty,
    STATE(81), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(161), 28,
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
  [1269] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_ATproperty,
    STATE(91), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(165), 28,
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
  [1320] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      anon_sym_ATproperty,
    STATE(71), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(169), 28,
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
  [1371] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_ATproperty,
    STATE(82), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
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
  [1422] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH,
    STATE(16), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(179), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(177), 32,
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
  [1467] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_ATproperty,
    STATE(88), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(181), 28,
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
  [1518] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_ATproperty,
    STATE(78), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
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
  [1569] = 7,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_ATproperty,
    STATE(89), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
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
  [1620] = 2,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 33,
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
  [1660] = 4,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(45), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(118), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(116), 31,
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
  [1704] = 4,
    ACTIONS(191), 1,
      anon_sym_BSLASH,
    STATE(35), 1,
      aux_sym__namespace_name_repeat2,
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
  [1748] = 4,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(47), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(118), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(116), 31,
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
  [1792] = 4,
    ACTIONS(198), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(42), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(196), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(194), 31,
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
  [1836] = 6,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      anon_sym_ATproperty,
    STATE(46), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(200), 28,
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
  [1884] = 4,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    STATE(35), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(143), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(141), 31,
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
  [1928] = 4,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    STATE(48), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(179), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(177), 31,
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
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(118), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(116), 31,
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
    ACTIONS(210), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(42), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(208), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(206), 31,
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
    ACTIONS(217), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(37), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(215), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(213), 31,
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
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(179), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(177), 31,
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
  [2148] = 4,
    ACTIONS(219), 1,
      anon_sym_BSLASH,
    STATE(45), 1,
      aux_sym__namespace_name_repeat2,
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
      anon_sym_LBRACK_RBRACK,
      sym__end,
  [2192] = 6,
    ACTIONS(224), 1,
      anon_sym_ATproperty,
    ACTIONS(226), 1,
      sym_text,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(46), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(222), 28,
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
  [2240] = 4,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(45), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(143), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(141), 31,
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
  [2284] = 4,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    STATE(35), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(118), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(116), 31,
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
  [2328] = 2,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 32,
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
  [2367] = 4,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    STATE(55), 1,
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
  [2410] = 4,
    ACTIONS(238), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(51), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(208), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(206), 30,
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
  [2453] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(58), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(196), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(194), 30,
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
  [2496] = 4,
    ACTIONS(247), 1,
      anon_sym_PIPE,
    STATE(53), 1,
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
  [2539] = 4,
    ACTIONS(250), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(59), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(215), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(213), 30,
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
  [2582] = 4,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    STATE(53), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(254), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(252), 30,
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
  [2625] = 4,
    ACTIONS(256), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(52), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(215), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(213), 30,
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
  [2668] = 2,
    ACTIONS(128), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(126), 32,
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
  [2707] = 4,
    ACTIONS(258), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(58), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(208), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(206), 30,
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
  [2750] = 4,
    ACTIONS(261), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(51), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(196), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(194), 30,
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
  [2793] = 4,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    STATE(63), 1,
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
  [2877] = 2,
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
  [2915] = 4,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym__type_name_repeat1,
    ACTIONS(254), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(252), 29,
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
      anon_sym_ATproperty,
    ACTIONS(288), 1,
      sym_author_name,
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
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_ATproperty,
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
  [3244] = 2,
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
  [3278] = 2,
    ACTIONS(151), 1,
      anon_sym_ATproperty,
    ACTIONS(149), 28,
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
  [3346] = 2,
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
  [3380] = 2,
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
  [3414] = 2,
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
  [3448] = 2,
    ACTIONS(110), 1,
      anon_sym_ATproperty,
    ACTIONS(108), 28,
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
    ACTIONS(147), 1,
      anon_sym_ATproperty,
    ACTIONS(145), 28,
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
    ACTIONS(159), 1,
      anon_sym_ATproperty,
    ACTIONS(157), 28,
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
    ACTIONS(171), 1,
      anon_sym_ATproperty,
    ACTIONS(169), 28,
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
  [3686] = 2,
    ACTIONS(167), 1,
      anon_sym_ATproperty,
    ACTIONS(165), 28,
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
  [3788] = 2,
    ACTIONS(163), 1,
      anon_sym_ATproperty,
    ACTIONS(161), 28,
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
  [3856] = 2,
    ACTIONS(183), 1,
      anon_sym_ATproperty,
    ACTIONS(181), 28,
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
    STATE(43), 1,
      sym__namespace_name,
    STATE(50), 1,
      sym_qualified_name,
    STATE(137), 1,
      sym_variable_name,
    STATE(147), 1,
      sym_param,
    STATE(153), 1,
      aux_sym__namespace_name_repeat1,
    STATE(166), 1,
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
    STATE(43), 1,
      sym__namespace_name,
    STATE(50), 1,
      sym_qualified_name,
    STATE(137), 1,
      sym_variable_name,
    STATE(153), 1,
      aux_sym__namespace_name_repeat1,
    STATE(155), 1,
      sym_param,
    STATE(166), 1,
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
    STATE(43), 1,
      sym__namespace_name,
    STATE(50), 1,
      sym_qualified_name,
    STATE(137), 1,
      sym_variable_name,
    STATE(144), 1,
      sym_param,
    STATE(153), 1,
      aux_sym__namespace_name_repeat1,
    STATE(166), 1,
      sym__type_name,
  [4085] = 9,
    ACTIONS(352), 1,
      sym__name,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym__namespace_name,
    STATE(50), 1,
      sym_qualified_name,
    STATE(137), 1,
      sym_variable_name,
    STATE(153), 1,
      aux_sym__namespace_name_repeat1,
    STATE(161), 1,
      sym_param,
    STATE(166), 1,
      sym__type_name,
  [4113] = 5,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      sym_text,
    STATE(75), 1,
      sym_description,
    STATE(38), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(117), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [4131] = 7,
    ACTIONS(366), 1,
      sym__name,
    ACTIONS(368), 1,
      anon_sym_BSLASH,
    ACTIONS(370), 1,
      sym_static,
    STATE(133), 1,
      sym__namespace_name,
    STATE(139), 1,
      sym_qualified_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(180), 1,
      sym__type_name,
  [4153] = 4,
    ACTIONS(374), 1,
      sym_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(100), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [4168] = 4,
    ACTIONS(179), 1,
      sym_text,
    ACTIONS(380), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(177), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4183] = 6,
    ACTIONS(368), 1,
      anon_sym_BSLASH,
    ACTIONS(382), 1,
      sym__name,
    STATE(133), 1,
      sym__namespace_name,
    STATE(139), 1,
      sym_qualified_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(181), 1,
      sym__type_name,
  [4202] = 4,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(177), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4217] = 4,
    ACTIONS(118), 1,
      sym_text,
    ACTIONS(380), 1,
      anon_sym_BSLASH,
    STATE(112), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(116), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4232] = 6,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(388), 1,
      sym__name,
    STATE(43), 1,
      sym__namespace_name,
    STATE(50), 1,
      sym_qualified_name,
    STATE(153), 1,
      aux_sym__namespace_name_repeat1,
    STATE(163), 1,
      sym__type_name,
  [4251] = 6,
    ACTIONS(390), 1,
      sym__name,
    ACTIONS(392), 1,
      sym_uri,
    ACTIONS(394), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      sym_qualified_name,
    STATE(56), 1,
      sym__namespace_name,
    STATE(151), 1,
      aux_sym__namespace_name_repeat1,
  [4270] = 4,
    ACTIONS(118), 1,
      sym_text,
    ACTIONS(380), 1,
      anon_sym_BSLASH,
    STATE(109), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(116), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4285] = 6,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(388), 1,
      sym__name,
    STATE(43), 1,
      sym__namespace_name,
    STATE(50), 1,
      sym_qualified_name,
    STATE(153), 1,
      aux_sym__namespace_name_repeat1,
    STATE(168), 1,
      sym__type_name,
  [4304] = 4,
    ACTIONS(128), 1,
      sym_text,
    ACTIONS(396), 1,
      anon_sym_BSLASH,
    STATE(109), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(126), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4319] = 6,
    ACTIONS(399), 1,
      sym__name,
    ACTIONS(401), 1,
      sym_uri,
    ACTIONS(403), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      sym__namespace_name,
    STATE(141), 1,
      aux_sym__namespace_name_repeat1,
    STATE(156), 1,
      sym_qualified_name,
  [4338] = 6,
    ACTIONS(405), 1,
      sym__name,
    ACTIONS(407), 1,
      anon_sym_BSLASH,
    STATE(19), 1,
      sym__type_name,
    STATE(54), 1,
      sym__namespace_name,
    STATE(60), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
  [4357] = 4,
    ACTIONS(143), 1,
      sym_text,
    ACTIONS(380), 1,
      anon_sym_BSLASH,
    STATE(109), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(141), 3,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
  [4372] = 6,
    ACTIONS(405), 1,
      sym__name,
    ACTIONS(407), 1,
      anon_sym_BSLASH,
    STATE(18), 1,
      sym__type_name,
    STATE(54), 1,
      sym__namespace_name,
    STATE(60), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
  [4391] = 6,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(388), 1,
      sym__name,
    STATE(7), 1,
      sym__type_name,
    STATE(43), 1,
      sym__namespace_name,
    STATE(50), 1,
      sym_qualified_name,
    STATE(153), 1,
      aux_sym__namespace_name_repeat1,
  [4410] = 4,
    ACTIONS(409), 1,
      anon_sym_ATinternal,
    ACTIONS(411), 1,
      anon_sym_ATlink,
    ACTIONS(413), 1,
      anon_sym_ATsee,
    STATE(170), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [4425] = 4,
    ACTIONS(386), 1,
      anon_sym_BSLASH,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(177), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4440] = 4,
    ACTIONS(419), 1,
      sym_text,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    ACTIONS(417), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(100), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [4455] = 5,
    ACTIONS(356), 1,
      anon_sym_BSLASH,
    ACTIONS(388), 1,
      sym__name,
    STATE(43), 1,
      sym__namespace_name,
    STATE(62), 1,
      sym_qualified_name,
    STATE(153), 1,
      aux_sym__namespace_name_repeat1,
  [4471] = 4,
    ACTIONS(196), 1,
      sym_text,
    ACTIONS(423), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(120), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(194), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4485] = 4,
    ACTIONS(208), 1,
      sym_text,
    ACTIONS(425), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(120), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(206), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4499] = 3,
    ACTIONS(386), 1,
      anon_sym_BSLASH,
    STATE(127), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(141), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4511] = 5,
    ACTIONS(368), 1,
      anon_sym_BSLASH,
    ACTIONS(428), 1,
      sym__name,
    STATE(133), 1,
      sym__namespace_name,
    STATE(149), 1,
      aux_sym__namespace_name_repeat1,
    STATE(159), 1,
      sym_qualified_name,
  [4527] = 3,
    ACTIONS(386), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(177), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4539] = 4,
    ACTIONS(215), 1,
      sym_text,
    ACTIONS(430), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(119), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(213), 2,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
  [4553] = 5,
    ACTIONS(405), 1,
      sym__name,
    ACTIONS(407), 1,
      anon_sym_BSLASH,
    STATE(54), 1,
      sym__namespace_name,
    STATE(64), 1,
      sym_qualified_name,
    STATE(146), 1,
      aux_sym__namespace_name_repeat1,
  [4569] = 2,
    ACTIONS(128), 1,
      sym_text,
    ACTIONS(126), 4,
      anon_sym_LPAREN_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
  [4579] = 3,
    ACTIONS(432), 1,
      anon_sym_BSLASH,
    STATE(127), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(126), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4591] = 3,
    ACTIONS(386), 1,
      anon_sym_BSLASH,
    STATE(127), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(116), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4603] = 3,
    ACTIONS(386), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      aux_sym__namespace_name_repeat2,
    ACTIONS(116), 3,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
  [4615] = 3,
    ACTIONS(435), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(130), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(206), 2,
      sym__name,
      anon_sym_PIPE,
  [4626] = 3,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 1,
      sym__begin,
    STATE(131), 2,
      sym_document,
      aux_sym_program_repeat1,
  [4637] = 1,
    ACTIONS(443), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [4644] = 3,
    ACTIONS(445), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(135), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(213), 2,
      sym__name,
      anon_sym_PIPE,
  [4655] = 3,
    ACTIONS(3), 1,
      sym__begin,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    STATE(131), 2,
      sym_document,
      aux_sym_program_repeat1,
  [4666] = 3,
    ACTIONS(449), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(130), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(194), 2,
      sym__name,
      anon_sym_PIPE,
  [4677] = 1,
    ACTIONS(126), 4,
      sym__name,
      anon_sym_PIPE,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BSLASH,
  [4684] = 2,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4692] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym__method_tag_repeat1,
  [4702] = 3,
    ACTIONS(232), 1,
      sym__name,
    ACTIONS(459), 1,
      anon_sym_PIPE,
    STATE(143), 1,
      aux_sym__type_name_repeat1,
  [4712] = 3,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym__method_tag_repeat1,
  [4722] = 3,
    ACTIONS(466), 1,
      sym__name,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    STATE(154), 1,
      aux_sym__namespace_name_repeat1,
  [4732] = 2,
    ACTIONS(472), 1,
      anon_sym_EQ,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4740] = 3,
    ACTIONS(252), 1,
      sym__name,
    ACTIONS(459), 1,
      anon_sym_PIPE,
    STATE(150), 1,
      aux_sym__type_name_repeat1,
  [4750] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym__method_tag_repeat1,
  [4760] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym__method_tag_repeat1,
  [4770] = 3,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(478), 1,
      sym__name,
    STATE(154), 1,
      aux_sym__namespace_name_repeat1,
  [4780] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym__method_tag_repeat1,
  [4790] = 1,
    ACTIONS(272), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [4796] = 3,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      sym__name,
    STATE(154), 1,
      aux_sym__namespace_name_repeat1,
  [4806] = 3,
    ACTIONS(243), 1,
      sym__name,
    ACTIONS(484), 1,
      anon_sym_PIPE,
    STATE(150), 1,
      aux_sym__type_name_repeat1,
  [4816] = 3,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(487), 1,
      sym__name,
    STATE(154), 1,
      aux_sym__namespace_name_repeat1,
  [4826] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym__method_tag_repeat1,
  [4836] = 3,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(491), 1,
      sym__name,
    STATE(154), 1,
      aux_sym__namespace_name_repeat1,
  [4846] = 3,
    ACTIONS(493), 1,
      sym__name,
    ACTIONS(495), 1,
      anon_sym_BSLASH,
    STATE(154), 1,
      aux_sym__namespace_name_repeat1,
  [4856] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym__method_tag_repeat1,
  [4866] = 3,
    ACTIONS(500), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(502), 1,
      sym_text,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [4876] = 2,
    ACTIONS(506), 1,
      sym_text,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
  [4883] = 1,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4888] = 1,
    ACTIONS(268), 2,
      sym__name,
      anon_sym_PIPE,
  [4893] = 1,
    ACTIONS(512), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4898] = 1,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4903] = 1,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      sym__begin,
  [4908] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_variable_name,
  [4915] = 2,
    ACTIONS(516), 1,
      sym_text,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [4922] = 1,
    ACTIONS(520), 2,
      ts_builtin_sym_end,
      sym__begin,
  [4927] = 2,
    ACTIONS(522), 1,
      anon_sym_DOLLAR,
    STATE(142), 1,
      sym_variable_name,
  [4934] = 2,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      sym_text,
  [4941] = 2,
    ACTIONS(86), 1,
      anon_sym_DOLLAR,
    STATE(13), 1,
      sym_variable_name,
  [4948] = 1,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      sym__begin,
  [4953] = 1,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
  [4957] = 1,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
  [4961] = 1,
    ACTIONS(532), 1,
      sym__name,
  [4965] = 1,
    ACTIONS(534), 1,
      sym__name,
  [4969] = 1,
    ACTIONS(536), 1,
      sym_email_address,
  [4973] = 1,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
  [4977] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
  [4981] = 1,
    ACTIONS(542), 1,
      sym_uri,
  [4985] = 1,
    ACTIONS(544), 1,
      sym_text,
  [4989] = 1,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
  [4993] = 1,
    ACTIONS(546), 1,
      sym__name,
  [4997] = 1,
    ACTIONS(548), 1,
      sym__name,
  [5001] = 1,
    ACTIONS(550), 1,
      anon_sym_GT,
  [5005] = 1,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [5009] = 1,
    ACTIONS(554), 1,
      sym_param_value,
  [5013] = 1,
    ACTIONS(556), 1,
      sym__name,
  [5017] = 1,
    ACTIONS(558), 1,
      sym__name,
  [5021] = 1,
    ACTIONS(560), 1,
      sym_uri,
  [5025] = 1,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
  [5029] = 1,
    ACTIONS(564), 1,
      sym__name,
  [5033] = 1,
    ACTIONS(566), 1,
      sym_param_value,
  [5037] = 1,
    ACTIONS(568), 1,
      sym__name,
  [5041] = 1,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
  [5045] = 1,
    ACTIONS(572), 1,
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
  [SMALL_STATE(11)] = 528,
  [SMALL_STATE(12)] = 579,
  [SMALL_STATE(13)] = 630,
  [SMALL_STATE(14)] = 681,
  [SMALL_STATE(15)] = 726,
  [SMALL_STATE(16)] = 777,
  [SMALL_STATE(17)] = 822,
  [SMALL_STATE(18)] = 867,
  [SMALL_STATE(19)] = 918,
  [SMALL_STATE(20)] = 969,
  [SMALL_STATE(21)] = 1014,
  [SMALL_STATE(22)] = 1065,
  [SMALL_STATE(23)] = 1116,
  [SMALL_STATE(24)] = 1167,
  [SMALL_STATE(25)] = 1218,
  [SMALL_STATE(26)] = 1269,
  [SMALL_STATE(27)] = 1320,
  [SMALL_STATE(28)] = 1371,
  [SMALL_STATE(29)] = 1422,
  [SMALL_STATE(30)] = 1467,
  [SMALL_STATE(31)] = 1518,
  [SMALL_STATE(32)] = 1569,
  [SMALL_STATE(33)] = 1620,
  [SMALL_STATE(34)] = 1660,
  [SMALL_STATE(35)] = 1704,
  [SMALL_STATE(36)] = 1748,
  [SMALL_STATE(37)] = 1792,
  [SMALL_STATE(38)] = 1836,
  [SMALL_STATE(39)] = 1884,
  [SMALL_STATE(40)] = 1928,
  [SMALL_STATE(41)] = 1972,
  [SMALL_STATE(42)] = 2016,
  [SMALL_STATE(43)] = 2060,
  [SMALL_STATE(44)] = 2104,
  [SMALL_STATE(45)] = 2148,
  [SMALL_STATE(46)] = 2192,
  [SMALL_STATE(47)] = 2240,
  [SMALL_STATE(48)] = 2284,
  [SMALL_STATE(49)] = 2328,
  [SMALL_STATE(50)] = 2367,
  [SMALL_STATE(51)] = 2410,
  [SMALL_STATE(52)] = 2453,
  [SMALL_STATE(53)] = 2496,
  [SMALL_STATE(54)] = 2539,
  [SMALL_STATE(55)] = 2582,
  [SMALL_STATE(56)] = 2625,
  [SMALL_STATE(57)] = 2668,
  [SMALL_STATE(58)] = 2707,
  [SMALL_STATE(59)] = 2750,
  [SMALL_STATE(60)] = 2793,
  [SMALL_STATE(61)] = 2835,
  [SMALL_STATE(62)] = 2877,
  [SMALL_STATE(63)] = 2915,
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
  [SMALL_STATE(99)] = 4131,
  [SMALL_STATE(100)] = 4153,
  [SMALL_STATE(101)] = 4168,
  [SMALL_STATE(102)] = 4183,
  [SMALL_STATE(103)] = 4202,
  [SMALL_STATE(104)] = 4217,
  [SMALL_STATE(105)] = 4232,
  [SMALL_STATE(106)] = 4251,
  [SMALL_STATE(107)] = 4270,
  [SMALL_STATE(108)] = 4285,
  [SMALL_STATE(109)] = 4304,
  [SMALL_STATE(110)] = 4319,
  [SMALL_STATE(111)] = 4338,
  [SMALL_STATE(112)] = 4357,
  [SMALL_STATE(113)] = 4372,
  [SMALL_STATE(114)] = 4391,
  [SMALL_STATE(115)] = 4410,
  [SMALL_STATE(116)] = 4425,
  [SMALL_STATE(117)] = 4440,
  [SMALL_STATE(118)] = 4455,
  [SMALL_STATE(119)] = 4471,
  [SMALL_STATE(120)] = 4485,
  [SMALL_STATE(121)] = 4499,
  [SMALL_STATE(122)] = 4511,
  [SMALL_STATE(123)] = 4527,
  [SMALL_STATE(124)] = 4539,
  [SMALL_STATE(125)] = 4553,
  [SMALL_STATE(126)] = 4569,
  [SMALL_STATE(127)] = 4579,
  [SMALL_STATE(128)] = 4591,
  [SMALL_STATE(129)] = 4603,
  [SMALL_STATE(130)] = 4615,
  [SMALL_STATE(131)] = 4626,
  [SMALL_STATE(132)] = 4637,
  [SMALL_STATE(133)] = 4644,
  [SMALL_STATE(134)] = 4655,
  [SMALL_STATE(135)] = 4666,
  [SMALL_STATE(136)] = 4677,
  [SMALL_STATE(137)] = 4684,
  [SMALL_STATE(138)] = 4692,
  [SMALL_STATE(139)] = 4702,
  [SMALL_STATE(140)] = 4712,
  [SMALL_STATE(141)] = 4722,
  [SMALL_STATE(142)] = 4732,
  [SMALL_STATE(143)] = 4740,
  [SMALL_STATE(144)] = 4750,
  [SMALL_STATE(145)] = 4760,
  [SMALL_STATE(146)] = 4770,
  [SMALL_STATE(147)] = 4780,
  [SMALL_STATE(148)] = 4790,
  [SMALL_STATE(149)] = 4796,
  [SMALL_STATE(150)] = 4806,
  [SMALL_STATE(151)] = 4816,
  [SMALL_STATE(152)] = 4826,
  [SMALL_STATE(153)] = 4836,
  [SMALL_STATE(154)] = 4846,
  [SMALL_STATE(155)] = 4856,
  [SMALL_STATE(156)] = 4866,
  [SMALL_STATE(157)] = 4876,
  [SMALL_STATE(158)] = 4883,
  [SMALL_STATE(159)] = 4888,
  [SMALL_STATE(160)] = 4893,
  [SMALL_STATE(161)] = 4898,
  [SMALL_STATE(162)] = 4903,
  [SMALL_STATE(163)] = 4908,
  [SMALL_STATE(164)] = 4915,
  [SMALL_STATE(165)] = 4922,
  [SMALL_STATE(166)] = 4927,
  [SMALL_STATE(167)] = 4934,
  [SMALL_STATE(168)] = 4941,
  [SMALL_STATE(169)] = 4948,
  [SMALL_STATE(170)] = 4953,
  [SMALL_STATE(171)] = 4957,
  [SMALL_STATE(172)] = 4961,
  [SMALL_STATE(173)] = 4965,
  [SMALL_STATE(174)] = 4969,
  [SMALL_STATE(175)] = 4973,
  [SMALL_STATE(176)] = 4977,
  [SMALL_STATE(177)] = 4981,
  [SMALL_STATE(178)] = 4985,
  [SMALL_STATE(179)] = 4989,
  [SMALL_STATE(180)] = 4993,
  [SMALL_STATE(181)] = 4997,
  [SMALL_STATE(182)] = 5001,
  [SMALL_STATE(183)] = 5005,
  [SMALL_STATE(184)] = 5009,
  [SMALL_STATE(185)] = 5013,
  [SMALL_STATE(186)] = 5017,
  [SMALL_STATE(187)] = 5021,
  [SMALL_STATE(188)] = 5025,
  [SMALL_STATE(189)] = 5029,
  [SMALL_STATE(190)] = 5033,
  [SMALL_STATE(191)] = 5037,
  [SMALL_STATE(192)] = 5041,
  [SMALL_STATE(193)] = 5045,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(68),
  [7] = {.count = 1, .reusable = true}, SHIFT(8),
  [9] = {.count = 1, .reusable = true}, SHIFT(105),
  [11] = {.count = 1, .reusable = true}, SHIFT(23),
  [13] = {.count = 1, .reusable = true}, SHIFT(106),
  [15] = {.count = 1, .reusable = true}, SHIFT(99),
  [17] = {.count = 1, .reusable = true}, SHIFT(108),
  [19] = {.count = 1, .reusable = false}, SHIFT(108),
  [21] = {.count = 1, .reusable = true}, SHIFT(111),
  [23] = {.count = 1, .reusable = true}, SHIFT(187),
  [25] = {.count = 1, .reusable = true}, SHIFT(113),
  [27] = {.count = 1, .reusable = true}, SHIFT(114),
  [29] = {.count = 1, .reusable = true}, SHIFT(67),
  [31] = {.count = 1, .reusable = false}, SHIFT(117),
  [33] = {.count = 1, .reusable = true}, SHIFT(115),
  [35] = {.count = 1, .reusable = true}, SHIFT(162),
  [37] = {.count = 1, .reusable = true}, SHIFT(169),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(187),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [78] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [80] = {.count = 1, .reusable = true}, SHIFT(165),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 2),
  [86] = {.count = 1, .reusable = true}, SHIFT(172),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(27),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [96] = {.count = 1, .reusable = true}, SHIFT(12),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 6),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 6),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 4),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 4),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 3),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 2),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 2),
  [120] = {.count = 1, .reusable = true}, SHIFT(173),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2),
  [128] = {.count = 1, .reusable = false}, REDUCE(aux_sym__namespace_name_repeat2, 2),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(173),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 3),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 3),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 8),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 8),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 8),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 8),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 6),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 6),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 8),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 8),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym__namespace_name, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 6),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 6),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [189] = {.count = 1, .reusable = true}, SHIFT(191),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(185),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 2),
  [198] = {.count = 1, .reusable = true}, SHIFT(42),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [204] = {.count = 1, .reusable = true}, SHIFT(185),
  [206] = {.count = 1, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [208] = {.count = 1, .reusable = false}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(42),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_name, 1),
  [217] = {.count = 1, .reusable = true}, SHIFT(37),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(191),
  [222] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [224] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [226] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(117),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(115),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 1, .production_id = 1),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 1, .production_id = 1),
  [236] = {.count = 1, .reusable = true}, SHIFT(118),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(51),
  [241] = {.count = 1, .reusable = true}, SHIFT(58),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(118),
  [250] = {.count = 1, .reusable = true}, SHIFT(59),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__type_name, 2, .production_id = 1),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym__type_name, 2, .production_id = 1),
  [256] = {.count = 1, .reusable = true}, SHIFT(52),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(58),
  [261] = {.count = 1, .reusable = true}, SHIFT(51),
  [263] = {.count = 1, .reusable = true}, SHIFT(125),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(125),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2, .production_id = 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(aux_sym__type_name_repeat1, 2, .production_id = 3),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [288] = {.count = 1, .reusable = true}, SHIFT(69),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [292] = {.count = 1, .reusable = true}, SHIFT(174),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__version_tag, 3),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym__version_tag, 3),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym__return_tag, 3),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym__return_tag, 3),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym__see_tag, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym__see_tag, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym__throws_tag, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym__throws_tag, 3),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 9, .production_id = 8),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 9, .production_id = 8),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 8, .production_id = 6),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 8, .production_id = 6),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym__var_tag, 4),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym__var_tag, 4),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 4),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym__variable_tag_with_type, 4),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym__variable_tag_with_type, 4),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 4),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 4),
  [352] = {.count = 1, .reusable = false}, SHIFT(29),
  [354] = {.count = 1, .reusable = true}, SHIFT(28),
  [356] = {.count = 1, .reusable = true}, SHIFT(153),
  [358] = {.count = 1, .reusable = false}, SHIFT(186),
  [360] = {.count = 1, .reusable = true}, SHIFT(10),
  [362] = {.count = 1, .reusable = true}, SHIFT(11),
  [364] = {.count = 1, .reusable = true}, SHIFT(117),
  [366] = {.count = 1, .reusable = false}, SHIFT(103),
  [368] = {.count = 1, .reusable = true}, SHIFT(149),
  [370] = {.count = 1, .reusable = false}, SHIFT(102),
  [372] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [374] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(100),
  [377] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(115),
  [380] = {.count = 1, .reusable = true}, SHIFT(193),
  [382] = {.count = 1, .reusable = true}, SHIFT(116),
  [384] = {.count = 1, .reusable = true}, SHIFT(96),
  [386] = {.count = 1, .reusable = true}, SHIFT(189),
  [388] = {.count = 1, .reusable = true}, SHIFT(29),
  [390] = {.count = 1, .reusable = false}, SHIFT(40),
  [392] = {.count = 1, .reusable = true}, SHIFT(31),
  [394] = {.count = 1, .reusable = true}, SHIFT(151),
  [396] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(193),
  [399] = {.count = 1, .reusable = false}, SHIFT(101),
  [401] = {.count = 1, .reusable = true}, SHIFT(167),
  [403] = {.count = 1, .reusable = true}, SHIFT(141),
  [405] = {.count = 1, .reusable = true}, SHIFT(44),
  [407] = {.count = 1, .reusable = true}, SHIFT(146),
  [409] = {.count = 1, .reusable = true}, SHIFT(178),
  [411] = {.count = 1, .reusable = true}, SHIFT(110),
  [413] = {.count = 1, .reusable = true}, SHIFT(177),
  [415] = {.count = 1, .reusable = true}, SHIFT(95),
  [417] = {.count = 1, .reusable = false}, SHIFT(66),
  [419] = {.count = 1, .reusable = false}, SHIFT(100),
  [421] = {.count = 1, .reusable = false}, SHIFT(115),
  [423] = {.count = 1, .reusable = true}, SHIFT(120),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(120),
  [428] = {.count = 1, .reusable = true}, SHIFT(123),
  [430] = {.count = 1, .reusable = true}, SHIFT(119),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat2, 2), SHIFT_REPEAT(189),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(130),
  [438] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [445] = {.count = 1, .reusable = true}, SHIFT(135),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [449] = {.count = 1, .reusable = true}, SHIFT(130),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [453] = {.count = 1, .reusable = true}, SHIFT(184),
  [455] = {.count = 1, .reusable = true}, SHIFT(97),
  [457] = {.count = 1, .reusable = true}, SHIFT(21),
  [459] = {.count = 1, .reusable = true}, SHIFT(122),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(97),
  [464] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [466] = {.count = 1, .reusable = true}, SHIFT(104),
  [468] = {.count = 1, .reusable = true}, SHIFT(154),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [472] = {.count = 1, .reusable = true}, SHIFT(190),
  [474] = {.count = 1, .reusable = true}, SHIFT(26),
  [476] = {.count = 1, .reusable = true}, SHIFT(25),
  [478] = {.count = 1, .reusable = true}, SHIFT(36),
  [480] = {.count = 1, .reusable = true}, SHIFT(24),
  [482] = {.count = 1, .reusable = true}, SHIFT(129),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym__type_name_repeat1, 2), SHIFT_REPEAT(122),
  [487] = {.count = 1, .reusable = true}, SHIFT(41),
  [489] = {.count = 1, .reusable = true}, SHIFT(32),
  [491] = {.count = 1, .reusable = true}, SHIFT(14),
  [493] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(154),
  [498] = {.count = 1, .reusable = true}, SHIFT(30),
  [500] = {.count = 1, .reusable = true}, SHIFT(164),
  [502] = {.count = 1, .reusable = false}, SHIFT(192),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [506] = {.count = 1, .reusable = true}, SHIFT(176),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 2),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_param, 3),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_param, 4),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [516] = {.count = 1, .reusable = true}, SHIFT(175),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [522] = {.count = 1, .reusable = true}, SHIFT(186),
  [524] = {.count = 1, .reusable = true}, SHIFT(192),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [528] = {.count = 1, .reusable = true}, SHIFT(132),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 2),
  [532] = {.count = 1, .reusable = true}, SHIFT(65),
  [534] = {.count = 1, .reusable = true}, SHIFT(33),
  [536] = {.count = 1, .reusable = true}, SHIFT(182),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 4, .production_id = 7),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym__see_inline_tag, 3, .production_id = 5),
  [542] = {.count = 1, .reusable = true}, SHIFT(157),
  [544] = {.count = 1, .reusable = true}, SHIFT(171),
  [546] = {.count = 1, .reusable = true}, SHIFT(179),
  [548] = {.count = 1, .reusable = true}, SHIFT(188),
  [550] = {.count = 1, .reusable = true}, SHIFT(72),
  [552] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [554] = {.count = 1, .reusable = true}, SHIFT(158),
  [556] = {.count = 1, .reusable = true}, SHIFT(57),
  [558] = {.count = 1, .reusable = true}, SHIFT(148),
  [560] = {.count = 1, .reusable = true}, SHIFT(98),
  [562] = {.count = 1, .reusable = true}, SHIFT(94),
  [564] = {.count = 1, .reusable = true}, SHIFT(136),
  [566] = {.count = 1, .reusable = true}, SHIFT(160),
  [568] = {.count = 1, .reusable = true}, SHIFT(49),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 5),
  [572] = {.count = 1, .reusable = true}, SHIFT(126),
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
