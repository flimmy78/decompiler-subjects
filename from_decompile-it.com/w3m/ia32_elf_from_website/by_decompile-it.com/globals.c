#include "globals.c.h"
int n_tokens = 60000;
int n_equations;
int cur_equation;
token_type *lhs[100];
token_type *rhs[100];
int n_lhs[100];
int n_rhs[100];
token_type *tlhs;
token_type *trhs;
token_type *tes;
token_type *scratch;
int n_tlhs;
int n_trhs;
int n_tes;
token_type zero_token;
token_type one_token;
int precision = 14;
int case_sensitive_flag = 1;
int factor_int_flag;
int display2d = 1;
int preserve_surds = 1;
int rationalize_denominators = 1;
int modulus_mode = 2;
int screen_columns = 80;
int screen_rows = 24;
int finance_option;
int autosolve = 1;
int autocalc = 1;
int autoselect = 1;
char special_variable_characters[256] = { '\'', '\\',  };
int integer_coefficients;
int right_associative_power;
int negate_highest_precedence = 1;
int power_starstar;
int debug_level;
int color_flag = 1;
int bold_colors;
int cur_color = -1;
int html_flag;
double small_epsilon = 0.000000000000;
double epsilon = 0.000000000000;
char *prog_name = "mathomatic";
char *var_names[8000];
char var_str[180];
char prompt_str[80];
char rc_file[4096];
char *last_history_string;
char *history_filename;
char history_filename_storage[4096];
double unique[64];
int ucnt[64];
int uno;
sign_array_type sign_array;
FILE *default_out;
FILE *gfp;
jmp_buf jmp_save;
int test_mode;
int quiet_mode;
int echo_input;
int readline_enabled = 1;
int partial_flag;
int symb_flag;
int symblify = 1;
int high_prec;
int input_column;
int sign_cmp_flag;
int domain_check;
int approximate_roots;
int abort_flag;
int pull_number;
int security_level;
int repeat_flag;
char *result_str;
int result_en = -1;
char *error_str;
char *warning_str;
