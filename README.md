# tree-sitter-gh-actions-expressions

[![CI][ci]](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
[![crates][crates]](https://crates.io/crates/tree-sitter-gh-actions-expressions)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-gh-actions-expressions)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-gh-actions-expressions)

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for
[Github Actions expressions][gh-actions-expressions-docs]

> [!IMPORTANT]
> ABI version: `15`

## Parser requirements

- [`gitignore`](https://github.com/shunsambongi/tree-sitter-gitignore)
  (optional): for `hashFiles()` function
- [`json`](https://github.com/tree-sitter/tree-sitter-json) (optional): for
  `fromJSON()` function
- [`yaml`](https://github.com/tree-sitter/tree-sitter-yaml): injection to its
  `block_mapping_pair` node

## Usage in Editors

### Neovim

#### Requirements

- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
- [Node.js](https://nodejs.org/en/download) (if ABI not compatible)
- [tree-sitter cli](https://github.com/tree-sitter/tree-sitter/tree/master/crates/cli)
  (if ABI not compatible)

#### Installation

1. Add the following to your `nvim-treesitter` configuration:

   ```lua
   local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

   -- NOTE: add the parser to `parser_config` before calling `setup()`
   parser_config.gh_actions_expressions = {
     install_info = {
       url = 'https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions',
       files = { "src/parser.c" },
       branch = 'release',
       -- if ABI version from neovim doesn't match the one from this grammar
       -- requires Node.js and tree-sitter cli to be installed
       requires_generate_from_grammar = true,
     },
   }

   require('nvim-treesitter.configs').setup({
     ensure_installed = {
       -- other parsers
       'gh_actions_expressions',
     },
     -- other options
   })
   ```

2. Copy the queries from [`queries`](./queries) directory to
   `queries/gh_actions_expression` directory in your `neovim` configuration
   directory:

   | With                  | Path                    |
   | --------------------- | ----------------------- |
   | Unix                  | `~/.config/nvim`        |
   | Windows               | `~/AppData/Local/nvim`  |
   | `XDG_CONFIG_HOME` set | `$XDG_CONFIG_HOME/nvim` |

3. Add the following queries to `after/queries/yaml/injections.scm` in your
   `neovim` configuration directory:

   ```query
   ; extends
   ; don't forget to include `extends` modeline!
   ((block_mapping_pair
     key: (flow_node) @_key
     value: [
       (block_node
         (block_scalar) @_value)
       (flow_node
         [
           (plain_scalar
             (string_scalar) @_value)
           (double_quote_scalar) @_value
         ])
     ]
     (#lua-match? @_value "${{")) @injection.content
     (#set! injection.language "gh_actions_expressions")
     (#set! injection.include-children))

   ((block_mapping_pair
     key: (flow_node) @_key
     (#eq? @_key "if")
     value: (flow_node
       (plain_scalar
         (string_scalar) @_value)
       (#not-lua-match? @_value "${{"))) @injection.content
     (#set! injection.language "gh_actions_expressions")
     (#set! injection.include-children))
   ```

### Helix

WIP

### Emacs

WIP

### In General

You can get the built files from the [`release` branch][release-branch]. If you
have specific instructions for your editor, PR's are welcome.

## Implementations

WIP

## Troubleshooting

### AST errors within `bash` injections when using `run` key

![AST error within bash injection](https://github.com/user-attachments/assets/90c6119e-e6d7-4ab0-975b-25cba0c25143)

To avoid these errors, is recommended to surround the `expression` within a
`raw_string` node, string with single quotes `'`, i.e.:

```yaml
jobs:
  dry-run:
    name: dry-run
    runs-on: ubuntu-latest
    steps:
      - name: dry-run
        run: ./script.sh '${{ inputs.mode }}' --dry-run
```

![Correct bash AST by using raw_string](https://github.com/user-attachments/assets/a9335740-afba-4a1a-97c4-b4b66d770da2)

#### What if I need it within a variable expansion?

![AST error within variable expansion](https://github.com/user-attachments/assets/b06c0272-d127-4911-8f19-4d076baf34bf)

Due to variable expansion is done by using `$` prefix, the `${{` and `}}` nodes
will cause an AST error. To avoid this declare an auxiliary bash variable or an
environment variable:

```yaml
jobs:
  dry-run:
    name: dry-run
    runs-on: ubuntu-latest
    steps:
      - name: dry-run
        run: |
          auxiliary_var='${{ inputs.mode }}'
          ./script.sh "$MY_VAR and $MODE" --dry-run
          ./script.sh "$MY_VAR and $auxiliary_var" --dry-run
        env:
          MODE: ${{ inputs.mode }}
```

![Correct bash AST by using auxiliary variables](https://github.com/user-attachments/assets/435fd4d1-a430-4e56-96a4-76181624325a)

## References

- [Github Actions expressions documentation][gh-actions-expressions-docs]
- `if` conditional:
  - [run.steps\[\*\].if][gh-run-steps-if]
  - [jobs.\<job_id>.if][gh-jobs-jobid-if]
- [Gihub Actions Context documentation][gh-actions-context-docs]

## Thanks

Thanks to [@disrupted](https://github.com/disrupted) for creating
[tree-sitter-github-actions grammar](https://github.com/disrupted/tree-sitter-github-actions),
which is the base I used to create this grammar.

[ci]: https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/actions/workflows/ci.yml/badge.svg
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[crates]: https://img.shields.io/crates/v/tree-sitter-gh-actions-expressions?logo=rust
[npm]: https://img.shields.io/npm/v/tree-sitter-gh-actions-expressions?logo=npm
[pypi]: https://img.shields.io/pypi/v/tree-sitter-gh-actions-expressions?logo=pypi&logoColor=ffd242
[gh-actions-expressions-docs]: https://docs.github.com/en/actions/reference/evaluate-expressions-in-workflows-and-actions
[gh-run-steps-if]: https://docs.github.com/en/actions/reference/workflows-and-actions/metadata-syntax#runsstepsif
[gh-jobs-jobid-if]: https://docs.github.com/en/actions/reference/workflows-and-actions/workflow-syntax#jobsjob_idif
[gh-actions-context-docs]: https://docs.github.com/en/actions/reference/workflows-and-actions/contexts
[release-branch]: https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/tree/release
