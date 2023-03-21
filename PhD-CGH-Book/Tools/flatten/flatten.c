/* A lexical scanner generated by flex */

/* scanner skeleton version:
 * $Header: /repository/users/plantilla-unificada-latex/tools/flatten/flatten.c,v 1.1 2018/12/12 13:18:42 macias Exp $
 */

#define FLEX_SCANNER

#include <stdio.h>


/* cfront 1.2 defines "c_plusplus" instead of "__cplusplus" */
#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif


#ifdef __cplusplus

#include <stdlib.h>
#include <osfcn.h>

/* use prototypes in function declarations */
#define YY_USE_PROTOS

/* the "const" storage-class-modifier is valid */
#define YY_USE_CONST

#else	/* ! __cplusplus */

#ifdef __STDC__

#ifdef __GNUC__
#include <stddef.h>
void *malloc( size_t );
void free( void* );
#else
#include <stdlib.h>
#endif	/* __GNUC__ */

#define YY_USE_PROTOS
#define YY_USE_CONST

#endif	/* __STDC__ */
#endif	/* ! __cplusplus */


#ifdef __TURBOC__
#define YY_USE_CONST
#endif


#ifndef YY_USE_CONST
#define const
#endif


#ifdef YY_USE_PROTOS
#define YY_PROTO(proto) proto
#else
#define YY_PROTO(proto) ()
/* we can't get here if it's an ANSI C compiler, or a C++ compiler,
 * so it's got to be a K&R compiler, and therefore there's no standard
 * place from which to include these definitions
 */
char *malloc();
int free();
int read();
#endif


/* amount of stuff to slurp up with each read */
#ifndef YY_READ_BUF_SIZE
#define YY_READ_BUF_SIZE 8192
#endif

/* returned upon end-of-file */
#define YY_END_TOK 0

/* copy whatever the last rule matched to the standard output */

/* cast to (char *) is because for 8-bit chars, yytext is (unsigned char *) */
/* this used to be an fputs(), but since the string might contain NUL's,
 * we now use fwrite()
 */
#define ECHO (void) fwrite( (char *) yytext, yyleng, 1, yyout )

/* gets input and stuffs it into "buf".  number of characters read, or YY_NULL,
 * is returned in "result".
 */
#define YY_INPUT(buf,result,max_size) \
	if ( (result = read( fileno(yyin), (char *) buf, max_size )) < 0 ) \
	    YY_FATAL_ERROR( "read() in flex scanner failed" );
#define YY_NULL 0

/* no semi-colon after return; correct usage is to write "yyterminate();" -
 * we don't want an extra ';' after the "return" because that will cause
 * some compilers to complain about unreachable statements.
 */
#define yyterminate() return ( YY_NULL )

/* report a fatal error */

/* The funky do-while is used to turn this macro definition into
 * a single C statement (which needs a semi-colon terminator).
 * This avoids problems with code like:
 *
 * 	if ( something_happens )
 *		YY_FATAL_ERROR( "oops, the something happened" );
 *	else
 *		everything_okay();
 *
 * Prior to using the do-while the compiler would get upset at the
 * "else" because it interpreted the "if" statement as being all
 * done when it reached the ';' after the YY_FATAL_ERROR() call.
 */

#define YY_FATAL_ERROR(msg) \
	do \
		{ \
		(void) fputs( msg, stderr ); \
		(void) putc( '\n', stderr ); \
		exit( 1 ); \
		} \
	while ( 0 )

/* default yywrap function - always treat EOF as an EOF */
#define yywrap() 1

/* enter a start condition.  This macro really ought to take a parameter,
 * but we do it the disgusting crufty way forced on us by the ()-less
 * definition of BEGIN
 */
#define BEGIN yy_start = 1 + 2 *

/* action number for EOF rule of a given start state */
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)

/* special action meaning "start processing a new file" */
#define YY_NEW_FILE \
	do \
		{ \
		yy_init_buffer( yy_current_buffer, yyin ); \
		yy_load_buffer_state(); \
		} \
	while ( 0 )

/* default declaration of generated scanner - a define so the user can
 * easily add parameters
 */
#define YY_DECL int yylex YY_PROTO(( void )) 

/* code executed at the end of each rule */
#define YY_BREAK break;

#define YY_END_OF_BUFFER_CHAR 0

#ifndef YY_BUF_SIZE
#define YY_BUF_SIZE (YY_READ_BUF_SIZE * 2) /* size of default input buffer */
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;

#define YY_CHAR char
# line 1 "flatten.lx"
#define INITIAL 0
# line 2 "flatten.lx"
/* flatten.lx    (flex) lexer for concatenating "included" (La)TeX files
 *               Written by Peter Wilson (Catholic University and NIST)
 *               pwilson@cme.nist.gov
 */

char FILE_VERSION[] = "Version 1.1";
char FILE_DATE[] = "October 1995";

/* Version History:
 *         1.0 (December 1994): First release
 *         1.1 (October 1995): Added:
 *             -- directory searching
 *             -- use of \endinput to stop processing an included file
 */

/* Development of this software was funded by the United States Government
 * and is not subject to copyright.
 */

/* National Institute of Standards and Technology (NIST)
 * Manufacturing Engineering Laboratory (MEL)
 * Manufacturing Systems Integration Division (MSID)
 * ********************************************************************
 *                            D I S C L A I M E R
 *  
 * There is no warranty for the FLaTTeN software.
 * If the FLaTTeN software
 * is modified by someone else and passed on, NIST wants
 * the software's recipients to know that what they have is not what NIST
 * distributed.
 * 
 * Policies
 * 
 * 1. Anyone may copy and distribute verbatim copies of the 
 *    source code as received in any medium.
 * 
 * 2. Anyone may modify your copy or copies of the FLaTTeN source
 *    code or any portion of it, and copy and distribute such modifications
 *    provided that all modifications are clearly associated with the entity
 *    that performs the modifications.
 * 
 * NO WARRANTY
 * ===========
 * 
 * NIST PROVIDES ABSOLUTELY NO WARRANTY.  THE FLaTTeN SOFTWARE
 * IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 * THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS
 * WITH YOU.  SHOULD ANY PORTION OF THE FLaTTeN SOFTWARE PROVE DEFECTIVE,
 * YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION.
 * 
 * IN NO EVENT WILL NIST BE LIABLE FOR DAMAGES,
 * INCLUDING ANY LOST PROFITS, LOST MONIES, OR OTHER SPECIAL,
 * INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR
 * INABILITY TO USE (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR DATA
 * BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY THIRD PARTIES OR A
 * FAILURE OF THE PROGRAM TO OPERATE WITH PROGRAMS NOT DISTRIBUTED BY
 * NIST) THE PROGRAMS, EVEN IF YOU HAVE BEEN ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGES, OR FOR ANY CLAIM BY ANY OTHER PARTY.
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "getopt.h"
#include "srchenv.h"

typedef char *STRING;    /* a pointer-to-a-char */
typedef STRING *PTRADR;  /* A pointer-to-a-pointer-to-a-char */


#ifndef TRUE
# define TRUE 1
#endif
#ifndef FALSE
# define FALSE 0
#endif
# define MAX_DEPTH 100               /* max file nesting depth */
# define MAX_NAME 100                /* max length of a file name */
# define MY_EOS '\0'
# define MAX_ERRORS 10               /* max number of errors */

FILE *filerr;                        /* error file */
FILE *filout;                        /* output file */
FILE *filin;                         /* input root file */
int kind;                            /* kind of file inclusion */
int depth = 0;                       /* depth of file nesting */
FILE *file_stack[MAX_DEPTH];         /* stack of files */
char *name_stack[MAX_DEPTH];         /* stack of file names */
YY_BUFFER_STATE buffer_stack[MAX_DEPTH]; /* stack of input buffers */
char filnam[MAX_NAME];               /* name of a file */
char extnam[MAX_NAME];               /* name of file with extension */

extern FILE *yyin;
extern FILE *yyout;

int DEBUG;                           /* >=1 for debugging */
int num_errors = 0;                  /* number of errors */
int lineno = 1;                      /* input file line number */
# define MAX_LINE 2000               /* max length of an input line */
char linebuf[MAX_LINE];              /* buffer for input line */
int linlen = 0;                     /* current no of chars in linebuf */

char verb_char;                     /* delimeter for \verb command */

FILE *filtabin;                     /* command input file */
int num_commands = 0;               /* number of types of include commands */
# define MAX_TABLE_LINE 100         /* max number of chars in command table line */
# define MAX_COMMANDS 100           /* max number of inclusion commands */
STRING ctable[MAX_COMMANDS];        /* include command name table */

int lex_result;                     /* scratch integer for lexer */

                 /* Environment variable defined search path stuff */
char path_name[257];                /* name of a path */
char sys_envname[20];               /* name of environment variable */
char path_sep[10];                  /* path name seperators */
char dir_cat;                       /* directory catenation char */
int senv_debug;                     /* =1 for debug searchenv() */

void packup();
char *strsave();
void yyerror();
void start_a_file();
void end_a_file();
void catl();
void warning();
void read_table();
int lookup();
void initialise_senv();

/* END OF C CODE TO BE COPIED TO OUTPUT */
/* TeX comments from % through eol and gobble following whitespace */
#define VERBATIM_STATE 1
#define VERB_STATE 2
#define IN_STATE 3
/* END OF DEFINITIONS SECTION */              
# line 164 "flatten.lx"

/* done after the current pattern has been matched and before the
 * corresponding action - sets up yytext
 */
#define YY_DO_BEFORE_ACTION \
	yytext = yy_bp; \
	yyleng = yy_cp - yy_bp; \
	yy_hold_char = *yy_cp; \
	*yy_cp = '\0'; \
	yy_c_buf_p = yy_cp;

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2

/* return all but the first 'n' matched characters back to the input stream */
#define yyless(n) \
	do \
		{ \
		/* undo effects of setting up yytext */ \
		*yy_cp = yy_hold_char; \
		yy_c_buf_p = yy_cp = yy_bp + n; \
		YY_DO_BEFORE_ACTION; /* set up yytext again */ \
		} \
	while ( 0 )

#define unput(c) yyunput( c, yytext )


struct yy_buffer_state
    {
    FILE *yy_input_file;

    YY_CHAR *yy_ch_buf;		/* input buffer */
    YY_CHAR *yy_buf_pos;	/* current position in input buffer */

    /* size of input buffer in bytes, not including room for EOB characters*/
    int yy_buf_size;	

    /* number of characters read into yy_ch_buf, not including EOB characters */
    int yy_n_chars;

    int yy_eof_status;		/* whether we've seen an EOF on this buffer */
#define EOF_NOT_SEEN 0
    /* "pending" happens when the EOF has been seen but there's still
     * some text process
     */
#define EOF_PENDING 1
#define EOF_DONE 2
    };

static YY_BUFFER_STATE yy_current_buffer;

/* we provide macros for accessing buffer states in case in the
 * future we want to put the buffer states in a more general
 * "scanner state"
 */
#define YY_CURRENT_BUFFER yy_current_buffer


/* yy_hold_char holds the character lost when yytext is formed */
static YY_CHAR yy_hold_char;

static int yy_n_chars;		/* number of characters read into yy_ch_buf */



#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

#ifndef YY_USER_INIT
#define YY_USER_INIT
#endif

extern YY_CHAR *yytext;
extern int yyleng;
extern FILE *yyin, *yyout;

YY_CHAR *yytext;
int yyleng;

FILE *yyin = (FILE *) 0, *yyout = (FILE *) 0;

#define YY_END_OF_BUFFER 20
typedef int yy_state_type;
static const short int yy_accept[90] =
    {   0,
        0,    0,    0,    0,    0,    0,    0,    0,   20,   18,
       15,   18,   16,   18,    5,    3,    4,    9,    8,   13,
       13,   12,   14,    0,    1,   16,   11,   11,   11,   11,
        5,    0,   13,   13,   12,   14,   12,   14,    1,   11,
       11,   11,    0,   11,   11,   11,    0,   11,   11,   11,
        0,    0,   11,   11,    7,    7,    7,    0,    0,    0,
        0,   11,    0,    0,    0,   11,    0,    0,   10,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    6,    0,    6,    0,    0,    2,    2,    0
    } ;

static const YY_CHAR yy_ec[128] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    1,    1,    1,    1,    4,    1,    1,    1,
        1,    5,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    6,    6,    6,    6,    6,    6,
        6,    6,    6,    6,    6,    6,    6,    6,    6,    6,
        6,    6,    6,    6,    6,    6,    6,    6,    6,    6,
        1,    7,    1,    1,    1,    1,    8,    9,    6,   10,

       11,    6,   12,    6,   13,    6,    6,    6,   14,   15,
        6,   16,    6,   17,    6,   18,   19,   20,    6,    6,
        6,    6,   21,    1,   22,    1,    1
    } ;

static const YY_CHAR yy_meta[23] =
    {   0,
        1,    1,    2,    1,    1,    3,    4,    3,    3,    3,
        3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
        5,    5
    } ;

static const short int yy_base[101] =
    {   0,
        0,   22,    3,    5,  159,  158,    9,   11,  160,  163,
      163,  156,    0,    8,    0,  163,  147,  163,  163,    0,
       13,  155,  154,  152,  152,    0,    0,  142,  137,  140,
        0,  135,    0,   16,  147,  146,  145,  144,  143,  132,
      133,  125,  131,  127,  126,  129,   18,  122,  121,   44,
       34,   38,   39,  119,  163,    0,    0,   48,  123,   40,
       50,  114,  115,   51,  120,  112,  120,  108,    0,  112,
      104,   93,   74,   68,   62,   64,   64,   52,   61,   45,
       54,   71,   57,   70,   61,   62,   67,   14,  163,   84,
       89,   94,   99,  104,   11,    6,  109,  114,  118,  123

    } ;

static const short int yy_def[101] =
    {   0,
       90,   90,   91,   91,   92,   92,   93,   93,   89,   89,
       89,   94,   95,   96,   97,   89,   89,   89,   89,   98,
       98,   89,   89,   94,   89,   95,   96,   96,   96,   96,
       97,   89,   98,   98,   89,   89,   89,   89,   89,   96,
       96,   96,   89,   96,   96,   96,   89,   96,   96,   99,
       89,   89,   96,   96,   89,  100,   96,   89,   89,   89,
       89,   96,   89,   89,   89,   96,   89,   89,   96,   89,
       89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
       89,   89,   89,   89,   89,   89,   89,   89,    0,   89,
       89,   89,   89,   89,   89,   89,   89,   89,   89,   89

    } ;

static const short int yy_nxt[186] =
    {   0,
       10,   10,   11,   12,   10,   16,   14,   16,   27,   17,
       21,   17,   21,   26,   34,   88,   28,   34,   29,   51,
       10,   10,   10,   10,   11,   12,   10,   30,   14,   22,
       23,   22,   23,   35,   36,   51,   35,   36,   52,   58,
       60,   60,   10,   10,   55,   55,   80,   55,   56,   58,
       55,   64,   64,   80,   52,   80,   81,   59,   85,   61,
       61,   86,   85,   85,   55,   55,   82,   59,   88,   65,
       65,   84,   84,   82,   83,   82,   79,   78,   87,   77,
       76,   75,   87,   87,   13,   13,   13,   13,   13,   15,
       15,   15,   15,   15,   18,   18,   18,   18,   18,   20,

       20,   20,   20,   20,   24,   24,   24,   24,   24,   31,
       74,   31,   73,   31,   33,   33,   33,   33,   57,   72,
       57,   57,   57,   55,   71,   55,   55,   55,   70,   69,
       68,   67,   66,   63,   62,   54,   53,   50,   49,   48,
       47,   46,   45,   44,   39,   38,   37,   38,   37,   43,
       42,   41,   40,   39,   25,   38,   37,   32,   25,   89,
       19,   19,    9,   89,   89,   89,   89,   89,   89,   89,
       89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
       89,   89,   89,   89,   89
    } ;

static const short int yy_chk[186] =
    {   0,
        1,    1,    1,    1,    1,    3,    1,    4,   96,    3,
        7,    4,    8,   95,   21,   88,   14,   34,   14,   47,
        1,    1,    2,    2,    2,    2,    2,   14,    2,    7,
        7,    8,    8,   21,   21,   51,   34,   34,   47,   52,
       53,   60,    2,    2,   50,   50,   80,   50,   50,   58,
       50,   61,   64,   78,   51,   81,   78,   52,   83,   53,
       60,   83,   85,   86,   50,   50,   80,   58,   87,   61,
       64,   84,   82,   78,   79,   81,   77,   76,   83,   75,
       74,   73,   85,   86,   90,   90,   90,   90,   90,   91,
       91,   91,   91,   91,   92,   92,   92,   92,   92,   93,

       93,   93,   93,   93,   94,   94,   94,   94,   94,   97,
       72,   97,   71,   97,   98,   98,   98,   98,   99,   70,
       99,   99,   99,  100,   68,  100,  100,  100,   67,   66,
       65,   63,   62,   59,   54,   49,   48,   46,   45,   44,
       43,   42,   41,   40,   39,   38,   37,   36,   35,   32,
       30,   29,   28,   25,   24,   23,   22,   17,   12,    9,
        6,    5,   89,   89,   89,   89,   89,   89,   89,   89,
       89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
       89,   89,   89,   89,   89
    } ;

static yy_state_type yy_last_accepting_state;
static YY_CHAR *yy_last_accepting_cpos;

/* the intent behind this definition is that it'll catch
 * any uses of REJECT which flex missed
 */
#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0

/* these variables are all declared out here so that section 3 code can
 * manipulate them
 */
/* points to current character in buffer */
static YY_CHAR *yy_c_buf_p = (YY_CHAR *) 0;
static int yy_init = 1;		/* whether we need to initialize */
static int yy_start = 0;	/* start state number */

/* flag which is used to allow yywrap()'s to do buffer switches
 * instead of setting up a fresh yyin.  A bit of a hack ...
 */
static int yy_did_buffer_switch_on_eof;

static yy_state_type yy_get_previous_state YY_PROTO(( void ));
static yy_state_type yy_try_NUL_trans YY_PROTO(( yy_state_type current_state ));
static int yy_get_next_buffer YY_PROTO(( void ));
static void yyunput YY_PROTO(( YY_CHAR c, YY_CHAR *buf_ptr ));
void yyrestart YY_PROTO(( FILE *input_file ));
void yy_switch_to_buffer YY_PROTO(( YY_BUFFER_STATE new_buffer ));
void yy_load_buffer_state YY_PROTO(( void ));
YY_BUFFER_STATE yy_create_buffer YY_PROTO(( FILE *file, int size ));
void yy_delete_buffer YY_PROTO(( YY_BUFFER_STATE b ));
void yy_init_buffer YY_PROTO(( YY_BUFFER_STATE b, FILE *file ));

#define yy_new_buffer yy_create_buffer

#ifdef __cplusplus
static int yyinput YY_PROTO(( void ));
#else
static int input YY_PROTO(( void ));
#endif

YY_DECL
    {
    register yy_state_type yy_current_state;
    register YY_CHAR *yy_cp, *yy_bp;
    register int yy_act;


                /* START OF RULES SECTION */

               /*--------------- expressions and actions -------------------*/

                /* TeX comment */

    if ( yy_init )
	{
	YY_USER_INIT;

	if ( ! yy_start )
	    yy_start = 1;	/* first start state */

	if ( ! yyin )
	    yyin = stdin;

	if ( ! yyout )
	    yyout = stdout;

	if ( yy_current_buffer )
	    yy_init_buffer( yy_current_buffer, yyin );
	else
	    yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE );

	yy_load_buffer_state();

	yy_init = 0;
	}

    while ( 1 )		/* loops until end-of-file is reached */
	{
	yy_cp = yy_c_buf_p;

	/* support of yytext */
	*yy_cp = yy_hold_char;

	/* yy_bp points to the position in yy_ch_buf of the start of the
	 * current run.
	 */
	yy_bp = yy_cp;

	yy_current_state = yy_start;
yy_match:
	do
	    {
	    register YY_CHAR yy_c = yy_ec[*yy_cp];
	    if ( yy_accept[yy_current_state] )
		{
		yy_last_accepting_state = yy_current_state;
		yy_last_accepting_cpos = yy_cp;
		}
	    while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = yy_def[yy_current_state];
		if ( yy_current_state >= 90 )
		    yy_c = yy_meta[yy_c];
		}
	    yy_current_state = yy_nxt[yy_base[yy_current_state] + yy_c];
	    ++yy_cp;
	    }
	while ( yy_current_state != 89 );
	yy_cp = yy_last_accepting_cpos;
	yy_current_state = yy_last_accepting_state;

yy_find_action:
	yy_act = yy_accept[yy_current_state];

	YY_DO_BEFORE_ACTION;
	YY_USER_ACTION;

do_action:	/* this label is used only to access EOF actions */


	switch ( yy_act )
	    {
	    case 0: /* must backtrack */
	    /* undo the effects of YY_DO_BEFORE_ACTION */
	    *yy_cp = yy_hold_char;
	    yy_cp = yy_last_accepting_cpos;
	    yy_current_state = yy_last_accepting_state;
	    goto yy_find_action;

case 1:
# line 170 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 lineno++;
                 linebuf[0] = MY_EOS;
                 linlen = 0;
                 fprintf(filout, "%s", yytext);
               }
	YY_BREAK
              /* verbatims */
              /* \begin{verbatim} */
case 2:
# line 183 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 BEGIN VERBATIM_STATE;
                 fprintf(filout, "%s", yytext);
               }
	YY_BREAK
                      /* newline in verbatim */
case 3:
# line 192 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 lineno++;
                 linebuf[0] = MY_EOS;
                 linlen = 0;
                 fprintf(filout, "%s", yytext); 
               }
	YY_BREAK
                      /* backslash in verbatim */
case 4:
# line 203 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 fprintf(filout, "%s", yytext); 
               }
	YY_BREAK
                   /* all except backslash and newline */
case 5:
# line 211 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 fprintf(filout, "%s", yytext); 
               }
	YY_BREAK
                      /* \end{verbatim} */
case 6:
# line 219 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 BEGIN 0;
                 fprintf(filout, "%s", yytext); 
               }
	YY_BREAK
                     /* \verb (and its trailing char) */
case 7:
# line 229 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 BEGIN VERB_STATE;
                 fprintf(filout, "%s", yytext); 
                 verb_char = yytext[yyleng - 1];
               }
	YY_BREAK
                    /* newline inside \verb */
case 8:
# line 239 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 lineno++;
                 linebuf[0] = MY_EOS;
                 linlen = 0;
                 fprintf(filout, "%s", yytext); 
               }
	YY_BREAK
                    /* chars inside \verb */
case 9:
# line 250 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 if (verb_char == yytext[0]) {
                   BEGIN 0;
                 }
                 fprintf(filout, "%s", yytext); 
               }
	YY_BREAK
                /*-------- endinput command ------*/
case 10:
# line 263 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "\nlex DEBUG: End of input %s\n", name_stack[depth]);
                   fflush(filerr);
                 }
                 if (depth > 0) {
                   end_a_file();
                   yy_switch_to_buffer(buffer_stack[depth]);
                 }
                 else {
                   return(EOF);
                 }
	}
	YY_BREAK
               /*--------- includes? -------------*/
case 11:
# line 279 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 lex_result = lookup(yytext);
                 if (DEBUG) {
                   fprintf(filerr, " (lookup=%d) ", lex_result);
                   fflush(filerr);
                 }
                 if (lex_result >= 0) {           /* found an include */
                   fprintf(filout, "%%%s", yytext);
                   BEGIN IN_STATE;
                 }
                 else {
                   fprintf(filout, "%s", yytext);
                 }
               }
	YY_BREAK
                     /* left brace */
case 12:
# line 299 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 fprintf(filout, "%s", yytext);
	}
	YY_BREAK
                     /* file name */
case 13:
# line 309 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 strcpy(filnam, yytext);
                 fprintf(filout, "%s", yytext);
	}
	YY_BREAK
                     /* close brace */
case 14:
# line 319 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 fprintf(filout, "%s\n", yytext);
                 start_a_file(filnam);
                 yy_switch_to_buffer(buffer_stack[depth]);
                 if (DEBUG) {
                   fprintf(filerr, "\nlex DEBUG: Start of file: %s\n", name_stack[depth]);
                   fflush(filerr);
                 }
                 BEGIN 0;
	}
	YY_BREAK
               /*------------- uninteresting stuff -----------------*/
                     /* newline */
case 15:
# line 337 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 lineno++;
                 linebuf[0] = MY_EOS;
                 linlen = 0;
                 fprintf(filout, "%s", yytext); 
	}
	YY_BREAK
                    /* alphabetic string */
case 16:
# line 349 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 fprintf(filout, "%s", yytext); 
	}
	YY_BREAK
                   /* End Of File */
case YY_STATE_EOF(INITIAL):
case YY_STATE_EOF(VERBATIM_STATE):
case YY_STATE_EOF(VERB_STATE):
case YY_STATE_EOF(IN_STATE):
# line 358 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "\nlex DEBUG: End of file %s\n", name_stack[depth]);
                   fflush(filerr);
                 }
                 if (depth > 0) {
                   end_a_file();
                   yy_switch_to_buffer(buffer_stack[depth]);
                 }
                 else {
                   return(EOF);
                 }
	}
	YY_BREAK
                   /* anything else */
case 18:
# line 373 "flatten.lx"
{ catl(yyleng, yytext);
                 if (DEBUG) {
                   fprintf(filerr, "%s", yytext);
                   fflush(filerr);
                 }
                 fprintf(filout, "%s", yytext); 
	}
	YY_BREAK
               /* END OF RULES SECTION */
case 19:
# line 382 "flatten.lx"
ECHO;
	YY_BREAK

	    case YY_END_OF_BUFFER:
		{
		/* amount of text matched not including the EOB char */
		int yy_amount_of_matched_text = yy_cp - yytext - 1;

		/* undo the effects of YY_DO_BEFORE_ACTION */
		*yy_cp = yy_hold_char;

		/* note that here we test for yy_c_buf_p "<=" to the position
		 * of the first EOB in the buffer, since yy_c_buf_p will
		 * already have been incremented past the NUL character
		 * (since all states make transitions on EOB to the end-
		 * of-buffer state).  Contrast this with the test in yyinput().
		 */
		if ( yy_c_buf_p <= &yy_current_buffer->yy_ch_buf[yy_n_chars] )
		    /* this was really a NUL */
		    {
		    yy_state_type yy_next_state;

		    yy_c_buf_p = yytext + yy_amount_of_matched_text;

		    yy_current_state = yy_get_previous_state();

		    /* okay, we're now positioned to make the
		     * NUL transition.  We couldn't have
		     * yy_get_previous_state() go ahead and do it
		     * for us because it doesn't know how to deal
		     * with the possibility of jamming (and we
		     * don't want to build jamming into it because
		     * then it will run more slowly)
		     */

		    yy_next_state = yy_try_NUL_trans( yy_current_state );

		    yy_bp = yytext + YY_MORE_ADJ;

		    if ( yy_next_state )
			{
			/* consume the NUL */
			yy_cp = ++yy_c_buf_p;
			yy_current_state = yy_next_state;
			goto yy_match;
			}

		    else
			{
			    yy_cp = yy_last_accepting_cpos;
			    yy_current_state = yy_last_accepting_state;
			goto yy_find_action;
			}
		    }

		else switch ( yy_get_next_buffer() )
		    {
		    case EOB_ACT_END_OF_FILE:
			{
			yy_did_buffer_switch_on_eof = 0;

			if ( yywrap() )
			    {
			    /* note: because we've taken care in
			     * yy_get_next_buffer() to have set up yytext,
			     * we can now set up yy_c_buf_p so that if some
			     * total hoser (like flex itself) wants
			     * to call the scanner after we return the
			     * YY_NULL, it'll still work - another YY_NULL
			     * will get returned.
			     */
			    yy_c_buf_p = yytext + YY_MORE_ADJ;

			    yy_act = YY_STATE_EOF((yy_start - 1) / 2);
			    goto do_action;
			    }

			else
			    {
			    if ( ! yy_did_buffer_switch_on_eof )
				YY_NEW_FILE;
			    }
			}
			break;

		    case EOB_ACT_CONTINUE_SCAN:
			yy_c_buf_p = yytext + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state();

			yy_cp = yy_c_buf_p;
			yy_bp = yytext + YY_MORE_ADJ;
			goto yy_match;

		    case EOB_ACT_LAST_MATCH:
			yy_c_buf_p =
			    &yy_current_buffer->yy_ch_buf[yy_n_chars];

			yy_current_state = yy_get_previous_state();

			yy_cp = yy_c_buf_p;
			yy_bp = yytext + YY_MORE_ADJ;
			goto yy_find_action;
		    }
		break;
		}

	    default:
#ifdef FLEX_DEBUG
		printf( "action # %d\n", yy_act );
#endif
		YY_FATAL_ERROR(
			"fatal flex scanner internal error--no action found" );
	    }
	}
    }


/* yy_get_next_buffer - try to read in a new buffer
 *
 * synopsis
 *     int yy_get_next_buffer();
 *     
 * returns a code representing an action
 *     EOB_ACT_LAST_MATCH - 
 *     EOB_ACT_CONTINUE_SCAN - continue scanning from current position
 *     EOB_ACT_END_OF_FILE - end of file
 */

static int yy_get_next_buffer()

    {
    register YY_CHAR *dest = yy_current_buffer->yy_ch_buf;
    register YY_CHAR *source = yytext - 1; /* copy prev. char, too */
    register int number_to_move, i;
    int ret_val;

    if ( yy_c_buf_p > &yy_current_buffer->yy_ch_buf[yy_n_chars + 1] )
	YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

    /* try to read more data */

    /* first move last chars to start of buffer */
    number_to_move = yy_c_buf_p - yytext;

    for ( i = 0; i < number_to_move; ++i )
	*(dest++) = *(source++);

    if ( yy_current_buffer->yy_eof_status != EOF_NOT_SEEN )
	/* don't do the read, it's not guaranteed to return an EOF,
	 * just force an EOF
	 */
	yy_n_chars = 0;

    else
	{
	int num_to_read = yy_current_buffer->yy_buf_size - number_to_move - 1;

	if ( num_to_read > YY_READ_BUF_SIZE )
	    num_to_read = YY_READ_BUF_SIZE;

	else if ( num_to_read <= 0 )
	    YY_FATAL_ERROR( "fatal error - scanner input buffer overflow" );

	/* read in more data */
	YY_INPUT( (&yy_current_buffer->yy_ch_buf[number_to_move]),
		  yy_n_chars, num_to_read );
	}

    if ( yy_n_chars == 0 )
	{
	if ( number_to_move == 1 )
	    {
	    ret_val = EOB_ACT_END_OF_FILE;
	    yy_current_buffer->yy_eof_status = EOF_DONE;
	    }

	else
	    {
	    ret_val = EOB_ACT_LAST_MATCH;
	    yy_current_buffer->yy_eof_status = EOF_PENDING;
	    }
	}

    else
	ret_val = EOB_ACT_CONTINUE_SCAN;

    yy_n_chars += number_to_move;
    yy_current_buffer->yy_ch_buf[yy_n_c