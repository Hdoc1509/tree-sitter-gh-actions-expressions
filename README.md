# tree-sitter-gh-actions-expressions

[![CI][ci]](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
[![crates][crates]](https://crates.io/crates/tree-sitter-gh-actions-expressions)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-gh-actions-expressions)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-gh-actions-expressions)

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for
[Github Actions expressions][gh-actions-expressions-docs]

## Parser requirements

- [`yaml`](https://github.com/tree-sitter/tree-sitter-yaml): injection to its
  `block_mapping_pair` node

## Usage in Editors

### Neovim

WIP

### Helix

WIP

### Emacs

WIP

### In General

WIP

## Implementations

WIP

## References

- [Github Actions expressions documentation][gh-actions-expressions-docs]
- `if` conditional:
  - [run.steps\[\*\].if][gh-run-steps-if]
  - [jobs.\<job_id>.if][gh-jobs-jobid-if]
- [Gihub Actions Context documentation][gh-actions-context-docs]

## Thanks

Thanks to [@disrupted](https://github.com/disrupted) for creating
[tree-sitter-github-actions grammar](https://github.com/disrupted/tree-sitter-github-actions),
which is the base I use to create this grammar.

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
