#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 418
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 15
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_COMMA = 1,
  anon_sym_LF = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym_identifier = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_numeric_lit = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_EQ = 11,
  anon_sym_COLON = 12,
  anon_sym_QMARK = 13,
  anon_sym_DASH = 14,
  anon_sym_BANG = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_PLUS = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_PERCENT = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_DQUOTE = 28,
  anon_sym_LT_LT = 29,
  anon_sym_LT_LT_DASH = 30,
  sym_heredoc_word = 31,
  anon_sym_DOLLAR_LBRACE = 32,
  anon_sym_DOLLAR_LBRACE_TILDE = 33,
  anon_sym_TILDE_RBRACE = 34,
  anon_sym_DOT_DOT_DOT = 35,
  anon_sym_EQ_GT = 36,
  anon_sym_for = 37,
  anon_sym_in = 38,
  anon_sym_if = 39,
  anon_sym_DOT = 40,
  sym_null = 41,
  sym_true = 42,
  sym_false = 43,
  sym_comment = 44,
  sym_aws_ref_regex = 45,
  sym_heredoc_start = 46,
  sym_simple_heredoc_body = 47,
  sym_heredoc_body_beginning = 48,
  sym_heredoc_body_middle = 49,
  sym_heredoc_body_end = 50,
  sym_file_descriptor = 51,
  sym__empty_value = 52,
  sym__concat = 53,
  sym_variable_name = 54,
  sym_regex = 55,
  sym_source_file = 56,
  sym_newline = 57,
  sym__body = 58,
  sym_block = 59,
  sym_expression = 60,
  sym_expr_term = 61,
  sym_literal_value = 62,
  sym_collection_value = 63,
  sym_tuple = 64,
  sym_object = 65,
  sym_object_elem = 66,
  sym_conditional = 67,
  sym_attribute_def = 68,
  sym_attribute_def_nl = 69,
  sym_identifier_group = 70,
  sym_operation = 71,
  sym__unary_op = 72,
  sym__binary_op = 73,
  sym_binary_operator = 74,
  sym_compare_operator = 75,
  sym_arithmetic_operator = 76,
  sym_logic_operator = 77,
  sym_template_expr = 78,
  sym_quoted_template = 79,
  sym_heredoc_template = 80,
  sym_heredoc_redirect = 81,
  sym_quoted_template_body = 82,
  sym_template_body = 83,
  sym_template_interpolation = 84,
  sym_template_interpolation_start = 85,
  sym_template_interpolation_end = 86,
  sym_variable_expr = 87,
  sym_function_call = 88,
  sym_arguments = 89,
  sym_for_expr = 90,
  sym_for_tuple_expr = 91,
  sym_for_object_expr = 92,
  sym_for_intro = 93,
  sym_for_cond = 94,
  sym_index = 95,
  sym_get_attr = 96,
  sym_splat = 97,
  sym_attr_splat = 98,
  sym_full_splat = 99,
  sym_aws_ref = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym__body_repeat1 = 102,
  aux_sym_block_repeat1 = 103,
  aux_sym_tuple_repeat1 = 104,
  aux_sym_object_repeat1 = 105,
  aux_sym_identifier_group_repeat1 = 106,
  aux_sym_quoted_template_body_repeat1 = 107,
  aux_sym_template_body_repeat1 = 108,
  aux_sym_attr_splat_repeat1 = 109,
  aux_sym_full_splat_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_numeric_lit] = "numeric_lit",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym_heredoc_word] = "heredoc_word",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOLLAR_LBRACE_TILDE] = "${~",
  [anon_sym_TILDE_RBRACE] = "~}",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_DOT] = ".",
  [sym_null] = "null",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_aws_ref_regex] = "aws_ref_regex",
  [sym_heredoc_start] = "heredoc_start",
  [sym_simple_heredoc_body] = "simple_heredoc_body",
  [sym_heredoc_body_beginning] = "heredoc_body_beginning",
  [sym_heredoc_body_middle] = "heredoc_body_middle",
  [sym_heredoc_body_end] = "heredoc_body_end",
  [sym_file_descriptor] = "file_descriptor",
  [sym__empty_value] = "_empty_value",
  [sym__concat] = "_concat",
  [sym_variable_name] = "variable_name",
  [sym_regex] = "regex",
  [sym_source_file] = "source_file",
  [sym_newline] = "newline",
  [sym__body] = "_body",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym_expr_term] = "expr_term",
  [sym_literal_value] = "literal_value",
  [sym_collection_value] = "collection_value",
  [sym_tuple] = "tuple",
  [sym_object] = "object",
  [sym_object_elem] = "object_elem",
  [sym_conditional] = "conditional",
  [sym_attribute_def] = "attribute_def",
  [sym_attribute_def_nl] = "attribute_def_nl",
  [sym_identifier_group] = "identifier_group",
  [sym_operation] = "operation",
  [sym__unary_op] = "_unary_op",
  [sym__binary_op] = "_binary_op",
  [sym_binary_operator] = "binary_operator",
  [sym_compare_operator] = "compare_operator",
  [sym_arithmetic_operator] = "arithmetic_operator",
  [sym_logic_operator] = "logic_operator",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_heredoc_template] = "heredoc_template",
  [sym_heredoc_redirect] = "heredoc_redirect",
  [sym_quoted_template_body] = "quoted_template_body",
  [sym_template_body] = "template_body",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_interpolation_start] = "template_interpolation_start",
  [sym_template_interpolation_end] = "template_interpolation_end",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym_arguments] = "arguments",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_index] = "index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_aws_ref] = "aws_ref",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__body_repeat1] = "_body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_identifier_group_repeat1] = "identifier_group_repeat1",
  [aux_sym_quoted_template_body_repeat1] = "quoted_template_body_repeat1",
  [aux_sym_template_body_repeat1] = "template_body_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym_full_splat_repeat1] = "full_splat_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_numeric_lit] = sym_numeric_lit,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [sym_heredoc_word] = sym_heredoc_word,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_DOLLAR_LBRACE_TILDE] = anon_sym_DOLLAR_LBRACE_TILDE,
  [anon_sym_TILDE_RBRACE] = anon_sym_TILDE_RBRACE,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_null] = sym_null,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_aws_ref_regex] = sym_aws_ref_regex,
  [sym_heredoc_start] = sym_heredoc_start,
  [sym_simple_heredoc_body] = sym_simple_heredoc_body,
  [sym_heredoc_body_beginning] = sym_heredoc_body_beginning,
  [sym_heredoc_body_middle] = sym_heredoc_body_middle,
  [sym_heredoc_body_end] = sym_heredoc_body_end,
  [sym_file_descriptor] = sym_file_descriptor,
  [sym__empty_value] = sym__empty_value,
  [sym__concat] = sym__concat,
  [sym_variable_name] = sym_variable_name,
  [sym_regex] = sym_regex,
  [sym_source_file] = sym_source_file,
  [sym_newline] = sym_newline,
  [sym__body] = sym__body,
  [sym_block] = sym_block,
  [sym_expression] = sym_expression,
  [sym_expr_term] = sym_expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_collection_value] = sym_collection_value,
  [sym_tuple] = sym_tuple,
  [sym_object] = sym_object,
  [sym_object_elem] = sym_object_elem,
  [sym_conditional] = sym_conditional,
  [sym_attribute_def] = sym_attribute_def,
  [sym_attribute_def_nl] = sym_attribute_def_nl,
  [sym_identifier_group] = sym_identifier_group,
  [sym_operation] = sym_operation,
  [sym__unary_op] = sym__unary_op,
  [sym__binary_op] = sym__binary_op,
  [sym_binary_operator] = sym_binary_operator,
  [sym_compare_operator] = sym_compare_operator,
  [sym_arithmetic_operator] = sym_arithmetic_operator,
  [sym_logic_operator] = sym_logic_operator,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_heredoc_template] = sym_heredoc_template,
  [sym_heredoc_redirect] = sym_heredoc_redirect,
  [sym_quoted_template_body] = sym_quoted_template_body,
  [sym_template_body] = sym_template_body,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_interpolation_start] = sym_template_interpolation_start,
  [sym_template_interpolation_end] = sym_template_interpolation_end,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym_arguments] = sym_arguments,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_index] = sym_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_aws_ref] = sym_aws_ref,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__body_repeat1] = aux_sym__body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_identifier_group_repeat1] = aux_sym_identifier_group_repeat1,
  [aux_sym_quoted_template_body_repeat1] = aux_sym_quoted_template_body_repeat1,
  [aux_sym_template_body_repeat1] = aux_sym_template_body_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym_full_splat_repeat1] = aux_sym_full_splat_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_heredoc_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_aws_ref_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_start] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_heredoc_body] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_body_beginning] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_body_middle] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_body_end] = {
    .visible = true,
    .named = true,
  },
  [sym_file_descriptor] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_value] = {
    .visible = false,
    .named = true,
  },
  [sym__concat] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym__body] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_def] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_def_nl] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_group] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_op] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_op] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_compare_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logic_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_body] = {
    .visible = true,
    .named = true,
  },
  [sym_template_body] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_end] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tuple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_object_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_full_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_aws_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_template_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_full_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_block_name = 1,
  field_end = 2,
  field_ref = 3,
  field_start = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block_name] = "block_name",
  [field_end] = "end",
  [field_ref] = "ref",
  [field_start] = "start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_block_name, 0},
  [1] =
    {field_ref, 0},
  [2] =
    {field_end, 2},
    {field_start, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_heredoc_word_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '<'
                  ? (c >= '0' && c <= '9')
                  : (c <= '>' || (c >= 'A' && c <= 'Z')))
                : (c <= '~' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_heredoc_word_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == '{') ADVANCE(88);
      END_STATE();
    case 30:
      if (lookahead == '|') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(55);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(47);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(45);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(50);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(44);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(94);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(51);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(39);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(43);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(42);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(46);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(49);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_numeric_lit);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_heredoc_word);
      if (sym_heredoc_word_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '~') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_TILDE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TILDE_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(54);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_aws_ref_regex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 4, .external_lex_state = 2},
  [3] = {.lex_state = 4, .external_lex_state = 2},
  [4] = {.lex_state = 4, .external_lex_state = 2},
  [5] = {.lex_state = 4, .external_lex_state = 2},
  [6] = {.lex_state = 4, .external_lex_state = 3},
  [7] = {.lex_state = 4, .external_lex_state = 3},
  [8] = {.lex_state = 4, .external_lex_state = 3},
  [9] = {.lex_state = 4, .external_lex_state = 3},
  [10] = {.lex_state = 3, .external_lex_state = 2},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 3, .external_lex_state = 2},
  [13] = {.lex_state = 3, .external_lex_state = 2},
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 3, .external_lex_state = 2},
  [16] = {.lex_state = 3, .external_lex_state = 2},
  [17] = {.lex_state = 3, .external_lex_state = 2},
  [18] = {.lex_state = 3, .external_lex_state = 4},
  [19] = {.lex_state = 3, .external_lex_state = 3},
  [20] = {.lex_state = 3, .external_lex_state = 4},
  [21] = {.lex_state = 3, .external_lex_state = 3},
  [22] = {.lex_state = 3, .external_lex_state = 3},
  [23] = {.lex_state = 3, .external_lex_state = 3},
  [24] = {.lex_state = 3, .external_lex_state = 3},
  [25] = {.lex_state = 3, .external_lex_state = 4},
  [26] = {.lex_state = 3, .external_lex_state = 3},
  [27] = {.lex_state = 3, .external_lex_state = 4},
  [28] = {.lex_state = 3, .external_lex_state = 3},
  [29] = {.lex_state = 3, .external_lex_state = 4},
  [30] = {.lex_state = 3, .external_lex_state = 4},
  [31] = {.lex_state = 3, .external_lex_state = 3},
  [32] = {.lex_state = 3, .external_lex_state = 4},
  [33] = {.lex_state = 3, .external_lex_state = 4},
  [34] = {.lex_state = 3, .external_lex_state = 4},
  [35] = {.lex_state = 3, .external_lex_state = 4},
  [36] = {.lex_state = 3, .external_lex_state = 4},
  [37] = {.lex_state = 3, .external_lex_state = 4},
  [38] = {.lex_state = 3, .external_lex_state = 4},
  [39] = {.lex_state = 3, .external_lex_state = 4},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 3, .external_lex_state = 4},
  [42] = {.lex_state = 3, .external_lex_state = 4},
  [43] = {.lex_state = 3, .external_lex_state = 4},
  [44] = {.lex_state = 3, .external_lex_state = 4},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 3, .external_lex_state = 4},
  [47] = {.lex_state = 3, .external_lex_state = 4},
  [48] = {.lex_state = 3, .external_lex_state = 4},
  [49] = {.lex_state = 3, .external_lex_state = 4},
  [50] = {.lex_state = 3, .external_lex_state = 4},
  [51] = {.lex_state = 3, .external_lex_state = 4},
  [52] = {.lex_state = 3, .external_lex_state = 4},
  [53] = {.lex_state = 3, .external_lex_state = 4},
  [54] = {.lex_state = 3, .external_lex_state = 4},
  [55] = {.lex_state = 3, .external_lex_state = 4},
  [56] = {.lex_state = 3, .external_lex_state = 4},
  [57] = {.lex_state = 3, .external_lex_state = 4},
  [58] = {.lex_state = 3, .external_lex_state = 4},
  [59] = {.lex_state = 3, .external_lex_state = 4},
  [60] = {.lex_state = 3, .external_lex_state = 4},
  [61] = {.lex_state = 3, .external_lex_state = 4},
  [62] = {.lex_state = 3, .external_lex_state = 4},
  [63] = {.lex_state = 3, .external_lex_state = 4},
  [64] = {.lex_state = 3, .external_lex_state = 4},
  [65] = {.lex_state = 3, .external_lex_state = 4},
  [66] = {.lex_state = 3, .external_lex_state = 4},
  [67] = {.lex_state = 3, .external_lex_state = 4},
  [68] = {.lex_state = 3, .external_lex_state = 4},
  [69] = {.lex_state = 3, .external_lex_state = 4},
  [70] = {.lex_state = 3, .external_lex_state = 4},
  [71] = {.lex_state = 3, .external_lex_state = 4},
  [72] = {.lex_state = 3, .external_lex_state = 4},
  [73] = {.lex_state = 3, .external_lex_state = 4},
  [74] = {.lex_state = 3, .external_lex_state = 4},
  [75] = {.lex_state = 3, .external_lex_state = 4},
  [76] = {.lex_state = 3, .external_lex_state = 4},
  [77] = {.lex_state = 3, .external_lex_state = 4},
  [78] = {.lex_state = 0, .external_lex_state = 5},
  [79] = {.lex_state = 0, .external_lex_state = 6},
  [80] = {.lex_state = 1, .external_lex_state = 7},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 3, .external_lex_state = 4},
  [86] = {.lex_state = 3, .external_lex_state = 4},
  [87] = {.lex_state = 3, .external_lex_state = 4},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 3, .external_lex_state = 4},
  [91] = {.lex_state = 3, .external_lex_state = 4},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 3, .external_lex_state = 4},
  [95] = {.lex_state = 3, .external_lex_state = 4},
  [96] = {.lex_state = 3, .external_lex_state = 4},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 0, .external_lex_state = 5},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 33},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 0, .external_lex_state = 5},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 0, .external_lex_state = 5},
  [116] = {.lex_state = 33},
  [117] = {.lex_state = 33},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 33},
  [120] = {.lex_state = 33},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 33},
  [124] = {.lex_state = 33},
  [125] = {.lex_state = 33},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 33},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 33},
  [130] = {.lex_state = 33},
  [131] = {.lex_state = 0, .external_lex_state = 5},
  [132] = {.lex_state = 0, .external_lex_state = 5},
  [133] = {.lex_state = 0, .external_lex_state = 5},
  [134] = {.lex_state = 1, .external_lex_state = 7},
  [135] = {.lex_state = 0, .external_lex_state = 6},
  [136] = {.lex_state = 1, .external_lex_state = 7},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 6},
  [139] = {.lex_state = 1, .external_lex_state = 7},
  [140] = {.lex_state = 0, .external_lex_state = 6},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 1, .external_lex_state = 7},
  [144] = {.lex_state = 1, .external_lex_state = 7},
  [145] = {.lex_state = 1, .external_lex_state = 7},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 0, .external_lex_state = 5},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 0, .external_lex_state = 6},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 0, .external_lex_state = 5},
  [154] = {.lex_state = 0, .external_lex_state = 5},
  [155] = {.lex_state = 0, .external_lex_state = 5},
  [156] = {.lex_state = 0, .external_lex_state = 5},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 0, .external_lex_state = 5},
  [159] = {.lex_state = 0, .external_lex_state = 5},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 0, .external_lex_state = 5},
  [162] = {.lex_state = 0, .external_lex_state = 5},
  [163] = {.lex_state = 0, .external_lex_state = 5},
  [164] = {.lex_state = 0, .external_lex_state = 5},
  [165] = {.lex_state = 0, .external_lex_state = 5},
  [166] = {.lex_state = 0, .external_lex_state = 5},
  [167] = {.lex_state = 0, .external_lex_state = 5},
  [168] = {.lex_state = 0, .external_lex_state = 5},
  [169] = {.lex_state = 0, .external_lex_state = 6},
  [170] = {.lex_state = 0, .external_lex_state = 5},
  [171] = {.lex_state = 0, .external_lex_state = 6},
  [172] = {.lex_state = 0, .external_lex_state = 5},
  [173] = {.lex_state = 0, .external_lex_state = 5},
  [174] = {.lex_state = 0, .external_lex_state = 5},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 0, .external_lex_state = 5},
  [177] = {.lex_state = 0, .external_lex_state = 5},
  [178] = {.lex_state = 0, .external_lex_state = 5},
  [179] = {.lex_state = 0, .external_lex_state = 6},
  [180] = {.lex_state = 1, .external_lex_state = 7},
  [181] = {.lex_state = 0, .external_lex_state = 6},
  [182] = {.lex_state = 0, .external_lex_state = 6},
  [183] = {.lex_state = 0, .external_lex_state = 6},
  [184] = {.lex_state = 0, .external_lex_state = 6},
  [185] = {.lex_state = 0, .external_lex_state = 6},
  [186] = {.lex_state = 1, .external_lex_state = 7},
  [187] = {.lex_state = 0, .external_lex_state = 6},
  [188] = {.lex_state = 0, .external_lex_state = 6},
  [189] = {.lex_state = 0, .external_lex_state = 6},
  [190] = {.lex_state = 0, .external_lex_state = 6},
  [191] = {.lex_state = 1, .external_lex_state = 7},
  [192] = {.lex_state = 0, .external_lex_state = 6},
  [193] = {.lex_state = 1, .external_lex_state = 7},
  [194] = {.lex_state = 1, .external_lex_state = 7},
  [195] = {.lex_state = 0, .external_lex_state = 6},
  [196] = {.lex_state = 0, .external_lex_state = 6},
  [197] = {.lex_state = 1, .external_lex_state = 7},
  [198] = {.lex_state = 1, .external_lex_state = 7},
  [199] = {.lex_state = 1, .external_lex_state = 7},
  [200] = {.lex_state = 0, .external_lex_state = 6},
  [201] = {.lex_state = 1, .external_lex_state = 7},
  [202] = {.lex_state = 1, .external_lex_state = 7},
  [203] = {.lex_state = 0, .external_lex_state = 6},
  [204] = {.lex_state = 1, .external_lex_state = 7},
  [205] = {.lex_state = 0, .external_lex_state = 6},
  [206] = {.lex_state = 0, .external_lex_state = 6},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 1, .external_lex_state = 7},
  [209] = {.lex_state = 1, .external_lex_state = 7},
  [210] = {.lex_state = 0, .external_lex_state = 6},
  [211] = {.lex_state = 1, .external_lex_state = 7},
  [212] = {.lex_state = 1, .external_lex_state = 7},
  [213] = {.lex_state = 0, .external_lex_state = 6},
  [214] = {.lex_state = 1, .external_lex_state = 7},
  [215] = {.lex_state = 0, .external_lex_state = 6},
  [216] = {.lex_state = 1, .external_lex_state = 7},
  [217] = {.lex_state = 0, .external_lex_state = 6},
  [218] = {.lex_state = 1, .external_lex_state = 7},
  [219] = {.lex_state = 1, .external_lex_state = 7},
  [220] = {.lex_state = 1, .external_lex_state = 7},
  [221] = {.lex_state = 1, .external_lex_state = 7},
  [222] = {.lex_state = 1, .external_lex_state = 7},
  [223] = {.lex_state = 0, .external_lex_state = 6},
  [224] = {.lex_state = 1, .external_lex_state = 7},
  [225] = {.lex_state = 0, .external_lex_state = 6},
  [226] = {.lex_state = 1, .external_lex_state = 7},
  [227] = {.lex_state = 1, .external_lex_state = 7},
  [228] = {.lex_state = 0, .external_lex_state = 6},
  [229] = {.lex_state = 0, .external_lex_state = 6},
  [230] = {.lex_state = 0, .external_lex_state = 6},
  [231] = {.lex_state = 0, .external_lex_state = 6},
  [232] = {.lex_state = 0, .external_lex_state = 6},
  [233] = {.lex_state = 0, .external_lex_state = 6},
  [234] = {.lex_state = 1, .external_lex_state = 7},
  [235] = {.lex_state = 0, .external_lex_state = 6},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 1, .external_lex_state = 7},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 1, .external_lex_state = 7},
  [240] = {.lex_state = 0, .external_lex_state = 6},
  [241] = {.lex_state = 1, .external_lex_state = 7},
  [242] = {.lex_state = 1, .external_lex_state = 7},
  [243] = {.lex_state = 1, .external_lex_state = 7},
  [244] = {.lex_state = 1, .external_lex_state = 7},
  [245] = {.lex_state = 1, .external_lex_state = 7},
  [246] = {.lex_state = 33},
  [247] = {.lex_state = 33},
  [248] = {.lex_state = 3, .external_lex_state = 4},
  [249] = {.lex_state = 3, .external_lex_state = 4},
  [250] = {.lex_state = 3, .external_lex_state = 4},
  [251] = {.lex_state = 0, .external_lex_state = 5},
  [252] = {.lex_state = 0, .external_lex_state = 5},
  [253] = {.lex_state = 3, .external_lex_state = 4},
  [254] = {.lex_state = 3, .external_lex_state = 4},
  [255] = {.lex_state = 3, .external_lex_state = 4},
  [256] = {.lex_state = 3, .external_lex_state = 4},
  [257] = {.lex_state = 0, .external_lex_state = 6},
  [258] = {.lex_state = 0, .external_lex_state = 6},
  [259] = {.lex_state = 1, .external_lex_state = 7},
  [260] = {.lex_state = 1, .external_lex_state = 7},
  [261] = {.lex_state = 33},
  [262] = {.lex_state = 33},
  [263] = {.lex_state = 33},
  [264] = {.lex_state = 33},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 33},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 0, .external_lex_state = 8},
  [272] = {.lex_state = 0, .external_lex_state = 8},
  [273] = {.lex_state = 0, .external_lex_state = 8},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 0, .external_lex_state = 8},
  [276] = {.lex_state = 0, .external_lex_state = 8},
  [277] = {.lex_state = 0, .external_lex_state = 8},
  [278] = {.lex_state = 0, .external_lex_state = 8},
  [279] = {.lex_state = 0, .external_lex_state = 8},
  [280] = {.lex_state = 0, .external_lex_state = 8},
  [281] = {.lex_state = 0, .external_lex_state = 5},
  [282] = {.lex_state = 0, .external_lex_state = 5},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 5},
  [285] = {.lex_state = 33},
  [286] = {.lex_state = 33},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0, .external_lex_state = 5},
  [289] = {.lex_state = 0, .external_lex_state = 5},
  [290] = {.lex_state = 0, .external_lex_state = 5},
  [291] = {.lex_state = 0, .external_lex_state = 5},
  [292] = {.lex_state = 33},
  [293] = {.lex_state = 33, .external_lex_state = 5},
  [294] = {.lex_state = 33, .external_lex_state = 5},
  [295] = {.lex_state = 33, .external_lex_state = 5},
  [296] = {.lex_state = 0, .external_lex_state = 6},
  [297] = {.lex_state = 0, .external_lex_state = 6},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1, .external_lex_state = 7},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 1, .external_lex_state = 7},
  [302] = {.lex_state = 1, .external_lex_state = 7},
  [303] = {.lex_state = 0, .external_lex_state = 8},
  [304] = {.lex_state = 0, .external_lex_state = 8},
  [305] = {.lex_state = 1, .external_lex_state = 7},
  [306] = {.lex_state = 0, .external_lex_state = 6},
  [307] = {.lex_state = 0, .external_lex_state = 6},
  [308] = {.lex_state = 0, .external_lex_state = 6},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0, .external_lex_state = 6},
  [311] = {.lex_state = 0, .external_lex_state = 5},
  [312] = {.lex_state = 0, .external_lex_state = 6},
  [313] = {.lex_state = 0, .external_lex_state = 6},
  [314] = {.lex_state = 0, .external_lex_state = 6},
  [315] = {.lex_state = 0, .external_lex_state = 5},
  [316] = {.lex_state = 0, .external_lex_state = 6},
  [317] = {.lex_state = 1, .external_lex_state = 7},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 0, .external_lex_state = 6},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 0, .external_lex_state = 5},
  [322] = {.lex_state = 0, .external_lex_state = 5},
  [323] = {.lex_state = 33},
  [324] = {.lex_state = 0, .external_lex_state = 9},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 0, .external_lex_state = 5},
  [327] = {.lex_state = 0, .external_lex_state = 5},
  [328] = {.lex_state = 0, .external_lex_state = 9},
  [329] = {.lex_state = 0, .external_lex_state = 6},
  [330] = {.lex_state = 0, .external_lex_state = 5},
  [331] = {.lex_state = 0, .external_lex_state = 5},
  [332] = {.lex_state = 0, .external_lex_state = 5},
  [333] = {.lex_state = 0, .external_lex_state = 5},
  [334] = {.lex_state = 0, .external_lex_state = 5},
  [335] = {.lex_state = 0, .external_lex_state = 6},
  [336] = {.lex_state = 0, .external_lex_state = 5},
  [337] = {.lex_state = 0, .external_lex_state = 6},
  [338] = {.lex_state = 0, .external_lex_state = 6},
  [339] = {.lex_state = 0, .external_lex_state = 6},
  [340] = {.lex_state = 0, .external_lex_state = 9},
  [341] = {.lex_state = 0, .external_lex_state = 5},
  [342] = {.lex_state = 0, .external_lex_state = 5},
  [343] = {.lex_state = 0, .external_lex_state = 5},
  [344] = {.lex_state = 0, .external_lex_state = 9},
  [345] = {.lex_state = 0, .external_lex_state = 5},
  [346] = {.lex_state = 0, .external_lex_state = 6},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 33, .external_lex_state = 5},
  [349] = {.lex_state = 0, .external_lex_state = 5},
  [350] = {.lex_state = 33},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 33, .external_lex_state = 5},
  [353] = {.lex_state = 3},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 3},
  [358] = {.lex_state = 0, .external_lex_state = 6},
  [359] = {.lex_state = 1, .external_lex_state = 10},
  [360] = {.lex_state = 0, .external_lex_state = 6},
  [361] = {.lex_state = 0, .external_lex_state = 6},
  [362] = {.lex_state = 33},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0, .external_lex_state = 9},
  [366] = {.lex_state = 33},
  [367] = {.lex_state = 33},
  [368] = {.lex_state = 33},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 1, .external_lex_state = 10},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 3},
  [373] = {.lex_state = 33},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0, .external_lex_state = 6},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 33},
  [378] = {.lex_state = 0, .external_lex_state = 5},
  [379] = {.lex_state = 0, .external_lex_state = 6},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0, .external_lex_state = 5},
  [384] = {.lex_state = 0, .external_lex_state = 5},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0, .external_lex_state = 6},
  [388] = {.lex_state = 0, .external_lex_state = 6},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0, .external_lex_state = 5},
  [392] = {.lex_state = 0, .external_lex_state = 5},
  [393] = {.lex_state = 0, .external_lex_state = 6},
  [394] = {.lex_state = 0, .external_lex_state = 6},
  [395] = {.lex_state = 33},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 33},
  [399] = {.lex_state = 0, .external_lex_state = 11},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0, .external_lex_state = 5},
  [404] = {.lex_state = 0, .external_lex_state = 5},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0, .external_lex_state = 6},
  [407] = {.lex_state = 33},
  [408] = {.lex_state = 33},
  [409] = {.lex_state = 0, .external_lex_state = 5},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0, .external_lex_state = 6},
  [412] = {.lex_state = 0, .external_lex_state = 6},
  [413] = {.lex_state = 0, .external_lex_state = 5},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 33},
  [416] = {.lex_state = 33},
  [417] = {.lex_state = 0},
};

enum {
  ts_external_token_heredoc_start = 0,
  ts_external_token_simple_heredoc_body = 1,
  ts_external_token_heredoc_body_beginning = 2,
  ts_external_token_heredoc_body_middle = 3,
  ts_external_token_heredoc_body_end = 4,
  ts_external_token_file_descriptor = 5,
  ts_external_token__empty_value = 6,
  ts_external_token__concat = 7,
  ts_external_token_variable_name = 8,
  ts_external_token_regex = 9,
  ts_external_token_RBRACE = 10,
  ts_external_token_RBRACK = 11,
  ts_external_token_LT_LT = 12,
  ts_external_token_LT_LT_DASH = 13,
  ts_external_token_LF = 14,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_start] = sym_heredoc_start,
  [ts_external_token_simple_heredoc_body] = sym_simple_heredoc_body,
  [ts_external_token_heredoc_body_beginning] = sym_heredoc_body_beginning,
  [ts_external_token_heredoc_body_middle] = sym_heredoc_body_middle,
  [ts_external_token_heredoc_body_end] = sym_heredoc_body_end,
  [ts_external_token_file_descriptor] = sym_file_descriptor,
  [ts_external_token__empty_value] = sym__empty_value,
  [ts_external_token__concat] = sym__concat,
  [ts_external_token_variable_name] = sym_variable_name,
  [ts_external_token_regex] = sym_regex,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_LT_LT] = anon_sym_LT_LT,
  [ts_external_token_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [ts_external_token_LF] = anon_sym_LF,
};

static const bool ts_external_scanner_states[12][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_start] = true,
    [ts_external_token_simple_heredoc_body] = true,
    [ts_external_token_heredoc_body_beginning] = true,
    [ts_external_token_heredoc_body_middle] = true,
    [ts_external_token_heredoc_body_end] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token__empty_value] = true,
    [ts_external_token__concat] = true,
    [ts_external_token_variable_name] = true,
    [ts_external_token_regex] = true,
    [ts_external_token_RBRACE] = true,
    [ts_external_token_RBRACK] = true,
  },
  [2] = {
    [ts_external_token_RBRACE] = true,
    [ts_external_token_LT_LT] = true,
    [ts_external_token_LT_LT_DASH] = true,
  },
  [3] = {
    [ts_external_token_RBRACK] = true,
    [ts_external_token_LT_LT] = true,
    [ts_external_token_LT_LT_DASH] = true,
  },
  [4] = {
    [ts_external_token_LT_LT] = true,
    [ts_external_token_LT_LT_DASH] = true,
  },
  [5] = {
    [ts_external_token_RBRACE] = true,
  },
  [6] = {
    [ts_external_token_RBRACK] = true,
  },
  [7] = {
    [ts_external_token_RBRACE] = true,
    [ts_external_token_LF] = true,
  },
  [8] = {
    [ts_external_token_heredoc_body_middle] = true,
    [ts_external_token_heredoc_body_end] = true,
  },
  [9] = {
    [ts_external_token_simple_heredoc_body] = true,
    [ts_external_token_heredoc_body_beginning] = true,
  },
  [10] = {
    [ts_external_token_LF] = true,
  },
  [11] = {
    [ts_external_token_heredoc_start] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_numeric_lit] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_TILDE] = ACTIONS(1),
    [anon_sym_TILDE_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_aws_ref_regex] = ACTIONS(1),
    [sym_heredoc_start] = ACTIONS(1),
    [sym_simple_heredoc_body] = ACTIONS(1),
    [sym_heredoc_body_beginning] = ACTIONS(1),
    [sym_heredoc_body_middle] = ACTIONS(1),
    [sym_heredoc_body_end] = ACTIONS(1),
    [sym_file_descriptor] = ACTIONS(1),
    [sym__empty_value] = ACTIONS(1),
    [sym__concat] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(405),
    [sym__body] = STATE(264),
    [sym_block] = STATE(264),
    [sym_attribute_def] = STATE(264),
    [sym_identifier_group] = STATE(417),
    [aux_sym_source_file_repeat1] = STATE(264),
    [aux_sym__body_repeat1] = STATE(264),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    STATE(45), 1,
      sym_expr_term,
    STATE(58), 1,
      sym_for_intro,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(342), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [92] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(68), 1,
      sym_for_intro,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(330), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [184] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(49), 1,
      sym_for_intro,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(326), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [276] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(54), 1,
      sym_for_intro,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(341), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [368] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(55), 1,
      sym_for_intro,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(316), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [457] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_for_intro,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(297), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [546] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_for_intro,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(312), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [635] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      sym_for_intro,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(308), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [724] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [810] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [896] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [982] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1068] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1154] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1240] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1326] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1412] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(298), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1495] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1578] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(89), 1,
      anon_sym_STAR,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(375), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1661] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1744] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1827] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1910] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [1993] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(325), 1,
      sym_expression,
    STATE(378), 1,
      sym_object_elem,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2076] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2159] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(101), 1,
      anon_sym_STAR,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(379), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2242] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2325] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(364), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2408] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(287), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(390), 1,
      sym_arguments,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2491] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2574] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(111), 1,
      anon_sym_STAR,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(361), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2657] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    ACTIONS(113), 1,
      anon_sym_STAR,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(358), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2740] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(298), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2823] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(287), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(382), 1,
      sym_arguments,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2906] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(287), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(414), 1,
      sym_arguments,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [2989] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(287), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(385), 1,
      sym_arguments,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3072] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(369), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3152] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(337), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3232] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(355), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3312] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(291), 1,
      sym_expression,
    STATE(340), 1,
      sym_heredoc_redirect,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3392] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(313), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3472] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_aws_ref_regex,
    STATE(80), 1,
      sym_expr_term,
    STATE(242), 1,
      sym_aws_ref,
    STATE(299), 1,
      sym_expression,
    STATE(344), 1,
      sym_heredoc_redirect,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(243), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(244), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(245), 2,
      sym_tuple,
      sym_object,
    STATE(302), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(305), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(149), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(216), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3552] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(289), 1,
      sym_expression,
    STATE(340), 1,
      sym_heredoc_redirect,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3632] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_EQ,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(94), 1,
      sym_binary_operator,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    STATE(256), 3,
      sym_compare_operator,
      sym_arithmetic_operator,
      sym_logic_operator,
    ACTIONS(159), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [3698] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(363), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3778] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(347), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3858] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(288), 1,
      sym_expression,
    STATE(340), 1,
      sym_heredoc_redirect,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [3938] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(372), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4018] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(356), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4098] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(375), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4178] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(319), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4258] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(306), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4338] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(353), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4418] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(296), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4498] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(374), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4578] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(360), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4658] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(354), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4738] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(340), 1,
      sym_heredoc_redirect,
    STATE(349), 1,
      sym_expression,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4818] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(298), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4898] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(323), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [4978] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_aws_ref_regex,
    STATE(80), 1,
      sym_expr_term,
    STATE(242), 1,
      sym_aws_ref,
    STATE(301), 1,
      sym_expression,
    STATE(344), 1,
      sym_heredoc_redirect,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(243), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(244), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(245), 2,
      sym_tuple,
      sym_object,
    STATE(302), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(305), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(149), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(216), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5058] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(358), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5138] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(315), 1,
      sym_expression,
    STATE(340), 1,
      sym_heredoc_redirect,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5218] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(364), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5298] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(379), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5378] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(284), 1,
      sym_expression,
    STATE(340), 1,
      sym_heredoc_redirect,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5458] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(357), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5538] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(290), 1,
      sym_expression,
    STATE(340), 1,
      sym_heredoc_redirect,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5618] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(361), 1,
      sym_expression,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5698] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(351), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5778] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(333), 1,
      sym_expression,
    STATE(340), 1,
      sym_heredoc_redirect,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5858] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(79), 1,
      sym_expr_term,
    STATE(231), 1,
      sym_aws_ref,
    STATE(314), 1,
      sym_expression,
    STATE(328), 1,
      sym_heredoc_redirect,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    STATE(307), 2,
      sym__unary_op,
      sym__binary_op,
    STATE(310), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [5938] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(380), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6018] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(263), 1,
      sym_expression,
    STATE(324), 1,
      sym_heredoc_redirect,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6098] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(78), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_aws_ref,
    STATE(311), 1,
      sym_expression,
    STATE(340), 1,
      sym_heredoc_redirect,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(281), 2,
      sym_conditional,
      sym_operation,
    STATE(282), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6178] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_aws_ref,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(376), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(261), 2,
      sym_conditional,
      sym_operation,
    STATE(262), 2,
      sym__unary_op,
      sym__binary_op,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6258] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(86), 1,
      sym_binary_operator,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(167), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(168), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    STATE(256), 3,
      sym_compare_operator,
      sym_arithmetic_operator,
      sym_logic_operator,
    ACTIONS(159), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6319] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(85), 1,
      sym_binary_operator,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(217), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(225), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    STATE(256), 3,
      sym_compare_operator,
      sym_arithmetic_operator,
      sym_logic_operator,
    ACTIONS(153), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_if,
    ACTIONS(159), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6378] = 12,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      sym_comment,
    STATE(96), 1,
      sym_binary_operator,
    STATE(227), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(157), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
    ACTIONS(161), 3,
      anon_sym_BANG,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    STATE(256), 3,
      sym_compare_operator,
      sym_arithmetic_operator,
      sym_logic_operator,
    ACTIONS(167), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(165), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_DOT,
    STATE(81), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(192), 5,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(187), 18,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [6475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(199), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(197), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [6513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(203), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(201), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [6551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(205), 21,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [6586] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(231), 1,
      sym_aws_ref,
    STATE(258), 1,
      sym_expr_term,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6651] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(146), 1,
      sym_aws_ref,
    STATE(251), 1,
      sym_expr_term,
    STATE(340), 1,
      sym_heredoc_redirect,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6716] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(116), 1,
      sym_aws_ref,
    STATE(247), 1,
      sym_expr_term,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6781] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(88), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(211), 5,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(209), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [6820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(218), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(216), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [6857] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeric_lit,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_aws_ref_regex,
    STATE(146), 1,
      sym_aws_ref,
    STATE(252), 1,
      sym_expr_term,
    STATE(340), 1,
      sym_heredoc_redirect,
    STATE(172), 2,
      sym_tuple,
      sym_object,
    STATE(175), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    ACTIONS(131), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(170), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6922] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_numeric_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_aws_ref_regex,
    STATE(231), 1,
      sym_aws_ref,
    STATE(257), 1,
      sym_expr_term,
    STATE(328), 1,
      sym_heredoc_redirect,
    STATE(232), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(238), 2,
      sym_tuple,
      sym_object,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(240), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [6987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(89), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(222), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(220), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(224), 21,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7059] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(33), 1,
      sym_aws_ref_regex,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(116), 1,
      sym_aws_ref,
    STATE(246), 1,
      sym_expr_term,
    STATE(324), 1,
      sym_heredoc_redirect,
    STATE(100), 2,
      sym_tuple,
      sym_object,
    STATE(106), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(112), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    ACTIONS(31), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(103), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [7124] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_aws_ref_regex,
    STATE(242), 1,
      sym_aws_ref,
    STATE(259), 1,
      sym_expr_term,
    STATE(344), 1,
      sym_heredoc_redirect,
    STATE(243), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(244), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(245), 2,
      sym_tuple,
      sym_object,
    ACTIONS(149), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(216), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [7189] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    ACTIONS(27), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_aws_ref_regex,
    STATE(242), 1,
      sym_aws_ref,
    STATE(260), 1,
      sym_expr_term,
    STATE(344), 1,
      sym_heredoc_redirect,
    STATE(243), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(244), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(245), 2,
      sym_tuple,
      sym_object,
    ACTIONS(149), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(216), 6,
      sym_literal_value,
      sym_collection_value,
      sym_template_expr,
      sym_variable_expr,
      sym_function_call,
      sym_for_expr,
  [7254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(228), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(199), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(197), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [7325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(234), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(238), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(242), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(246), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(250), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(254), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(258), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(262), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(266), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(270), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(274), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(278), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(282), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(286), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(113), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(192), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(187), 16,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [7826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(296), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(113), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(203), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(201), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [7894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(228), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(300), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(304), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [7993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(308), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(312), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(316), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(320), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(324), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(328), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(332), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(336), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(340), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(344), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(348), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 6,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(352), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [8389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(133), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(218), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(216), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(131), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(222), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(220), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DOT,
    STATE(133), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(211), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(209), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8493] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LF,
    STATE(136), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(203), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [8526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(138), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(203), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [8559] = 6,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(136), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(192), 17,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(228), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      anon_sym_DOT,
    STATE(138), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(192), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(187), 14,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
  [8666] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LF,
    STATE(134), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(199), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [8699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(135), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(199), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(197), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [8732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(282), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(274), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8792] = 5,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(373), 1,
      anon_sym_DOT,
    STATE(143), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(211), 18,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8826] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LF,
    STATE(143), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(218), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [8858] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(144), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(222), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [8890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(228), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(316), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(336), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [8980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(254), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(308), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(171), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(222), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(220), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [9072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(328), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(340), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(324), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(312), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(234), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(278), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(246), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(242), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(258), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(296), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(304), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(320), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(224), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(332), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(344), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(348), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(352), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(169), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(211), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(209), 15,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
  [9616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(250), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(169), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(218), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(216), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [9678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(238), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(205), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(266), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(262), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(300), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(286), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 5,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(270), 17,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [9888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [9919] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [9950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(282), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [9978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(316), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(344), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(332), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(224), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10090] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(320), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(304), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(296), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(258), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10230] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(242), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10286] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(338), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10314] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(246), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(278), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10398] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10426] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10454] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(234), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10510] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10538] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(312), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10594] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(324), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(340), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(328), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10706] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10734] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(308), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10790] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10818] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(254), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10874] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(336), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10930] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [10958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(348), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [10986] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11014] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11042] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11070] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(322), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11098] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LF,
    ACTIONS(226), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(300), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11154] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(334), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(352), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11210] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11238] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(274), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(266), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(205), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(286), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(262), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11434] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(270), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11490] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_COLON,
    ACTIONS(232), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 13,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11524] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(238), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11580] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 4,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(250), 16,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_if,
      anon_sym_DOT,
  [11636] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(207), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11664] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(232), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11692] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11720] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11748] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 19,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT,
  [11776] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT,
    ACTIONS(389), 1,
      anon_sym_EQ,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [11808] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      anon_sym_EQ,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(391), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [11840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      sym_identifier,
      anon_sym_LT_LT,
      sym_null,
      sym_true,
      sym_false,
      sym_aws_ref_regex,
    ACTIONS(395), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_LT_LT_DASH,
  [11862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 6,
      sym_identifier,
      anon_sym_LT_LT,
      sym_null,
      sym_true,
      sym_false,
      sym_aws_ref_regex,
    ACTIONS(399), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_LT_LT_DASH,
  [11884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 6,
      sym_identifier,
      anon_sym_LT_LT,
      sym_null,
      sym_true,
      sym_false,
      sym_aws_ref_regex,
    ACTIONS(403), 8,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_LT_LT_DASH,
  [11906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(167), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(168), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(387), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [11933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(167), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(168), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(391), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [11960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LT_LT_DASH,
    ACTIONS(409), 6,
      sym_identifier,
      anon_sym_LT_LT,
      sym_null,
      sym_true,
      sym_false,
      sym_aws_ref_regex,
  [11980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LT_LT_DASH,
    ACTIONS(413), 6,
      sym_identifier,
      anon_sym_LT_LT,
      sym_null,
      sym_true,
      sym_false,
      sym_aws_ref_regex,
  [12000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LT_LT_DASH,
    ACTIONS(417), 6,
      sym_identifier,
      anon_sym_LT_LT,
      sym_null,
      sym_true,
      sym_false,
      sym_aws_ref_regex,
  [12020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LT_LT_DASH,
    ACTIONS(421), 6,
      sym_identifier,
      anon_sym_LT_LT,
      sym_null,
      sym_true,
      sym_false,
      sym_aws_ref_regex,
  [12040] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(217), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(225), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(391), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_if,
  [12065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(217), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(225), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(387), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_if,
  [12090] = 7,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LF,
    STATE(227), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(393), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [12117] = 7,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LF,
    STATE(227), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(389), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [12144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_EQ,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [12161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(423), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [12178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(427), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_EQ_GT,
  [12195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    STATE(417), 1,
      sym_identifier_group,
    STATE(266), 5,
      sym__body,
      sym_block,
      sym_attribute_def,
      aux_sym_source_file_repeat1,
      aux_sym__body_repeat1,
  [12215] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_heredoc_word,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    STATE(64), 1,
      sym_template_interpolation_start,
    STATE(410), 1,
      sym_quoted_template_body,
    STATE(270), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_body_repeat1,
  [12241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(417), 1,
      sym_identifier_group,
    STATE(266), 5,
      sym__body,
      sym_block,
      sym_attribute_def,
      aux_sym_source_file_repeat1,
      aux_sym__body_repeat1,
  [12261] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_heredoc_word,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_template_interpolation_start,
    STATE(381), 1,
      sym_quoted_template_body,
    STATE(270), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_body_repeat1,
  [12287] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_heredoc_word,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_template_interpolation_start,
    STATE(396), 1,
      sym_quoted_template_body,
    STATE(270), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_body_repeat1,
  [12313] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_heredoc_word,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_template_interpolation_start,
    STATE(397), 1,
      sym_quoted_template_body,
    STATE(270), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_body_repeat1,
  [12339] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      sym_heredoc_word,
    STATE(64), 1,
      sym_template_interpolation_start,
    STATE(274), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_body_repeat1,
  [12362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(456), 1,
      sym_heredoc_body_middle,
    ACTIONS(458), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(275), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12385] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(456), 1,
      sym_heredoc_body_middle,
    ACTIONS(460), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(275), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(462), 1,
      sym_heredoc_body_middle,
    ACTIONS(464), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(272), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12431] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    ACTIONS(468), 1,
      sym_heredoc_word,
    ACTIONS(471), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(474), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    STATE(64), 1,
      sym_template_interpolation_start,
    STATE(274), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_body_repeat1,
  [12454] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(480), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(483), 1,
      sym_heredoc_body_middle,
    ACTIONS(486), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(275), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12477] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(488), 1,
      sym_heredoc_body_middle,
    ACTIONS(490), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(280), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12500] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(492), 1,
      sym_heredoc_body_middle,
    ACTIONS(494), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(271), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12523] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(496), 1,
      sym_heredoc_body_middle,
    ACTIONS(498), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(279), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(456), 1,
      sym_heredoc_body_middle,
    ACTIONS(500), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(275), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12569] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(456), 1,
      sym_heredoc_body_middle,
    ACTIONS(502), 1,
      sym_heredoc_body_end,
    STATE(76), 1,
      sym_template_interpolation_start,
    STATE(275), 2,
      sym_template_interpolation,
      aux_sym_template_body_repeat1,
  [12592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [12604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [12616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(508), 1,
      anon_sym_EQ,
    STATE(292), 2,
      sym_quoted_template,
      aux_sym_identifier_group_repeat1,
  [12636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_TILDE_RBRACE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [12648] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 1,
      sym_identifier,
    STATE(417), 1,
      sym_identifier_group,
    STATE(285), 3,
      sym_block,
      sym_attribute_def,
      aux_sym__body_repeat1,
  [12666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    STATE(286), 2,
      sym_quoted_template,
      aux_sym_identifier_group_repeat1,
  [12683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    STATE(300), 1,
      aux_sym_tuple_repeat1,
  [12702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym_QMARK,
    ACTIONS(533), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(535), 1,
      anon_sym_if,
    STATE(404), 1,
      sym_for_cond,
  [12721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_QMARK,
    ACTIONS(535), 1,
      anon_sym_if,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    ACTIONS(539), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(391), 1,
      sym_for_cond,
  [12740] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_QMARK,
    ACTIONS(535), 1,
      anon_sym_if,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(384), 1,
      sym_for_cond,
  [12759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_QMARK,
    ACTIONS(535), 1,
      anon_sym_if,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(409), 1,
      sym_for_cond,
  [12778] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    ACTIONS(551), 1,
      sym_identifier,
    STATE(286), 2,
      sym_quoted_template,
      aux_sym_identifier_group_repeat1,
  [12795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(317), 1,
      sym_attribute_def,
    STATE(295), 2,
      sym_attribute_def_nl,
      aux_sym_block_repeat1,
  [12812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      sym_attribute_def,
    STATE(293), 2,
      sym_attribute_def_nl,
      aux_sym_block_repeat1,
  [12829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 1,
      sym_identifier,
    STATE(317), 1,
      sym_attribute_def,
    STATE(295), 2,
      sym_attribute_def_nl,
      aux_sym_block_repeat1,
  [12846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(568), 1,
      anon_sym_if,
    STATE(406), 1,
      sym_for_cond,
  [12862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_tuple_repeat1,
  [12878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(574), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [12890] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
  [12902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(309), 1,
      aux_sym_tuple_repeat1,
  [12918] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      anon_sym_QMARK,
    ACTIONS(582), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [12932] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(425), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
  [12944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(588), 3,
      sym_heredoc_body_middle,
      sym_heredoc_body_end,
      anon_sym_DOLLAR_LBRACE_TILDE,
  [12956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(592), 3,
      sym_heredoc_body_middle,
      sym_heredoc_body_end,
      anon_sym_DOLLAR_LBRACE_TILDE,
  [12968] = 3,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
  [12980] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(568), 1,
      anon_sym_if,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      sym_for_cond,
  [12996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_if,
  [13006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_tuple_repeat1,
  [13022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(574), 2,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
  [13036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_if,
  [13046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_QMARK,
    STATE(303), 1,
      sym_template_interpolation_end,
    ACTIONS(603), 2,
      anon_sym_RBRACE,
      anon_sym_TILDE_RBRACE,
  [13060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(335), 1,
      aux_sym_tuple_repeat1,
  [13076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(568), 1,
      anon_sym_if,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(387), 1,
      sym_for_cond,
  [13092] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(568), 1,
      anon_sym_if,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(393), 1,
      sym_for_cond,
  [13108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_QMARK,
    STATE(318), 1,
      sym_template_interpolation_end,
    ACTIONS(613), 2,
      anon_sym_RBRACE,
      anon_sym_TILDE_RBRACE,
  [13122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      aux_sym_tuple_repeat1,
  [13138] = 4,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LF,
    STATE(348), 1,
      sym_newline,
    ACTIONS(621), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [13152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(588), 3,
      anon_sym_DQUOTE,
      sym_heredoc_word,
      anon_sym_DOLLAR_LBRACE_TILDE,
  [13164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_if,
  [13174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(592), 3,
      anon_sym_DQUOTE,
      sym_heredoc_word,
      anon_sym_DOLLAR_LBRACE_TILDE,
  [13186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_object_repeat1,
  [13199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_if,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(403), 1,
      sym_for_cond,
  [13212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [13223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_simple_heredoc_body,
    ACTIONS(632), 1,
      sym_heredoc_body_beginning,
    STATE(125), 1,
      sym_template_body,
  [13236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(385), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [13247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_object_repeat1,
  [13260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_object_repeat1,
  [13273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_simple_heredoc_body,
    ACTIONS(642), 1,
      sym_heredoc_body_beginning,
    STATE(184), 1,
      sym_template_body,
  [13286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_tuple_repeat1,
  [13299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      aux_sym_object_repeat1,
  [13312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_if,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_for_cond,
  [13325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_object_repeat1,
  [13338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_QMARK,
    ACTIONS(654), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_if,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(383), 1,
      sym_for_cond,
  [13362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_tuple_repeat1,
  [13375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_object_repeat1,
  [13388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(574), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_tuple_repeat1,
  [13412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_tuple_repeat1,
  [13425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_simple_heredoc_body,
    ACTIONS(669), 1,
      sym_heredoc_body_beginning,
    STATE(165), 1,
      sym_template_body,
  [13438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_object_repeat1,
  [13451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      aux_sym_object_repeat1,
  [13464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_object_repeat1,
  [13477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_simple_heredoc_body,
    ACTIONS(683), 1,
      sym_heredoc_body_beginning,
    STATE(224), 1,
      sym_template_body,
  [13490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    STATE(413), 1,
      sym_for_cond,
  [13503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_tuple_repeat1,
  [13516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
  [13526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [13534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
  [13544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(697), 1,
      anon_sym_STAR,
  [13554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(699), 1,
      anon_sym_COLON,
  [13564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [13572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(703), 1,
      anon_sym_EQ_GT,
  [13582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(705), 1,
      anon_sym_EQ_GT,
  [13592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(707), 1,
      anon_sym_COLON,
  [13602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(709), 1,
      anon_sym_COLON,
  [13612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(711), 1,
      anon_sym_EQ_GT,
  [13622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
  [13632] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LF,
    STATE(368), 1,
      sym_newline,
  [13642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
  [13652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
  [13662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_STAR,
  [13672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(723), 1,
      anon_sym_COLON,
  [13682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
  [13692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      sym_simple_heredoc_body,
      sym_heredoc_body_beginning,
  [13700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(731), 1,
      anon_sym_STAR,
  [13710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [13718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [13726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [13736] = 3,
    ACTIONS(185), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LF,
    STATE(377), 1,
      sym_newline,
  [13746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_in,
  [13756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(741), 1,
      anon_sym_EQ_GT,
  [13766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(745), 1,
      anon_sym_STAR,
  [13776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      anon_sym_COLON,
  [13786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
  [13796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
  [13806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [13814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_QMARK,
    ACTIONS(755), 1,
      anon_sym_RBRACK,
  [13832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    ACTIONS(757), 1,
      anon_sym_COLON,
  [13842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
  [13849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
  [13856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
  [13863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
  [13870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
  [13877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
  [13884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
  [13891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
  [13898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
  [13905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
  [13912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
  [13919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
  [13926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
  [13933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
  [13940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_identifier,
  [13947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
  [13954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_DQUOTE,
  [13961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
  [13968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_heredoc_start,
  [13975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
  [13982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_EQ,
  [13989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_in,
  [13996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
  [14003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
  [14010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
  [14017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RBRACK,
  [14024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_identifier,
  [14031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_identifier,
  [14038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
  [14045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
  [14052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACK,
  [14059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
  [14066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
  [14073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [14080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
  [14087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_identifier,
  [14094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 276,
  [SMALL_STATE(6)] = 368,
  [SMALL_STATE(7)] = 457,
  [SMALL_STATE(8)] = 546,
  [SMALL_STATE(9)] = 635,
  [SMALL_STATE(10)] = 724,
  [SMALL_STATE(11)] = 810,
  [SMALL_STATE(12)] = 896,
  [SMALL_STATE(13)] = 982,
  [SMALL_STATE(14)] = 1068,
  [SMALL_STATE(15)] = 1154,
  [SMALL_STATE(16)] = 1240,
  [SMALL_STATE(17)] = 1326,
  [SMALL_STATE(18)] = 1412,
  [SMALL_STATE(19)] = 1495,
  [SMALL_STATE(20)] = 1578,
  [SMALL_STATE(21)] = 1661,
  [SMALL_STATE(22)] = 1744,
  [SMALL_STATE(23)] = 1827,
  [SMALL_STATE(24)] = 1910,
  [SMALL_STATE(25)] = 1993,
  [SMALL_STATE(26)] = 2076,
  [SMALL_STATE(27)] = 2159,
  [SMALL_STATE(28)] = 2242,
  [SMALL_STATE(29)] = 2325,
  [SMALL_STATE(30)] = 2408,
  [SMALL_STATE(31)] = 2491,
  [SMALL_STATE(32)] = 2574,
  [SMALL_STATE(33)] = 2657,
  [SMALL_STATE(34)] = 2740,
  [SMALL_STATE(35)] = 2823,
  [SMALL_STATE(36)] = 2906,
  [SMALL_STATE(37)] = 2989,
  [SMALL_STATE(38)] = 3072,
  [SMALL_STATE(39)] = 3152,
  [SMALL_STATE(40)] = 3232,
  [SMALL_STATE(41)] = 3312,
  [SMALL_STATE(42)] = 3392,
  [SMALL_STATE(43)] = 3472,
  [SMALL_STATE(44)] = 3552,
  [SMALL_STATE(45)] = 3632,
  [SMALL_STATE(46)] = 3698,
  [SMALL_STATE(47)] = 3778,
  [SMALL_STATE(48)] = 3858,
  [SMALL_STATE(49)] = 3938,
  [SMALL_STATE(50)] = 4018,
  [SMALL_STATE(51)] = 4098,
  [SMALL_STATE(52)] = 4178,
  [SMALL_STATE(53)] = 4258,
  [SMALL_STATE(54)] = 4338,
  [SMALL_STATE(55)] = 4418,
  [SMALL_STATE(56)] = 4498,
  [SMALL_STATE(57)] = 4578,
  [SMALL_STATE(58)] = 4658,
  [SMALL_STATE(59)] = 4738,
  [SMALL_STATE(60)] = 4818,
  [SMALL_STATE(61)] = 4898,
  [SMALL_STATE(62)] = 4978,
  [SMALL_STATE(63)] = 5058,
  [SMALL_STATE(64)] = 5138,
  [SMALL_STATE(65)] = 5218,
  [SMALL_STATE(66)] = 5298,
  [SMALL_STATE(67)] = 5378,
  [SMALL_STATE(68)] = 5458,
  [SMALL_STATE(69)] = 5538,
  [SMALL_STATE(70)] = 5618,
  [SMALL_STATE(71)] = 5698,
  [SMALL_STATE(72)] = 5778,
  [SMALL_STATE(73)] = 5858,
  [SMALL_STATE(74)] = 5938,
  [SMALL_STATE(75)] = 6018,
  [SMALL_STATE(76)] = 6098,
  [SMALL_STATE(77)] = 6178,
  [SMALL_STATE(78)] = 6258,
  [SMALL_STATE(79)] = 6319,
  [SMALL_STATE(80)] = 6378,
  [SMALL_STATE(81)] = 6433,
  [SMALL_STATE(82)] = 6475,
  [SMALL_STATE(83)] = 6513,
  [SMALL_STATE(84)] = 6551,
  [SMALL_STATE(85)] = 6586,
  [SMALL_STATE(86)] = 6651,
  [SMALL_STATE(87)] = 6716,
  [SMALL_STATE(88)] = 6781,
  [SMALL_STATE(89)] = 6820,
  [SMALL_STATE(90)] = 6857,
  [SMALL_STATE(91)] = 6922,
  [SMALL_STATE(92)] = 6987,
  [SMALL_STATE(93)] = 7024,
  [SMALL_STATE(94)] = 7059,
  [SMALL_STATE(95)] = 7124,
  [SMALL_STATE(96)] = 7189,
  [SMALL_STATE(97)] = 7254,
  [SMALL_STATE(98)] = 7290,
  [SMALL_STATE(99)] = 7325,
  [SMALL_STATE(100)] = 7358,
  [SMALL_STATE(101)] = 7391,
  [SMALL_STATE(102)] = 7424,
  [SMALL_STATE(103)] = 7457,
  [SMALL_STATE(104)] = 7490,
  [SMALL_STATE(105)] = 7523,
  [SMALL_STATE(106)] = 7556,
  [SMALL_STATE(107)] = 7589,
  [SMALL_STATE(108)] = 7622,
  [SMALL_STATE(109)] = 7655,
  [SMALL_STATE(110)] = 7688,
  [SMALL_STATE(111)] = 7721,
  [SMALL_STATE(112)] = 7754,
  [SMALL_STATE(113)] = 7787,
  [SMALL_STATE(114)] = 7826,
  [SMALL_STATE(115)] = 7859,
  [SMALL_STATE(116)] = 7894,
  [SMALL_STATE(117)] = 7927,
  [SMALL_STATE(118)] = 7960,
  [SMALL_STATE(119)] = 7993,
  [SMALL_STATE(120)] = 8026,
  [SMALL_STATE(121)] = 8059,
  [SMALL_STATE(122)] = 8092,
  [SMALL_STATE(123)] = 8125,
  [SMALL_STATE(124)] = 8158,
  [SMALL_STATE(125)] = 8191,
  [SMALL_STATE(126)] = 8224,
  [SMALL_STATE(127)] = 8257,
  [SMALL_STATE(128)] = 8290,
  [SMALL_STATE(129)] = 8323,
  [SMALL_STATE(130)] = 8356,
  [SMALL_STATE(131)] = 8389,
  [SMALL_STATE(132)] = 8423,
  [SMALL_STATE(133)] = 8457,
  [SMALL_STATE(134)] = 8493,
  [SMALL_STATE(135)] = 8526,
  [SMALL_STATE(136)] = 8559,
  [SMALL_STATE(137)] = 8596,
  [SMALL_STATE(138)] = 8629,
  [SMALL_STATE(139)] = 8666,
  [SMALL_STATE(140)] = 8699,
  [SMALL_STATE(141)] = 8732,
  [SMALL_STATE(142)] = 8762,
  [SMALL_STATE(143)] = 8792,
  [SMALL_STATE(144)] = 8826,
  [SMALL_STATE(145)] = 8858,
  [SMALL_STATE(146)] = 8890,
  [SMALL_STATE(147)] = 8920,
  [SMALL_STATE(148)] = 8950,
  [SMALL_STATE(149)] = 8980,
  [SMALL_STATE(150)] = 9010,
  [SMALL_STATE(151)] = 9040,
  [SMALL_STATE(152)] = 9072,
  [SMALL_STATE(153)] = 9102,
  [SMALL_STATE(154)] = 9132,
  [SMALL_STATE(155)] = 9162,
  [SMALL_STATE(156)] = 9192,
  [SMALL_STATE(157)] = 9222,
  [SMALL_STATE(158)] = 9252,
  [SMALL_STATE(159)] = 9282,
  [SMALL_STATE(160)] = 9312,
  [SMALL_STATE(161)] = 9342,
  [SMALL_STATE(162)] = 9372,
  [SMALL_STATE(163)] = 9402,
  [SMALL_STATE(164)] = 9432,
  [SMALL_STATE(165)] = 9462,
  [SMALL_STATE(166)] = 9492,
  [SMALL_STATE(167)] = 9522,
  [SMALL_STATE(168)] = 9552,
  [SMALL_STATE(169)] = 9582,
  [SMALL_STATE(170)] = 9616,
  [SMALL_STATE(171)] = 9646,
  [SMALL_STATE(172)] = 9678,
  [SMALL_STATE(173)] = 9708,
  [SMALL_STATE(174)] = 9738,
  [SMALL_STATE(175)] = 9768,
  [SMALL_STATE(176)] = 9798,
  [SMALL_STATE(177)] = 9828,
  [SMALL_STATE(178)] = 9858,
  [SMALL_STATE(179)] = 9888,
  [SMALL_STATE(180)] = 9919,
  [SMALL_STATE(181)] = 9950,
  [SMALL_STATE(182)] = 9978,
  [SMALL_STATE(183)] = 10006,
  [SMALL_STATE(184)] = 10034,
  [SMALL_STATE(185)] = 10062,
  [SMALL_STATE(186)] = 10090,
  [SMALL_STATE(187)] = 10118,
  [SMALL_STATE(188)] = 10146,
  [SMALL_STATE(189)] = 10174,
  [SMALL_STATE(190)] = 10202,
  [SMALL_STATE(191)] = 10230,
  [SMALL_STATE(192)] = 10258,
  [SMALL_STATE(193)] = 10286,
  [SMALL_STATE(194)] = 10314,
  [SMALL_STATE(195)] = 10342,
  [SMALL_STATE(196)] = 10370,
  [SMALL_STATE(197)] = 10398,
  [SMALL_STATE(198)] = 10426,
  [SMALL_STATE(199)] = 10454,
  [SMALL_STATE(200)] = 10482,
  [SMALL_STATE(201)] = 10510,
  [SMALL_STATE(202)] = 10538,
  [SMALL_STATE(203)] = 10566,
  [SMALL_STATE(204)] = 10594,
  [SMALL_STATE(205)] = 10622,
  [SMALL_STATE(206)] = 10650,
  [SMALL_STATE(207)] = 10678,
  [SMALL_STATE(208)] = 10706,
  [SMALL_STATE(209)] = 10734,
  [SMALL_STATE(210)] = 10762,
  [SMALL_STATE(211)] = 10790,
  [SMALL_STATE(212)] = 10818,
  [SMALL_STATE(213)] = 10846,
  [SMALL_STATE(214)] = 10874,
  [SMALL_STATE(215)] = 10902,
  [SMALL_STATE(216)] = 10930,
  [SMALL_STATE(217)] = 10958,
  [SMALL_STATE(218)] = 10986,
  [SMALL_STATE(219)] = 11014,
  [SMALL_STATE(220)] = 11042,
  [SMALL_STATE(221)] = 11070,
  [SMALL_STATE(222)] = 11098,
  [SMALL_STATE(223)] = 11126,
  [SMALL_STATE(224)] = 11154,
  [SMALL_STATE(225)] = 11182,
  [SMALL_STATE(226)] = 11210,
  [SMALL_STATE(227)] = 11238,
  [SMALL_STATE(228)] = 11266,
  [SMALL_STATE(229)] = 11294,
  [SMALL_STATE(230)] = 11322,
  [SMALL_STATE(231)] = 11350,
  [SMALL_STATE(232)] = 11378,
  [SMALL_STATE(233)] = 11406,
  [SMALL_STATE(234)] = 11434,
  [SMALL_STATE(235)] = 11462,
  [SMALL_STATE(236)] = 11490,
  [SMALL_STATE(237)] = 11524,
  [SMALL_STATE(238)] = 11552,
  [SMALL_STATE(239)] = 11580,
  [SMALL_STATE(240)] = 11608,
  [SMALL_STATE(241)] = 11636,
  [SMALL_STATE(242)] = 11664,
  [SMALL_STATE(243)] = 11692,
  [SMALL_STATE(244)] = 11720,
  [SMALL_STATE(245)] = 11748,
  [SMALL_STATE(246)] = 11776,
  [SMALL_STATE(247)] = 11808,
  [SMALL_STATE(248)] = 11840,
  [SMALL_STATE(249)] = 11862,
  [SMALL_STATE(250)] = 11884,
  [SMALL_STATE(251)] = 11906,
  [SMALL_STATE(252)] = 11933,
  [SMALL_STATE(253)] = 11960,
  [SMALL_STATE(254)] = 11980,
  [SMALL_STATE(255)] = 12000,
  [SMALL_STATE(256)] = 12020,
  [SMALL_STATE(257)] = 12040,
  [SMALL_STATE(258)] = 12065,
  [SMALL_STATE(259)] = 12090,
  [SMALL_STATE(260)] = 12117,
  [SMALL_STATE(261)] = 12144,
  [SMALL_STATE(262)] = 12161,
  [SMALL_STATE(263)] = 12178,
  [SMALL_STATE(264)] = 12195,
  [SMALL_STATE(265)] = 12215,
  [SMALL_STATE(266)] = 12241,
  [SMALL_STATE(267)] = 12261,
  [SMALL_STATE(268)] = 12287,
  [SMALL_STATE(269)] = 12313,
  [SMALL_STATE(270)] = 12339,
  [SMALL_STATE(271)] = 12362,
  [SMALL_STATE(272)] = 12385,
  [SMALL_STATE(273)] = 12408,
  [SMALL_STATE(274)] = 12431,
  [SMALL_STATE(275)] = 12454,
  [SMALL_STATE(276)] = 12477,
  [SMALL_STATE(277)] = 12500,
  [SMALL_STATE(278)] = 12523,
  [SMALL_STATE(279)] = 12546,
  [SMALL_STATE(280)] = 12569,
  [SMALL_STATE(281)] = 12592,
  [SMALL_STATE(282)] = 12604,
  [SMALL_STATE(283)] = 12616,
  [SMALL_STATE(284)] = 12636,
  [SMALL_STATE(285)] = 12648,
  [SMALL_STATE(286)] = 12666,
  [SMALL_STATE(287)] = 12683,
  [SMALL_STATE(288)] = 12702,
  [SMALL_STATE(289)] = 12721,
  [SMALL_STATE(290)] = 12740,
  [SMALL_STATE(291)] = 12759,
  [SMALL_STATE(292)] = 12778,
  [SMALL_STATE(293)] = 12795,
  [SMALL_STATE(294)] = 12812,
  [SMALL_STATE(295)] = 12829,
  [SMALL_STATE(296)] = 12846,
  [SMALL_STATE(297)] = 12862,
  [SMALL_STATE(298)] = 12878,
  [SMALL_STATE(299)] = 12890,
  [SMALL_STATE(300)] = 12902,
  [SMALL_STATE(301)] = 12918,
  [SMALL_STATE(302)] = 12932,
  [SMALL_STATE(303)] = 12944,
  [SMALL_STATE(304)] = 12956,
  [SMALL_STATE(305)] = 12968,
  [SMALL_STATE(306)] = 12980,
  [SMALL_STATE(307)] = 12996,
  [SMALL_STATE(308)] = 13006,
  [SMALL_STATE(309)] = 13022,
  [SMALL_STATE(310)] = 13036,
  [SMALL_STATE(311)] = 13046,
  [SMALL_STATE(312)] = 13060,
  [SMALL_STATE(313)] = 13076,
  [SMALL_STATE(314)] = 13092,
  [SMALL_STATE(315)] = 13108,
  [SMALL_STATE(316)] = 13122,
  [SMALL_STATE(317)] = 13138,
  [SMALL_STATE(318)] = 13152,
  [SMALL_STATE(319)] = 13164,
  [SMALL_STATE(320)] = 13174,
  [SMALL_STATE(321)] = 13186,
  [SMALL_STATE(322)] = 13199,
  [SMALL_STATE(323)] = 13212,
  [SMALL_STATE(324)] = 13223,
  [SMALL_STATE(325)] = 13236,
  [SMALL_STATE(326)] = 13247,
  [SMALL_STATE(327)] = 13260,
  [SMALL_STATE(328)] = 13273,
  [SMALL_STATE(329)] = 13286,
  [SMALL_STATE(330)] = 13299,
  [SMALL_STATE(331)] = 13312,
  [SMALL_STATE(332)] = 13325,
  [SMALL_STATE(333)] = 13338,
  [SMALL_STATE(334)] = 13349,
  [SMALL_STATE(335)] = 13362,
  [SMALL_STATE(336)] = 13375,
  [SMALL_STATE(337)] = 13388,
  [SMALL_STATE(338)] = 13399,
  [SMALL_STATE(339)] = 13412,
  [SMALL_STATE(340)] = 13425,
  [SMALL_STATE(341)] = 13438,
  [SMALL_STATE(342)] = 13451,
  [SMALL_STATE(343)] = 13464,
  [SMALL_STATE(344)] = 13477,
  [SMALL_STATE(345)] = 13490,
  [SMALL_STATE(346)] = 13503,
  [SMALL_STATE(347)] = 13516,
  [SMALL_STATE(348)] = 13526,
  [SMALL_STATE(349)] = 13534,
  [SMALL_STATE(350)] = 13544,
  [SMALL_STATE(351)] = 13554,
  [SMALL_STATE(352)] = 13564,
  [SMALL_STATE(353)] = 13572,
  [SMALL_STATE(354)] = 13582,
  [SMALL_STATE(355)] = 13592,
  [SMALL_STATE(356)] = 13602,
  [SMALL_STATE(357)] = 13612,
  [SMALL_STATE(358)] = 13622,
  [SMALL_STATE(359)] = 13632,
  [SMALL_STATE(360)] = 13642,
  [SMALL_STATE(361)] = 13652,
  [SMALL_STATE(362)] = 13662,
  [SMALL_STATE(363)] = 13672,
  [SMALL_STATE(364)] = 13682,
  [SMALL_STATE(365)] = 13692,
  [SMALL_STATE(366)] = 13700,
  [SMALL_STATE(367)] = 13710,
  [SMALL_STATE(368)] = 13718,
  [SMALL_STATE(369)] = 13726,
  [SMALL_STATE(370)] = 13736,
  [SMALL_STATE(371)] = 13746,
  [SMALL_STATE(372)] = 13756,
  [SMALL_STATE(373)] = 13766,
  [SMALL_STATE(374)] = 13776,
  [SMALL_STATE(375)] = 13786,
  [SMALL_STATE(376)] = 13796,
  [SMALL_STATE(377)] = 13806,
  [SMALL_STATE(378)] = 13814,
  [SMALL_STATE(379)] = 13822,
  [SMALL_STATE(380)] = 13832,
  [SMALL_STATE(381)] = 13842,
  [SMALL_STATE(382)] = 13849,
  [SMALL_STATE(383)] = 13856,
  [SMALL_STATE(384)] = 13863,
  [SMALL_STATE(385)] = 13870,
  [SMALL_STATE(386)] = 13877,
  [SMALL_STATE(387)] = 13884,
  [SMALL_STATE(388)] = 13891,
  [SMALL_STATE(389)] = 13898,
  [SMALL_STATE(390)] = 13905,
  [SMALL_STATE(391)] = 13912,
  [SMALL_STATE(392)] = 13919,
  [SMALL_STATE(393)] = 13926,
  [SMALL_STATE(394)] = 13933,
  [SMALL_STATE(395)] = 13940,
  [SMALL_STATE(396)] = 13947,
  [SMALL_STATE(397)] = 13954,
  [SMALL_STATE(398)] = 13961,
  [SMALL_STATE(399)] = 13968,
  [SMALL_STATE(400)] = 13975,
  [SMALL_STATE(401)] = 13982,
  [SMALL_STATE(402)] = 13989,
  [SMALL_STATE(403)] = 13996,
  [SMALL_STATE(404)] = 14003,
  [SMALL_STATE(405)] = 14010,
  [SMALL_STATE(406)] = 14017,
  [SMALL_STATE(407)] = 14024,
  [SMALL_STATE(408)] = 14031,
  [SMALL_STATE(409)] = 14038,
  [SMALL_STATE(410)] = 14045,
  [SMALL_STATE(411)] = 14052,
  [SMALL_STATE(412)] = 14059,
  [SMALL_STATE(413)] = 14066,
  [SMALL_STATE(414)] = 14073,
  [SMALL_STATE(415)] = 14080,
  [SMALL_STATE(416)] = 14087,
  [SMALL_STATE(417)] = 14094,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(51),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(408),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(408),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_body, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_body, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aws_ref, 1, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aws_ref, 1, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(63),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(395),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_body, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_body, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_body, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_body, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(395),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(66),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(398),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(70),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(415),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(398),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(415),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary_op, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_op, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_op, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unary_op, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation_start, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_interpolation_start, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_operator, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compare_operator, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic_operator, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic_operator, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_operator, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_operator, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template_body, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_body_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_body_repeat1, 2), SHIFT_REPEAT(274),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_template_body_repeat1, 2), SHIFT_REPEAT(250),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_body_repeat1, 2), SHIFT_REPEAT(250),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(250),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(250),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_body_repeat1, 2), SHIFT_REPEAT(275),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_body_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_group, 1, .production_id = 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(283),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_group_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_group_repeat1, 2), SHIFT_REPEAT(286),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_group_repeat1, 2), SHIFT_REPEAT(265),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_group, 2, .production_id = 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(401),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_def, 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_def, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_interpolation, 3, .production_id = 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3, .production_id = 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_interpolation_end, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation_end, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(60),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(25),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(39),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_def_nl, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_redirect, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [793] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
