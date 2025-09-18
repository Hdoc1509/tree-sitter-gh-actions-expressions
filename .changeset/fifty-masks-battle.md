---
"tree-sitter-gh-actions-expressions": minor
---

Set `literal` as a hidden one.

Migrating:

```diff
- (literal (string (string_content)))
+ (string (string_content))
```

Why?

- Reduces complexity of queries
- Cleaner AST
