#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef union {
     double constant;
     long variable;
     int operatr;
  } storage_type;
typedef struct {
     enum kind_list { CONSTANT = 0, VARIABLE = 1, OPERATOR = 2, } kind;
     int level;
     storage_type token;
  } token_type;
typedef struct {
     long v;
     int count;
  } sort_type;
typedef struct _IO_FILE FILE;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
struct _IO_FILE {
     int _flags;
     char *_IO_read_ptr;
     char *_IO_read_end;
     char *_IO_read_base;
     char *_IO_write_base;
     char *_IO_write_ptr;
     char *_IO_write_end;
     char *_IO_buf_base;
     char *_IO_buf_end;
     char *_IO_save_base;
     char *_IO_backup_base;
     char *_IO_save_end;
     struct _IO_marker *_markers;
     struct _IO_FILE *_chain;
     int _fileno;
     int _flags2;
     __off_t _old_offset;
     unsigned short _cur_column;
     char _vtable_offset;
     char _shortbuf[1];
     _IO_lock_t *_lock;
     __off64_t _offset;
     void *__pad1;
     void *__pad2;
     void *__pad3;
     void *__pad4;
     size_t __pad5;
     int _mode;
     char _unused2[40];
  } ;
typedef struct complexs complexs;
struct complexs {
     double re;
     double im;
  } ;
typedef int __jmp_buf[6];
typedef struct {
     unsigned long __val[32];
  } __sigset_t;
struct __jmp_buf_tag {
     __jmp_buf __jmpbuf;
     int __mask_was_saved;
     __sigset_t __saved_mask;
  } ;
typedef struct __jmp_buf_tag  jmp_buf[1];
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void exit_program( int  );
int found_var( token_type *, int , long  );
int solved_equation( int  );
int var_in_equation( int , long  );
int no_vars( token_type *, int , long * );
int exp_contains_infinity( token_type *, int  );
int strcmp_tospace( char *, char * );
int is_all( char * );
char *skip_space( char * );
char *skip_param( char * );
long decstrtol( char *, char ** );
int return_result( int  );
char *get_string( char *, int  );
int get_yes_no( void );
int get_expr( token_type *, int * );
void copy_espace( int , int  );
void error_huge( void );
void subst_var_with_exp( token_type *, int *, token_type *, int , long  );
void clean_up( void );
void get_screen_size( void );
void warning( char * );
int check_divide_by_zero( double  );
void error( char * );
int extra_characters( char * );
int prompt_var( long * );
int current_not_defined( void );
int not_defined( int  );
int get_default_en( char * );
int get_range( char **, int *, int * );
int get_range_eol( char **, int *, int * );
int next_espace( void );
void clear_all( void );
int solve_sub( token_type *, int , token_type *, int *, token_type *, int * );
int solve_espace( int , int  );
char *parse_var2( long *, char * );
int shell_out( char * );
int display_process( char * );
int subst_constants( token_type *, int * );
int my_strlcpy( char *, char *, int  );
char *parse_var( long *, char * );
char *parse_expr( token_type *, int *, char * );
char *parse_equation( int , char * );
int vcmp( sort_type *, sort_type * );
int quit_cmd( char * );
int fraction_cmd( char * );
int unfactor_cmd( char * );
int skip_no( char ** );
int factor_cmd( char * );
int echo_cmd( char * );
void output_options( FILE * );
int save_set_options( void );
int version_report( void );
int version_cmd( char * );
int copy_cmd( char * );
int replace_cmd( char * );
int approximate_cmd( char * );
int variables_cmd( char * );
int code_cmd( char * );
int list_cmd( char * );
int save_cmd( char * );
int clear_cmd( char * );
int elim_sub( int , long  );
int display_fraction( double  );
int divide_cmd( char * );
int compare_rhs( int , int , int * );
int compare_es( int , int  );
int compare_cmd( char * );
int find_more( token_type *, int *, int  );
int tally_cmd( char * );
int complex_func( char *, int  );
int imaginary_cmd( char * );
int real_cmd( char * );
int pause_cmd( char * );
int output_current_directory( FILE * );
int set_options( char * );
int set_cmd( char * );
int push_en( int  );
int push_cmd( char * );
int opt_es( token_type *, int * );
int optimize_cmd( char * );
int sum_product( char *, int  );
int product_cmd( char * );
int sum_cmd( char * );
int solve_cmd( char * );
int plot_cmd( char * );
int read_sub( FILE * );
int read_file( char * );
int read_cmd( char * );
int edit_sub( char * );
int edit_cmd( char * );
int display_cmd( char * );
int eliminate_cmd( char * );
int simplify_cmd( char * );
int calculate_cmd( char * );
int se_compare( token_type *, int , token_type *, int , int * );
void elim_loop( token_type *, int * );
int simp_loop( token_type *, int * );
void simp_divide( token_type *, int * );
void factorv( token_type *, int *, long  );
void simp_equation( int  );
void simple_frac_side( token_type *, int * );
void simpv_side( token_type *, int *, long  );
void simp_side( token_type *, int * );
void calc_simp( token_type *, int * );
void simp_i( token_type *, int * );
void simpa_side( token_type *, int *, int , int  );
void simpa_repeat_side( token_type *, int *, int , int  );
int factor_power( token_type *, int * );
int factor_plus( token_type *, int *, long , double  );
void group_proc( token_type *, int * );
int fractions_and_group( token_type *, int * );
int make_fractions_and_group( int  );
void uf_repeat_always( token_type *, int * );
void uf_allpower( token_type *, int * );
int uf_power( token_type *, int * );
int uf_tsimp( token_type *, int * );
void uf_simp( token_type *, int * );
int poly_div( token_type *, int , token_type *, int , long * );
int poly_gcd( token_type *, int , token_type *, int , long  );
int get_constant( token_type *, int , double * );
int parse_complex( token_type *, int , complexs * );
complexs complex_div( complexs , complexs  );
int int_expr( token_type *, int  );
int list_var( long , int  );
int list_c_equation( int , enum language_list  , int  );
char *list_expression( token_type *, int , int  );
char *list_equation( int , int  );
int list_proc( token_type *, int , int  );
int list1_sub( int , int  );
int flist_equation( int  );
int list_sub( int  );
void reset_attr( void );
double gcd_verified( double , double  );
int f_to_fraction( double , double *, double * );
int make_fractions( token_type *, int * );
int is_prime( void );
void display_unique( void );
int factor_one( double  );
int list_factor( token_type *, int *, int  );
void factor_int_sub( int  );
double fmod( double , double  );
void qsort( void *, unsigned int , unsigned int , void * );
void __longjmp_chk( void *[1], int  );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
double strtod( char *, char ** );
char *strchr( char *, char  );
char *getenv( char * );
char *fgets( char *, int , void * );
double modf( double , void * );
void *fdopen( int , char * );
void free( void * );
int access( char *, int  );
int mkstemp( char * );
short **__ctype_b_loc( void );
int isatty( int  );
int fclose( void * );
int _setjmp( void *[1] );
void *fopen( char *, char * );
int unlink( char * );
int chdir( char * );
void __stack_chk_fail( void );
int strncasecmp( char *, char *, unsigned int  );
void *memmove( void *, void *, unsigned int  );
char *getcwd( char *, unsigned int  );
int __snprintf_chk( char *, unsigned int , int , unsigned int , char *, ... );
void add_history( char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern int n_tokens;
extern int cur_equation;
extern token_type *tlhs;
extern int screen_columns;
extern int screen_rows;
extern int color_flag;
extern int bold_colors;
extern int readline_enabled;
extern char prompt_str[80];
extern char rc_file[4096];
extern FILE *default_out;
extern FILE *gfp;
extern jmp_buf jmp_save;
extern int test_mode;
extern int quiet_mode;
extern int security_level;
extern int n_equations;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern token_type *trhs;
extern token_type *tes;
extern token_type *scratch;
extern token_type zero_token;
extern token_type one_token;
extern int approximate_roots;
extern int debug_level;
extern int partial_flag;
extern int symb_flag;
extern int high_prec;
extern int input_column;
extern int sign_cmp_flag;
extern char *last_history_string;
extern int repeat_flag;
extern int n_tlhs;
extern int n_trhs;
extern int precision;
extern char var_str[180];
extern int autosolve;
extern int autocalc;
extern int autoselect;
extern int pull_number;
extern int case_sensitive_flag;
extern char special_variable_characters[256];
extern int right_associative_power;
extern int negate_highest_precedence;
extern int n_tes;
extern int factor_int_flag;
extern int display2d;
extern int preserve_surds;
extern int rationalize_denominators;
extern int modulus_mode;
extern int finance_option;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
