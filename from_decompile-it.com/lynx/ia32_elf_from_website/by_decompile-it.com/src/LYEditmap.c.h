#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef char BOOLEAN;
typedef unsigned short LYKeymap_t;
typedef unsigned char LYEditCode;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN lynx_edit_mode;
extern BOOLEAN no_dired_support;
extern LYKeymap_t keymap[661];
extern LYKeymap_t key_override[661];
extern int current_lineedit;
extern char *LYLineeditNames[4];
extern LYEditCode *LYLineEditors[3];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
