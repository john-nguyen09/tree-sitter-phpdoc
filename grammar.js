module.exports = grammar({
  name: 'phpdoc',

  extras: $ => [
    token(
      seq(/(\r)|(\r\n)|(\n)/, /[ \t]*/, repeat('*'), /[ \t]*/)
    ),
    token(
      seq(/[ \t]*/, repeat('*'), /[ \t]*/)
    ),
    token(repeat1(' ')),
  ],

  word: $ => $._name,

  conflicts: $ => [
    [$._namespace_name],
    [$._namespace_name_as_prefix],
  ],

  rules: {
    document: $ => seq(
      $._begin,
      optional($.description),
      repeat($.tag),
      $._end,
    ),

    _begin: $ => token(seq('/**', repeat('*'))),
  
    tag: $ => choice(
      seq($.tag_name, optional($.description)),

      $._author_tag,
      $._global_tag,
      $._internal_tag,
      $._link_tag,
      $._method_tag,
      $._return_tag,
      $._see_tag,
      $._throws_tag,
      $._var_tag,

      $._version_tag,
      $._variable_tag_with_type,
    ),

    _author_tag: $ => seq(
      alias('@author', $.tag_name),
      optional(
        seq($.author_name, optional(seq('<', $.email_address, '>')))
      )
    ),

    _version_tag: $ => seq(
      alias(
        choice(
          '@deprecated',
          '@since',
        ),
        $.tag_name
      ),
      optional($.version),
      optional($.description),
    ),

    _global_tag: $ => seq(
      alias('@global', $.tag_name),
      $._type_name,
      $.variable_name
    ),

    _internal_tag: $ => seq(
      alias('@internal', $.tag_name),
      optional($.description)
    ),

    _internal_inline_tag: $ => seq(
      alias('@internal', $.tag_name),
      alias($.text, $.description)
    ),

    _link_tag: $ => seq(
      alias('@link', $.tag_name),
      $.uri,
      optional($.description)
    ),

    _link_inline_tag: $ => seq(
      alias('@link', $.tag_name),
      $.uri,
      optional(alias($.text, $.description))
    ),

    _method_tag: $ => seq(
      alias('@method', $.tag_name),
      optional($.static),
      optional($._type_name),
      alias($._name, $.name),
      '(',
      repeat($.param),
      ')'
    ),

    _variable_tag_with_type: $ => seq(
      alias(choice(
        '@param',
        '@property',
        '@property-read',
        '@property-write',
      ), $.tag_name),
      $._type_name,
      $.variable_name,
      optional($.description),
    ),

    _return_tag: $ => seq(
      alias('@return', $.tag_name),
      $._type_name,
      optional($.description),
    ),

    _see_tag: $ => seq(
      alias('@see', $.tag_name),
      $.uri,
      $.description,
    ),

    _see_inline_tag: $ => seq(
      alias('@see', $.tag_name),
      $.uri,
      optional(alias($.text, $.description))
    ),

    _throws_tag: $ => seq(
      alias('@throws', $.tag_name),
      $._type_name,
      optional($.description),
    ),

    _var_tag: $ => seq(
      alias('@var', $.tag_name),
      $._type_name,
      optional($.variable_name),
      optional($.description),
    ),

    author_name: $ => /[a-zA-Zα-ωΑ-Ωµ0-9_][ a-zA-Zα-ωΑ-Ωµ0-9_]*/,

    email_address: $ => /\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+/,
  
    tag_name: $ => choice(...phpdoc_tags().map(tag => `@${tag}`)),
  
    description: $ => repeat1($.text_line),

    text_line: $ => seq(
      repeat1(choice($.text, $.inline_tag)),
      choice('\n', '\r\n')
    ),

    text: $ => token(prec(-1, /[^@*\s\r\n{}][^\r\n{}]*/)),

    inline_tag: $ => prec(-1, seq(
      '{',
      choice(
        $._internal_inline_tag,
        $._link_inline_tag,
        $._see_inline_tag,
      ),
      '}'
    )),

    version: $ => /[\.0-9]+/,

    uri: $ => /\w+:(\/?\/?)[^\s}]+/,

    _name: $ => /[_a-zA-Z\u00A1-\u00ff][_a-zA-Z\u00A1-\u00ff\d]*/,

    _type_name: $ => seq(
      alias($.qualified_name, $.type),
      repeat(seq('|', alias($.qualified_name, $.type)))
    ),

    param: $ => seq(
      optional($._type_name),
      $.variable_name
    ),

    qualified_name: $ => seq(
      optional($._namespace_name_as_prefix),
      $._name,
      optional('[]')
    ),

    _namespace_name: $ => seq($._name, repeat(seq('\\', $._name))),

    _namespace_name_as_prefix: $ => choice(
      '\\',
      seq(optional('\\'), $._namespace_name, '\\'),
    ),

    static: $ => 'static',

    variable_name: $ => seq('$', $._name),
  
    _end: $ => '*/',
  },
})

function phpdoc_tags() {
  return [
    'api',
    'category',
    'copyright',
    'example',
    'filesource',
    'ignore',
    'license',
    'package',
    'source',
    'subpackage',
    'todo',
    'uses',
    'version',
  ];
}