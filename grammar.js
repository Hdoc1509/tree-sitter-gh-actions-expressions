/**
 * @file Github Actions expressions grammar for tree-sitter
 * @author Héctor Ochoa <hector.ochoa.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "gh_actions_expressions",

  rules: {
    source: ($) => $._if_pair,

    _if_pair: ($) =>
      seq("if", ":", choice($.delimited_expression, $.expression)),

    _evaluation: ($) => choice($.literal, $.context, $.function_call),

    expression: ($) =>
      seq(
        $._evaluation,
        repeat(seq($.operator, optional($.not), $._evaluation))
      ),
    delimited_expression: ($) =>
      seq(
        "${{",
        seq(
          optional($.not),
          $._evaluation,
          repeat(seq($.operator, optional($.not), $._evaluation))
        ),
        "}}"
      ),

    literal: ($) => choice($.boolean, $.null, $.number, $.string),

    boolean: () => choice("true", "false"),

    null: () => "null",

    _dot: () => ".",

    number: ($) => choice($._int, $._float, $._hex, $._exp),
    _int: () => /\d+/,
    _float: ($) => seq(optional("-"), $._int, $._dot, $._int),
    _hex: () => seq("0x", /[0-9a-f]+/),
    _exp: ($) => seq($._float, "e", optional("-"), $._int),

    string: ($) =>
      seq("'", repeat(choice($.string_content, $.scape_sequence)), "'"),
    string_content: (_) => token(prec(-1, /([^'\\\r\n]|\\(.|\r?\n))+/)),
    scape_sequence: () => token.immediate("''"),

    asterisk: () => "*",
    identifier: () => /[_a-zA-Z][-_a-zA-Z0-9]+/,
    property_deref: ($) => $._dot,

    context: ($) => seq($.identifier, repeat($.property)),
    property: ($) =>
      choice(seq($.property_deref, choice($.identifier, $.asterisk)), $.index),
    index: ($) => seq("[", choice($.number, $.string), "]"),

    function_call: ($) =>
      seq(
        field("function", $.identifier),
        "(",
        field("arguments", optional($.arguments)),
        ")"
      ),
    arguments: ($) => seq($._evaluation, repeat(seq(",", $._evaluation))),

    not: () => "!",
    operator: ($) => choice($.lt, $.le, $.gt, $.ge, $.eq, $.ne, $.and, $.or),
    lt: () => "<",
    le: () => "<=",
    gt: () => ">",
    ge: () => ">=",
    eq: () => "==",
    ne: () => "!=",
    and: () => "&&",
    or: () => "||",
  },
});
