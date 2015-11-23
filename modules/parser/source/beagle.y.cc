/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         beagle_parse
#define yylex           beagle_lex
#define yyerror         beagle_error
#define yydebug         beagle_debug
#define yynerrs         beagle_nerrs


/* Copy the first part of user declarations.  */

#line 73 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "beagle.y.hh".  */
#ifndef YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED
# define YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int beagle_debug;
#endif
/* "%code requires" blocks.  */
#line 15 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */



#include <fstream>
#include <iostream>
#include <sstream>
#include <stack>
#include "Node.hh"


/*
 * The parser need to know about the 'yyscan_t' type,
 * but the generated header by Flex don't provide this information.
 */
typedef void *yyscan_t;


typedef struct
{
	yyscan_t scanner;

	std::stack<beagle::Node*> stack;

} parser_context_t;


/**
 * Get the current column in the lexer scanner.
 *
 * For some reason this prototype is not generated in the Flex
 * header file, so we include it here.
 */
int beagle_get_column  (yyscan_t yyscanner);


#line 139 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_ABSTRACT = 258,
    TOK_BOOLEAN = 259,
    TOK_BREAK = 260,
    TOK_CASE = 261,
    TOK_CATCH = 262,
    TOK_CHAR = 263,
    TOK_CLASS = 264,
    TOK_CONST = 265,
    TOK_DEFAULT = 266,
    TOK_DO = 267,
    TOK_DOUBLE = 268,
    TOK_ELSE = 269,
    TOK_EXTENDS = 270,
    TOK_FINAL = 271,
    TOK_FINALLY = 272,
    TOK_FLOAT = 273,
    TOK_FOR = 274,
    TOK_GOTO = 275,
    TOK_IF = 276,
    TOK_IMPLEMENTS = 277,
    TOK_IMPORT = 278,
    TOK_INSTANCEOF = 279,
    TOK_INT = 280,
    TOK_INTERFACE = 281,
    TOK_LONG = 282,
    TOK_NATIVE = 283,
    TOK_NEW = 284,
    TOK_PACKAGE = 285,
    TOK_PRIVATE = 286,
    TOK_PROTECTED = 287,
    TOK_PUBLIC = 288,
    TOK_RETURN = 289,
    TOK_SUSPEND = 290,
    TOK_STATIC = 291,
    TOK_SUPER = 292,
    TOK_SWITCH = 293,
    TOK_SYNCHRONIZED = 294,
    TOK_THIS = 295,
    TOK_THROW = 296,
    TOK_THROWS = 297,
    TOK_VOID = 298,
    TOK_VOLATILE = 299,
    TOK_WHILE = 300,
    TOK_IDENT = 301,
    TOK_CONTINUE = 302,
    TOK_TRANSIENT = 303,
    TOK_TRY = 304,
    TOK_NULLLITERAL = 305,
    TOK_BOOLLITERAL = 306,
    TOK_INTLITERAL = 307,
    TOK_CHARLITERAL = 308,
    TOK_FLOATLITERAL = 309,
    TOK_STRINGLITERAL = 310,
    TOK_UINT8 = 311,
    TOK_UINT16 = 312,
    TOK_UINT32 = 313,
    TOK_UINT64 = 314,
    TOK_INT8 = 315,
    TOK_INT16 = 316,
    TOK_INT32 = 317,
    TOK_INT64 = 318,
    TOK_LP = 319,
    TOK_RP = 320,
    TOK_LC = 321,
    TOK_RC = 322,
    TOK_LB = 323,
    TOK_RB = 324,
    TOK_SM = 325,
    TOK_CM = 326,
    TOK_DOT = 327,
    TOK_ASN = 328,
    TOK_LT = 329,
    TOK_GT = 330,
    TOK_BANG = 331,
    TOK_TILDE = 332,
    TOK_QUEST = 333,
    TOK_COLON = 334,
    TOK_EQ = 335,
    TOK_NE = 336,
    TOK_LE = 337,
    TOK_GE = 338,
    TOK_ANDAND = 339,
    TOK_OROR = 340,
    TOK_INC = 341,
    TOK_DEC = 342,
    TOK_PLUS = 343,
    TOK_MINUS = 344,
    TOK_MUL = 345,
    TOK_DIV = 346,
    TOK_AND = 347,
    TOK_OR = 348,
    TOK_CARET = 349,
    TOK_MOD = 350,
    TOK_SHL = 351,
    TOK_SHR = 352,
    TOK_PLASN = 353,
    TOK_MIASN = 354,
    TOK_MUASN = 355,
    TOK_DIASN = 356,
    TOK_ANDASN = 357,
    TOK_ORASN = 358,
    TOK_CARETASN = 359,
    TOK_SLASN = 360,
    TOK_SRASN = 361,
    TOK_LSRASN = 362,
    TOK_MODASN = 363,
    TOK_BAD_TOKEN = 364,
    TOK_EOL = 365,
    TOK_AT = 366,
    TOK_VARARG = 367,
    TOK_INDENT = 368,
    TOK_DEDENT = 369
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 89 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */

	char* node;

#line 270 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 284 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 51 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:359  */


#include <iostream>
#include "beagle.l.hh"
#include "Node.hh"


void beagle_error(yyscan_t scanner, const char *msg)
{
	printf ("%s:%d:%d: error: %s\n", "String.bgl", beagle_get_lineno(scanner), beagle_get_column(scanner), msg);
    return;
}

#define scanner      parserContext->scanner
#define PUSH(x)      parserContext->stack.push((x))
#define POP()        parserContext->stack.pop()


#line 305 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1603

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  345
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  572

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   369

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   284,   284,   291,   292,   293,   294,   295,   296,   299,
     300,   303,   304,   307,   308,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   326,   327,   330,   331,
     335,   336,   339,   342,   345,   346,   347,   350,   351,   354,
     358,   362,   365,   365,   367,   367,   369,   369,   371,   372,
     375,   376,   379,   382,   383,   386,   389,   393,   394,   398,
     399,   403,   404,   408,   409,   412,   413,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   429,   432,   432,
     434,   434,   436,   436,   438,   441,   444,   445,   448,   451,
     451,   453,   454,   458,   459,   460,   463,   464,   467,   471,
     472,   475,   476,   479,   480,   484,   485,   488,   491,   492,
     496,   496,   499,   499,   501,   502,   505,   506,   510,   511,
     515,   519,   520,   523,   526,   530,   535,   538,   538,   541,
     543,   546,   546,   549,   553,   555,   558,   558,   560,   564,
     565,   568,   568,   570,   573,   574,   577,   578,   581,   584,
     587,   587,   589,   589,   591,   594,   595,   599,   603,   604,
     607,   608,   611,   614,   617,   618,   619,   620,   621,   624,
     625,   626,   627,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   644,   648,   651,   652,   653,   654,
     655,   656,   657,   661,   665,   669,   673,   676,   676,   678,
     678,   680,   683,   684,   687,   690,   691,   694,   695,   698,
     701,   704,   707,   707,   709,   709,   711,   711,   713,   717,
     722,   723,   726,   729,   730,   733,   733,   735,   738,   741,
     742,   746,   749,   752,   752,   754,   755,   757,   758,   761,
     765,   768,   769,   772,   773,   774,   775,   776,   777,   778,
     781,   784,   785,   788,   788,   790,   791,   794,   795,   798,
     801,   802,   805,   806,   809,   810,   811,   812,   813,   814,
     817,   818,   821,   822,   823,   824,   827,   830,   833,   834,
     835,   836,   837,   840,   843,   846,   847,   848,   849,   852,
     853,   854,   857,   858,   859,   860,   863,   864,   865,   868,
     869,   870,   873,   874,   875,   876,   877,   878,   881,   882,
     883,   886,   887,   890,   891,   894,   895,   898,   899,   902,
     903,   906,   907,   911,   912,   915,   918,   919,   920,   923,
     924,   925,   926,   927,   928,   929,   930,   931,   932,   933,
     934,   937,   940,   944,   948,   952
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ABSTRACT", "TOK_BOOLEAN",
  "TOK_BREAK", "TOK_CASE", "TOK_CATCH", "TOK_CHAR", "TOK_CLASS",
  "TOK_CONST", "TOK_DEFAULT", "TOK_DO", "TOK_DOUBLE", "TOK_ELSE",
  "TOK_EXTENDS", "TOK_FINAL", "TOK_FINALLY", "TOK_FLOAT", "TOK_FOR",
  "TOK_GOTO", "TOK_IF", "TOK_IMPLEMENTS", "TOK_IMPORT", "TOK_INSTANCEOF",
  "TOK_INT", "TOK_INTERFACE", "TOK_LONG", "TOK_NATIVE", "TOK_NEW",
  "TOK_PACKAGE", "TOK_PRIVATE", "TOK_PROTECTED", "TOK_PUBLIC",
  "TOK_RETURN", "TOK_SUSPEND", "TOK_STATIC", "TOK_SUPER", "TOK_SWITCH",
  "TOK_SYNCHRONIZED", "TOK_THIS", "TOK_THROW", "TOK_THROWS", "TOK_VOID",
  "TOK_VOLATILE", "TOK_WHILE", "TOK_IDENT", "TOK_CONTINUE",
  "TOK_TRANSIENT", "TOK_TRY", "TOK_NULLLITERAL", "TOK_BOOLLITERAL",
  "TOK_INTLITERAL", "TOK_CHARLITERAL", "TOK_FLOATLITERAL",
  "TOK_STRINGLITERAL", "TOK_UINT8", "TOK_UINT16", "TOK_UINT32",
  "TOK_UINT64", "TOK_INT8", "TOK_INT16", "TOK_INT32", "TOK_INT64",
  "TOK_LP", "TOK_RP", "TOK_LC", "TOK_RC", "TOK_LB", "TOK_RB", "TOK_SM",
  "TOK_CM", "TOK_DOT", "TOK_ASN", "TOK_LT", "TOK_GT", "TOK_BANG",
  "TOK_TILDE", "TOK_QUEST", "TOK_COLON", "TOK_EQ", "TOK_NE", "TOK_LE",
  "TOK_GE", "TOK_ANDAND", "TOK_OROR", "TOK_INC", "TOK_DEC", "TOK_PLUS",
  "TOK_MINUS", "TOK_MUL", "TOK_DIV", "TOK_AND", "TOK_OR", "TOK_CARET",
  "TOK_MOD", "TOK_SHL", "TOK_SHR", "TOK_PLASN", "TOK_MIASN", "TOK_MUASN",
  "TOK_DIASN", "TOK_ANDASN", "TOK_ORASN", "TOK_CARETASN", "TOK_SLASN",
  "TOK_SRASN", "TOK_LSRASN", "TOK_MODASN", "TOK_BAD_TOKEN", "TOK_EOL",
  "TOK_AT", "TOK_VARARG", "TOK_INDENT", "TOK_DEDENT", "$accept", "Goal",
  "Literal", "Type", "PrimitiveType", "NumericType", "IntegralType",
  "FloatingPointType", "ReferenceType", "ClassOrInterfaceType",
  "ClassType", "InterfaceType", "ArrayType", "Name", "SimpleName",
  "QualifiedName", "CompilationUnit", "PackageDeclarationOpt",
  "ImportDeclarationsOpt", "TypeDeclarationsOpt", "ImportDeclarations",
  "TypeDeclarations", "PackageDeclaration", "ImportDeclaration",
  "SingleTypeImportDeclaration", "TypeImportOnDemandDeclaration",
  "TypeDeclaration", "AnnotationDeclarationsOpt", "AnnotationDeclarations",
  "AnnotationDeclaration", "Modifiers", "Modifier", "ClassDeclaration",
  "ModifiersOpt", "SuperOpt", "InterfacesOpt", "Super", "Interfaces",
  "InterfaceTypeList", "ClassBody", "ClassBodyDeclarationsOpt",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclarators",
  "VariableDeclarator", "VariableDeclaratorId", "VariableInitializer",
  "MethodDeclaration", "MethodHeader", "ThrowsOpt",
  "FormalParameterListOpt", "MethodDeclarator", "FormalParameterList",
  "FormalParameter", "Throws", "ClassTypeList", "MethodBody",
  "StaticInitializer", "ConstructorDeclaration", "ConstructorDeclarator",
  "ExplicitConstructorInvocationOpt", "BlockStatementsOpt",
  "ArgumentListOpt", "ConstructorBody", "ExplicitConstructorInvocation",
  "ExtendsInterfacesOpt", "InterfaceDeclaration", "ExtendsInterfaces",
  "InterfaceMemberDeclarationsOpt", "InterfaceBody",
  "InterfaceMemberDeclarations", "InterfaceMemberDeclaration",
  "ConstantDeclaration", "AbstractMethodDeclaration",
  "VariableInitializersOpt", "CMOpt", "ArrayInitializer",
  "VariableInitializers", "Block", "BlockStatements", "BlockStatement",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration",
  "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "ExpressionStatement", "StatementExpression", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementNoShortIf", "SwitchStatement",
  "SwitchBlockStatementGroupsOpt", "SwitchLabelsOpt", "SwitchBlock",
  "SwitchBlockStatementGroups", "SwitchBlockStatementGroup",
  "SwitchLabels", "SwitchLabel", "WhileStatement",
  "WhileStatementNoShortIf", "DoStatement", "ForInitOpt", "ExpressionOpt",
  "ForUpdateOpt", "ForStatement", "ForStatementNoShortIf", "ForInit",
  "ForUpdate", "StatementExpressionList", "IDENTOpt", "BreakStatement",
  "ContinueStatement", "ReturnStatement", "ThrowStatement",
  "SynchronizedStatement", "CatchesOpt", "TryStatement", "Catches",
  "CatchClause", "Finally", "Primary", "PrimaryNoNewArray",
  "ClassInstanceCreationExpression", "ArgumentList", "DimsOpt",
  "ArrayCreationExpression", "DimExprs", "DimExpr", "Dims", "FieldAccess",
  "MethodInvocation", "ArrayAccess", "PostFixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "CastExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "Assignment",
  "LeftHandSide", "AssignmentOperator", "Expression", "ConstantExpression",
  "BeginBlock", "EndBlock", "EndPart", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369
};
# endif

#define YYPACT_NINF -490

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-490)))

#define YYTABLE_NINF -329

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      65,     1,   122,  -490,   154,  -490,  -490,   -34,  -490,  -490,
    -490,     1,     4,   154,  -490,  -490,  -490,    90,  -490,   -16,
     133,  -490,     9,  -490,  1541,    78,  -490,  -490,  -490,     7,
    -490,   -18,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,  1541,  -490,  -490,    31,  -490,  -490,    71,
    1403,  -490,  -490,   158,   169,  -490,  1468,   157,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  1244,  1403,  1403,  1403,  1403,
    1403,  1403,  -490,  1402,   171,   183,   196,  -490,   195,  -490,
     723,  -490,   994,   110,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,   121,   139,   146,    27,   168,   186,   198,   200,   210,
      55,  -490,  -490,  -490,  1071,  -490,   281,   283,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,   231,  -490,  -490,  -490,   231,   245,     3,   264,
     244,  1448,   249,   -20,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  1403,  1403,  -490,  1403,   205,   272,  1403,  1403,
    -490,  -490,  1403,  1403,  1403,  1403,  1403,  1403,  1403,  1468,
    1403,  1403,  1403,  1403,  1403,  1403,  1403,  1403,  1403,  1403,
    1403,  1403,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,  -490,  1403,     1,   298,  -490,     1,   209,
     250,  1403,   256,  -490,   256,  1403,     1,   -42,   257,   260,
     259,  1347,    -7,   299,   265,   262,   215,  -490,   -31,   268,
    -490,  -490,  -490,  -490,   121,   121,   139,   139,   266,  -490,
    -490,   270,    51,   146,   146,   146,   146,    27,    27,   168,
     186,   198,   200,   261,   210,  -490,  -490,  -490,     1,   232,
    -490,  -490,  -490,  -490,   202,     1,   275,  1347,  -490,  -490,
    -490,   290,  -490,    70,  1403,  1403,  -490,  1403,   277,   299,
    -490,  -490,  -490,  -490,  -490,  1403,  1403,  -490,   279,   287,
     288,  1403,   289,   209,   837,  -490,   248,   215,   269,  -490,
    -490,  -490,  -490,  -490,  -490,     1,  -490,   294,   215,  -490,
    -490,  -490,   303,   215,  -490,  -490,  -490,  -490,  -490,    17,
     318,   324,   266,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  1555,   215,    61,  -490,   307,    56,   307,   -37,
    -490,    32,    56,   209,   837,  -490,  -490,  -490,   267,  -490,
    -490,  -490,  -490,   448,     1,   310,  -490,  -490,   326,  -490,
     313,   344,  -490,  -490,  1102,   321,   346,   209,  1468,   326,
     327,   320,  -490,  -490,   330,  -490,  -490,  -490,  -490,   344,
    -490,  -490,  -490,   356,   948,   339,   340,  1403,  1403,   342,
     343,  1403,   347,   356,   209,  1403,  -490,   326,   193,   215,
    -490,  1102,  -490,  -490,   302,  -490,  -490,  -490,  -490,   315,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,   114,   135,   110,   173,   176,  -490,  -490,  -490,
     448,   316,  -490,  -490,   326,   351,  -490,   448,     1,  -490,
     352,   357,  -490,   317,   384,  1309,  1403,   329,  -490,   331,
    1403,  1403,   332,  1403,   333,   427,   371,   369,  1375,  -490,
    -490,  -490,  -490,   382,  -490,   209,   351,  -490,  -490,  -490,
     381,   344,  -490,   386,  -490,  -490,   387,  -490,   383,   393,
    -490,  -490,   394,   399,  -490,   403,  -490,   405,   453,    43,
    -490,  -490,  -490,  -490,   151,  -490,  -490,  1403,  1403,  1224,
     316,   316,   209,   948,   448,   209,  -490,  -490,   413,   417,
    1102,  -490,   419,   412,  -490,  1179,   209,  -490,  -490,   420,
    -490,  1403,  1403,   215,   376,  1224,   426,   429,   431,  -490,
     482,   483,  -490,  -490,  -490,  -490,    93,   209,   433,   435,
    -490,  -490,   436,  -490,   383,  1309,  1403,  1403,   316,  1403,
     424,    93,    93,  -490,  1025,  -490,  -490,   402,   404,   948,
     443,   450,   451,   948,  -490,   438,  -490,   215,    93,  -490,
    1102,  -490,  -490,  -490,  -490,  1403,   316,  1179,  -490,  -490,
    -490,   455,  1179,  -490,  1224,   504,   456,   316,  1179,  1179,
    -490,  -490
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      43,     0,     0,     2,    45,    42,    39,     0,    37,    38,
       1,     0,    60,    44,    48,    53,    54,     0,    52,     0,
       0,    41,    60,    50,    79,    59,    61,    49,    40,     0,
      55,     0,    51,    71,    72,    73,    69,    68,    67,    70,
      74,    76,    75,    78,    65,    57,     0,    58,    62,     0,
     132,    64,    66,     0,     0,    56,     0,     0,   244,     8,
       5,     3,     7,     4,     6,     0,     0,     0,     0,     0,
       0,     0,   243,   273,     0,   272,   241,   246,   131,   242,
     247,   248,   249,   285,   274,   275,   292,   278,   279,   282,
     288,   296,   299,   302,   308,   311,   313,   315,   317,   319,
     321,   323,   341,   324,     0,   251,    81,   137,    12,    25,
      27,    26,    23,    24,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    11,    13,    14,    32,     0,    30,     0,
     254,   273,     0,   273,   247,   249,   287,   286,   283,   284,
     280,   281,   132,     0,   343,   132,     0,     0,     0,     0,
     276,   277,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   329,   333,   334,   330,   331,   338,   340,   339,
     335,   336,   337,   332,     0,     0,    83,    80,     0,     0,
     136,     0,   254,   257,   254,   132,     0,   263,     0,     0,
     253,     0,     0,   245,     0,     0,     0,    63,   262,     0,
     252,   293,   294,   295,   297,   298,   300,   301,     0,   307,
      28,    29,    30,   303,   304,   305,   306,   309,   310,   312,
     314,   316,   318,     0,   320,   325,    32,    84,     0,     0,
      82,    33,   139,   138,    79,     0,     0,     0,   255,   258,
     256,     0,    86,     0,   132,   132,   260,     0,     0,     0,
     290,   264,   270,   344,   267,   132,   132,   271,     0,     0,
       0,     0,    85,     0,     0,   148,     0,     0,    79,   144,
     146,   147,   140,   259,   250,     0,    31,     0,     0,   289,
     261,   291,     0,     0,    34,    36,    35,   322,    77,    60,
       0,     0,     9,    10,   149,   143,   145,    87,   266,   269,
     265,   268,    79,     0,    60,    91,     0,   111,   103,     0,
      99,   101,   111,    70,     0,    93,    96,    97,     0,    94,
      95,    88,    92,   113,     0,     0,   109,   110,     0,    98,
       0,     0,   108,   124,   130,    37,   111,     0,     0,     0,
       0,   112,   116,   121,   120,   115,   103,   100,   104,   151,
     102,   106,   105,   226,     0,     0,     0,   215,   215,     0,
       0,     0,     0,   226,     0,     0,   184,     0,   326,     0,
     173,   129,   158,   160,     0,   161,   164,   174,   175,     0,
     165,   166,   176,   167,   177,   168,   178,   179,   180,   182,
     181,   183,   192,   191,     0,   189,   190,   187,   188,   186,
     113,     0,   107,   123,     0,   118,   114,     0,     0,   155,
     153,   150,   225,     0,     0,   213,     0,     0,   214,     0,
       0,     0,     0,     0,     0,   234,     0,   163,     0,   157,
     159,   162,   185,     0,   345,     0,   119,   117,   122,   152,
       0,     0,   227,     0,   221,   223,     0,   212,   220,     0,
     229,   230,     0,     0,   231,     0,   228,     0,     0,   235,
     237,   245,   126,   125,   128,   154,   156,     0,   215,     0,
       0,     0,     0,     0,     0,     0,   236,   238,     0,     0,
     130,   127,     0,     0,   224,     0,     0,   232,   209,     0,
     240,   132,   132,     0,     0,   217,     0,     0,     0,   193,
       0,   164,   170,   171,   172,   196,   198,     0,     0,     0,
     133,   211,     0,   216,   222,   213,     0,     0,     0,     0,
       0,   200,   197,   202,     0,   205,   239,     0,     0,     0,
       0,     0,     0,     0,   342,     0,   208,     0,   199,   203,
     204,   206,   135,   134,   218,   215,     0,     0,   194,   207,
     201,     0,     0,   210,   217,     0,     0,     0,     0,     0,
     219,   195
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -490,  -490,  -490,  -237,   -33,  -490,  -490,  -490,   361,   -53,
    -165,  -164,  -490,    -1,   199,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,   513,  -490,  -490,   505,  -260,  -490,   503,
    -490,   486,  -490,   -22,  -490,  -490,  -490,  -490,   292,  -490,
    -490,  -490,   220,  -490,   223,   160,   203,  -331,  -348,  -490,
     226,  -297,   132,   242,  -490,  -404,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,    54,   -56,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,   273,  -490,  -490,  -490,  -490,  -490,  -490,
    -311,    11,  -374,  -490,  -408,  -349,  -286,  -317,  -490,  -490,
    -417,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,    14,
      19,  -489,  -490,  -490,  -490,    23,  -362,    -9,  -490,  -490,
    -490,  -490,  -486,   185,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,    94,  -490,  -490,  -490,   -90,  -490,   -50,  -490,
     441,   -44,   437,   749,    -3,   769,    74,   107,   175,   -40,
     208,   241,  -168,  -490,   113,   129,    63,   124,   396,   406,
     407,   401,   400,  -490,   305,   390,   309,  -490,  -490,   -64,
    -490,   -59,  -272,  -438
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    72,   377,   302,   123,   124,   125,   303,   220,
     127,   252,   221,    73,     8,     9,     3,     4,    12,    21,
      13,    22,     5,    14,    15,    16,    23,    24,    25,    26,
      43,    44,    45,   274,   186,   239,   187,   240,   253,   298,
     313,   314,   315,   325,   275,   319,   320,   321,   360,   327,
     276,   336,   350,   317,   351,   352,   337,   354,   412,   329,
     330,   346,   490,   379,    74,   473,   491,   189,    47,   190,
     277,   243,   278,   279,   280,   281,   420,   450,   361,   421,
     380,   381,   382,   383,   384,   385,   510,   386,   387,   388,
     389,   390,   391,   512,   392,   531,   547,   515,   532,   533,
     534,   535,   393,   513,   394,   456,   427,   522,   395,   514,
     457,   523,   458,   423,   396,   397,   398,   399,   400,   468,
     401,   469,   470,   486,    75,    76,    77,    78,   199,    79,
     192,   193,   200,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   184,   105,
     545,   344,   264,   445
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   132,    46,   126,   -47,   305,   429,   440,   455,   -46,
      19,   419,   343,   447,   145,   424,   309,   454,   415,   524,
     237,   311,   254,   122,   242,   342,   136,   137,   138,   139,
     140,   141,   130,   265,   338,   260,   413,   301,    17,   312,
      53,   331,   495,   496,   142,   551,    50,     6,   143,   411,
     467,   159,    17,    28,   312,   128,    29,    54,   259,   551,
    -233,   258,   494,   435,   131,   133,   133,   133,   133,   133,
     133,   144,   145,   339,   145,    17,    18,   196,   524,   205,
     499,   282,   144,   446,   209,   210,   204,   301,   455,   206,
     543,   291,    51,   144,    30,     1,   349,    49,   334,   529,
     340,   160,   161,   476,   530,   341,   233,   439,   455,   162,
     163,   414,   211,   212,   213,    20,   493,   454,   562,   270,
      20,   307,    10,    17,   335,   196,   218,   246,    20,   569,
     244,   -90,   236,   170,   498,   241,    28,   205,   255,   251,
     171,   285,   248,   241,   250,   286,   509,   455,   249,   266,
     249,   133,   133,   133,   133,   133,   133,   133,   222,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   353,
     133,   497,    20,   349,   500,   -89,   440,    11,   511,    31,
     349,    55,  -246,   246,   128,   241,  -246,   128,   488,    20,
     554,   489,   241,   561,   558,   128,   150,   151,   287,   288,
    -246,  -246,   133,  -248,   106,    33,   536,  -248,   498,   292,
     293,   152,   153,   509,   299,   107,   154,   289,    34,   554,
     558,  -248,  -248,   223,   224,   225,   226,   155,   156,   129,
      35,   520,   241,    36,    37,    38,   146,   128,    39,   -30,
     511,    40,   157,   158,   128,   511,    41,   349,   164,   165,
      42,   511,   511,   448,   402,   147,   133,   142,   133,  -274,
    -274,   438,  -275,  -275,   148,    17,   149,   196,   214,   215,
     133,   563,    33,   222,   402,   560,   565,   362,   166,  -273,
    -273,   236,   570,   571,   128,    34,   216,   217,   227,   228,
     324,   402,   167,   168,   169,   362,   185,    35,   188,   191,
      36,    37,    38,   428,   428,    39,   144,   432,    40,   195,
     197,   436,   198,    41,   203,   207,  -142,    42,   208,   145,
     238,   245,   144,   222,   247,   257,   256,   258,    56,   263,
     261,   262,   222,   128,   268,   402,    57,   267,   269,    58,
     271,   403,   273,   378,   283,     6,   290,   222,   294,    59,
      60,    61,    62,    63,    64,   284,   295,   296,   304,   308,
     285,   403,   459,    65,   316,   236,   462,   463,   310,   465,
     318,   333,   356,    56,   205,    66,    67,   347,   403,   355,
     378,    57,   358,  -141,    58,   410,   474,   362,   334,   402,
       6,   417,   416,   402,    59,    60,    61,    62,    63,    64,
     402,   418,   422,   425,   426,   402,   430,   431,    65,   222,
     359,   433,   441,   492,   428,   402,   222,   128,   404,   340,
      66,    67,   403,   449,   378,   442,   444,   452,   451,   453,
      68,    69,    70,    71,   467,   402,   471,   516,   404,   460,
     338,   461,   464,   466,   402,   518,   519,   472,   475,   402,
     477,   405,   108,   402,   479,   404,   109,   478,   480,   481,
     402,   110,   541,   542,   482,   544,   111,   402,   483,   484,
     485,   405,   402,   112,   402,   113,   403,   501,   402,   402,
     403,   502,   505,   222,   504,   517,   521,   403,   405,   378,
     525,   428,   403,   526,     6,   527,   528,  -169,   537,   404,
     538,   539,   403,   546,   114,   115,   116,   117,   118,   119,
     120,   121,   552,   555,   553,   556,   557,   559,   567,   406,
     219,   568,   403,   345,   378,   564,    27,    32,    48,    52,
     272,   403,   405,   378,   332,   326,   403,   437,   328,   406,
     403,   357,   443,   322,   503,   550,   549,   403,   540,   378,
     548,   306,   407,   404,   403,   566,   406,   404,   434,   403,
     348,   403,   229,   487,   404,   403,   403,   194,   202,   404,
     232,   234,   407,   230,   235,   231,   297,     0,     0,   404,
       0,     0,     0,     0,     0,   408,   405,     0,     0,   407,
     405,     0,     0,     0,     0,     0,     0,   405,     0,   404,
     406,     0,   405,     0,     0,   408,     0,     0,   404,     0,
       0,     0,   405,   404,     0,     0,     0,   404,     0,     0,
       0,     0,   408,     0,   404,     0,     0,     0,     0,     0,
       0,   404,   405,   407,     0,     0,   404,     0,   404,     0,
       0,   405,   404,   404,     0,     0,   405,     0,     0,     0,
     405,     0,     0,   409,   406,     0,     0,   405,   406,     0,
       0,     0,     0,     0,   405,   406,   408,     0,     0,   405,
     406,   405,     0,   409,     0,   405,   405,     0,     0,     0,
     406,     0,     0,     0,     0,     0,     0,   407,     0,     0,
     409,   407,     0,     0,     0,     0,     0,     0,   407,     0,
     406,     0,     0,   407,     0,     0,     0,     0,     0,   406,
       0,     0,     0,   407,   406,     0,     0,     0,   406,     0,
     408,     0,     0,     0,   408,   406,     0,     0,     0,     0,
       0,   408,   406,   407,   409,     0,   408,   406,     0,   406,
       0,     0,   407,   406,   406,     0,   408,   407,     0,     0,
       0,   407,     0,     0,     0,     0,     0,     0,   407,     0,
       0,     0,     0,     0,     0,   407,   408,     0,     0,     0,
     407,     0,   407,     0,     0,   408,   407,   407,     0,     0,
     408,     0,     0,     0,   408,     0,     0,     0,   409,     0,
       0,   408,   409,     0,     0,     0,  -327,     0,   408,   409,
       0,     0,     0,   408,   409,   408,     0,     0,     0,   408,
     408,     0,     0,     0,   409,   134,   134,   134,   134,   134,
     134,  -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,
    -327,  -327,     0,     0,   409,   135,   135,   135,   135,   135,
     135,   108,     0,   409,     0,   109,     0,     0,   409,     0,
     110,     0,   409,     0,     0,   111,     0,     0,     0,   409,
       0,     0,   112,     0,   113,     0,   409,     0,     0,     0,
       0,   409,     0,   409,     0,     0,     0,   409,   409,     0,
     300,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   134,   134,   134,   134,   134,   134,   134,     0,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,     0,
     134,   135,   135,   135,   135,   135,   135,   135,     0,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,     0,
     135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   363,     0,     0,     0,     0,     0,     0,
     364,     0,     0,     0,     0,     0,     0,   365,     0,   366,
       0,     0,   135,     0,     0,     0,     0,    56,     0,     0,
       0,     0,   367,   368,     0,    57,   369,   370,    58,   371,
       0,     0,     0,   372,     6,   373,     0,   374,    59,    60,
      61,    62,    63,    64,     0,     0,   134,     0,   134,     0,
       0,     0,   375,     0,     0,     0,     0,     0,     0,     0,
     134,     0,     0,     0,     0,     0,   135,     0,   135,   108,
     363,   529,     0,   109,    68,    69,   530,   364,   110,     0,
     135,     0,     0,   111,   365,     0,   366,     0,     0,     0,
     112,     0,   113,     0,    56,     0,     0,     0,   376,   367,
     368,   144,    57,   369,   370,    58,   371,  -328,     0,     0,
     372,     6,   373,     0,   374,    59,    60,    61,    62,    63,
      64,   114,   115,   116,   117,   118,   119,   120,   121,   375,
       0,     0,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,     0,     0,     0,   108,   363,     0,     0,
     109,    68,    69,     0,   364,   110,     0,     0,     0,     0,
     111,   365,     0,   366,     0,     0,     0,   112,     0,   113,
       0,    56,     0,     0,     0,   376,   367,   368,   144,    57,
     369,   370,    58,   371,   172,     0,     0,   372,     6,   373,
       0,   374,    59,    60,    61,    62,    63,    64,   114,   115,
     116,   117,   118,   119,   120,   121,   375,     0,     0,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,     0,     0,     0,   363,     0,     0,     0,    68,    69,
       0,   364,     0,     0,     0,     0,     0,     0,   506,     0,
     507,     0,     0,     0,     0,     0,     0,     0,    56,     0,
       0,     0,   376,   367,   368,   144,    57,   369,   370,    58,
     371,     0,     0,     0,   508,     6,   373,     0,   374,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,   375,     0,     0,     0,     0,   108,     0,
       0,     0,   109,    56,     0,     0,     0,   110,     0,     0,
       0,    57,   111,     0,    58,    68,    69,     0,     0,   112,
       6,   113,     0,    56,    59,    60,    61,    62,    63,    64,
       0,    57,     0,     0,    58,     0,     0,     0,   375,   376,
       6,     0,   144,     0,    59,    60,    61,    62,    63,    64,
     114,   115,   116,   117,   118,   119,   120,   121,    65,     0,
      68,    69,     0,   108,     0,     0,     0,   109,     0,     0,
      66,    67,   110,     0,     0,     0,     0,   111,     0,     0,
      68,    69,    70,    71,   112,     0,   113,     0,    56,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,    58,
       0,     0,     0,     0,     0,     6,     0,     0,     0,    59,
      60,    61,    62,    63,    64,   114,   115,   116,   117,   118,
     119,   120,   121,   375,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,    58,     0,     0,
       0,     0,     0,     6,     0,    68,    69,    59,    60,    61,
      62,    63,    64,     0,    56,     0,     0,     0,     0,     0,
       0,    65,    57,     0,     0,    58,   256,     0,     0,     0,
       0,     6,     0,    66,    67,    59,    60,    61,    62,    63,
      64,     0,    56,    68,    69,    70,    71,     0,     0,    65,
      57,     0,     0,    58,   296,     0,     0,     0,     0,     6,
       0,    66,    67,    59,    60,    61,    62,    63,    64,     0,
       0,    68,    69,    70,    71,     0,   142,    65,     0,     0,
     143,     0,   108,     0,    17,  -326,   109,     0,     0,    66,
      67,   110,     0,     0,     0,     0,   111,     0,     0,    68,
      69,    70,    71,   112,     0,   113,     0,     0,     0,     0,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,     0,   142,     0,     6,   144,   201,     0,     0,     0,
      17,  -326,     0,     0,   114,   115,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,    34,    33,     0,
       0,   144,     0,     0,     0,     0,     0,     0,     0,    35,
       0,    34,    36,    37,    38,     0,     0,    39,     0,     0,
      40,     0,     0,    35,     0,    41,    36,    37,    38,    42,
       0,   323,     0,     0,    40,     0,     0,     0,     0,    41,
       0,     0,     0,    42
};

static const yytype_int16 yycheck[] =
{
       1,    65,    24,    56,     0,   277,   368,   381,   425,     0,
      11,   359,   323,   417,    73,   364,   288,   425,   349,   505,
     185,   293,    64,    56,   188,   322,    66,    67,    68,    69,
      70,    71,    65,    64,    71,   203,   347,   274,    72,   299,
       9,   313,   480,   481,    64,   534,    64,    46,    68,   346,
       7,    24,    72,    46,   314,    56,    72,    26,    65,   548,
      17,    68,   479,   374,    65,    66,    67,    68,    69,    70,
      71,   113,   131,   110,   133,    72,   110,    74,   564,   143,
     484,   245,   113,   414,   148,   149,   142,   324,   505,   145,
     528,   259,   110,   113,   110,    30,   333,    90,    42,     6,
      68,    74,    75,   451,    11,    73,   170,   379,   525,    82,
      83,   348,   152,   153,   154,   111,   478,   525,   556,    68,
     111,   285,     0,    72,    68,    74,   159,   191,   111,   567,
     189,   114,   185,    78,   483,   188,    46,   201,   197,   195,
      85,    71,   192,   196,   194,    75,   495,   564,   192,   208,
     194,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   334,
     171,   482,   111,   410,   485,   114,   550,    23,   495,    46,
     417,   110,    68,   247,   185,   238,    72,   188,    37,   111,
     539,    40,   245,   555,   543,   196,    86,    87,   254,   255,
      86,    87,   203,    68,    46,     3,   517,    72,   557,   265,
     266,    90,    91,   562,   273,    46,    95,   257,    16,   568,
     569,    86,    87,   160,   161,   162,   163,    88,    89,    72,
      28,   503,   285,    31,    32,    33,    65,   238,    36,    46,
     557,    39,    96,    97,   245,   562,    44,   484,    80,    81,
      48,   568,   569,   418,   344,    72,   257,    64,   259,    86,
      87,    68,    86,    87,    68,    72,    71,    74,   155,   156,
     271,   557,     3,   274,   364,   547,   562,   341,    92,    86,
      87,   334,   568,   569,   285,    16,   157,   158,   164,   165,
     312,   381,    94,    93,    84,   359,    15,    28,    15,    68,
      31,    32,    33,   367,   368,    36,   113,   371,    39,    64,
      46,   375,    68,    44,    65,   110,   114,    48,    46,   378,
      22,    71,   113,   324,    68,    65,    69,    68,    29,   114,
      65,    69,   333,   334,    68,   425,    37,    69,    68,    40,
      79,   344,   110,   344,    69,    46,    69,   348,    69,    50,
      51,    52,    53,    54,    55,    65,    69,    69,   110,    65,
      71,   364,   426,    64,    46,   418,   430,   431,    65,   433,
      46,    64,    46,    29,   438,    76,    77,   110,   381,    69,
     381,    37,    69,   114,    40,    64,   445,   451,    42,   479,
      46,    71,    65,   483,    50,    51,    52,    53,    54,    55,
     490,    71,    46,    64,    64,   495,    64,    64,    64,   410,
      66,    64,   110,   477,   478,   505,   417,   418,   344,    68,
      76,    77,   425,    71,   425,   110,   110,   110,    71,    45,
      86,    87,    88,    89,     7,   525,    65,   496,   364,   110,
      71,   110,   110,   110,   534,   501,   502,    65,    67,   539,
      64,   344,     4,   543,    71,   381,     8,    70,    65,    65,
     550,    13,   526,   527,    65,   529,    18,   557,    65,    64,
      17,   364,   562,    25,   564,    27,   479,    64,   568,   569,
     483,    64,    70,   484,    65,    65,   110,   490,   381,   490,
      64,   555,   495,    64,    46,    64,    14,    14,    65,   425,
      65,    65,   505,    79,    56,    57,    58,    59,    60,    61,
      62,    63,   110,    70,   110,    65,    65,    79,    14,   344,
     159,    65,   525,   324,   525,    70,    13,    22,    25,    43,
     238,   534,   425,   534,   314,   312,   539,   377,   312,   364,
     543,   338,   410,   301,   490,   534,   532,   550,   525,   550,
     531,   278,   344,   479,   557,   564,   381,   483,   373,   562,
     112,   564,   166,   469,   490,   568,   569,   126,   131,   495,
     169,   171,   364,   167,   184,   168,   271,    -1,    -1,   505,
      -1,    -1,    -1,    -1,    -1,   344,   479,    -1,    -1,   381,
     483,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,   525,
     425,    -1,   495,    -1,    -1,   364,    -1,    -1,   534,    -1,
      -1,    -1,   505,   539,    -1,    -1,    -1,   543,    -1,    -1,
      -1,    -1,   381,    -1,   550,    -1,    -1,    -1,    -1,    -1,
      -1,   557,   525,   425,    -1,    -1,   562,    -1,   564,    -1,
      -1,   534,   568,   569,    -1,    -1,   539,    -1,    -1,    -1,
     543,    -1,    -1,   344,   479,    -1,    -1,   550,   483,    -1,
      -1,    -1,    -1,    -1,   557,   490,   425,    -1,    -1,   562,
     495,   564,    -1,   364,    -1,   568,   569,    -1,    -1,    -1,
     505,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,
     381,   483,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,
     525,    -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,   534,
      -1,    -1,    -1,   505,   539,    -1,    -1,    -1,   543,    -1,
     479,    -1,    -1,    -1,   483,   550,    -1,    -1,    -1,    -1,
      -1,   490,   557,   525,   425,    -1,   495,   562,    -1,   564,
      -1,    -1,   534,   568,   569,    -1,   505,   539,    -1,    -1,
      -1,   543,    -1,    -1,    -1,    -1,    -1,    -1,   550,    -1,
      -1,    -1,    -1,    -1,    -1,   557,   525,    -1,    -1,    -1,
     562,    -1,   564,    -1,    -1,   534,   568,   569,    -1,    -1,
     539,    -1,    -1,    -1,   543,    -1,    -1,    -1,   479,    -1,
      -1,   550,   483,    -1,    -1,    -1,    73,    -1,   557,   490,
      -1,    -1,    -1,   562,   495,   564,    -1,    -1,    -1,   568,
     569,    -1,    -1,    -1,   505,    66,    67,    68,    69,    70,
      71,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,   525,    66,    67,    68,    69,    70,
      71,     4,    -1,   534,    -1,     8,    -1,    -1,   539,    -1,
      13,    -1,   543,    -1,    -1,    18,    -1,    -1,    -1,   550,
      -1,    -1,    25,    -1,    27,    -1,   557,    -1,    -1,    -1,
      -1,   562,    -1,   564,    -1,    -1,    -1,   568,   569,    -1,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,   152,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
     171,   152,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,   257,    -1,   259,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     271,    -1,    -1,    -1,    -1,    -1,   257,    -1,   259,     4,
       5,     6,    -1,     8,    86,    87,    11,    12,    13,    -1,
     271,    -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      25,    -1,    27,    -1,    29,    -1,    -1,    -1,   110,    34,
      35,   113,    37,    38,    39,    40,    41,    73,    -1,    -1,
      45,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,     4,     5,    -1,    -1,
       8,    86,    87,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    27,
      -1,    29,    -1,    -1,    -1,   110,    34,    35,   113,    37,
      38,    39,    40,    41,    73,    -1,    -1,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    86,    87,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,   110,    34,    35,   113,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,     8,    29,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    37,    18,    -1,    40,    86,    87,    -1,    -1,    25,
      46,    27,    -1,    29,    50,    51,    52,    53,    54,    55,
      -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    64,   110,
      46,    -1,   113,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      86,    87,    -1,     4,    -1,    -1,    -1,     8,    -1,    -1,
      76,    77,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      86,    87,    88,    89,    25,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    86,    87,    50,    51,    52,
      53,    54,    55,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    37,    -1,    -1,    40,    69,    -1,    -1,    -1,
      -1,    46,    -1,    76,    77,    50,    51,    52,    53,    54,
      55,    -1,    29,    86,    87,    88,    89,    -1,    -1,    64,
      37,    -1,    -1,    40,    69,    -1,    -1,    -1,    -1,    46,
      -1,    76,    77,    50,    51,    52,    53,    54,    55,    -1,
      -1,    86,    87,    88,    89,    -1,    64,    64,    -1,    -1,
      68,    -1,     4,    -1,    72,    73,     8,    -1,    -1,    76,
      77,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    86,
      87,    88,    89,    25,    -1,    27,    -1,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    64,    -1,    46,   113,    68,    -1,    -1,    -1,
      72,    73,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    16,     3,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    16,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      39,    -1,    -1,    28,    -1,    44,    31,    32,    33,    48,
      -1,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    30,   116,   131,   132,   137,    46,   128,   129,   130,
       0,    23,   133,   135,   138,   139,   140,    72,   110,   128,
     111,   134,   136,   141,   142,   143,   144,   138,    46,    72,
     110,    46,   141,     3,    16,    28,    31,    32,    33,    36,
      39,    44,    48,   145,   146,   147,   148,   183,   144,    90,
      64,   110,   146,     9,    26,   110,    29,    37,    40,    50,
      51,    52,    53,    54,    55,    64,    76,    77,    86,    87,
      88,    89,   117,   128,   179,   239,   240,   241,   242,   244,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   274,    46,    46,     4,     8,
      13,    18,    25,    27,    56,    57,    58,    59,    60,    61,
      62,    63,   119,   120,   121,   122,   124,   125,   128,    72,
     119,   128,   274,   128,   248,   250,   254,   254,   254,   254,
     254,   254,    64,    68,   113,   276,    65,    72,    68,    71,
      86,    87,    90,    91,    95,    88,    89,    96,    97,    24,
      74,    75,    82,    83,    80,    81,    92,    94,    93,    84,
      78,    85,    73,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   273,    15,   149,   151,    15,   182,
     184,    68,   245,   246,   245,    64,    74,    46,    68,   243,
     247,    68,   247,    65,   179,   274,   179,   110,    46,   274,
     274,   254,   254,   254,   259,   259,   260,   260,   119,   123,
     124,   127,   128,   261,   261,   261,   261,   262,   262,   263,
     264,   265,   266,   274,   267,   270,   124,   125,    22,   150,
     152,   124,   126,   186,   276,    71,   274,    68,   243,   246,
     243,   179,   126,   153,    64,   276,    69,    65,    68,    65,
     257,    65,    69,   114,   277,    64,   276,    69,    68,    68,
      68,    79,   153,   110,   148,   159,   165,   185,   187,   188,
     189,   190,   126,    69,    65,    71,    75,   179,   179,   254,
      69,   257,   179,   179,    69,    69,    69,   269,   154,   276,
      43,   118,   119,   123,   110,   277,   188,   126,    65,   277,
      65,   277,   142,   155,   156,   157,    46,   168,    46,   160,
     161,   162,   168,    36,   148,   158,   159,   164,   165,   174,
     175,   277,   157,    64,    42,    68,   166,   171,    71,   110,
      68,    73,   166,   195,   276,   129,   176,   110,   112,   118,
     167,   169,   170,   125,   172,    69,    46,   161,    69,    66,
     163,   193,   274,     5,    12,    19,    21,    34,    35,    38,
      39,    41,    45,    47,    49,    64,   110,   118,   128,   178,
     195,   196,   197,   198,   199,   200,   202,   203,   204,   205,
     206,   207,   209,   217,   219,   223,   229,   230,   231,   232,
     233,   235,   241,   249,   251,   252,   253,   255,   256,   271,
      64,   166,   173,   195,   118,   162,    65,    71,    71,   163,
     191,   194,    46,   228,   200,    64,    64,   221,   274,   221,
      64,    64,   274,    64,   228,   195,   274,   160,    68,   277,
     197,   110,   110,   167,   110,   278,   162,   170,   125,    71,
     192,    71,   110,    45,   199,   205,   220,   225,   227,   274,
     110,   110,   274,   274,   110,   274,   110,     7,   234,   236,
     237,    65,    65,   180,   276,    67,   163,    64,    70,    71,
      65,    65,    65,    65,    64,    17,   238,   237,    37,    40,
     177,   181,   274,   221,   205,   278,   278,   195,   200,   170,
     195,    64,    64,   178,    65,    70,    19,    21,    45,   200,
     201,   202,   208,   218,   224,   212,   276,    65,   179,   179,
     277,   110,   222,   226,   227,    64,    64,    64,    14,     6,
      11,   210,   213,   214,   215,   216,   195,    65,    65,    65,
     220,   274,   274,   278,   274,   275,    79,   211,   215,   214,
     196,   216,   110,   110,   200,    70,    65,    65,   200,    79,
     277,   221,   278,   201,    70,   201,   222,    14,    65,   278,
     201,   201
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   115,   116,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   126,   127,   127,   127,   128,   128,   129,
     130,   131,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   138,   138,   139,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   147,   148,   148,
     149,   149,   150,   150,   151,   152,   153,   153,   154,   155,
     155,   156,   156,   157,   157,   157,   158,   158,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   170,
     171,   172,   172,   173,   174,   175,   176,   177,   177,   178,
     178,   179,   179,   180,   181,   181,   182,   182,   183,   184,
     184,   185,   185,   186,   187,   187,   188,   188,   189,   190,
     191,   191,   192,   192,   193,   194,   194,   195,   196,   196,
     197,   197,   198,   199,   200,   200,   200,   200,   200,   201,
     201,   201,   201,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   203,   204,   205,   205,   205,   205,
     205,   205,   205,   206,   207,   208,   209,   210,   210,   211,
     211,   212,   213,   213,   214,   215,   215,   216,   216,   217,
     218,   219,   220,   220,   221,   221,   222,   222,   223,   224,
     225,   225,   226,   227,   227,   228,   228,   229,   230,   231,
     231,   232,   233,   234,   234,   235,   235,   236,   236,   237,
     238,   239,   239,   240,   240,   240,   240,   240,   240,   240,
     241,   242,   242,   243,   243,   244,   244,   245,   245,   246,
     247,   247,   248,   248,   249,   249,   249,   249,   249,   249,
     250,   250,   251,   251,   251,   251,   252,   253,   254,   254,
     254,   254,   254,   255,   256,   257,   257,   257,   257,   258,
     258,   258,   259,   259,   259,   259,   260,   260,   260,   261,
     261,   261,   262,   262,   262,   262,   262,   262,   263,   263,
     263,   264,   264,   265,   265,   266,   266,   267,   267,   268,
     268,   269,   269,   270,   270,   271,   272,   272,   272,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   274,   275,   276,   277,   278
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     3,     3,     3,     1,     1,     1,
       3,     3,     1,     0,     1,     0,     1,     0,     1,     2,
       1,     2,     3,     1,     1,     3,     5,     2,     2,     1,
       0,     1,     2,     6,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     1,     0,
       1,     0,     1,     0,     2,     2,     1,     3,     3,     1,
       0,     1,     2,     2,     2,     2,     1,     1,     4,     1,
       3,     1,     3,     1,     3,     1,     1,     3,     4,     4,
       1,     0,     1,     0,     4,     3,     1,     3,     2,     3,
       2,     1,     3,     1,     2,     5,     4,     1,     0,     1,
       0,     1,     0,     4,     5,     5,     1,     0,     5,     2,
       3,     1,     0,     3,     1,     2,     1,     1,     1,     2,
       1,     0,     1,     0,     4,     1,     3,     3,     1,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     6,     9,     9,     6,     1,     0,     1,
       0,     4,     1,     2,     2,     1,     2,     3,     2,     5,
       5,     7,     1,     0,     1,     0,     1,     0,     9,     9,
       1,     1,     1,     1,     3,     1,     0,     3,     3,     3,
       3,     3,     5,     1,     0,     3,     4,     1,     2,     5,
       2,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       5,     1,     3,     1,     0,     4,     4,     1,     2,     3,
       2,     3,     3,     3,     4,     6,     6,     4,     6,     6,
       4,     4,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     5,
       4,     5,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
      yyerror (parserContext, YY_("syntax error: cannot back up")); \
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
                  Type, Value, parserContext); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_context_t *parserContext)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (parserContext);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_context_t *parserContext)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parserContext);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, parser_context_t *parserContext)
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
                                              , parserContext);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parserContext); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_context_t *parserContext)
{
  YYUSE (yyvaluep);
  YYUSE (parserContext);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (parser_context_t *parserContext)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval, scanner);
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
        case 2:
#line 285 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		std::cout << parserContext << std::endl;
	}
#line 2099 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 365 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2105 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 367 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2111 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 369 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2117 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 399 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2123 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 432 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2129 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 434 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2135 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 436 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2141 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 451 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2147 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 496 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2153 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 499 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2159 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 531 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { std::cout << "ConstructorDeclaration" << std::endl; }
#line 2165 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 538 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2171 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 542 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { std::cout << "BlockStatementsOpt" << std::endl; }
#line 2177 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 543 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2183 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 546 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2189 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 554 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { std::cout << "ExplicitConstructorInvocation" << std::endl; }
#line 2195 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 558 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2201 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 568 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2207 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 587 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2213 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 589 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2219 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 589 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2225 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 676 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2231 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 678 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2237 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 707 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2243 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 709 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2249 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 711 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2255 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 733 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2261 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 234:
#line 752 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2267 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 254:
#line 788 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2273 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 2277 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
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
      yyerror (parserContext, YY_("syntax error"));
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
        yyerror (parserContext, yymsgp);
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
                      yytoken, &yylval, parserContext);
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
                  yystos[yystate], yyvsp, parserContext);
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
  yyerror (parserContext, YY_("memory exhausted"));
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
                  yytoken, &yylval, parserContext);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, parserContext);
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
#line 956 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


