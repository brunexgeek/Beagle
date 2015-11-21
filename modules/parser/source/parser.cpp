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

#line 73 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:339  */

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
   by #include "parser.hh".  */
#ifndef YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_PARSER_HH_INCLUDED
# define YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int beagle_debug;
#endif
/* "%code requires" blocks.  */
#line 15 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:355  */



#include <fstream>
#include <iostream>
#include <sstream>

namespace beagle
{

	class Parser
	{
		public:
			Parser(
				std::istream* in = NULL,
				std::ostream* out = NULL);

			virtual ~Parser();

			static const char *name( int tok );

			int parse( );

		private:
			std::istream *in;
			std::ostream *out;
			void* scanner;
			void* buffer;

			bool readFile( );
	};

}; // namespace beagle

typedef void *yyscan_t;



#line 142 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:355  */

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
    TOK_EOL = 365
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 85 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:355  */

   char* node;
   

#line 270 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (yyscan_t scanner);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_PARSER_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 284 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 54 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:359  */


#include <iostream>
#include "scanner.hh"

void beagle_error(yyscan_t scanner, const char *msg)
{
	return;
}


#line 298 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:359  */

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
#define YYLAST   1585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  160
/* YYNRULES -- Number of rules.  */
#define YYNRULES  338
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  551

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

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
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   273,   273,   276,   277,   278,   279,   280,   281,   284,
     285,   288,   289,   292,   293,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   311,   312,   315,   316,
     319,   322,   325,   328,   329,   330,   333,   334,   337,   340,
     343,   347,   347,   349,   349,   351,   351,   353,   354,   357,
     358,   361,   364,   365,   368,   371,   374,   375,   378,   379,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     394,   397,   397,   399,   399,   401,   401,   403,   406,   409,
     410,   413,   416,   416,   418,   419,   422,   423,   424,   427,
     428,   431,   434,   435,   438,   439,   442,   443,   446,   447,
     450,   453,   454,   458,   458,   461,   461,   463,   464,   467,
     468,   471,   475,   479,   480,   483,   486,   489,   493,   496,
     496,   498,   498,   500,   500,   502,   505,   506,   509,   509,
     511,   515,   516,   519,   519,   521,   524,   525,   528,   529,
     532,   535,   538,   538,   540,   540,   542,   545,   546,   549,
     552,   553,   556,   557,   560,   563,   566,   567,   568,   569,
     570,   571,   574,   575,   576,   577,   578,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   594,   597,
     600,   603,   606,   607,   608,   609,   610,   611,   612,   615,
     618,   621,   625,   628,   628,   630,   630,   632,   635,   636,
     639,   642,   643,   646,   647,   650,   653,   656,   659,   659,
     661,   661,   663,   663,   665,   669,   674,   675,   678,   681,
     682,   685,   685,   687,   690,   693,   694,   698,   701,   704,
     704,   706,   707,   709,   710,   713,   717,   720,   721,   724,
     725,   726,   727,   728,   729,   730,   733,   736,   737,   740,
     740,   742,   743,   746,   747,   750,   753,   754,   757,   758,
     761,   762,   763,   764,   765,   766,   769,   770,   773,   774,
     775,   776,   779,   782,   785,   786,   787,   788,   789,   792,
     795,   798,   799,   800,   801,   804,   805,   806,   809,   810,
     811,   812,   815,   816,   817,   820,   821,   822,   825,   826,
     827,   828,   829,   830,   833,   834,   835,   838,   839,   842,
     843,   846,   847,   850,   851,   854,   855,   858,   859,   863,
     864,   867,   870,   871,   872,   875,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   889,   892
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
  "$accept", "Goal", "Literal", "Type", "PrimitiveType", "NumericType",
  "IntegralType", "FloatingPointType", "ReferenceType",
  "ClassOrInterfaceType", "ClassType", "InterfaceType", "ArrayType",
  "Name", "SimpleName", "QualifiedName", "CompilationUnit",
  "PackageDeclarationOpt", "ImportDeclarationsOpt", "TypeDeclarationsOpt",
  "ImportDeclarations", "TypeDeclarations", "PackageDeclaration",
  "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "TypeDeclaration", "Modifiers",
  "Modifier", "ClassDeclaration", "ModifiersOpt", "SuperOpt",
  "InterfacesOpt", "Super", "Interfaces", "InterfaceTypeList", "ClassBody",
  "ClassBodyDeclarationsOpt", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclarators", "VariableDeclarator", "VariableDeclaratorId",
  "VariableInitializer", "MethodDeclaration", "MethodHeader", "ThrowsOpt",
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
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "SwitchStatement",
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
  "LeftHandSide", "AssignmentOperator", "Expression", "ConstantExpression", YY_NULLPTR
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
     365
};
# endif

#define YYPACT_NINF -478

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-478)))

#define YYTABLE_NINF -325

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    68,   122,  -478,   108,  -478,  -478,    65,  -478,  -478,
    -478,    68,  1479,   108,  -478,  -478,  -478,  -478,    90,    73,
    -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,
    -478,  1489,  -478,   832,  -478,  -478,    31,  -478,  -478,  -478,
    -478,   -19,  -478,  -478,    93,    96,    80,   151,   163,  -478,
      68,   160,  -478,    68,   144,   117,  -478,  -478,   139,    68,
     146,  -478,  -478,  -478,    85,  -478,    68,  -478,   147,   255,
    -478,   733,  -478,   149,   150,   407,  -478,  -478,  -478,  -478,
      68,   154,   733,   155,   700,  -478,  -478,  -478,  -478,   154,
    -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,   175,  -478,
    -478,  -478,  -478,  -478,  -478,  -478,  -478,   178,   158,  -478,
    -478,  -478,  -478,  -478,   159,   -17,  -478,  -478,  -478,  -478,
    1139,  -478,   181,   204,  -478,  -478,  -478,  -478,   183,   -26,
     183,    29,  -478,    -9,   -26,   179,   182,   184,   209,  1199,
     186,   192,   909,  1366,  1366,   187,   196,   197,  -478,  1366,
     198,   185,   209,   154,  -478,  -478,  -478,  -478,  -478,  -478,
    1366,  -478,  1366,  1366,  -478,   219,    40,   200,  -478,  1139,
    -478,  -478,   202,  -478,  -478,  -478,  -478,  -478,   207,  -478,
    -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,
    -478,   206,   211,    24,  -478,   136,    32,   557,    94,   107,
     110,  -478,  -478,  -478,  1453,   909,    68,   215,  -478,   909,
     199,  -478,  -478,   219,   216,  1282,  -478,  -478,  -478,  -478,
    -478,   220,  1466,   244,   563,  1366,   227,   227,   232,   990,
    1366,  1366,  1366,  1366,   228,  -478,  -478,    94,  -478,  -478,
    -478,  -478,  -478,  -478,  -478,    58,    22,    63,     9,   119,
     205,   208,   212,   217,   -48,  -478,  -478,  -478,  -478,   230,
     258,  1366,  1366,   237,  1366,  1199,   238,   302,   245,    66,
    -478,  -478,  -478,  -478,  -478,   240,  1366,  1366,  1310,  -478,
    -478,  -478,  -478,   268,  1366,  -478,  -478,  -478,  -478,  -478,
    -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  1366,
     219,   252,   247,  -478,  -478,   248,    50,  -478,   259,  -478,
    -478,  -478,  1282,  -478,  -478,  -478,  -478,  1366,   256,  -478,
    -478,   257,  -478,   254,   261,  1366,   260,  -478,   260,  1366,
     262,  1477,   264,  -478,  -478,  -478,  -478,  -478,  1366,  1366,
    1366,  1366,  1366,  1366,  1366,   909,  1366,  1366,  1366,  1366,
    1366,  1366,  1366,  1366,  1366,  1366,  1366,  1366,  -478,    99,
     267,   269,  -478,   270,  -478,  -478,   272,   316,    18,  -478,
    -478,   292,   287,  -478,   293,   290,   103,   296,  -478,   301,
    -478,   909,    68,   306,   307,  1139,  -478,  -478,  -478,   304,
     314,  1366,  1366,  1394,  1254,   309,  1338,  -478,  -478,   311,
    -478,   321,   318,   323,  1338,    28,  1422,  -478,  -478,  -478,
      58,    58,    22,    22,   158,  -478,    63,    63,    63,    63,
       9,     9,   119,   205,   208,   212,   313,   217,  1366,  1366,
     327,   154,  1199,   909,   154,  -478,  -478,  -478,  1366,  -478,
    -478,  1366,  1366,  -478,  -478,  -478,  1366,  1366,   330,  -478,
     331,  1282,   334,   333,  -478,   337,   340,   342,   335,  -478,
     395,   398,  -478,  -478,  -478,  -478,  -478,  -478,   344,  -478,
    1366,  1422,  -478,  1366,   350,   353,   114,  -478,  -478,  -478,
     352,  -478,  -478,   357,   358,   359,   366,  -478,  -478,  -478,
     363,  1394,   563,  1366,  1366,  1254,  1199,  -478,  -478,  -478,
    -478,  -478,  -478,  1366,   374,   114,   114,  -478,  1076,  -478,
     154,  -478,  -478,   384,   386,  -478,   392,  -478,   254,   388,
     394,   396,  -478,  -478,  -478,   381,  -478,   399,   114,  -478,
    1139,  -478,  -478,  -478,  -478,  1199,  1366,  1254,  1254,  -478,
    -478,  -478,   397,   448,  -478,  1394,  1254,   400,  -478,  1254,
    -478
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      42,     0,     0,     2,    44,    41,    38,     0,    36,    37,
       1,     0,    72,    43,    47,    52,    53,    51,     0,     0,
      64,    65,    66,    62,    61,    60,    63,    67,    69,    68,
      40,    72,    49,    71,    58,    56,     0,    57,    48,    39,
      54,     0,    50,    59,     0,     0,     0,    74,   129,    55,
       0,    76,    73,     0,     0,   128,    31,    77,    30,     0,
       0,    75,    32,   131,    72,   130,     0,    79,    78,    72,
      70,     0,   140,     0,     0,    72,   136,   138,   139,   132,
       0,    63,     0,     0,    72,    84,    86,    89,    90,     0,
      87,    88,    12,    25,    27,    26,    23,    24,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     9,    11,
      13,    14,    10,    28,    29,    30,   141,   135,   137,    80,
     122,   116,    36,   104,    81,    85,   100,   115,     0,   104,
      96,     0,    92,    94,   104,     0,     0,     0,   222,     0,
       0,     0,     0,   211,   211,     0,     0,     0,   240,     0,
       0,    38,   222,     0,     8,     5,     3,     7,     4,     6,
       0,   178,     0,     0,   239,     0,   322,     0,   167,   121,
     150,   152,     0,   153,   156,   168,   157,   169,     0,   158,
     159,   170,   160,   171,   161,   172,   173,   174,   176,   175,
     177,   268,   237,   242,   238,   243,   244,   245,     0,   185,
     186,   183,   184,   182,     0,   106,     0,     0,   103,   106,
       0,   102,    91,     0,     0,     0,   101,    33,    35,    34,
     221,     0,   269,     0,   209,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,   242,   244,   281,   270,   271,
     288,   274,   275,   278,   284,   292,   295,   298,   304,   307,
     309,   311,   313,   315,   317,   319,   337,   320,   210,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,   269,
     243,   245,   279,   280,    96,   155,   124,   124,     0,   149,
     151,   154,   181,     0,     0,   272,   273,   325,   329,   330,
     326,   327,   334,   336,   335,   331,   332,   333,   328,     0,
       0,     0,   105,   109,   113,   112,   120,   117,     0,   108,
      93,    97,   143,    95,    99,    98,   223,     0,     0,   217,
     219,     0,   208,   216,     0,     0,   250,   253,   250,   124,
     250,   269,     0,   283,   282,   276,   277,   225,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   259,
       0,     0,   227,     0,   179,   224,     0,     0,   231,   233,
     241,     0,   123,   247,     0,     0,   258,     0,   321,   111,
     118,     0,     0,     0,     0,   122,   119,   107,   147,   145,
     142,     0,   211,     0,     0,     0,     0,   251,   254,   249,
     252,     0,     0,     0,     0,     0,   241,   289,   290,   291,
     293,   294,   296,   297,     0,   303,   299,   300,   301,   302,
     305,   306,   308,   310,   312,   314,     0,   316,   124,   124,
       0,     0,     0,     0,     0,   232,   234,   260,     0,   263,
     266,   124,   124,   267,   110,   114,   124,   124,     0,   144,
       0,     0,     0,     0,   220,     0,     0,     0,    38,   189,
       0,   156,   163,   164,   165,   166,   255,   256,     0,   246,
       0,     0,   286,     0,     0,     0,   194,   192,   228,   205,
       0,   236,   248,     0,     0,     0,     0,   125,   146,   148,
       0,   213,   209,     0,     0,     0,     0,   257,   285,   287,
     318,   262,   265,     0,     0,   196,   193,   198,     0,   201,
       0,   261,   264,     0,     0,   207,     0,   212,   218,     0,
       0,     0,   180,   190,   338,     0,   204,     0,   195,   199,
     200,   202,   235,   127,   126,     0,   211,     0,     0,   203,
     197,   214,     0,     0,   206,   213,     0,     0,   191,     0,
     215
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -478,  -478,  -478,   -65,  -131,  -478,  -478,  -478,   123,   -27,
    -133,   -35,  -478,    -1,   391,  -478,  -478,  -478,  -478,  -478,
    -478,  -478,  -478,   462,  -478,  -478,   445,  -478,   446,  -478,
     -28,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,   402,
    -478,   -40,   317,   265,   189,  -300,  -478,   -21,   -67,   274,
     380,  -478,  -367,  -478,  -478,  -478,  -478,  -478,  -478,  -478,
     105,  -255,  -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,
     417,  -478,  -478,  -478,  -478,  -478,  -478,   -68,   -15,  -166,
    -478,  -219,   -32,  -477,  -348,  -478,  -478,  -478,  -478,  -222,
    -478,  -478,  -478,  -478,  -478,  -478,  -478,  -478,   -12,   -10,
    -474,  -478,  -478,  -478,     4,  -140,   -47,  -478,  -478,  -478,
    -478,  -463,   347,  -478,  -478,  -478,  -478,  -478,  -478,  -478,
    -478,   132,  -478,  -478,  -478,  -119,  -478,  -158,  -478,   275,
    -151,   173,   552,  -101,   599,   -11,    56,   137,  -155,   143,
     308,  -391,  -478,  -139,  -137,  -192,  -135,   156,   157,   161,
     165,   152,  -478,    38,   213,   332,  -478,  -478,   493,  -478
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   164,   165,   108,   109,   110,   111,   112,   113,
      57,    63,   114,   222,     8,     9,     3,     4,    12,    30,
      13,    31,     5,    14,    15,    16,    32,    33,    34,    35,
      36,    51,    60,    52,    61,    68,    70,    83,    84,    85,
      86,    72,   131,   132,   133,   313,    88,    73,   207,   301,
     129,   302,   303,   208,   305,   126,    90,    91,   123,   385,
     167,   371,   307,   386,    54,    37,    55,    74,    65,    75,
      76,    77,    78,   389,   450,   314,   390,   168,   169,   170,
     171,   172,   173,   460,   174,   175,   176,   462,   177,   178,
     179,   180,   463,   181,   505,   527,   477,   506,   507,   508,
     509,   182,   464,   183,   321,   234,   516,   184,   465,   322,
     517,   323,   221,   185,   186,   187,   188,   189,   367,   190,
     368,   369,   435,   191,   192,   235,   372,   397,   194,   326,
     327,   399,   195,   236,   197,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   204,   299,   373,   525
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   193,   320,   280,   259,   319,   107,   272,   273,   228,
      19,   226,   388,   121,   444,   472,   206,   107,   522,   196,
     193,   127,   374,    56,    67,   366,    62,    39,   518,    87,
     356,    79,    62,   345,   531,  -229,    71,   357,   196,    62,
      44,    82,   210,     1,    87,   119,   461,    71,    89,    58,
     193,   137,    58,    62,   531,    18,    82,    45,    58,   214,
     543,   544,   211,    89,   215,    58,   480,   216,   196,   548,
     115,    46,   550,   304,   401,   333,   334,   335,   336,    58,
     499,   115,   518,   346,   347,   267,   -30,   383,    20,  -188,
     384,   348,   349,   471,  -188,  -188,   468,  -187,   330,   212,
     213,    21,  -187,  -187,   276,   193,   277,   223,   278,   198,
     341,   342,    18,    22,     6,   227,    23,    24,    25,   166,
     503,    26,    10,   196,    27,   504,  -269,  -269,   198,    28,
     276,    11,   277,    29,   317,    17,    39,    18,    18,    47,
     300,    58,    48,    40,   300,    41,   193,   461,   338,   339,
      49,   489,  -134,   340,   416,   417,   418,   419,   198,   343,
     344,   269,   269,   428,   196,   429,    50,   441,   166,   442,
     400,   454,   403,   474,   475,   398,   199,   398,    53,    56,
     285,   286,    59,   407,   408,   409,   483,   484,    66,   461,
     461,   485,   486,  -270,  -270,   199,  -271,  -271,   461,   350,
     351,   461,   410,   411,   115,    58,   412,   413,   115,  -323,
      64,    18,    69,   198,   414,   420,   421,   117,    80,   116,
     120,   128,   124,   166,   130,   199,   135,   136,   331,   269,
     269,   269,   269,   364,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,   205,   206,   209,   217,   445,
     224,   218,   453,   219,   198,   220,   225,   200,    20,   260,
     261,   262,   264,   201,   265,   274,   193,   279,   309,   320,
     320,    21,   281,   319,   193,   193,   200,   282,   283,   284,
     199,   306,   201,    22,   196,   311,    23,    24,    25,   318,
     316,    81,   196,   196,    27,   325,   329,   352,   337,    28,
     358,   355,   353,    29,   359,   354,   200,   362,   365,   366,
     370,   213,   201,   193,   376,   498,   300,   380,   381,   382,
     391,   199,   -83,   320,   387,   393,   394,   392,   396,   406,
     402,   196,   430,   434,   431,   432,   433,   269,   269,   269,
     269,   269,   269,   269,   115,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,    56,   269,   437,   438,   440,
     439,   200,   459,   478,   280,   443,   481,   201,   300,   214,
     446,   447,   193,   193,   198,   449,   193,   193,   466,   468,
     115,    58,   198,   198,   166,   451,   469,   467,   470,   193,
     196,   196,   473,   476,   196,   196,   542,   487,   488,   490,
     479,   492,   200,   491,   493,   269,   494,   196,   201,   496,
      20,   193,  -162,   497,   495,   501,   193,   510,   193,   193,
     502,   198,   511,    21,   513,   512,   193,   193,   202,   196,
     193,   514,   115,   515,   196,    22,   196,   196,    23,    24,
      25,   199,   532,    26,   196,   196,    27,   202,   196,   199,
     199,    28,   203,   526,   533,    29,   534,   535,   536,   537,
     539,   538,   546,   364,   523,   549,   540,   545,   415,   269,
     269,   203,   269,   122,  -133,    38,    42,   202,   310,    43,
     198,   198,   275,   308,   198,   198,   125,   134,   199,   379,
     448,   166,   118,   530,   529,   528,   519,   198,   547,   266,
     436,   203,   328,   541,   405,   459,   479,   166,   422,   427,
     423,   500,   378,     0,   523,   424,     0,   541,     0,   198,
     425,     0,   200,     0,   198,     0,   198,   198,   201,   166,
     200,   200,   202,     0,   198,   198,   201,   201,   198,     0,
       0,     0,     0,     0,     0,     0,     0,   199,   199,     0,
       0,   199,   199,     0,     0,     0,   203,     0,     0,     0,
       0,     0,     0,     0,   199,     0,     0,    92,     0,   200,
       0,    93,     0,   202,     0,   201,    94,     0,     0,     0,
       0,    95,     0,     0,     0,     0,   199,     0,    96,     0,
      97,   199,   142,   199,   199,     0,     0,   203,     0,     0,
     145,   199,   199,   148,     0,   199,     0,     0,     0,     6,
       0,     0,     0,   154,   155,   156,   157,   158,   159,    99,
     100,   101,   102,   103,   104,   105,   106,   160,   200,   200,
    -324,     0,   200,   200,   201,   201,   258,   258,   201,   201,
       0,     0,   263,     0,     0,   200,     0,     0,     0,   162,
     163,   201,     0,   268,     0,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,     0,   200,     0,     0,
       0,     0,   200,   201,   200,   200,     0,     0,   201,     0,
     201,   201,   200,   200,     0,     0,   200,     0,   201,   201,
       0,     0,   201,   202,     0,     0,     0,     0,     0,     0,
       0,   202,   202,    20,     0,     0,     0,     0,   315,     0,
       0,     0,     0,     0,   270,   270,    21,   203,   324,     0,
       0,     0,   332,     0,     0,   203,   203,     0,    22,     0,
       0,    23,    24,    25,     0,     0,    81,    92,     0,    27,
     202,    93,     0,     0,    28,     0,    94,     0,    29,     0,
       0,    95,     0,     0,   360,   361,     0,   363,    96,     0,
      97,   271,   271,     0,   203,     0,     0,   -82,     0,     0,
       0,   375,     0,     0,     0,     0,    98,   377,     0,     6,
       0,     0,   270,   270,   270,   270,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,   202,
     202,     0,     0,   202,   202,   315,     0,     0,     0,     0,
     375,     0,     0,     0,     0,     0,   202,     0,   395,     0,
       0,     0,     0,   203,   203,     0,     0,   203,   203,   271,
     271,   271,   271,     0,     0,    20,     0,     0,   202,     0,
     203,     0,     0,   202,     0,   202,   202,     0,    21,   426,
       0,     0,     0,   202,   202,     0,     0,   202,     0,     0,
      22,     0,   203,    23,    24,    25,     0,   203,    26,   203,
     203,    27,     0,     0,     0,     0,    28,   203,   203,     0,
      29,   203,     0,     0,   452,   258,     0,     0,     0,   395,
     270,   270,   270,   270,   270,   270,   270,   375,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,     0,   270,
       0,     0,     0,    92,     0,     0,     0,    93,     0,     0,
       0,     0,    94,     0,     0,     0,     0,    95,     0,     0,
       0,   482,     0,     0,    96,     0,    97,   271,   271,   271,
     271,   271,   271,   271,   315,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,     6,   271,     0,   270,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   520,   521,     0,     0,
       0,     0,     0,     0,    92,     0,   524,     0,    93,     0,
       0,     0,     0,    94,     0,   271,     0,     0,    95,     0,
       0,     0,     0,     0,     0,    96,     0,    97,     0,   142,
       0,     0,   270,   270,     0,   270,     0,   145,     0,   258,
     148,     0,     0,     0,     0,     0,     6,     0,     0,     0,
     154,   155,   156,   157,   158,   159,    99,   100,   101,   102,
     103,   104,   105,   106,   229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   230,   231,     0,   271,
     271,     0,   271,     0,     0,     0,   162,   163,   232,   233,
      92,   138,   503,     0,    93,     0,     0,   504,   139,    94,
       0,     0,     0,     0,    95,   140,     0,   141,     0,     0,
       0,    96,     0,    97,     0,   142,     0,     0,     0,     0,
     143,   144,     0,   145,   146,   147,   148,   149,     0,     0,
       0,   150,   151,   152,     0,   153,   154,   155,   156,   157,
     158,   159,    99,   100,   101,   102,   103,   104,   105,   106,
     160,     0,   120,    92,   138,     0,   161,    93,     0,     0,
       0,   139,    94,     0,     0,     0,     0,    95,   140,     0,
     141,     0,   162,   163,    96,     0,    97,     0,   142,     0,
       0,     0,     0,   143,   144,     0,   145,   146,   147,   148,
     149,     0,     0,     0,   150,   151,   152,     0,   153,   154,
     155,   156,   157,   158,   159,    99,   100,   101,   102,   103,
     104,   105,   106,   160,   138,   120,     0,     0,     0,   161,
       0,   139,     0,     0,     0,     0,     0,     0,   140,     0,
     141,     0,     0,     0,     0,   162,   163,     0,   142,     0,
       0,     0,     0,   143,   144,     0,   145,   146,   147,   148,
     149,     0,     0,     0,   150,   151,   152,     0,   153,   154,
     155,   156,   157,   158,   159,     0,     0,     0,     0,   138,
       0,     0,     0,   160,     0,   120,   139,     0,     0,   161,
       0,     0,     0,   455,     0,   456,     0,     0,     0,     0,
       0,     0,     0,   142,     0,   162,   163,     0,   143,   144,
       0,   145,   146,   147,   148,   149,     0,     0,     0,   457,
     458,   152,     0,   153,   154,   155,   156,   157,   158,   159,
       0,   142,     0,     0,     0,     0,     0,     0,   160,   145,
     120,     0,   148,     0,   161,     0,     0,     0,     6,     0,
       0,     0,   154,   155,   156,   157,   158,   159,     0,   142,
     162,   163,     0,     0,     0,     0,   229,   145,   312,     0,
     148,     0,     0,     0,     0,     0,     6,     0,   230,   231,
     154,   155,   156,   157,   158,   159,     0,   142,   162,   163,
     232,   233,     0,     0,   229,   145,     0,     0,   148,   219,
       0,     0,     0,     0,     6,     0,   230,   231,   154,   155,
     156,   157,   158,   159,     0,   142,   162,   163,   232,   233,
       0,     0,   229,   145,     0,     0,   148,   467,     0,     0,
       0,     0,     6,     0,   230,   231,   154,   155,   156,   157,
     158,   159,     0,   142,   162,   163,   232,   233,     0,     0,
     229,   145,     0,     0,   148,     0,     0,     0,     0,     0,
       6,     0,   230,   231,   154,   155,   156,   157,   158,   159,
       0,   142,   162,   163,   232,   233,     0,     0,   160,   145,
       0,     0,   148,     0,     0,     0,     0,     0,     6,     0,
       0,     0,   154,   155,   156,   157,   158,   159,     0,   -46,
     162,   163,    20,     0,     0,     0,   229,     0,     0,   -45,
       0,     0,    20,     0,     0,    21,     0,     0,   230,   231,
       0,     0,     0,     0,     0,    21,     0,    22,     0,     0,
      23,    24,    25,     0,     0,    26,     0,    22,    27,     0,
      23,    24,    25,    28,     0,    26,   287,    29,    27,     0,
     276,     0,   277,    28,   317,     0,     0,    29,    18,  -322,
       0,   276,     0,   277,     0,   404,     0,     0,     0,    18,
    -322,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,     0,     0,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322
};

static const yytype_int16 yycheck[] =
{
       1,   120,   224,   169,   144,   224,    71,   162,   163,   142,
      11,   142,   312,    81,   381,   406,    42,    82,   495,   120,
     139,    89,   277,    50,    59,     7,    53,    46,   491,    69,
      78,    66,    59,    24,   508,    17,    64,    85,   139,    66,
       9,    69,    68,    30,    84,    80,   394,    75,    69,    50,
     169,    68,    53,    80,   528,    72,    84,    26,    59,    68,
     537,   538,   129,    84,    73,    66,   433,   134,   169,   546,
      71,    90,   549,   206,   329,   230,   231,   232,   233,    80,
     471,    82,   545,    74,    75,   153,    46,    37,     3,    65,
      40,    82,    83,    65,    70,    71,    68,    65,   229,    70,
      71,    16,    70,    71,    64,   224,    66,   139,    68,   120,
      88,    89,    72,    28,    46,   142,    31,    32,    33,   120,
       6,    36,     0,   224,    39,    11,    86,    87,   139,    44,
      64,    23,    66,    48,    68,    70,    46,    72,    72,    46,
     205,   142,    46,    70,   209,    72,   265,   495,    90,    91,
      70,   451,    67,    95,   346,   347,   348,   349,   169,    96,
      97,   162,   163,    64,   265,    66,    15,    64,   169,    66,
     328,   393,   330,   428,   429,   326,   120,   328,    15,   206,
      86,    87,    22,   338,   339,   340,   441,   442,    71,   537,
     538,   446,   447,    86,    87,   139,    86,    87,   546,    80,
      81,   549,   341,   342,   205,   206,   343,   344,   209,    73,
      66,    72,    66,   224,   345,   350,   351,    67,    71,    70,
      66,    46,    67,   224,    46,   169,    68,    68,   229,   230,
     231,   232,   233,   265,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    64,    42,    64,    69,   382,
      64,    69,   392,    69,   265,    46,    64,   120,     3,    72,
      64,    64,    64,   120,    79,    46,   385,    67,    69,   491,
     492,    16,    70,   492,   393,   394,   139,    70,    72,    68,
     224,    66,   139,    28,   385,    69,    31,    32,    33,    45,
      70,    36,   393,   394,    39,    68,    64,    92,    70,    44,
      70,    84,    94,    48,    46,    93,   169,    70,    70,     7,
      65,    71,   169,   432,    46,   470,   381,    65,    71,    71,
      64,   265,    67,   545,    65,    71,    65,    70,    68,    65,
      68,   432,    65,    17,    65,    65,    64,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   382,   357,    65,    71,    69,
      67,   224,   394,   431,   530,    69,   434,   224,   433,    68,
      64,    64,   491,   492,   385,    71,   495,   496,    69,    68,
     381,   382,   393,   394,   385,    71,    65,    69,    65,   508,
     491,   492,    79,    66,   495,   496,   536,    67,    67,    65,
     432,    64,   265,    70,    64,   406,    64,   508,   265,    14,
       3,   530,    14,    69,    79,    65,   535,    65,   537,   538,
      67,   432,    65,    16,    65,    67,   545,   546,   120,   530,
     549,    65,   433,    70,   535,    28,   537,   538,    31,    32,
      33,   385,   510,    36,   545,   546,    39,   139,   549,   393,
     394,    44,   120,    79,    70,    48,    70,    65,    70,    65,
      79,    65,    14,   495,   496,    65,    67,    70,   345,   470,
     471,   139,   473,    82,    67,    13,    31,   169,   213,    33,
     491,   492,   165,   209,   495,   496,    84,   107,   432,   300,
     385,   492,    75,   508,   506,   505,   492,   508,   545,   152,
     368,   169,   227,   535,   331,   537,   538,   508,   352,   357,
     353,   473,   299,    -1,   546,   354,    -1,   549,    -1,   530,
     355,    -1,   385,    -1,   535,    -1,   537,   538,   385,   530,
     393,   394,   224,    -1,   545,   546,   393,   394,   549,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,   492,    -1,
      -1,   495,   496,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   508,    -1,    -1,     4,    -1,   432,
      -1,     8,    -1,   265,    -1,   432,    13,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,   530,    -1,    25,    -1,
      27,   535,    29,   537,   538,    -1,    -1,   265,    -1,    -1,
      37,   545,   546,    40,    -1,   549,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,   491,   492,
      73,    -1,   495,   496,   491,   492,   143,   144,   495,   496,
      -1,    -1,   149,    -1,    -1,   508,    -1,    -1,    -1,    86,
      87,   508,    -1,   160,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,   530,    -1,    -1,
      -1,    -1,   535,   530,   537,   538,    -1,    -1,   535,    -1,
     537,   538,   545,   546,    -1,    -1,   549,    -1,   545,   546,
      -1,    -1,   549,   385,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   393,   394,     3,    -1,    -1,    -1,    -1,   215,    -1,
      -1,    -1,    -1,    -1,   162,   163,    16,   385,   225,    -1,
      -1,    -1,   229,    -1,    -1,   393,   394,    -1,    28,    -1,
      -1,    31,    32,    33,    -1,    -1,    36,     4,    -1,    39,
     432,     8,    -1,    -1,    44,    -1,    13,    -1,    48,    -1,
      -1,    18,    -1,    -1,   261,   262,    -1,   264,    25,    -1,
      27,   162,   163,    -1,   432,    -1,    -1,    67,    -1,    -1,
      -1,   278,    -1,    -1,    -1,    -1,    43,   284,    -1,    46,
      -1,    -1,   230,   231,   232,   233,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,   491,
     492,    -1,    -1,   495,   496,   312,    -1,    -1,    -1,    -1,
     317,    -1,    -1,    -1,    -1,    -1,   508,    -1,   325,    -1,
      -1,    -1,    -1,   491,   492,    -1,    -1,   495,   496,   230,
     231,   232,   233,    -1,    -1,     3,    -1,    -1,   530,    -1,
     508,    -1,    -1,   535,    -1,   537,   538,    -1,    16,   356,
      -1,    -1,    -1,   545,   546,    -1,    -1,   549,    -1,    -1,
      28,    -1,   530,    31,    32,    33,    -1,   535,    36,   537,
     538,    39,    -1,    -1,    -1,    -1,    44,   545,   546,    -1,
      48,   549,    -1,    -1,   391,   392,    -1,    -1,    -1,   396,
     338,   339,   340,   341,   342,   343,   344,   404,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,   357,
      -1,    -1,    -1,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,   438,    -1,    -1,    25,    -1,    27,   338,   339,   340,
     341,   342,   343,   344,   451,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,    46,   357,    -1,   406,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   493,   494,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,   503,    -1,     8,    -1,
      -1,    -1,    -1,    13,    -1,   406,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    29,
      -1,    -1,   470,   471,    -1,   473,    -1,    37,    -1,   536,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,   470,
     471,    -1,   473,    -1,    -1,    -1,    86,    87,    88,    89,
       4,     5,     6,    -1,     8,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    25,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,     4,     5,    -1,    70,     8,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    18,    19,    -1,
      21,    -1,    86,    87,    25,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     5,    66,    -1,    -1,    -1,    70,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    -1,    86,    87,    -1,    29,    -1,
      -1,    -1,    -1,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    64,    -1,    66,    12,    -1,    -1,    70,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    86,    87,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    64,    37,
      66,    -1,    40,    -1,    70,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    29,
      86,    87,    -1,    -1,    -1,    -1,    64,    37,    66,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    76,    77,
      50,    51,    52,    53,    54,    55,    -1,    29,    86,    87,
      88,    89,    -1,    -1,    64,    37,    -1,    -1,    40,    69,
      -1,    -1,    -1,    -1,    46,    -1,    76,    77,    50,    51,
      52,    53,    54,    55,    -1,    29,    86,    87,    88,    89,
      -1,    -1,    64,    37,    -1,    -1,    40,    69,    -1,    -1,
      -1,    -1,    46,    -1,    76,    77,    50,    51,    52,    53,
      54,    55,    -1,    29,    86,    87,    88,    89,    -1,    -1,
      64,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    76,    77,    50,    51,    52,    53,    54,    55,
      -1,    29,    86,    87,    88,    89,    -1,    -1,    64,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,     0,
      86,    87,     3,    -1,    -1,    -1,    64,    -1,    -1,     0,
      -1,    -1,     3,    -1,    -1,    16,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    28,    -1,    -1,
      31,    32,    33,    -1,    -1,    36,    -1,    28,    39,    -1,
      31,    32,    33,    44,    -1,    36,    73,    48,    39,    -1,
      64,    -1,    66,    44,    68,    -1,    -1,    48,    72,    73,
      -1,    64,    -1,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    30,   112,   127,   128,   133,    46,   124,   125,   126,
       0,    23,   129,   131,   134,   135,   136,    70,    72,   124,
       3,    16,    28,    31,    32,    33,    36,    39,    44,    48,
     130,   132,   137,   138,   139,   140,   141,   176,   134,    46,
      70,    72,   137,   139,     9,    26,    90,    46,    46,    70,
      15,   142,   144,    15,   175,   177,   120,   121,   124,    22,
     143,   145,   120,   122,    66,   179,    71,   122,   146,    66,
     147,   141,   152,   158,   178,   180,   181,   182,   183,   122,
      71,    36,   141,   148,   149,   150,   151,   152,   157,   158,
     167,   168,     4,     8,    13,    18,    25,    27,    43,    56,
      57,    58,    59,    60,    61,    62,    63,   114,   115,   116,
     117,   118,   119,   120,   123,   124,    70,    67,   181,   122,
      66,   188,   125,   169,    67,   150,   166,   188,    46,   161,
      46,   153,   154,   155,   161,    68,    68,    68,     5,    12,
      19,    21,    29,    34,    35,    37,    38,    39,    40,    41,
      45,    46,    47,    49,    50,    51,    52,    53,    54,    55,
      64,    70,    86,    87,   113,   114,   124,   171,   188,   189,
     190,   191,   192,   193,   195,   196,   197,   199,   200,   201,
     202,   204,   212,   214,   218,   224,   225,   226,   227,   228,
     230,   234,   235,   236,   239,   243,   244,   245,   246,   247,
     248,   250,   251,   266,   267,    64,    42,   159,   164,    64,
      68,   159,    70,    71,    68,    73,   159,    69,    69,    69,
      46,   223,   124,   193,    64,    64,   115,   120,   121,    64,
      76,    77,    88,    89,   216,   236,   244,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   269,   216,
      72,    64,    64,   269,    64,    79,   223,   188,   269,   124,
     243,   245,   249,   249,    46,   153,    64,    66,    68,    67,
     190,    70,    70,    72,    68,    86,    87,    73,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   268,
     114,   160,   162,   163,   121,   165,    66,   173,   160,    69,
     154,    69,    66,   156,   186,   269,    70,    68,    45,   192,
     200,   215,   220,   222,   269,    68,   240,   241,   240,    64,
     115,   124,   269,   249,   249,   249,   249,    70,    90,    91,
      95,    88,    89,    96,    97,    24,    74,    75,    82,    83,
      80,    81,    92,    94,    93,    84,    78,    85,    70,    46,
     269,   269,    70,   269,   193,    70,     7,   229,   231,   232,
      65,   172,   237,   269,   172,   269,    46,   269,   265,   155,
      65,    71,    71,    37,    40,   170,   174,    65,   156,   184,
     187,    64,    70,    71,    65,   269,    68,   238,   241,   242,
     238,   172,    68,   238,    68,   242,    65,   249,   249,   249,
     254,   254,   255,   255,   115,   119,   256,   256,   256,   256,
     257,   257,   258,   259,   260,   261,   269,   262,    64,    66,
      65,    65,    65,    64,    17,   233,   232,    65,    71,    67,
      69,    64,    66,    69,   163,   121,    64,    64,   171,    71,
     185,    71,   269,   216,   200,    19,    21,    45,    46,   193,
     194,   195,   198,   203,   213,   219,    69,    69,    68,    65,
      65,    65,   252,    79,   172,   172,    66,   207,   188,   193,
     163,   188,   269,   172,   172,   172,   172,    67,    67,   156,
      65,    70,    64,    64,    64,    79,    14,    69,   249,   252,
     264,    65,    67,     6,    11,   205,   208,   209,   210,   211,
      65,    65,    67,    65,    65,    70,   217,   221,   222,   215,
     269,   269,   194,   193,   269,   270,    79,   206,   210,   209,
     189,   211,   188,    70,    70,    65,    70,    65,    65,    79,
      67,   193,   216,   194,   194,    70,    14,   217,   194,    65,
     194
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   111,   112,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   119,   119,
     120,   121,   122,   123,   123,   123,   124,   124,   125,   126,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   134,   135,   136,   137,   137,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   145,   146,
     146,   147,   148,   148,   149,   149,   150,   150,   150,   151,
     151,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   158,   158,   159,   159,   160,   160,   161,   161,   162,
     162,   163,   164,   165,   165,   166,   167,   168,   169,   170,
     170,   171,   171,   172,   172,   173,   174,   174,   175,   175,
     176,   177,   177,   178,   178,   179,   180,   180,   181,   181,
     182,   183,   184,   184,   185,   185,   186,   187,   187,   188,
     189,   189,   190,   190,   191,   192,   193,   193,   193,   193,
     193,   193,   194,   194,   194,   194,   194,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   196,   197,
     198,   199,   200,   200,   200,   200,   200,   200,   200,   201,
     202,   203,   204,   205,   205,   206,   206,   207,   208,   208,
     209,   210,   210,   211,   211,   212,   213,   214,   215,   215,
     216,   216,   217,   217,   218,   219,   220,   220,   221,   222,
     222,   223,   223,   224,   225,   226,   226,   227,   228,   229,
     229,   230,   230,   231,   231,   232,   233,   234,   234,   235,
     235,   235,   235,   235,   235,   235,   236,   237,   237,   238,
     238,   239,   239,   240,   240,   241,   242,   242,   243,   243,
     244,   244,   244,   244,   244,   244,   245,   245,   246,   246,
     246,   246,   247,   248,   249,   249,   249,   249,   249,   250,
     251,   252,   252,   252,   252,   253,   253,   253,   254,   254,
     254,   254,   255,   255,   255,   256,   256,   256,   257,   257,
     257,   257,   257,   257,   258,   258,   258,   259,   259,   260,
     260,   261,   261,   262,   262,   263,   263,   264,   264,   265,
     265,   266,   267,   267,   267,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   269,   270
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     1,     1,     3,
       3,     1,     0,     1,     0,     1,     0,     1,     2,     1,
       2,     3,     1,     1,     3,     5,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     1,     0,     1,     0,     1,     0,     2,     2,     1,
       3,     3,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     4,     1,     3,     1,     3,     1,     3,     1,     1,
       2,     4,     4,     1,     0,     1,     0,     4,     3,     1,
       3,     2,     2,     1,     3,     1,     2,     4,     4,     1,
       0,     1,     0,     1,     0,     4,     5,     5,     1,     0,
       5,     2,     3,     1,     0,     3,     1,     2,     1,     1,
       1,     2,     1,     0,     1,     0,     4,     1,     3,     3,
       1,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     7,     5,     1,     0,     1,     0,     4,     1,     2,
       2,     1,     2,     3,     2,     5,     5,     7,     1,     0,
       1,     0,     1,     0,     9,     9,     1,     1,     1,     1,
       3,     1,     0,     3,     3,     3,     3,     3,     5,     1,
       0,     3,     4,     1,     2,     5,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     5,     1,     3,     1,
       0,     4,     4,     1,     2,     3,     2,     3,     3,     3,
       4,     6,     6,     4,     6,     6,     4,     4,     1,     1,
       1,     1,     2,     2,     1,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     5,     4,     5,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
      yyerror (scanner, YY_("syntax error: cannot back up")); \
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
                  Type, Value, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, yyscan_t scanner)
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
                                              , scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, scanner); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (scanner);
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
yyparse (yyscan_t scanner)
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
        case 42:
#line 347 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2073 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 349 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2079 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 351 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2085 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 397 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2091 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 399 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2097 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 401 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2103 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 416 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2109 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 458 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2115 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 461 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2121 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 496 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2127 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 498 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2133 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 500 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2139 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 509 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2145 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 519 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2151 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 538 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2157 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 540 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2163 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 540 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2169 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 628 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2175 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 630 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2181 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 659 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2187 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 661 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2193 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 663 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2199 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 685 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2205 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 704 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2211 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 740 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2217 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
    break;


#line 2221 "/media/dados/projetos/Beagle/modules/parser/source/parser.cpp" /* yacc.c:1646  */
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
      yyerror (scanner, YY_("syntax error"));
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
        yyerror (scanner, yymsgp);
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
                      yytoken, &yylval, scanner);
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
                  yystos[yystate], yyvsp, scanner);
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
  yyerror (scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, scanner);
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
#line 896 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1906  */



void beagle_set_column (int  column_no , yyscan_t yyscanner);

namespace beagle
{

	Parser::Parser(
		std::istream *in,
		std::ostream *out )
	{
		this->in = in;
		this->out = out;
		buffer = NULL;

		// initialize the lexer
		beagle_lex_init(&scanner);
		readFile();
		beagle_set_lineno(1, scanner);
		beagle_set_column(1, scanner);
	}

	Parser::~Parser()
	{
		if (buffer != NULL)
			beagle__delete_buffer((YY_BUFFER_STATE)buffer, scanner);
		beagle_lex_destroy(scanner);
	}

	int Parser::parse( )
	{
		return beagle_parse(scanner);
	}

	bool Parser::readFile( )
	{
		std::stringstream ss;
		std::string line;

		while (std::getline(*in, line))
		{
			ss << line;
			ss << std::endl;
		}

		buffer = beagle__scan_string(ss.str().c_str(), scanner);
	}

} // namespace beagle


const char *beagle::Parser::name( int tok )
{
	return yytname[YYTRANSLATE(tok)];
}
