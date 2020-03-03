#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__begin = 1,
  anon_sym_ATauthor = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_ATdeprecated = 5,
  anon_sym_ATglobal = 6,
  anon_sym_ATinternal = 7,
  anon_sym_ATlink = 8,
  sym_author_name = 9,
  sym_email_address = 10,
  anon_sym_ATapi = 11,
  anon_sym_ATcategory = 12,
  anon_sym_ATcopyright = 13,
  anon_sym_ATexample = 14,
  anon_sym_ATfilesource = 15,
  anon_sym_ATignore = 16,
  anon_sym_ATlicense = 17,
  anon_sym_ATmethod = 18,
  anon_sym_ATpackage = 19,
  anon_sym_ATparam = 20,
  anon_sym_ATproperty = 21,
  anon_sym_ATproperty_DASHread = 22,
  anon_sym_ATproperty_DASHwrite = 23,
  anon_sym_ATreturn = 24,
  anon_sym_ATsee = 25,
  anon_sym_ATsince = 26,
  anon_sym_ATsource = 27,
  anon_sym_ATsubpackage = 28,
  anon_sym_ATthrows = 29,
  anon_sym_ATtodo = 30,
  anon_sym_ATuses = 31,
  anon_sym_ATvar = 32,
  anon_sym_ATversion = 33,
  anon_sym_LF = 34,
  anon_sym_CR_LF = 35,
  sym_text = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  sym_version = 39,
  sym_uri = 40,
  sym_identifier = 41,
  sym__end = 42,
  sym_document = 43,
  sym_tag = 44,
  sym__author_tag = 45,
  sym__deprecated_tag = 46,
  sym__global_tag = 47,
  sym__internal_tag = 48,
  sym__internal_inline_tag = 49,
  sym__link_tag = 50,
  sym__link_inline_tag = 51,
  sym_tag_name = 52,
  sym_description = 53,
  sym_text_line = 54,
  sym_inline_tag = 55,
  aux_sym_document_repeat1 = 56,
  aux_sym_description_repeat1 = 57,
  aux_sym_text_line_repeat1 = 58,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__begin] = "_begin",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATdeprecated] = "tag_name",
  [anon_sym_ATglobal] = "tag_name",
  [anon_sym_ATinternal] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [sym_author_name] = "author_name",
  [sym_email_address] = "email_address",
  [anon_sym_ATapi] = "@api",
  [anon_sym_ATcategory] = "@category",
  [anon_sym_ATcopyright] = "@copyright",
  [anon_sym_ATexample] = "@example",
  [anon_sym_ATfilesource] = "@filesource",
  [anon_sym_ATignore] = "@ignore",
  [anon_sym_ATlicense] = "@license",
  [anon_sym_ATmethod] = "@method",
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
  [sym_identifier] = "type",
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
  [sym_tag_name] = "tag_name",
  [sym_description] = "description",
  [sym_text_line] = "text_line",
  [sym_inline_tag] = "inline_tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_text_line_repeat1] = "text_line_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__begin] = sym__begin,
  [anon_sym_ATauthor] = sym_tag_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ATdeprecated] = sym_tag_name,
  [anon_sym_ATglobal] = sym_tag_name,
  [anon_sym_ATinternal] = sym_tag_name,
  [anon_sym_ATlink] = sym_tag_name,
  [sym_author_name] = sym_author_name,
  [sym_email_address] = sym_email_address,
  [anon_sym_ATapi] = anon_sym_ATapi,
  [anon_sym_ATcategory] = anon_sym_ATcategory,
  [anon_sym_ATcopyright] = anon_sym_ATcopyright,
  [anon_sym_ATexample] = anon_sym_ATexample,
  [anon_sym_ATfilesource] = anon_sym_ATfilesource,
  [anon_sym_ATignore] = anon_sym_ATignore,
  [anon_sym_ATlicense] = anon_sym_ATlicense,
  [anon_sym_ATmethod] = anon_sym_ATmethod,
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
  [sym_identifier] = sym_identifier,
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
  [sym_tag_name] = sym_tag_name,
  [sym_description] = sym_description,
  [sym_text_line] = sym_text_line,
  [sym_inline_tag] = sym_inline_tag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_text_line_repeat1] = aux_sym_text_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [anon_sym_ATmethod] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [aux_sym_document_repeat1] = {
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
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_description,
  },
  [2] = {
    [2] = sym_description,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(158);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(157)
      if (lookahead == '\r') SKIP(157)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '>') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(201);
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(20);
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
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '@') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '@') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(8)
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '*') SKIP(8)
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') SKIP(9)
      if (lookahead == '}') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(10)
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '*') SKIP(10)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(159);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(166);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 149:
      if (lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 150:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 151:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 157:
      if (eof) ADVANCE(158);
      if (lookahead == '\t') SKIP(157)
      if (lookahead == '\n') SKIP(157)
      if (lookahead == '\r') SKIP(157)
      if (lookahead == ' ') SKIP(157)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == '.') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(206);
      if (lookahead == ' ' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '*') ADVANCE(2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(159);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(198);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 10},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ATdeprecated] = ACTIONS(1),
    [anon_sym_ATglobal] = ACTIONS(1),
    [anon_sym_ATinternal] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [sym_author_name] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATmethod] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(37),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(11),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym_tag_name] = STATE(4),
    [sym_description] = STATE(13),
    [sym_text_line] = STATE(10),
    [sym_inline_tag] = STATE(28),
    [aux_sym_document_repeat1] = STATE(11),
    [aux_sym_description_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(28),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATdeprecated] = ACTIONS(7),
    [anon_sym_ATglobal] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(11),
    [anon_sym_ATlink] = ACTIONS(13),
    [anon_sym_ATapi] = ACTIONS(15),
    [anon_sym_ATcategory] = ACTIONS(15),
    [anon_sym_ATcopyright] = ACTIONS(15),
    [anon_sym_ATexample] = ACTIONS(15),
    [anon_sym_ATfilesource] = ACTIONS(15),
    [anon_sym_ATignore] = ACTIONS(15),
    [anon_sym_ATlicense] = ACTIONS(15),
    [anon_sym_ATmethod] = ACTIONS(15),
    [anon_sym_ATpackage] = ACTIONS(15),
    [anon_sym_ATparam] = ACTIONS(15),
    [anon_sym_ATproperty] = ACTIONS(15),
    [anon_sym_ATproperty_DASHread] = ACTIONS(15),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(15),
    [anon_sym_ATreturn] = ACTIONS(15),
    [anon_sym_ATsee] = ACTIONS(15),
    [anon_sym_ATsince] = ACTIONS(15),
    [anon_sym_ATsource] = ACTIONS(15),
    [anon_sym_ATsubpackage] = ACTIONS(15),
    [anon_sym_ATthrows] = ACTIONS(15),
    [anon_sym_ATtodo] = ACTIONS(15),
    [anon_sym_ATuses] = ACTIONS(15),
    [anon_sym_ATvar] = ACTIONS(15),
    [anon_sym_ATversion] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym__end] = ACTIONS(23),
  },
  [3] = {
    [sym_description] = STATE(22),
    [sym_text_line] = STATE(10),
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(28),
    [anon_sym_ATauthor] = ACTIONS(25),
    [anon_sym_ATdeprecated] = ACTIONS(25),
    [anon_sym_ATglobal] = ACTIONS(25),
    [anon_sym_ATinternal] = ACTIONS(25),
    [anon_sym_ATlink] = ACTIONS(25),
    [anon_sym_ATapi] = ACTIONS(25),
    [anon_sym_ATcategory] = ACTIONS(25),
    [anon_sym_ATcopyright] = ACTIONS(25),
    [anon_sym_ATexample] = ACTIONS(25),
    [anon_sym_ATfilesource] = ACTIONS(25),
    [anon_sym_ATignore] = ACTIONS(25),
    [anon_sym_ATlicense] = ACTIONS(25),
    [anon_sym_ATmethod] = ACTIONS(25),
    [anon_sym_ATpackage] = ACTIONS(25),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(25),
    [anon_sym_ATproperty_DASHread] = ACTIONS(25),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(25),
    [anon_sym_ATreturn] = ACTIONS(25),
    [anon_sym_ATsee] = ACTIONS(25),
    [anon_sym_ATsince] = ACTIONS(25),
    [anon_sym_ATsource] = ACTIONS(25),
    [anon_sym_ATsubpackage] = ACTIONS(25),
    [anon_sym_ATthrows] = ACTIONS(25),
    [anon_sym_ATtodo] = ACTIONS(25),
    [anon_sym_ATuses] = ACTIONS(25),
    [anon_sym_ATvar] = ACTIONS(25),
    [anon_sym_ATversion] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_version] = ACTIONS(27),
    [sym__end] = ACTIONS(25),
  },
  [4] = {
    [sym_description] = STATE(26),
    [sym_text_line] = STATE(10),
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(28),
    [anon_sym_ATauthor] = ACTIONS(29),
    [anon_sym_ATdeprecated] = ACTIONS(29),
    [anon_sym_ATglobal] = ACTIONS(29),
    [anon_sym_ATinternal] = ACTIONS(29),
    [anon_sym_ATlink] = ACTIONS(29),
    [anon_sym_ATapi] = ACTIONS(29),
    [anon_sym_ATcategory] = ACTIONS(29),
    [anon_sym_ATcopyright] = ACTIONS(29),
    [anon_sym_ATexample] = ACTIONS(29),
    [anon_sym_ATfilesource] = ACTIONS(29),
    [anon_sym_ATignore] = ACTIONS(29),
    [anon_sym_ATlicense] = ACTIONS(29),
    [anon_sym_ATmethod] = ACTIONS(29),
    [anon_sym_ATpackage] = ACTIONS(29),
    [anon_sym_ATparam] = ACTIONS(29),
    [anon_sym_ATproperty] = ACTIONS(29),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(29),
    [anon_sym_ATsee] = ACTIONS(29),
    [anon_sym_ATsince] = ACTIONS(29),
    [anon_sym_ATsource] = ACTIONS(29),
    [anon_sym_ATsubpackage] = ACTIONS(29),
    [anon_sym_ATthrows] = ACTIONS(29),
    [anon_sym_ATtodo] = ACTIONS(29),
    [anon_sym_ATuses] = ACTIONS(29),
    [anon_sym_ATvar] = ACTIONS(29),
    [anon_sym_ATversion] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym__end] = ACTIONS(29),
  },
  [5] = {
    [sym_description] = STATE(25),
    [sym_text_line] = STATE(10),
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(28),
    [anon_sym_ATauthor] = ACTIONS(31),
    [anon_sym_ATdeprecated] = ACTIONS(31),
    [anon_sym_ATglobal] = ACTIONS(31),
    [anon_sym_ATinternal] = ACTIONS(31),
    [anon_sym_ATlink] = ACTIONS(31),
    [anon_sym_ATapi] = ACTIONS(31),
    [anon_sym_ATcategory] = ACTIONS(31),
    [anon_sym_ATcopyright] = ACTIONS(31),
    [anon_sym_ATexample] = ACTIONS(31),
    [anon_sym_ATfilesource] = ACTIONS(31),
    [anon_sym_ATignore] = ACTIONS(31),
    [anon_sym_ATlicense] = ACTIONS(31),
    [anon_sym_ATmethod] = ACTIONS(31),
    [anon_sym_ATpackage] = ACTIONS(31),
    [anon_sym_ATparam] = ACTIONS(31),
    [anon_sym_ATproperty] = ACTIONS(31),
    [anon_sym_ATproperty_DASHread] = ACTIONS(31),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(31),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(31),
    [anon_sym_ATsince] = ACTIONS(31),
    [anon_sym_ATsource] = ACTIONS(31),
    [anon_sym_ATsubpackage] = ACTIONS(31),
    [anon_sym_ATthrows] = ACTIONS(31),
    [anon_sym_ATtodo] = ACTIONS(31),
    [anon_sym_ATuses] = ACTIONS(31),
    [anon_sym_ATvar] = ACTIONS(31),
    [anon_sym_ATversion] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym__end] = ACTIONS(31),
  },
  [6] = {
    [sym_description] = STATE(24),
    [sym_text_line] = STATE(10),
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(28),
    [anon_sym_ATauthor] = ACTIONS(33),
    [anon_sym_ATdeprecated] = ACTIONS(33),
    [anon_sym_ATglobal] = ACTIONS(33),
    [anon_sym_ATinternal] = ACTIONS(33),
    [anon_sym_ATlink] = ACTIONS(33),
    [anon_sym_ATapi] = ACTIONS(33),
    [anon_sym_ATcategory] = ACTIONS(33),
    [anon_sym_ATcopyright] = ACTIONS(33),
    [anon_sym_ATexample] = ACTIONS(33),
    [anon_sym_ATfilesource] = ACTIONS(33),
    [anon_sym_ATignore] = ACTIONS(33),
    [anon_sym_ATlicense] = ACTIONS(33),
    [anon_sym_ATmethod] = ACTIONS(33),
    [anon_sym_ATpackage] = ACTIONS(33),
    [anon_sym_ATparam] = ACTIONS(33),
    [anon_sym_ATproperty] = ACTIONS(33),
    [anon_sym_ATproperty_DASHread] = ACTIONS(33),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(33),
    [anon_sym_ATreturn] = ACTIONS(33),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATsince] = ACTIONS(33),
    [anon_sym_ATsource] = ACTIONS(33),
    [anon_sym_ATsubpackage] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(33),
    [anon_sym_ATtodo] = ACTIONS(33),
    [anon_sym_ATuses] = ACTIONS(33),
    [anon_sym_ATvar] = ACTIONS(33),
    [anon_sym_ATversion] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym__end] = ACTIONS(33),
  },
  [7] = {
    [sym_description] = STATE(21),
    [sym_text_line] = STATE(10),
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(10),
    [aux_sym_text_line_repeat1] = STATE(28),
    [anon_sym_ATauthor] = ACTIONS(35),
    [anon_sym_ATdeprecated] = ACTIONS(35),
    [anon_sym_ATglobal] = ACTIONS(35),
    [anon_sym_ATinternal] = ACTIONS(35),
    [anon_sym_ATlink] = ACTIONS(35),
    [anon_sym_ATapi] = ACTIONS(35),
    [anon_sym_ATcategory] = ACTIONS(35),
    [anon_sym_ATcopyright] = ACTIONS(35),
    [anon_sym_ATexample] = ACTIONS(35),
    [anon_sym_ATfilesource] = ACTIONS(35),
    [anon_sym_ATignore] = ACTIONS(35),
    [anon_sym_ATlicense] = ACTIONS(35),
    [anon_sym_ATmethod] = ACTIONS(35),
    [anon_sym_ATpackage] = ACTIONS(35),
    [anon_sym_ATparam] = ACTIONS(35),
    [anon_sym_ATproperty] = ACTIONS(35),
    [anon_sym_ATproperty_DASHread] = ACTIONS(35),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(35),
    [anon_sym_ATreturn] = ACTIONS(35),
    [anon_sym_ATsee] = ACTIONS(35),
    [anon_sym_ATsince] = ACTIONS(35),
    [anon_sym_ATsource] = ACTIONS(35),
    [anon_sym_ATsubpackage] = ACTIONS(35),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATtodo] = ACTIONS(35),
    [anon_sym_ATuses] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(35),
    [anon_sym_ATversion] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym__end] = ACTIONS(35),
  },
  [8] = {
    [sym_tag] = STATE(12),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym_tag_name] = STATE(4),
    [aux_sym_document_repeat1] = STATE(12),
    [anon_sym_ATauthor] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATglobal] = ACTIONS(41),
    [anon_sym_ATinternal] = ACTIONS(43),
    [anon_sym_ATlink] = ACTIONS(45),
    [anon_sym_ATapi] = ACTIONS(47),
    [anon_sym_ATcategory] = ACTIONS(47),
    [anon_sym_ATcopyright] = ACTIONS(47),
    [anon_sym_ATexample] = ACTIONS(47),
    [anon_sym_ATfilesource] = ACTIONS(47),
    [anon_sym_ATignore] = ACTIONS(47),
    [anon_sym_ATlicense] = ACTIONS(47),
    [anon_sym_ATmethod] = ACTIONS(47),
    [anon_sym_ATpackage] = ACTIONS(47),
    [anon_sym_ATparam] = ACTIONS(47),
    [anon_sym_ATproperty] = ACTIONS(15),
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
    [sym__end] = ACTIONS(49),
  },
  [9] = {
    [sym_text_line] = STATE(9),
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(28),
    [anon_sym_ATauthor] = ACTIONS(51),
    [anon_sym_ATdeprecated] = ACTIONS(51),
    [anon_sym_ATglobal] = ACTIONS(51),
    [anon_sym_ATinternal] = ACTIONS(51),
    [anon_sym_ATlink] = ACTIONS(51),
    [anon_sym_ATapi] = ACTIONS(51),
    [anon_sym_ATcategory] = ACTIONS(51),
    [anon_sym_ATcopyright] = ACTIONS(51),
    [anon_sym_ATexample] = ACTIONS(51),
    [anon_sym_ATfilesource] = ACTIONS(51),
    [anon_sym_ATignore] = ACTIONS(51),
    [anon_sym_ATlicense] = ACTIONS(51),
    [anon_sym_ATmethod] = ACTIONS(51),
    [anon_sym_ATpackage] = ACTIONS(51),
    [anon_sym_ATparam] = ACTIONS(51),
    [anon_sym_ATproperty] = ACTIONS(51),
    [anon_sym_ATproperty_DASHread] = ACTIONS(51),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(51),
    [anon_sym_ATreturn] = ACTIONS(51),
    [anon_sym_ATsee] = ACTIONS(51),
    [anon_sym_ATsince] = ACTIONS(51),
    [anon_sym_ATsource] = ACTIONS(51),
    [anon_sym_ATsubpackage] = ACTIONS(51),
    [anon_sym_ATthrows] = ACTIONS(51),
    [anon_sym_ATtodo] = ACTIONS(51),
    [anon_sym_ATuses] = ACTIONS(51),
    [anon_sym_ATvar] = ACTIONS(51),
    [anon_sym_ATversion] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CR_LF] = ACTIONS(53),
    [sym_text] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym__end] = ACTIONS(51),
  },
  [10] = {
    [sym_text_line] = STATE(9),
    [sym_inline_tag] = STATE(28),
    [aux_sym_description_repeat1] = STATE(9),
    [aux_sym_text_line_repeat1] = STATE(28),
    [anon_sym_ATauthor] = ACTIONS(62),
    [anon_sym_ATdeprecated] = ACTIONS(62),
    [anon_sym_ATglobal] = ACTIONS(62),
    [anon_sym_ATinternal] = ACTIONS(62),
    [anon_sym_ATlink] = ACTIONS(62),
    [anon_sym_ATapi] = ACTIONS(62),
    [anon_sym_ATcategory] = ACTIONS(62),
    [anon_sym_ATcopyright] = ACTIONS(62),
    [anon_sym_ATexample] = ACTIONS(62),
    [anon_sym_ATfilesource] = ACTIONS(62),
    [anon_sym_ATignore] = ACTIONS(62),
    [anon_sym_ATlicense] = ACTIONS(62),
    [anon_sym_ATmethod] = ACTIONS(62),
    [anon_sym_ATpackage] = ACTIONS(62),
    [anon_sym_ATparam] = ACTIONS(62),
    [anon_sym_ATproperty] = ACTIONS(62),
    [anon_sym_ATproperty_DASHread] = ACTIONS(62),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(62),
    [anon_sym_ATreturn] = ACTIONS(62),
    [anon_sym_ATsee] = ACTIONS(62),
    [anon_sym_ATsince] = ACTIONS(62),
    [anon_sym_ATsource] = ACTIONS(62),
    [anon_sym_ATsubpackage] = ACTIONS(62),
    [anon_sym_ATthrows] = ACTIONS(62),
    [anon_sym_ATtodo] = ACTIONS(62),
    [anon_sym_ATuses] = ACTIONS(62),
    [anon_sym_ATvar] = ACTIONS(62),
    [anon_sym_ATversion] = ACTIONS(62),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym__end] = ACTIONS(62),
  },
  [11] = {
    [sym_tag] = STATE(12),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym_tag_name] = STATE(4),
    [aux_sym_document_repeat1] = STATE(12),
    [anon_sym_ATauthor] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATglobal] = ACTIONS(41),
    [anon_sym_ATinternal] = ACTIONS(43),
    [anon_sym_ATlink] = ACTIONS(45),
    [anon_sym_ATapi] = ACTIONS(47),
    [anon_sym_ATcategory] = ACTIONS(47),
    [anon_sym_ATcopyright] = ACTIONS(47),
    [anon_sym_ATexample] = ACTIONS(47),
    [anon_sym_ATfilesource] = ACTIONS(47),
    [anon_sym_ATignore] = ACTIONS(47),
    [anon_sym_ATlicense] = ACTIONS(47),
    [anon_sym_ATmethod] = ACTIONS(47),
    [anon_sym_ATpackage] = ACTIONS(47),
    [anon_sym_ATparam] = ACTIONS(47),
    [anon_sym_ATproperty] = ACTIONS(15),
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
    [sym__end] = ACTIONS(64),
  },
  [12] = {
    [sym_tag] = STATE(12),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym_tag_name] = STATE(4),
    [aux_sym_document_repeat1] = STATE(12),
    [anon_sym_ATauthor] = ACTIONS(66),
    [anon_sym_ATdeprecated] = ACTIONS(69),
    [anon_sym_ATglobal] = ACTIONS(72),
    [anon_sym_ATinternal] = ACTIONS(75),
    [anon_sym_ATlink] = ACTIONS(78),
    [anon_sym_ATapi] = ACTIONS(81),
    [anon_sym_ATcategory] = ACTIONS(81),
    [anon_sym_ATcopyright] = ACTIONS(81),
    [anon_sym_ATexample] = ACTIONS(81),
    [anon_sym_ATfilesource] = ACTIONS(81),
    [anon_sym_ATignore] = ACTIONS(81),
    [anon_sym_ATlicense] = ACTIONS(81),
    [anon_sym_ATmethod] = ACTIONS(81),
    [anon_sym_ATpackage] = ACTIONS(81),
    [anon_sym_ATparam] = ACTIONS(81),
    [anon_sym_ATproperty] = ACTIONS(84),
    [anon_sym_ATproperty_DASHread] = ACTIONS(81),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(81),
    [anon_sym_ATreturn] = ACTIONS(81),
    [anon_sym_ATsee] = ACTIONS(81),
    [anon_sym_ATsince] = ACTIONS(81),
    [anon_sym_ATsource] = ACTIONS(81),
    [anon_sym_ATsubpackage] = ACTIONS(81),
    [anon_sym_ATthrows] = ACTIONS(81),
    [anon_sym_ATtodo] = ACTIONS(81),
    [anon_sym_ATuses] = ACTIONS(81),
    [anon_sym_ATvar] = ACTIONS(81),
    [anon_sym_ATversion] = ACTIONS(81),
    [sym__end] = ACTIONS(87),
  },
  [13] = {
    [sym_tag] = STATE(8),
    [sym__author_tag] = STATE(20),
    [sym__deprecated_tag] = STATE(20),
    [sym__global_tag] = STATE(20),
    [sym__internal_tag] = STATE(20),
    [sym__link_tag] = STATE(20),
    [sym_tag_name] = STATE(4),
    [aux_sym_document_repeat1] = STATE(8),
    [anon_sym_ATauthor] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATglobal] = ACTIONS(41),
    [anon_sym_ATinternal] = ACTIONS(43),
    [anon_sym_ATlink] = ACTIONS(45),
    [anon_sym_ATapi] = ACTIONS(47),
    [anon_sym_ATcategory] = ACTIONS(47),
    [anon_sym_ATcopyright] = ACTIONS(47),
    [anon_sym_ATexample] = ACTIONS(47),
    [anon_sym_ATfilesource] = ACTIONS(47),
    [anon_sym_ATignore] = ACTIONS(47),
    [anon_sym_ATlicense] = ACTIONS(47),
    [anon_sym_ATmethod] = ACTIONS(47),
    [anon_sym_ATpackage] = ACTIONS(47),
    [anon_sym_ATparam] = ACTIONS(47),
    [anon_sym_ATproperty] = ACTIONS(15),
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
    [sym__end] = ACTIONS(64),
  },
  [14] = {
    [anon_sym_ATauthor] = ACTIONS(89),
    [anon_sym_ATdeprecated] = ACTIONS(89),
    [anon_sym_ATglobal] = ACTIONS(89),
    [anon_sym_ATinternal] = ACTIONS(89),
    [anon_sym_ATlink] = ACTIONS(89),
    [anon_sym_ATapi] = ACTIONS(89),
    [anon_sym_ATcategory] = ACTIONS(89),
    [anon_sym_ATcopyright] = ACTIONS(89),
    [anon_sym_ATexample] = ACTIONS(89),
    [anon_sym_ATfilesource] = ACTIONS(89),
    [anon_sym_ATignore] = ACTIONS(89),
    [anon_sym_ATlicense] = ACTIONS(89),
    [anon_sym_ATmethod] = ACTIONS(89),
    [anon_sym_ATpackage] = ACTIONS(89),
    [anon_sym_ATparam] = ACTIONS(89),
    [anon_sym_ATproperty] = ACTIONS(89),
    [anon_sym_ATproperty_DASHread] = ACTIONS(89),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(89),
    [anon_sym_ATreturn] = ACTIONS(89),
    [anon_sym_ATsee] = ACTIONS(89),
    [anon_sym_ATsince] = ACTIONS(89),
    [anon_sym_ATsource] = ACTIONS(89),
    [anon_sym_ATsubpackage] = ACTIONS(89),
    [anon_sym_ATthrows] = ACTIONS(89),
    [anon_sym_ATtodo] = ACTIONS(89),
    [anon_sym_ATuses] = ACTIONS(89),
    [anon_sym_ATvar] = ACTIONS(89),
    [anon_sym_ATversion] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_CR_LF] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym__end] = ACTIONS(89),
  },
  [15] = {
    [anon_sym_ATauthor] = ACTIONS(91),
    [anon_sym_ATdeprecated] = ACTIONS(91),
    [anon_sym_ATglobal] = ACTIONS(91),
    [anon_sym_ATinternal] = ACTIONS(91),
    [anon_sym_ATlink] = ACTIONS(91),
    [anon_sym_ATapi] = ACTIONS(91),
    [anon_sym_ATcategory] = ACTIONS(91),
    [anon_sym_ATcopyright] = ACTIONS(91),
    [anon_sym_ATexample] = ACTIONS(91),
    [anon_sym_ATfilesource] = ACTIONS(91),
    [anon_sym_ATignore] = ACTIONS(91),
    [anon_sym_ATlicense] = ACTIONS(91),
    [anon_sym_ATmethod] = ACTIONS(91),
    [anon_sym_ATpackage] = ACTIONS(91),
    [anon_sym_ATparam] = ACTIONS(91),
    [anon_sym_ATproperty] = ACTIONS(91),
    [anon_sym_ATproperty_DASHread] = ACTIONS(91),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(91),
    [anon_sym_ATreturn] = ACTIONS(91),
    [anon_sym_ATsee] = ACTIONS(91),
    [anon_sym_ATsince] = ACTIONS(91),
    [anon_sym_ATsource] = ACTIONS(91),
    [anon_sym_ATsubpackage] = ACTIONS(91),
    [anon_sym_ATthrows] = ACTIONS(91),
    [anon_sym_ATtodo] = ACTIONS(91),
    [anon_sym_ATuses] = ACTIONS(91),
    [anon_sym_ATvar] = ACTIONS(91),
    [anon_sym_ATversion] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_CR_LF] = ACTIONS(91),
    [sym_text] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym__end] = ACTIONS(91),
  },
  [16] = {
    [anon_sym_ATauthor] = ACTIONS(93),
    [anon_sym_ATdeprecated] = ACTIONS(93),
    [anon_sym_ATglobal] = ACTIONS(93),
    [anon_sym_ATinternal] = ACTIONS(93),
    [anon_sym_ATlink] = ACTIONS(93),
    [anon_sym_ATapi] = ACTIONS(93),
    [anon_sym_ATcategory] = ACTIONS(93),
    [anon_sym_ATcopyright] = ACTIONS(93),
    [anon_sym_ATexample] = ACTIONS(93),
    [anon_sym_ATfilesource] = ACTIONS(93),
    [anon_sym_ATignore] = ACTIONS(93),
    [anon_sym_ATlicense] = ACTIONS(93),
    [anon_sym_ATmethod] = ACTIONS(93),
    [anon_sym_ATpackage] = ACTIONS(93),
    [anon_sym_ATparam] = ACTIONS(93),
    [anon_sym_ATproperty] = ACTIONS(93),
    [anon_sym_ATproperty_DASHread] = ACTIONS(93),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(93),
    [anon_sym_ATreturn] = ACTIONS(93),
    [anon_sym_ATsee] = ACTIONS(93),
    [anon_sym_ATsince] = ACTIONS(93),
    [anon_sym_ATsource] = ACTIONS(93),
    [anon_sym_ATsubpackage] = ACTIONS(93),
    [anon_sym_ATthrows] = ACTIONS(93),
    [anon_sym_ATtodo] = ACTIONS(93),
    [anon_sym_ATuses] = ACTIONS(93),
    [anon_sym_ATvar] = ACTIONS(93),
    [anon_sym_ATversion] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(93),
    [anon_sym_CR_LF] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym__end] = ACTIONS(93),
  },
  [17] = {
    [anon_sym_ATauthor] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_ATdeprecated] = ACTIONS(95),
    [anon_sym_ATglobal] = ACTIONS(95),
    [anon_sym_ATinternal] = ACTIONS(95),
    [anon_sym_ATlink] = ACTIONS(95),
    [anon_sym_ATapi] = ACTIONS(95),
    [anon_sym_ATcategory] = ACTIONS(95),
    [anon_sym_ATcopyright] = ACTIONS(95),
    [anon_sym_ATexample] = ACTIONS(95),
    [anon_sym_ATfilesource] = ACTIONS(95),
    [anon_sym_ATignore] = ACTIONS(95),
    [anon_sym_ATlicense] = ACTIONS(95),
    [anon_sym_ATmethod] = ACTIONS(95),
    [anon_sym_ATpackage] = ACTIONS(95),
    [anon_sym_ATparam] = ACTIONS(95),
    [anon_sym_ATproperty] = ACTIONS(99),
    [anon_sym_ATproperty_DASHread] = ACTIONS(95),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(95),
    [anon_sym_ATsee] = ACTIONS(95),
    [anon_sym_ATsince] = ACTIONS(95),
    [anon_sym_ATsource] = ACTIONS(95),
    [anon_sym_ATsubpackage] = ACTIONS(95),
    [anon_sym_ATthrows] = ACTIONS(95),
    [anon_sym_ATtodo] = ACTIONS(95),
    [anon_sym_ATuses] = ACTIONS(95),
    [anon_sym_ATvar] = ACTIONS(95),
    [anon_sym_ATversion] = ACTIONS(95),
    [sym__end] = ACTIONS(95),
  },
  [18] = {
    [anon_sym_ATauthor] = ACTIONS(101),
    [anon_sym_ATdeprecated] = ACTIONS(101),
    [anon_sym_ATglobal] = ACTIONS(101),
    [anon_sym_ATinternal] = ACTIONS(101),
    [anon_sym_ATlink] = ACTIONS(101),
    [sym_author_name] = ACTIONS(103),
    [anon_sym_ATapi] = ACTIONS(101),
    [anon_sym_ATcategory] = ACTIONS(101),
    [anon_sym_ATcopyright] = ACTIONS(101),
    [anon_sym_ATexample] = ACTIONS(101),
    [anon_sym_ATfilesource] = ACTIONS(101),
    [anon_sym_ATignore] = ACTIONS(101),
    [anon_sym_ATlicense] = ACTIONS(101),
    [anon_sym_ATmethod] = ACTIONS(101),
    [anon_sym_ATpackage] = ACTIONS(101),
    [anon_sym_ATparam] = ACTIONS(101),
    [anon_sym_ATproperty] = ACTIONS(105),
    [anon_sym_ATproperty_DASHread] = ACTIONS(101),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(101),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATsee] = ACTIONS(101),
    [anon_sym_ATsince] = ACTIONS(101),
    [anon_sym_ATsource] = ACTIONS(101),
    [anon_sym_ATsubpackage] = ACTIONS(101),
    [anon_sym_ATthrows] = ACTIONS(101),
    [anon_sym_ATtodo] = ACTIONS(101),
    [anon_sym_ATuses] = ACTIONS(101),
    [anon_sym_ATvar] = ACTIONS(101),
    [anon_sym_ATversion] = ACTIONS(101),
    [sym__end] = ACTIONS(101),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(109), 1,
      anon_sym_ATproperty,
    ACTIONS(107), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
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
  [34] = 2,
    ACTIONS(29), 1,
      anon_sym_ATproperty,
    ACTIONS(111), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
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
  [68] = 2,
    ACTIONS(115), 1,
      anon_sym_ATproperty,
    ACTIONS(113), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
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
  [102] = 2,
    ACTIONS(35), 1,
      anon_sym_ATproperty,
    ACTIONS(117), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
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
  [136] = 2,
    ACTIONS(121), 1,
      anon_sym_ATproperty,
    ACTIONS(119), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
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
  [170] = 2,
    ACTIONS(125), 1,
      anon_sym_ATproperty,
    ACTIONS(123), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
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
  [204] = 2,
    ACTIONS(129), 1,
      anon_sym_ATproperty,
    ACTIONS(127), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
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
  [238] = 2,
    ACTIONS(133), 1,
      anon_sym_ATproperty,
    ACTIONS(131), 28,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATapi,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATexample,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATlicense,
      anon_sym_ATmethod,
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
  [272] = 6,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_description,
    ACTIONS(17), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(10), 2,
      sym_text_line,
      aux_sym_description_repeat1,
    STATE(28), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [294] = 4,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_text,
    ACTIONS(135), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(29), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [309] = 4,
    ACTIONS(141), 1,
      sym_text,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(29), 2,
      sym_inline_tag,
      aux_sym_text_line_repeat1,
  [324] = 3,
    ACTIONS(147), 1,
      anon_sym_ATinternal,
    ACTIONS(149), 1,
      anon_sym_ATlink,
    STATE(36), 2,
      sym__internal_inline_tag,
      sym__link_inline_tag,
  [335] = 1,
    ACTIONS(151), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym_text,
      anon_sym_LBRACE,
  [342] = 2,
    ACTIONS(153), 1,
      sym_text,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
  [349] = 1,
    ACTIONS(157), 1,
      sym_text,
  [353] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [357] = 1,
    ACTIONS(161), 1,
      sym_uri,
  [361] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
  [365] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [369] = 1,
    ACTIONS(167), 1,
      sym_email_address,
  [373] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [377] = 1,
    ACTIONS(171), 1,
      sym_uri,
  [381] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
  [385] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [389] = 1,
    ACTIONS(177), 1,
      anon_sym_GT,
  [393] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [397] = 1,
    ACTIONS(181), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 34,
  [SMALL_STATE(21)] = 68,
  [SMALL_STATE(22)] = 102,
  [SMALL_STATE(23)] = 136,
  [SMALL_STATE(24)] = 170,
  [SMALL_STATE(25)] = 204,
  [SMALL_STATE(26)] = 238,
  [SMALL_STATE(27)] = 272,
  [SMALL_STATE(28)] = 294,
  [SMALL_STATE(29)] = 309,
  [SMALL_STATE(30)] = 324,
  [SMALL_STATE(31)] = 335,
  [SMALL_STATE(32)] = 342,
  [SMALL_STATE(33)] = 349,
  [SMALL_STATE(34)] = 353,
  [SMALL_STATE(35)] = 357,
  [SMALL_STATE(36)] = 361,
  [SMALL_STATE(37)] = 365,
  [SMALL_STATE(38)] = 369,
  [SMALL_STATE(39)] = 373,
  [SMALL_STATE(40)] = 377,
  [SMALL_STATE(41)] = 381,
  [SMALL_STATE(42)] = 385,
  [SMALL_STATE(43)] = 389,
  [SMALL_STATE(44)] = 393,
  [SMALL_STATE(45)] = 397,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(18),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(45),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(40),
  [15] = {.count = 1, .reusable = false}, SHIFT(16),
  [17] = {.count = 1, .reusable = false}, SHIFT(15),
  [19] = {.count = 1, .reusable = false}, SHIFT(28),
  [21] = {.count = 1, .reusable = false}, SHIFT(30),
  [23] = {.count = 1, .reusable = false}, SHIFT(39),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(7),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 2),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(3),
  [41] = {.count = 1, .reusable = true}, SHIFT(45),
  [43] = {.count = 1, .reusable = true}, SHIFT(6),
  [45] = {.count = 1, .reusable = true}, SHIFT(40),
  [47] = {.count = 1, .reusable = true}, SHIFT(16),
  [49] = {.count = 1, .reusable = true}, SHIFT(42),
  [51] = {.count = 1, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(15),
  [56] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(28),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(30),
  [62] = {.count = 1, .reusable = false}, REDUCE(sym_description, 1),
  [64] = {.count = 1, .reusable = true}, SHIFT(34),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_text_line, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_tag_name, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(38),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(17),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__author_tag, 5),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__author_tag, 5),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 3),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__deprecated_tag, 3),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__deprecated_tag, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__global_tag, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__global_tag, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__internal_tag, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym__internal_tag, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym__link_tag, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym__link_tag, 3),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [135] = {.count = 1, .reusable = false}, SHIFT(14),
  [137] = {.count = 1, .reusable = false}, SHIFT(29),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(29),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_line_repeat1, 2), SHIFT_REPEAT(30),
  [147] = {.count = 1, .reusable = true}, SHIFT(33),
  [149] = {.count = 1, .reusable = true}, SHIFT(35),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_inline_tag, 3),
  [153] = {.count = 1, .reusable = true}, SHIFT(44),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(41),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_document, 3),
  [161] = {.count = 1, .reusable = true}, SHIFT(32),
  [163] = {.count = 1, .reusable = true}, SHIFT(31),
  [165] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [167] = {.count = 1, .reusable = true}, SHIFT(43),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(5),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__internal_inline_tag, 2, .production_id = 1),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_document, 4),
  [177] = {.count = 1, .reusable = true}, SHIFT(19),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__link_inline_tag, 3, .production_id = 2),
  [181] = {.count = 1, .reusable = true}, SHIFT(27),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
