module.exports = grammar({
  name: 'programLanguage',
  word: $ => $.identifier,
  rules: {
    source_file: $ => seq($.pname, repeat(choice($.forloop, $.identifier, $.endmarker, $.declaration, $.definition))),

    endmarker: $ => '.',
    pname: $ => seq(
      alias('Iam', $.pnamedef),
      $.identifier,
      $.endmarker
    ),
    declaration: $ => seq(
      optional(choice(alias('read', $.readmod), alias('print', $.printmod))),
      $.identifier,
      alias('isa', $.decop),
      $.type,
      $.endmarker
    ),
    type: $ => choice('int', 'float'),

    definition: $ => seq(
      $.identifier,
      alias('is', $.defop),
      $._expression,
      $.endmarker
    ),
    forloop: $ => seq(
      alias('for', $.key_for),
      $.identifier,
      alias('from', $.key_from),
      choice($.int, $.identifier),
      alias('to', $.key_to),
      choice($.int, $.identifier),
      alias('do', $.key_do),
      $._statement,
      repeat($._statement),
      alias('end', $.endfor)
    ),
    _expression: $ => choice(
      $.identifier,
      $._number,
      prec.left(seq($._expression, alias('*', $.multiply_op), $._expression))
    ),
    _statement: $ => choice(
      $.declaration,
      $.definition,
    ),
    _number: $ => choice(
      $.int, $.float
    ),
    identifier: $ => /[a-zA-Z]\w*/,
    int: $ => /[0-9]+/,
    float: $ => /[0-9]*\.[0-9]+/,

},

});
