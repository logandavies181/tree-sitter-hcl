module.exports = grammar({
  name: 'hcl',

  extras: $ => [
    $.comment,
    /\s/
  ],

  externals: $ => [
    $.heredoc_start,
    $.simple_heredoc_body,
    $.heredoc_body_beginning,
    $.heredoc_body_middle,
    $.heredoc_body_end,
    $.file_descriptor,
    $._empty_value,
    $._concat,
    $.variable_name, // Variable name followed by an operator like '=' or '+='
    $.regex,
    '}',
    ']',
    '<<',
    '<<-',
    '\n',
  ],

  rules: {
    source_file: $ => repeat(
      $._body,
    ),

    comma: $ => ',',

    newline: $ => '\n',

    _body: $ => prec.right(1, repeat1(choice(
      $.attribute_def,
      $.block,
      //$.one_line_block,
    ))),

    block: $ => seq(
      $.identifier_group,
      '{',
      repeat(choice(
        $.attribute_def,
        $.attribute_def_nl
      )),
      '}',
      $.newline,
    ),

      /*
    block: $ => prec(2, seq(
      field('ig', $.identifier_group),
      '{',
      $.newline,
      $.newline,
      $._body,
      '}',
      $.newline
    )),
      */

    identifier: $ => /\p{L}[\p{L}0-9_-]*/,

    expression: $ => choice(
      $.expr_term,
      $.operation,
      $.conditional,
    ),

    // many TODOs
    expr_term: $ => choice(
      $.literal_value,
      $.collection_value,
      $.template_expr,
      $.variable_expr,
      $.function_call,
      $.for_expr,
      seq($.expr_term, $.index),
      seq($.expr_term, $.get_attr),
      seq($.expr_term, $.splat),
      seq(
        '(', 
        $.expression, 
        ')'
      ),
    ),

    literal_value: $ => choice(
      $.numeric_lit,
      $.true,
      $.false,
      $.null
    ),

    numeric_lit: $ => /[0-9][0-9]*(\.[0-9])?([eE][+-]?)?/,

    // TODO:
    collection_value: $ => '',

    collection_value: $ => choice(
      $.tuple,
      $.object
    ),

    tuple: $ => seq(
      '[',
      optional(seq(
        $.expression,
        repeat(seq(
          ',',
          $.expression
        )),
        optional(',')
      )),
      ']'
    ),

    object: $ => seq(
      '{',
      optional(seq(
        $.object_elem,
        repeat(seq(
          ',',
          $.object_elem
        )),
        optional(',')
      )),
      '}'
    ),

    object_elem: $ => prec(1, seq(
      choice(
        $.identifier,
        $.expression
      ),
      choice(
        '=',
        ':'
      ),
      $.expression
    )),

    conditional: $ => prec.left(1, seq(
      $.expression,
      '?',
      $.expression,
      ':',
      $.expression
    )),

    attribute_def: $ => seq(
      $.identifier,
      '=',
      $.expression
    ),

    attribute_def_nl: $ => seq(
      $.attribute_def,
      $.newline
    ),

      /*
    string_lit: $ => seq(
      '"',
      // FIXME doesn't handle spaces
      field('s', $.identifier),
      '"'
    ),
      */

    identifier_group: $ => seq(
      field('block_name', $.identifier),
      repeat(choice(
        $.identifier,
        //$.string_lit
        $.quoted_template,
      ))
    ),

    operation: $ => choice(
      $._unary_op,
      $._binary_op
    ),

    _unary_op: $ => seq(
      choice(
        '-',
        '!'
      ),
      $.expr_term
    ),

    _binary_op: $ => seq(
      $.expr_term,
      $.binary_operator,
      $.expr_term
    ),

    binary_operator: $ => choice(
      $.compare_operator,
      $.arithmetic_operator,
      $.logic_operator,
    ),

    compare_operator: $ => choice(
      '==',
      '!=',
      '<',
      '>',
      '<=',
      '>='
    ),

    arithmetic_operator: $ => choice(
      '+',
      '-',
      '*',
      '/',
      '%'
    ),

    logic_operator: $ => choice(
      '&&',
      '||',
      '!'
    ),

    template_expr: $ => choice(
      //$.string_lit,
      $.quoted_template,
      $.heredoc_template,
    ),

    // TODO test this
    quoted_template: $ => seq(
      '"',
      optional($.quoted_template_body),
      '"'
    ),

    heredoc_template: $ => seq(
      $.heredoc_redirect,
      $.template_body
    ),

    heredoc_redirect: $ => seq(
      choice('<<', '<<-'),
      $.heredoc_start
    ),

    quoted_template_body: $ => choice(
      repeat1(choice(
        $.template_interpolation,
        //$.heredoc_body_middle
        $.heredoc_word
      )),
    ),

    heredoc_word: $ => /[\p{L}0-9_-~=<>]+/,

    // template_body
    template_body: $ => choice(
      prec(1, seq(
        $.heredoc_body_beginning,
        repeat(choice(
          $.template_interpolation,
          $.heredoc_body_middle
        )),
        $.heredoc_body_end
      )),
      $.simple_heredoc_body,
    ),

    template_interpolation: $ => seq(
      field('start', $.template_interpolation_start),
      $.expression,
      field('end', $.template_interpolation_end),
    ),

    template_interpolation_start: $ => choice('${', '${~'),
    template_interpolation_end: $ => choice('}', '~}'),

    variable_expr: $ => choice(
      $.identifier,
      prec(1, $.aws_ref),
    ),

    function_call: $ => seq(
      $.identifier,
      '(',
      $.arguments,
      ')'
    ),

    arguments: $ => choice(
      seq('(', ')'),
      seq(
        $.expression,
        repeat(
          seq(',', $.expression),
        ),
        optional(
          choice(',', '...'),
        )
      ),
    ),

    for_expr: $ => choice($.for_tuple_expr, $.for_object_expr),

    for_tuple_expr: $ => seq(
      '[',
      $.for_intro,
      $.expression,
      optional($.for_cond),
      ']'
    ),

    for_object_expr: $ => seq(
      '{',
      $.for_intro,
      $.expression,
      '=>',
      $.expression,
      optional('...'),
      optional($.for_cond),
      '}'
    ),

    for_intro: $ => seq(
      'for',
      $.identifier,
      optional(seq(',', $.identifier)),
      'in',
      $.expression,
      ':'
    ),

    for_cond: $ => seq(
      'if',
      $.expression
    ),

    index: $ => seq(
      '[',
      $.expression,
      ']'
    ),

    get_attr: $ => seq(
      '.',
      $.identifier
    ),

    accessed_attr: $ => seq(
      $.identifier,
      $.get_attr
    ),

    splat: $ => choice(
      $.attr_splat,
      $.full_splat
    ),

    attr_splat: $ => prec.left(1, seq(
      '.',
      '*',
      repeat($.get_attr),
    )),

    full_splat: $ => prec.left(1, seq(
      '[',
      '*',
      ']',
      repeat(choice(
        $.get_attr,
        $.index
      )),
    )),

    null: $ => 'null',
    true: $ => 'true',
    false: $ => 'false',

    // always put this at bottom
    // raxxed from https://github.com/tree-sitter/tree-sitter-go/blob/master/grammar.js
    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    aws_ref: $ => seq(
      field('ref', $.aws_ref_regex),
    ),

    //aws_ref_regex: $ => /aws_[\p{L}0-9_]*/,
    aws_ref_regex: $ => /aws_.*/,

  }
});

