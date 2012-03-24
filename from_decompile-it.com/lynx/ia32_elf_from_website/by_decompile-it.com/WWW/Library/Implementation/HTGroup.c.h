#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
typedef enum  { LEX_NONE = 0, LEX_EOF = 1, LEX_REC_SEP = 2, LEX_FIELD_SEP = 3, LEX_ITEM_SEP = 4, LEX_OPEN_PAREN = 5, LEX_CLOSE_PAREN = 6, LEX_AT_SIGN = 7, LEX_ALPH_STR = 8, LEX_TMPL_STR = 9, } LexItem;
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
typedef HTList UserDefList;
typedef HTList AddressDefList;
typedef struct {
     UserDefList *user_def_list;
     AddressDefList *address_def_list;
  } Item;
typedef HTList ItemList;
typedef struct {
     char *group_name;
     ItemList *item_list;
  } GroupDef;
typedef char BOOLEAN;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
FILE *TraceFP( void );
void outofmem( char *, char * );
HTList *HTList_new( void );
void HTList_delete( HTList * );
void HTList_addObject( HTList *, void * );
char *HTSACopy( char **, char * );
void unlex( LexItem  );
LexItem lex( FILE * );
char *lex_verbose( LexItem  );
void syntax_error( FILE *, char *, LexItem  );
AddressDefList *parse_address_part( FILE * );
UserDefList *parse_user_part( FILE * );
Item *parse_item( FILE * );
ItemList *parse_item_list( FILE * );
GroupDef *HTAA_parseGroupDef( FILE * );
void print_item( Item * );
void print_item_list( ItemList * );
void HTAA_printGroupDef( GroupDef * );
void *calloc( unsigned int , unsigned int  );
int _IO_getc( void * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
int fputc( int , FILE * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN WWW_TraceFlag;
extern char HTlex_buffer[40];
extern int HTlex_line;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
