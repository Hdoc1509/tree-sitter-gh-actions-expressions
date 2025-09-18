# gh-actions-expressions

## 0.1.2

### Patch Changes

- Include grammar.js in release branch ([`77e7dc1`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/77e7dc1604ed388f3679da7290f181835738dd29))

## 0.1.1

### Patch Changes

- Set correct package name in package.json ([`eac930a`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/eac930a53699d2fd4f2b3183c6459572039859a6))

- Update generated files ([`2496b7d`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/2496b7d4f60cd4d9fc04f31703ccee94fe9c3d6b))

- Update keywords ([`3bdfffa`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/3bdfffaa1ec0e7229d3a681e2e742a4afda5d0ce))

## 0.1.0

### Initial release

- Add injections to `fromJSON()` and `hashFiles()` functions ([`31237f3`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/31237f315a362f4e3d01e33deb40edc18271d3f4))

- Allow multiple arguments within `function_call.arguments` ([`80ffa88`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/80ffa8880c3c41da5ead1888cc652b0de77aa3fe))

- Allow any nested `property` nodes within `context` node ([`fdc771d`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/fdc771d5f39d8bf576ab9a836177e7e353bd0e59))

- Add rest of operators ([`b418fbb`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/b418fbb9c5dfd7c2c8058808d58871954c3d6ac5))

- Allow logical group with operators ([`0d4b6a1`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/0d4b6a1f6f0fa3106d69b4cd847174d2abb97e04))

- Allow `asterisk` node within `property` node ([`35d1e1f`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/35d1e1f4c73294052230df00b1db06658be698c1))

- Only include expression nodes in syntax tree ([`6986986`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/6986986bad4b043fc5a89ec90b1f8bc80fbe23f1))

- Allow `not` operator within logical group ([`f965635`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/f965635318bf2b3558e5a5ee1ad5552e93f652ca))

- Add basic `context` node ([`b494747`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/b494747eac2e15c47d19aac2f12bf4d9c3bf00ac))

- Add optional `argument` nodes for `function_call` ([`8fb2bf4`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/8fb2bf4ddb94a9b2b95ed851534b63fd0c6c1ea2))

- Add boolean node ([`43ad591`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/43ad591d3117e6f4e466c5798bd66f741e8fc633))

- Allow multiple members to be used with `operator` node ([`f7b0b05`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/f7b0b0592419cc88fd816623801de68d68f79086))

- Add `null` node ([`4e9b911`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/4e9b911bfdf09efcf32eadb5d079b6ebf1d7d507))

- Allow delimited expressions ([`0813b61`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/0813b61a4f848f893cbce47e8790042354e8e988))

- Update syntax tree to include `literal` node ([`08efad0`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/08efad06f393dfa260be7da27b7e1aeae41eadec))

- Add optional `property` node within `context` node ([`5d5eefa`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/5d5eefa559166c4bda36db2ed921ba3054f5b05a))

- Add `identifier` node within `context` node ([`ec3263f`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/ec3263faac7eaa1be0dea4acbf8b1032c274deee))

- Add `string` node ([`0fdb0c4`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/0fdb0c4e6a9542fbd5049743fee733ee2d17cf98))

- Add `number` node ([`dc9d45f`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/dc9d45f51afa04d462c8c947c1dc2dfa7d28a329))

- Add `arguments` node within `function_call` ([`7321f1d`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/7321f1dca24f153c392e4c4dcdd40cd8f6d59549))

- Allow indexing syntax for context ([`f69e6ec`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/f69e6ec6d69db3647474b3188e51756f7037aa29))

- Update syntax tree to be key/value pair ([`8b8681e`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/8b8681e3fcbf49d7e9324f8f5156323736629992))

- Allow `not` operator to any member used with `operator` node ([`6079260`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/6079260e9f73a36dfc60dda60baaddecce034ac3))

- Add basic logical group ([`a662f3c`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/a662f3c7d29515882d978a90d0998a7713c37817))

- Allow kebab-case keys to pair without `if` key ([`40241f3`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/40241f394ba3c4d0b1e938b05864018143503bcb))

- Allow multiple expressions with ignored text without `if` key ([`cd62115`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/cd62115d5bf3560cf4d31c0ca82f43772cdaa9b0))

- Add rest of highlight queries ([`6585648`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/65856487867df003ca22c575d09e755ef17442bd))

- Rename root node to `source` ([`259247e`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/259247eed928cd3997ce9601ea19042ea1b07b5e))

- Add `not` operator ([`3dac3c8`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/3dac3c8c3b84e8d55aeb2196307d92c8c70ed103))

- Add basic `function_call` node ([`7fb9173`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/7fb9173f8e6a70a72e20f649e14620d42eb98c72))

- Allow `operator` for 2 members within `delimited_expression` ([`b6f40da`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/b6f40da7722fcac8856960d474d7b4c98929f1d0))

- Allow expression to pairs without `if` key ([`93cba3c`](https://github.com/Hdoc1509/tree-sitter-gh-actions-expressions/commit/93cba3c94ecd809ab4da30a4476f8455a7492459))
