# tree-sitter-hcl

This parser is experimental

## Add to nvim-treesitter

Add this to your init.vim

```
autocmd BufNewFile,BufRead *.hcl set ft=hcl

lua <<EOF
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.hcl = {
  install_info = {
    url = "github.com/logandavies181/tree-sitter-hcl.git", -- local path or git repo
    files = {"src/parser.c", "src/scanner.cc"}
  },
  filetype = "hcl", -- if filetype does not agrees with parser name
  -- used_by = {"terraform"}
}
EOF
```

Then do:

```
:TSInstall hcl
```
