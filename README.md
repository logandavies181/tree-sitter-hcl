# tree-sitter-hcl

This parser is experimental

## Add to nvim-treesitter

Clone this repo then add this to your init.vim

```
autocmd BufNewFile,BufRead *.hcl set ft=hcl

lua <<EOF
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.hcl = {
  install_info = {
    url = "/path/to/cloned/repo", -- local path or git repo
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

Then create a symlink to the queries file

```
mkdir /home/vagrant/.vim/plugged/nvim-treesitter/queries/hcl
ln -s /path/to/cloned/repo/queries/highlights.scm /home/vagrant/.vim/plugged/nvim-treesitter/queries/hcl/highlights.scm
```
