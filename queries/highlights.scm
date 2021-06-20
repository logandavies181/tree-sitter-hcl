(identifier_group
    block_name: (identifier) @define)

[
  (template_body)
  (heredoc_start)
  (heredoc_redirect)
  (quoted_template)
] @string

[
 "{"
 "}"
 "="
 "."
] @special

[
 (null)
 (true)
 (false)
] @constant

(template_interpolation) @special

(get_attr) @property

(function_call) @function

(aws_ref
  ref: (aws_ref_regex) @typedef)

(comment) @comment
