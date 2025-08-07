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
    expression: ($) => repeat1(choice($.boolean, $.null, $.number)),

    boolean: () => /true|false/,
    null: () => /null/,

    _dot: () => ".",

    number: ($) => choice($._int, $._float, $._hex, $._exp),
    _int: () => /\d+/,
    _float: ($) => seq(optional("-"), $._int, $._dot, $._int),
    _hex: () => seq("0x", /[0-9a-f]+/),
    _exp: ($) => seq($._float, "e", optional("-"), $._int),
  },
});
