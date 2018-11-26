/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include "parser.h"
#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>
extern int num_lines;
int ntemp = 0;
int mquad = 0;
int yyerror(char *);
int yylex();
char * newtemp (void);
void emit(char *op, char *arg1, char *arg2, char *res);
struct Stack* stack;

#line 81 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONTINUE = 262,
    DO = 263,
    DEFAULT = 264,
    CONST = 265,
    ELSE = 266,
    ENUM = 267,
    EXTERN = 268,
    FOR = 269,
    IF = 270,
    GOTO = 271,
    FLOAT = 272,
    LONG = 273,
    REGISTER = 274,
    RETURN = 275,
    SIGNED = 276,
    STATIC = 277,
    SIZEOF = 278,
    SHORT = 279,
    STRUCT = 280,
    SWITCH = 281,
    TYPEDEF = 282,
    UNION = 283,
    VOID = 284,
    WHILE = 285,
    VOLATILE = 286,
    UNSIGNED = 287,
    REPEAT = 288,
    PRINT = 289,
    READINT = 290,
    READDOUBLE = 291,
    DOUBLE = 292,
    INT = 293,
    BOOLEAN = 294,
    IDENT = 295,
    INTCONST = 296,
    DOUBLECONST = 297,
    BOOLEANCONST = 298,
    OR = 299,
    AND = 300,
    NOTEQUAL = 301,
    EQUALEQUAL = 302,
    LESSOREQUAL = 303,
    GREATEROREQUAL = 304,
    UMINUS = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:355  */

  struct example typeexpr;
  char t; 

#line 177 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 194 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,     2,     2,    57,     2,     2,
      63,    64,    55,    53,    65,    54,     2,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    60,
      50,    44,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    62,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    45,
      46,    47,    48,    51,    52,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    42,    43,    44,    45,    49,    51,    65,
      66,    67,    70,    74,    78,    90,   104,   104,   108,   108,
     108,   110,   111,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   115,   116,   117,   118,   121,
     122,   124,   125,   127,   129,   131,   132,   133,   135,   137,
     137,   139,   140,   142,   147,   159,   164,   167,   171,   175,
     180,   185,   191,   196,   201,   206,   211,   216,   218,   221,
     223,   235,   238,   243,   248,   257,   258,   259
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR",
  "CONTINUE", "DO", "DEFAULT", "CONST", "ELSE", "ENUM", "EXTERN", "FOR",
  "IF", "GOTO", "FLOAT", "LONG", "REGISTER", "RETURN", "SIGNED", "STATIC",
  "SIZEOF", "SHORT", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "VOID",
  "WHILE", "VOLATILE", "UNSIGNED", "REPEAT", "PRINT", "READINT",
  "READDOUBLE", "DOUBLE", "INT", "BOOLEAN", "IDENT", "INTCONST",
  "DOUBLECONST", "BOOLEANCONST", "'='", "OR", "AND", "NOTEQUAL",
  "EQUALEQUAL", "'>'", "'<'", "LESSOREQUAL", "GREATEROREQUAL", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "';'", "'{'", "'}'", "'('",
  "')'", "','", "$accept", "prog", "decll", "varDec", "var", "tipo",
  "openScope", "closeScope", "funcDec", "varDecL", "formals", "instrBlock",
  "instr", "instrAssign", "instrIf", "instrWhile", "instrRepeat",
  "instrReturn", "instrPrint", "call", "actual", "exprL", "expr",
  "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    61,   299,   300,   301,   302,    62,
      60,   303,   304,    43,    45,    42,    47,    37,    33,   305,
      59,   123,   125,    40,    41,    44
};
# endif

#define YYPACT_NINF -54

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-54)))

#define YYTABLE_NINF -70

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      67,   -37,   -54,   -54,   -54,    26,    67,   -54,   -12,   -11,
     -54,    -1,   -54,   -54,   -54,   -54,    12,   102,   102,   -54,
     -54,    34,   -14,    16,    37,   -54,    32,    42,    42,   -54,
     -54,   179,   179,    35,   -21,    49,    42,    79,    80,    95,
     -31,   -54,   -54,   -54,   -21,   -21,   -21,   -54,   -12,   -14,
     144,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   219,    96,
     198,   -54,   144,   -21,    97,   -54,   340,   -21,   179,    18,
     -21,   -21,   -21,   -21,   -54,   -54,   240,   -54,   -54,   179,
     -54,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -54,   -47,   372,   -54,    13,
     144,    58,    73,   260,   280,   300,   103,   115,   -26,   356,
      98,    96,   -54,   372,    36,   383,   116,   116,    11,    11,
      11,    11,    62,    62,   -54,   -54,   -54,    42,    42,   113,
     128,   129,   130,   -54,   -54,   -54,   -54,   -54,   -54,   131,
     179,   179,   -21,   -54,   -54,   -54,   -54,   144,   144,   320,
     181,   -54,   -54,    42,   179,   144,   -54
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     9,    10,    11,     0,     2,     4,     0,     0,
       6,     0,     1,     3,     5,     7,     8,    20,    20,    19,
      17,     0,    18,     0,     0,     8,     0,     0,     0,    16,
      12,    42,    42,     0,     0,     0,     0,     0,     0,     0,
      54,    75,    76,    77,     0,     0,     0,    34,    17,    23,
       0,    22,    24,    25,    26,    27,    28,    29,    33,    31,
      32,    68,     0,     0,    54,    69,     0,     0,    42,     0,
       0,     0,    50,    50,    67,    58,     0,    13,    15,    30,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,    52,    44,     0,
       0,     0,     0,    52,     0,     0,    69,     0,     0,    52,
       0,    49,    71,    51,    59,    60,    61,    62,    64,    66,
      65,    63,    53,    55,    72,    73,    74,     0,     0,     0,
       0,     0,     0,    56,    57,    38,    37,    36,    35,     0,
      42,    42,     0,    45,    47,    46,    48,     0,     0,     0,
      39,    41,    43,     0,    42,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -54,   -54,   -54,    24,    10,    25,   -28,   -53,   187,    -6,
     177,   -30,   -25,   -54,   -54,   -54,   -54,   -54,   -54,   -27,
     123,   -23,    63,   -54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,    47,    48,    21,    31,    78,    10,    49,
      23,    79,    80,    52,    53,    54,    55,    56,    57,    65,
     107,    59,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    50,    62,    11,    58,    58,    51,    51,    68,    95,
       8,    22,    22,    72,    38,    39,     8,   127,    81,    64,
      41,    42,    43,    58,     7,     9,    12,    20,    20,    16,
      13,     9,    73,    44,   137,    58,    29,    45,   100,    81,
      96,    58,    46,    51,    99,   106,   102,   129,    15,   108,
     111,    26,    58,    38,    39,     2,     3,     4,    64,    41,
      42,    43,    17,   101,    90,    91,    92,    93,    94,     2,
       3,     4,    44,    58,    25,    18,    45,   128,    81,    20,
      27,    46,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,   150,   151,     1,    66,    63,   140,
     141,    28,   156,    30,     2,     3,     4,    74,    75,    76,
     147,   148,    67,    58,    58,    51,    51,    92,    93,    94,
      58,    58,   130,    26,   155,   154,    97,    58,    58,    51,
      97,    19,   103,   104,   105,   109,    97,   131,    81,     2,
       3,     4,    69,    70,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    71,    33,
      73,    81,   139,   135,    34,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    35,   136,   142,    36,    37,    38,
      39,     2,     3,     4,    40,    41,    42,    43,   143,   144,
     145,   146,   153,    14,    33,    24,   110,     0,    44,    34,
       0,     0,    45,     0,     0,   149,    77,    46,     0,    35,
       0,     0,    36,    37,    38,    39,     2,     3,     4,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     0,     0,     0,    45,     0,     0,
       0,     0,    46,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,     0,     0,   -52,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -69,     0,     0,     0,
       0,     0,     0,     0,   -69,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,     0,   112,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,     0,   132,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,     0,   133,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,     0,   134,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,     0,     0,   152,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
      98,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,   138,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94
};

static const yytype_int16 yycheck[] =
{
      28,    31,    32,    40,    31,    32,    31,    32,    36,    62,
       0,    17,    18,    44,    35,    36,     6,    64,    65,    40,
      41,    42,    43,    50,     0,     0,     0,    17,    18,    40,
       6,     6,    63,    54,    60,    62,    26,    58,    68,    65,
      63,    68,    63,    68,    67,    72,    69,   100,    60,    72,
      73,    65,    79,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    63,    69,    53,    54,    55,    56,    57,    37,
      38,    39,    54,   100,    40,    63,    58,    64,    65,    69,
      64,    63,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   147,   148,    29,    34,    63,   127,
     128,    64,   155,    61,    37,    38,    39,    44,    45,    46,
     140,   141,    63,   140,   141,   140,   141,    55,    56,    57,
     147,   148,    64,    65,   154,   153,    63,   154,   155,   154,
      67,    29,    69,    70,    71,    72,    73,    64,    65,    37,
      38,    39,    63,    63,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    63,    15,
      63,    65,    64,    60,    20,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    30,    60,    63,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    60,    60,
      60,    60,    11,     6,    15,    18,    73,    -1,    54,    20,
      -1,    -1,    58,    -1,    -1,   142,    62,    63,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    63,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      60,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    60,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    37,    38,    39,    67,    68,    69,    70,    71,
      74,    40,     0,    69,    74,    60,    40,    63,    63,    29,
      70,    71,    75,    76,    76,    40,    65,    64,    64,    70,
      61,    72,    72,    15,    20,    30,    33,    34,    35,    36,
      40,    41,    42,    43,    54,    58,    63,    69,    70,    75,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    87,
      88,    89,    77,    63,    40,    85,    88,    63,    72,    63,
      63,    63,    44,    63,    88,    88,    88,    62,    73,    77,
      78,    65,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    73,    87,    88,    60,    87,
      77,    75,    87,    88,    88,    88,    85,    86,    87,    88,
      86,    87,    64,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    64,    64,    73,
      64,    64,    64,    64,    64,    60,    60,    60,    60,    64,
      72,    72,    63,    60,    60,    60,    60,    77,    77,    88,
      73,    73,    64,    11,    72,    77,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    68,    68,    69,    70,    71,
      71,    71,    72,    73,    74,    74,    75,    75,    76,    76,
      76,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    81,    81,    82,    83,    84,    84,    84,    85,    86,
      86,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     8,     8,     3,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     7,
      11,     7,     0,     7,     3,     5,     5,     5,     5,     1,
       0,     3,     1,     3,     1,     3,     4,     4,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       1,     3,     3,     3,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 43 "parser.y" /* yacc.c:1646  */
    {}
#line 1440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 45 "parser.y" /* yacc.c:1646  */
    {}
#line 1446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "parser.y" /* yacc.c:1646  */
    { if(!find((yyvsp[0].typeexpr).place))
                              {
                                place = lookup((yyvsp[0].typeexpr).place); 
                                place -> type = (yyvsp[-1].t);
                              }
                              else
                              {
                                printf("Duplicated declaration: %s\n", (yyvsp[0].typeexpr).place);
                                yyerror("Duplicated declaration");
                                exit(0);
                              } 
                            }
#line 1463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "parser.y" /* yacc.c:1646  */
    {(yyval.t) = 'D';}
#line 1469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "parser.y" /* yacc.c:1646  */
    {(yyval.t) = 'I';}
#line 1475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 67 "parser.y" /* yacc.c:1646  */
    {(yyval.t) = 'B';}
#line 1481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "parser.y" /* yacc.c:1646  */
    {struct symbol symtab[NHASH];
		 push(stack, symtab);
		}
#line 1489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "parser.y" /* yacc.c:1646  */
    {
		  pop(stack);
		 }
#line 1497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 78 "parser.y" /* yacc.c:1646  */
    { if(!find((yyvsp[-6].typeexpr).place))
                              {
                                place = lookup((yyvsp[-6].typeexpr).place); 
                                place -> type = (yyvsp[-7].t);
                              }
                              else
                              {
                                printf("Duplicated declaration: %s\n", (yyvsp[-6].typeexpr).place);
                                yyerror("Duplicated declaration");
                                exit(0);
                              } 
                            }
#line 1514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 90 "parser.y" /* yacc.c:1646  */
    { if(!find((yyvsp[-6].typeexpr).place))
                              {
                                place = lookup((yyvsp[-6].typeexpr).place); 
                                place -> type = VOID;
                              }
                              else
                              {
                                printf("Duplicated declaration: %s\n", (yyvsp[-6].typeexpr).place);
                                yyerror("Duplicated declaration");
                                exit(0);
                              } 
                            }
#line 1531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 115 "parser.y" /* yacc.c:1646  */
    {emit("=", (yyvsp[-1].typeexpr).place, "" , (yyvsp[-3].typeexpr).place);}
#line 1537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 118 "parser.y" /* yacc.c:1646  */
    {emit("=", (yyvsp[-1].typeexpr).place, "" , (yyvsp[-3].typeexpr).place);}
#line 1543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 121 "parser.y" /* yacc.c:1646  */
    {}
#line 1549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 142 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = (yyvsp[-2].typeexpr).type;
                        else                   yyerror("Incompatible types");
                        (yyval.typeexpr).place = strdup(newtemp()); 
                        emit("+", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1558 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 147 "parser.y" /* yacc.c:1646  */
    {if(find((yyvsp[0].typeexpr).place)) {
                                place=lookup((yyvsp[0].typeexpr).place); 
                                (yyval.typeexpr).type=place->type;
                                (yyval.typeexpr).place=(yyvsp[0].typeexpr).place;
                             }
                             else {
                                printf("Identifier not found: %s\n", (yyvsp[0].typeexpr).place); 
                                yyerror("Variable was never declared");
                                exit(0);
                             }
                            }
#line 1574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 159 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = (yyvsp[-2].typeexpr).type;
                        else                   yyerror("Incompatible types");
                        (yyval.typeexpr).place = strdup(newtemp()); 
                        emit("-", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 164 "parser.y" /* yacc.c:1646  */
    {      (yyval.typeexpr).type = 'I';
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              }
#line 1591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 167 "parser.y" /* yacc.c:1646  */
    {      (yyval.typeexpr).type = 'D';
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              }
#line 1599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.typeexpr).type = (yyvsp[0].typeexpr).type;
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("not", (yyvsp[0].typeexpr).place, "", (yyval.typeexpr).place);}
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 175 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = (yyvsp[-2].typeexpr).type;
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("or", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 180 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = (yyvsp[-2].typeexpr).type;
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("and", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 185 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = 'B';
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("!=", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 191 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = 'B';
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("==", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 196 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = 'B';
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit(">=", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 201 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = 'B';
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit(">", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 206 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = 'B';
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("<=", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 211 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = 'B';
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("<", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 216 "parser.y" /* yacc.c:1646  */
    {}
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyval.typeexpr).type = (yyvsp[0].typeexpr).type;
                  (yyval.typeexpr).place = strdup(newtemp()); }
#line 1692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 223 "parser.y" /* yacc.c:1646  */
    {if(find((yyvsp[0].typeexpr).place)) {
                                place=lookup((yyvsp[0].typeexpr).place); 
                                (yyval.typeexpr).type=place->type;
                                (yyval.typeexpr).place=(yyvsp[0].typeexpr).place;
                             }
                             else {
                                printf("Identifier not found: %s\n", (yyvsp[0].typeexpr).place); 
                                yyerror("Variable was never declared");
                                exit(0);
                             }
              }
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval.typeexpr).type = (yyvsp[-1].typeexpr).type;
                              (yyval.typeexpr).place = (yyvsp[-1].typeexpr).place;}
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 238 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = (yyvsp[-2].typeexpr).type;
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("*", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 243 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = (yyvsp[-2].typeexpr).type;
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("/", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 248 "parser.y" /* yacc.c:1646  */
    { if((yyvsp[-2].typeexpr).type == (yyvsp[0].typeexpr).type) (yyval.typeexpr).type = (yyvsp[-2].typeexpr).type;
                              else                   yyerror("Incompatible types");
                              (yyval.typeexpr).place = strdup(newtemp()); 
                              emit("%", (yyvsp[-2].typeexpr).place, (yyvsp[0].typeexpr).place, (yyval.typeexpr).place);}
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval.typeexpr).type = 'I'; (yyval.typeexpr).place=(yyvsp[0].typeexpr).place;}
#line 1748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 258 "parser.y" /* yacc.c:1646  */
    {(yyval.typeexpr).type = 'D'; (yyval.typeexpr).place=(yyvsp[0].typeexpr).place;}
#line 1754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 259 "parser.y" /* yacc.c:1646  */
    {(yyval.typeexpr).type = 'B'; (yyval.typeexpr).place=(yyvsp[0].typeexpr).place;}
#line 1760 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1764 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 262 "parser.y" /* yacc.c:1906  */


static unsigned symhash(char *sym){
  unsigned int hash = 0;
  unsigned c;

  while(c = *sym++) hash = hash*9 ^ c;

  return hash;
}

int nnew, nold;
int nprobe;



struct symbol * lookupstack(char* sym){
  int toptop = stack->top;
  while(toptop>=0){

    struct symbol *sp = &stack->array[toptop][symhash(sym)%NHASH];
    int scount = NHASH;   /* how many have we looked at */

    while(--scount >= 0) {
      nprobe++;
      if(sp->name && !strcmp(sp->name, sym)) { nold++; return sp; }

      if(!sp->name) {   /* new entry */
        nnew++;
        sp->name = strdup(sym);
        return sp;
      }

      if(++sp >= symtab+NHASH) sp = symtab; /* try the next entry */
    }
    toptop--;
  }
  fputs("Symbol table overflow\n", stderr);
  abort(); /* tried them all, table is full */
}

struct symbol * lookup(char* sym){
  struct symbol *sp = &stack->array[stack->top][symhash(sym)%NHASH];
  int scount = NHASH;   /* how many have we looked at */

  while(--scount >= 0) {
    nprobe++;
    if(sp->name && !strcmp(sp->name, sym)) { nold++; return sp; }

    if(!sp->name) {   /* new entry */
      nnew++;
      sp->name = strdup(sym);
      return sp;
    }

    if(++sp >= symtab+NHASH) sp = symtab; /* try the next entry */
  }
  fputs("Symbol table overflow\n", stderr);
  abort(); /* tried them all, table is full */

}

char find (char* sym){
  int toptop = stack->top;
  while(toptop>=0){
    struct symbol *sp = &stack->array[toptop][symhash(sym)%NHASH];
    int scount = NHASH;   /* how many have we looked at */

    while(--scount >= 0){
      if(sp->name && !strcmp(sp->name, sym)) return 1;
    }
    
    toptop--;
  }
  return 0;
}

char * newtemp (void){
  char temp[10];
  sprintf(temp,"t%d",ntemp++);
  return strdup(temp);
}

void emit(char *op, char *arg1, char *arg2, char *res){
  quadtab[mquad].op=strdup(op);
  quadtab[mquad].arg1=strdup(arg1);
  quadtab[mquad].arg2=strdup(arg2);
  quadtab[mquad].res=strdup(res);
  mquad++;
}

struct Stack* createStack(unsigned capacity) { 
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array =  (struct symbol *)  malloc(stack->capacity * 100 * sizeof(struct symbol)); 
    return stack; 
} 

int isFull(struct Stack* stack) 
{   return stack->top == stack->capacity - 1; } 
  
// Stack is empty when top is equal to -1 
int isEmpty(struct Stack* stack) 
{   return stack->top == -1;  } 
  
// Function to add an item to stack.  It increases top by 1 
void push(struct Stack* stack, struct symbol* item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
    //printf("%d pushed to stack\n", item); 
} 
  
// Function to remove an item from stack.  It decreases top by 1 
void pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return; 
    stack->top--;
    return;
}

int main(int argc, char **argv)
{
  if ((argc > 1) && (freopen(argv[1], "r", stdin) == NULL))
  {
    printf("Cannot open file %s", argv[1]);
    exit( 1 );
  }
  stack = createStack(100);
	yyparse();
	printf("Accepted expression. \n");

  printf("Intermediate code: \n");
  for(int i=0;i<mquad;i++){
    printf("%s %s %s %s \n",quadtab[i].op, quadtab[i].arg1,quadtab[i].arg2, quadtab[i].res);
  }
}

int yyerror(char *s){
  fprintf(stderr,"Error: %s at line %d\n", s, num_lines);
  exit(0);
}

