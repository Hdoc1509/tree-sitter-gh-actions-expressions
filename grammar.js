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
    source: ($) => choice($._if_pair, $._run_pair, $._pair),

    _pair: ($) =>
      seq(/[\w-]+/, ":", repeat1(choice(/[^$]/, $.delimited_expression))),

    _if_pair: ($) =>
      seq("if", ":", choice($.delimited_expression, $.expression)),

    _run_pair: ($) =>
      seq("run", ":", repeat1(choice($._ignored_bash, $.delimited_expression))),
    _ignored_bash: () => token(choice(/[^$]/, /\$[^{]/, /\$\{[^{]/)),

    _evaluation: ($) =>
      choice($._literal, $.context, $.function_call, $.logical_group),

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

    _literal: ($) => choice($.boolean, $.null, $.number, $.string),

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
    format_string: ($) =>
      seq(
        "'",
        repeat(
          choice(
            $.format_variable,
            alias($._format_scape, $.scape_sequence),
            alias($._format_content, $.string_content)
          )
        ),
        "'"
      ),
    _format_scape: () => token.immediate(choice("''", "{{", "}}")),
    _format_content: () => token(prec(-1, /([^'{}\\\r\n]|\\(.|\r?\n))+/)),
    format_variable: ($) => seq("{", $.format_index, "}"),
    format_index: ($) => $._int,

    asterisk: () => "*",
    identifier: () => /[_a-zA-Z][-_a-zA-Z0-9]+/,
    property_deref: ($) => $._dot,

    context: ($) => seq($.identifier, repeat($.property)),
    property: ($) =>
      choice(seq($.property_deref, choice($.identifier, $.asterisk)), $.index),
    index: ($) => seq("[", choice($.number, $.string), "]"),

    function_call: ($) => choice($._format_function, $._function),
    _function: ($) =>
      seq(
        field("function", $.identifier),
        "(",
        field("arguments", optional($.arguments)),
        ")"
      ),
    arguments: ($) => seq($._evaluation, repeat(seq(",", $._evaluation))),
    _format_function: ($) =>
      seq(
        field("function", alias("format", $.identifier)),
        "(",
        field("arguments", optional(alias($._format_arguments, $.arguments))),
        ")"
      ),
    _format_arguments: ($) =>
      seq($.format_string, repeat(seq(",", $._evaluation))),

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

    logical_group: ($) =>
      seq(
        "(",
        seq(
          optional($.not),
          $._evaluation,
          repeat(seq($.operator, optional($.not), $._evaluation))
        ),
        ")"
      ),
  },
});
