#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 1
#define TOKEN_COUNT 48
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
  anon_sym_ATglobal = 7,
  anon_sym_ATinternal = 8,
  anon_sym_ATlink = 9,
  anon_sym_ATmethod = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  sym_author_name = 13,
  sym_email_address = 14,
  anon_sym_ATapi = 15,
  anon_sym_ATcategory = 16,
  anon_sym_ATcopyright = 17,
  anon_sym_ATexample = 18,
  anon_sym_ATfilesource = 19,
  anon_sym_ATignore = 20,
  anon_sym_ATlicense = 21,
  anon_sym_ATpackage = 22,
  anon_sym_ATparam = 23,
  anon_sym_ATproperty = 24,
  anon_sym_ATproperty_DASHread = 25,
  anon_sym_ATproperty_DASHwrite = 26,
  anon_sym_ATreturn = 27,
  anon_sym_ATsee = 28,
  anon_sym_ATsince = 29,
  anon_sym_ATsource = 30,
  anon_sym_ATsubpackage = 31,
  anon_sym_ATthrows = 32,
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
  anon_sym_BSLASH = 44,
  sym_static = 45,
  anon_sym_DOLLAR = 46,
  sym__end = 47,
  sym_document = 48,
  sym_tag = 49,
  sym__author_tag = 50,
  sym__deprecated_tag = 51,
  sym__global_tag = 52,
  sym__internal_tag = 53,
  sym__internal_inline_tag = 54,
  sym__link_tag = 55,
  sym__link_inline_tag = 56,
  sym__method_tag = 57,
  sym_tag_name = 58,
  sym_description = 59,
  sym_text_line = 60,
  sym_inline_tag = 61,
  sym__type_name = 62,
  sym_param = 63,
  sym_qualified_name = 64,
  sym__namespace_name = 65,
  sym__namespace_name_as_prefix = 66,
  sym_variable_name = 67,
  aux_sym_document_repeat1 = 68,
  aux_sym__method_tag_repeat1 = 69,
  aux_sym_description_repeat1 = 70,
  aux_sym_text_line_repeat1 = 71,
  aux_sym__namespace_name_repeat1 = 72,
  alias_sym_name = 73,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__name] = "_name",
  [sym__begin] = "_begin",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATdeprecated] = "tag_name",
  [anon_sym_ATglobal] = "tag_name",
  [anon_sym_ATinternal] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [anon_sym_ATmethod] = "tag_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_ATparam] = "@param",
  [anon_sym_ATproperty] = "@property",
  [anon_sym_ATproperty_DASHread] = "@property-read",
  [anon_sym_ATproperty_DASHwrite] = "@property-write",
  [anon_sym_ATreturn] = "@return",
  [anon_sym_ATsee] = "@see",
  [anon_sym_ATsince] = "@since",
  [anon_sym_ATsource] = "@source",
  [anon_sym_ATsubpackage] = "@subpackage",
  [anon_sym_ATthrows] = "@throws",
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
  [anon_sym_BSLASH] = "\\",
  [sym_static] = "static",
  [anon_sym_DOLLAR] = "$",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_tag] = "tag",
  [sym__author_tag] = "_author_tag",
  [sym__deprecated_tag] = "_deprecated_tag",
  [sym__global_tag] = "_global_tag",
  [sym__internal_tag] = "_internal_tag",
  [sym__internal_inline_tag] = "_internal_inline_tag",
  [sym__link_tag] = "_link_tag",
  [sym__link_inline_tag] = "_link_inline_tag",
  [sym__method_tag] = "_method_tag",
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
  [anon_sym_ATglobal] = sym_tag_name,
  [anon_sym_ATinternal] = sym_tag_name,
  [anon_sym_ATlink] = sym_tag_name,
  [anon_sym_ATmethod] = sym_tag_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_ATparam] = anon_sym_ATparam,
  [anon_sym_ATproperty] = anon_sym_ATproperty,
  [anon_sym_ATproperty_DASHread] = anon_sym_ATproperty_DASHread,
  [anon_sym_ATproperty_DASHwrite] = anon_sym_ATproperty_DASHwrite,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
  [anon_sym_ATsee] = anon_sym_ATsee,
  [anon_sym_ATsince] = anon_sym_ATsince,
  [anon_sym_ATsource] = anon_sym_ATsource,
  [anon_sym_ATsubpackage] = anon_sym_ATsubpackage,
  [anon_sym_ATthrows] = anon_sym_ATthrows,
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
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_static] = sym_static,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym__end] = sym__end,
  [sym_document] = sym_document,
  [sym_tag] = sym_tag,
  [sym__author_tag] = sym__author_tag,
  [sym__deprecated_tag] = sym__deprecated_tag,
  [sym__global_tag] = sym__global_tag,
  [sym__internal_tag] = sym__internal_tag,
  [sym__internal_inline_tag] = sym__internal_inline_tag,
  [sym__link_tag] = sym__link_tag,
  [sym__link_inline_tag] = sym__link_inline_tag,
  [sym__method_tag] = sym__method_tag,
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
  [anon_sym_ATparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATproperty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATproperty_DASHread] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATproperty_DASHwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsince] = {
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
  [anon_sym_ATthrows] = {
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
  [sym__deprecated_tag] = {
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
      if (eof) ADVANCE(160);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(159)
      if (lookahead == '\r') SKIP(159)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '{') ADVANCE(201);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '@') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(172);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(172);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(10)
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '*') SKIP(10)
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') SKIP(11)
      if (lookahead == '}') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(200);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '*') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(161);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(168);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(127);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 151:
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 152:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '\t') SKIP(159)
      if (lookahead == '\n') SKIP(159)
      if (lookahead == '\r') SKIP(159)
      if (lookahead == ' ') SKIP(159)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(198);
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
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 1},
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
    [anon_sym_ATglobal] = ACTIONS(1),
    [anon_sym_ATinternal] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_ATmethod] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATpackage] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_ATproperty] = ACTIONS(1),
    [anon_sym_ATproperty_DASHread] = ACTIONS(1),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATsince] = ACTIONS(1),
    [anon_sym_ATsource] = ACTIONS(1),
    [anon_sym_ATsubpackage] = ACTIONS(1),
    [anon_sym_ATthrows] = ACTIONS(1),
    [anon_sym_ATtodo] = ACTIONS(1),
    [anon_sym_ATuses] = ACTIONS(1),
    [anon_sym_ATvar] = ACTIONS(1),
    [anon_sym_ATversion] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_static] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(63),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(6),
    [sym__author_tag] = STATE(23),
    [sym__deprecated_tag] = STATE(23),
    [sym__global_tag] = STATE(23),
    [sym__internal_tag] = STATE(23),
    [sym__link_tag] = STATE(23),
    [sym__method_tag] = STATE(23),
    [sym_tag_name] = STATE(11),
    [sym_description] = STATE(3),
    [sym_text_line] = STATE(13),
    [sym_inline_tag] = STATE(43),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_description_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(43),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATapi] = ACTIONS(17),
    [anon_sym_ATcategory] = ACTIONS(17),
    [anon_sym_ATcopyright] = ACTIONS(17),
    [anon_sym_ATexample] = ACTIONS(17),
    [anon_sym_ATfilesource] = ACTIONS(17),
    [anon_sym_ATignore] = ACTIONS(17),
    [anon_sym_ATlicense] = ACTIONS(17),
    [anon_sym_ATpackage] = ACTIONS(17),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(17),
    [anon_sym_ATsee] = ACTIONS(17),
    [anon_sym_ATsince] = ACTIONS(17),
    [anon_sym_ATsource] = ACTIONS(17),
    [anon_sym_ATsubpackage] = ACTIONS(17),
    [anon_sym_ATthrows] = ACTIONS(17),
    [anon_sym_ATtodo] = ACTIONS(17),
    [anon_sym_ATuses] = ACTIONS(17),
    [anon_sym_ATvar] = ACTIONS(17),
    [anon_sym_ATversion] = ACTIONS(17),
    [sym_text] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym__end] = ACTIONS(25),
  },
  [3] = {
    [sym_tag] = STATE(5),
    [sym__author_tag] = STATE(23),
    [sym__deprecated_tag] = STATE(23),
    [sym__global_tag] = STATE(23),
    [sym__internal_tag] = STATE(23),
    [sym__link_tag] = STATE(23),
    [sym__method_tag] = STATE(23),
    [sym_tag_name] = STATE(11),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATapi] = ACTIONS(17),
    [anon_sym_ATcategory] = ACTIONS(17),
    [anon_sym_ATcopyright] = ACTIONS(17),
    [anon_sym_ATexample] = ACTIONS(17),
    [anon_sym_ATfilesource] = ACTIONS(17),
    [anon_sym_ATignore] = ACTIONS(17),
    [anon_sym_ATlicense] = ACTIONS(17),
    [anon_sym_ATpackage] = ACTIONS(17),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(17),
    [anon_sym_ATsee] = ACTIONS(17),
    [anon_sym_ATsince] = ACTIONS(17),
    [anon_sym_ATsource] = ACTIONS(17),
    [anon_sym_ATsubpackage] = ACTIONS(17),
    [anon_sym_ATthrows] = ACTIONS(17),
    [anon_sym_ATtodo] = ACTIONS(17),
    [anon_sym_ATuses] = ACTIONS(17),
    [anon_sym_ATvar] = ACTIONS(17),
    [anon_sym_ATversion] = ACTIONS(17),
    [sym__end] = ACTIONS(27),
  },
  [4] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(23),
    [sym__deprecated_tag] = STATE(23),
    [sym__global_tag] = STATE(23),
    [sym__internal_tag] = STATE(23),
    [sym__link_tag] = STATE(23),
    [sym__method_tag] = STATE(23),
    [sym_tag_name] = STATE(11),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(29),
    [anon_sym_ATdeprecated] = ACTIONS(32),
    [anon_sym_ATglobal] = ACTIONS(35),
    [anon_sym_ATinternal] = ACTIONS(38),
    [anon_sym_ATlink] = ACTIONS(41),
    [anon_sym_ATmethod] = ACTIONS(44),
    [anon_sym_ATapi] = ACTIONS(47),
    [anon_sym_ATcategory] = ACTIONS(47),
    [anon_sym_ATcopyright] = ACTIONS(47),
    [anon_sym_ATexample] = ACTIONS(47),
    [anon_sym_ATfilesource] = ACTIONS(47),
    [anon_sym_ATignore] = ACTIONS(47),
    [anon_sym_ATlicense] = ACTIONS(47),
    [anon_sym_ATpackage] = ACTIONS(47),
    [anon_sym_ATparam] = ACTIONS(47),
    [anon_sym_ATproperty] = ACTIONS(50),
    [anon_sym_ATproperty_DASHread] = ACTIONS(47),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(47),
    [anon_sym_ATreturn] = ACTIONS(47),
    [anon_sym_ATsee] = ACTIONS(47),
    [anon_sym_ATsince] = ACTIONS(47),
    [anon_sym_ATsource] = ACTIONS(47),
    [anon_sym_ATsubpackage] = ACTIONS(47),
    [anon_sym_ATthrows] = ACTIONS(47),
    [anon_sym_ATtodo] = ACTIONS(47),
    [anon_sym_ATuses] = ACTIONS(47),
    [anon_sym_ATvar] = ACTIONS(47),
    [anon_sym_ATversion] = ACTIONS(47),
    [sym__end] = ACTIONS(53),
  },
  [5] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(23),
    [sym__deprecated_tag] = STATE(23),
    [sym__global_tag] = STATE(23),
    [sym__internal_tag] = STATE(23),
    [sym__link_tag] = STATE(23),
    [sym__method_tag] = STATE(23),
    [sym_tag_name] = STATE(11),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATapi] = ACTIONS(17),
    [anon_sym_ATcategory] = ACTIONS(17),
    [anon_sym_ATcopyright] = ACTIONS(17),
    [anon_sym_ATexample] = ACTIONS(17),
    [anon_sym_ATfilesource] = ACTIONS(17),
    [anon_sym_ATignore] = ACTIONS(17),
    [anon_sym_ATlicense] = ACTIONS(17),
    [anon_sym_ATpackage] = ACTIONS(17),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(17),
    [anon_sym_ATsee] = ACTIONS(17),
    [anon_sym_ATsince] = ACTIONS(17),
    [anon_sym_ATsource] = ACTIONS(17),
    [anon_sym_ATsubpackage] = ACTIONS(17),
    [anon_sym_ATthrows] = ACTIONS(17),
    [anon_sym_ATtodo] = ACTIONS(17),
    [anon_sym_ATuses] = ACTIONS(17),
    [anon_sym_ATvar] = ACTIONS(17),
    [anon_sym_ATversion] = ACTIONS(17),
    [sym__end] = ACTIONS(55),
  },
  [6] = {
    [sym_tag] = STATE(4),
    [sym__author_tag] = STATE(23),
    [sym__deprecated_tag] = STATE(23),
    [sym__global_tag] = STATE(23),
    [sym__internal_tag] = STATE(23),
    [sym__link_tag] = STATE(23),
    [sym__method_tag] = STATE(23),
    [sym_tag_name] = STATE(11),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATapi] = ACTIONS(17),
    [anon_sym_ATcategory] = ACTIONS(17),
    [anon_sym_ATcopyright] = ACTIONS(17),
    [anon_sym_ATexample] = ACTIONS(17),
    [anon_sym_ATfilesource] = ACTIONS(17),
    [anon_sym_ATignore] = ACTIONS(17),
    [anon_sym_ATlicense] = ACTIONS(17),
    [anon_sym_ATpackage] = ACTIONS(17),
    [anon_sym_ATparam] = ACTIONS(17),
    [anon_sym_ATproperty] = ACTIONS(19),
    [anon_sym_ATproperty_DASHread] = ACTIONS(17),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(17),
    [anon_sym_ATreturn] = ACTIONS(17),
    [anon_sym_ATsee] = ACTIONS(17),
    [anon_sym_ATsince] = ACTIONS(17),
    [anon_sym_ATsource] = ACTIONS(17),
    [anon_sym_ATsubpackage] = ACTIONS(17),
    [anon_sym_ATthrows] = ACTIONS(17),
    [anon_sym_ATtodo] = ACTIONS(17),
    [anon_sym_ATuses] = ACTIONS(17),
    [anon_sym_ATvar] = ACTIONS(17),
    [anon_sym_ATversion] = ACTIONS(17),
    [sym__end] = ACTIONS(27),
  },
  [7] = {
    [sym_description] = STATE(21),
    [sym_text_line] = STATE(13),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(13),
    [aux_sym_text_line_repeat1] = STATE(43),
    [anon_sym_ATauthor] = ACTIONS(57),
    [anon_sym_ATdeprecated] = ACTIONS(57),
    [anon_sym_ATglobal] = ACTIONS(57),
    [anon_sym_ATinternal] = ACTIONS(57),
    [anon_sym_ATlink] = ACTIONS(57),
    [anon_sym_ATmethod] = ACTIONS(57),
    [anon_sym_ATapi] = ACTIONS(57),
    [anon_sym_ATcategory] = ACTIONS(57),
    [anon_sym_ATcopyright] = ACTIONS(57),
    [anon_sym_ATexample] = ACTIONS(57),
    [anon_sym_ATfilesource] = ACTIONS(57),
    [anon_sym_ATignore] = ACTIONS(57),
    [anon_sym_ATlicense] = ACTIONS(57),
    [anon_sym_ATpackage] = ACTIONS(57),
    [anon_sym_ATparam] = ACTIONS(57),
    [anon_sym_ATproperty] = ACTIONS(59),
    [anon_sym_ATproperty_DASHread] = ACTIONS(57),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(57),
    [anon_sym_ATreturn] = ACTIONS(57),
    [anon_sym_ATsee] = ACTIONS(57),
    [anon_sym_ATsince] = ACTIONS(57),
    [anon_sym_ATsource] = ACTIONS(57),
    [anon_sym_ATsubpackage] = ACTIONS(57),
    [anon_sym_ATthrows] = ACTIONS(57),
    [anon_sym_ATtodo] = ACTIONS(57),
    [anon_sym_ATuses] = ACTIONS(57),
    [anon_sym_ATvar] = ACTIONS(57),
    [anon_sym_ATversion] = ACTIONS(57),
    [sym_text] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_version] = ACTIONS(61),
    [sym__end] = ACTIONS(57),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_ATproperty,
    STATE(27), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(43), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(63), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [51] = 7,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_ATproperty,
    STATE(32), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(43), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(67), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [102] = 7,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_ATproperty,
    STATE(29), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(43), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(71), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [153] = 7,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_ATproperty,
    STATE(30), 1,
      sym_description,
    STATE(13), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(43), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(75), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [204] = 6,
    ACTIONS(81), 1,
      anon_sym_ATproperty,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    STATE(12), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(43), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(79), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [252] = 6,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_ATproperty,
    STATE(12), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(43), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
    ACTIONS(89), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [300] = 2,
    ACTIONS(95), 1,
      anon_sym_ATproperty,
    ACTIONS(93), 32,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_RPAREN,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
      sym__end,
  [338] = 2,
    ACTIONS(99), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(97), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [374] = 2,
    ACTIONS(103), 2,
      anon_sym_ATproperty,
      sym_text,
    ACTIONS(101), 29,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      anon_sym_LBRACE,
      sym__end,
  [410] = 3,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_ATproperty,
    ACTIONS(105), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [447] = 3,
    ACTIONS(113), 1,
      sym_author_name,
    ACTIONS(115), 1,
      anon_sym_ATproperty,
    ACTIONS(111), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [484] = 2,
    ACTIONS(119), 1,
      anon_sym_ATproperty,
    ACTIONS(117), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [518] = 2,
    ACTIONS(123), 1,
      anon_sym_ATproperty,
    ACTIONS(121), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [552] = 2,
    ACTIONS(73), 1,
      anon_sym_ATproperty,
    ACTIONS(71), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [586] = 2,
    ACTIONS(127), 1,
      anon_sym_ATproperty,
    ACTIONS(125), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [620] = 2,
    ACTIONS(77), 1,
      anon_sym_ATproperty,
    ACTIONS(75), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [654] = 2,
    ACTIONS(131), 1,
      anon_sym_ATproperty,
    ACTIONS(129), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [688] = 2,
    ACTIONS(135), 1,
      anon_sym_ATproperty,
    ACTIONS(133), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [722] = 2,
    ACTIONS(139), 1,
      anon_sym_ATproperty,
    ACTIONS(137), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [756] = 2,
    ACTIONS(143), 1,
      anon_sym_ATproperty,
    ACTIONS(141), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [790] = 2,
    ACTIONS(147), 1,
      anon_sym_ATproperty,
    ACTIONS(145), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [824] = 2,
    ACTIONS(151), 1,
      anon_sym_ATproperty,
    ACTIONS(149), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [858] = 2,
    ACTIONS(155), 1,
      anon_sym_ATproperty,
    ACTIONS(153), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [892] = 2,
    ACTIONS(159), 1,
      anon_sym_ATproperty,
    ACTIONS(157), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [926] = 2,
    ACTIONS(163), 1,
      anon_sym_ATproperty,
    ACTIONS(161), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATsince,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATthrows,
      anon_sym_ATtodo,
      anon_sym_ATuses,
      anon_sym_ATvar,
      anon_sym_ATversion,
      sym__end,
  [960] = 9,
    ACTIONS(165), 1,
      sym__name,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_variable_name,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(35), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
    STATE(58), 2,
      sym__type_name,
      sym_qualified_name,
  [990] = 9,
    ACTIONS(165), 1,
      sym__name,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_variable_name,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(39), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
    STATE(58), 2,
      sym__type_name,
      sym_qualified_name,
  [1020] = 9,
    ACTIONS(165), 1,
      sym__name,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_variable_name,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(39), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
    STATE(58), 2,
      sym__type_name,
      sym_qualified_name,
  [1050] = 9,
    ACTIONS(165), 1,
      sym__name,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_variable_name,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(34), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
    STATE(58), 2,
      sym__type_name,
      sym_qualified_name,
  [1080] = 9,
    ACTIONS(165), 1,
      sym__name,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_variable_name,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(39), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
    STATE(58), 2,
      sym__type_name,
      sym_qualified_name,
  [1110] = 9,
    ACTIONS(165), 1,
      sym__name,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_variable_name,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(37), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
    STATE(58), 2,
      sym__type_name,
      sym_qualified_name,
  [1140] = 9,
    ACTIONS(183), 1,
      sym__name,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_variable_name,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(39), 2,
      sym_param,
      aux_sym__method_tag_repeat1,
    STATE(58), 2,
      sym__type_name,
      sym_qualified_name,
  [1170] = 6,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(194), 1,
      sym__name,
    ACTIONS(196), 1,
      sym_static,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(66), 2,
      sym__type_name,
      sym_qualified_name,
  [1190] = 4,
    ACTIONS(200), 1,
      sym_text,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(41), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1205] = 5,
    ACTIONS(165), 1,
      sym__name,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(56), 2,
      sym__type_name,
      sym_qualified_name,
  [1222] = 4,
    ACTIONS(208), 1,
      sym_text,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(41), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [1237] = 5,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(212), 1,
      sym__name,
    STATE(73), 1,
      sym__namespace_name_as_prefix,
    STATE(75), 1,
      sym__namespace_name,
    STATE(70), 2,
      sym__type_name,
      sym_qualified_name,
  [1254] = 3,
    ACTIONS(214), 1,
      anon_sym_ATinternal,
    ACTIONS(216), 1,
      anon_sym_ATlink,
    STATE(76), 2,
      sym__internal_inline_tag,
      sym__link_inline_tag,
  [1265] = 1,
    ACTIONS(218), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [1272] = 4,
    ACTIONS(220), 1,
      sym__name,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym__namespace_name_repeat1,
  [1285] = 4,
    ACTIONS(220), 1,
      sym__name,
    ACTIONS(224), 1,
      anon_sym_BSLASH,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      aux_sym__namespace_name_repeat1,
  [1298] = 1,
    ACTIONS(229), 4,
      anon_sym_RPAREN,
      sym__name,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [1305] = 1,
    ACTIONS(231), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [1312] = 3,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym__namespace_name_repeat1,
  [1322] = 2,
    ACTIONS(233), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      aux_sym__namespace_name_repeat1,
  [1329] = 2,
    ACTIONS(236), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      aux_sym__namespace_name_repeat1,
  [1336] = 2,
    ACTIONS(224), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym__namespace_name_repeat1,
  [1343] = 2,
    ACTIONS(239), 1,
      sym__name,
    STATE(81), 1,
      sym__namespace_name,
  [1350] = 2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_variable_name,
  [1357] = 1,
    ACTIONS(242), 2,
      sym__name,
      anon_sym_DOLLAR,
  [1362] = 2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      sym_variable_name,
  [1369] = 2,
    ACTIONS(244), 1,
      sym_text,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
  [1376] = 1,
    ACTIONS(248), 1,
      anon_sym_BSLASH,
  [1380] = 1,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
  [1384] = 1,
    ACTIONS(252), 1,
      sym_email_address,
  [1388] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [1392] = 1,
    ACTIONS(256), 1,
      sym__name,
  [1396] = 1,
    ACTIONS(258), 1,
      sym_text,
  [1400] = 1,
    ACTIONS(260), 1,
      sym__name,
  [1404] = 1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1408] = 1,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
  [1412] = 1,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
  [1416] = 1,
    ACTIONS(266), 1,
      sym__name,
  [1420] = 1,
    ACTIONS(268), 1,
      anon_sym_GT,
  [1424] = 1,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
  [1428] = 1,
    ACTIONS(272), 1,
      sym__name,
  [1432] = 1,
    ACTIONS(274), 1,
      sym_uri,
  [1436] = 1,
    ACTIONS(276), 1,
      anon_sym_BSLASH,
  [1440] = 1,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
  [1444] = 1,
    ACTIONS(280), 1,
      sym__name,
  [1448] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1452] = 1,
    ACTIONS(284), 1,
      sym__name,
  [1456] = 1,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
  [1460] = 1,
    ACTIONS(288), 1,
      anon_sym_BSLASH,
  [1464] = 1,
    ACTIONS(290), 1,
      sym_uri,
  [1468] = 1,
    ACTIONS(292), 1,
      sym__name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 51,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 338,
  [SMALL_STATE(16)] = 374,
  [SMALL_STATE(17)] = 410,
  [SMALL_STATE(18)] = 447,
  [SMALL_STATE(19)] = 484,
  [SMALL_STATE(20)] = 518,
  [SMALL_STATE(21)] = 552,
  [SMALL_STATE(22)] = 586,
  [SMALL_STATE(23)] = 620,
  [SMALL_STATE(24)] = 654,
  [SMALL_STATE(25)] = 688,
  [SMALL_STATE(26)] = 722,
  [SMALL_STATE(27)] = 756,
  [SMALL_STATE(28)] = 790,
  [SMALL_STATE(29)] = 824,
  [SMALL_STATE(30)] = 858,
  [SMALL_STATE(31)] = 892,
  [SMALL_STATE(32)] = 926,
  [SMALL_STATE(33)] = 960,
  [SMALL_STATE(34)] = 990,
  [SMALL_STATE(35)] = 1020,
  [SMALL_STATE(36)] = 1050,
  [SMALL_STATE(37)] = 1080,
  [SMALL_STATE(38)] = 1110,
  [SMALL_STATE(39)] = 1140,
  [SMALL_STATE(40)] = 1170,
  [SMALL_STATE(41)] = 1190,
  [SMALL_STATE(42)] = 1205,
  [SMALL_STATE(43)] = 1222,
  [SMALL_STATE(44)] = 1237,
  [SMALL_STATE(45)] = 1254,
  [SMALL_STATE(46)] = 1265,
  [SMALL_STATE(47)] = 1272,
  [SMALL_STATE(48)] = 1285,
  [SMALL_STATE(49)] = 1298,
  [SMALL_STATE(50)] = 1305,
  [SMALL_STATE(51)] = 1312,
  [SMALL_STATE(52)] = 1322,
  [SMALL_STATE(53)] = 1329,
  [SMALL_STATE(54)] = 1336,
  [SMALL_STATE(55)] = 1343,
  [SMALL_STATE(56)] = 1350,
  [SMALL_STATE(57)] = 1357,
  [SMALL_STATE(58)] = 1362,
  [SMALL_STATE(59)] = 1369,
  [SMALL_STATE(60)] = 1376,
  [SMALL_STATE(61)] = 1380,
  [SMALL_STATE(62)] = 1384,
  [SMALL_STATE(63)] = 1388,
  [SMALL_STATE(64)] = 1392,
  [SMALL_STATE(65)] = 1396,
  [SMALL_STATE(66)] = 1400,
  [SMALL_STATE(67)] = 1404,
  [SMALL_STATE(68)] = 1408,
  [SMALL_STATE(69)] = 1412,
  [SMALL_STATE(70)] = 1416,
  [SMALL_STATE(71)] = 1420,
  [SMALL_STATE(72)] = 1424,
  [SMALL_STATE(73)] = 1428,
  [SMALL_STATE(74)] = 1432,
  [SMALL_STATE(75)] = 1436,
  [SMALL_STATE(76)] = 1440,
  [SMALL_STATE(77)] = 1444,
  [SMALL_STATE(78)] = 1448,
  [SMALL_STATE(79)] = 1452,
  [SMALL_STATE(80)] = 1456,
  [SMALL_STATE(81)] = 1460,
  [SMALL_STATE(82)] = 1464,
  [SMALL_STATE(83)] = 1468,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(18),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(42),
  [11] = {.count = 1, .reusable = true}, SHIFT(8),
  [13] = {.count = 1, .reusable = true}, SHIFT(82),
  [15] = {.count = 1, .reusable = true}, SHIFT(40),
  [17] = {.count = 1, .reusable = true}, SHIFT(15),
  [19] = {.count = 1, .reusable = false}, SHIFT(15),
  [21] = {.count = 1, .reusable = false}, SHIFT(43),
  [23] = {.count = 1, .reusable = true}, SHIFT(45),
  [25] = {.count = 1, .reusable = true}, SHIFT(80),
  [27] = {.count = 1, .reusable = true}, SHIFT(78),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(67),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(10),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 2),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [83] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(43),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(45),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_description, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_variable_name, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_variable_name, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_tag_name, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_text_line, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [107] = {.count = 1, .reusable = true}, SHIFT(62),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(17),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 7, .production_id = 5),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 4, .production_id = 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 4),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 5, .production_id = 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 5),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym__method_tag, 6, .production_id = 4),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 3),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 3),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [165] = {.count = 1, .reusable = true}, SHIFT(51),
  [167] = {.count = 1, .reusable = true}, SHIFT(20),
  [169] = {.count = 1, .reusable = true}, SHIFT(55),
  [171] = {.count = 1, .reusable = true}, SHIFT(79),
  [173] = {.count = 1, .reusable = true}, SHIFT(28),
  [175] = {.count = 1, .reusable = true}, SHIFT(24),
  [177] = {.count = 1, .reusable = true}, SHIFT(22),
  [179] = {.count = 1, .reusable = true}, SHIFT(19),
  [181] = {.count = 1, .reusable = true}, SHIFT(26),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(51),
  [186] = {.count = 1, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(55),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__method_tag_repeat1, 2), SHIFT_REPEAT(79),
  [194] = {.count = 1, .reusable = false}, SHIFT(47),
  [196] = {.count = 1, .reusable = false}, SHIFT(44),
  [198] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [200] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(41),
  [203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(45),
  [206] = {.count = 1, .reusable = false}, SHIFT(16),
  [208] = {.count = 1, .reusable = false}, SHIFT(41),
  [210] = {.count = 1, .reusable = false}, SHIFT(45),
  [212] = {.count = 1, .reusable = true}, SHIFT(48),
  [214] = {.count = 1, .reusable = true}, SHIFT(65),
  [216] = {.count = 1, .reusable = true}, SHIFT(74),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_param, 2),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 1),
  [222] = {.count = 1, .reusable = true}, SHIFT(33),
  [224] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 1), SHIFT(83),
  [227] = {.count = 1, .reusable = true}, SHIFT(36),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2), SHIFT_REPEAT(83),
  [236] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name, 2), SHIFT(83),
  [239] = {.count = 2, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 1), SHIFT(54),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_name, 2),
  [244] = {.count = 1, .reusable = true}, SHIFT(72),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [248] = {.count = 1, .reusable = true}, REDUCE(aux_sym__namespace_name_repeat1, 2),
  [250] = {.count = 1, .reusable = true}, SHIFT(38),
  [252] = {.count = 1, .reusable = true}, SHIFT(71),
  [254] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 3),
  [258] = {.count = 1, .reusable = true}, SHIFT(68),
  [260] = {.count = 1, .reusable = true}, SHIFT(69),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(61),
  [268] = {.count = 1, .reusable = true}, SHIFT(25),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 3),
  [272] = {.count = 1, .reusable = true}, SHIFT(57),
  [274] = {.count = 1, .reusable = true}, SHIFT(59),
  [276] = {.count = 1, .reusable = true}, SHIFT(77),
  [278] = {.count = 1, .reusable = true}, SHIFT(50),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym__namespace_name_as_prefix, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [284] = {.count = 1, .reusable = true}, SHIFT(14),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [288] = {.count = 1, .reusable = true}, SHIFT(64),
  [290] = {.count = 1, .reusable = true}, SHIFT(9),
  [292] = {.count = 1, .reusable = true}, SHIFT(60),
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
