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
#include <vector>
#include <beagle-parser/Node.hh>


/*
 * The parser need to know about the 'yyscan_t' type,
 * but the generated header by Flex don't provide this information.
 */
typedef void *yyscan_t;


typedef struct
{
    yyscan_t scanner;

    std::vector<beagle::Node*> stack;

    const char *fileName;

    const char *rule;

} parser_context_t;


/**
 * Get the current column in the lexer scanner.
 *
 * For some reason this prototype is not generated in the Flex
 * header file, so we include it here.
 */
int beagle_get_column  (yyscan_t yyscanner);


#line 143 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */

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
    TOK_DEDENT = 369,
    TOK_TYPE_CLASS = 370,
    TOK_TYPE_ARRAY = 371,
    TOK_INTERFACES = 372,
    TOK_NONE = 373,
    TOK_BODY = 374,
    TOK_FIELD = 375,
    TOK_METHOD = 376,
    TOK_CONSTRUCTOR = 377,
    TOK_LIST = 378,
    TOK_VARIABLE = 379,
    TOK_MODIFIERS = 380,
    TOK_UNIT = 381,
    TOK_TYPE = 382,
    TOK_MEMBER = 383,
    TOK_IMPORT_ALL = 384,
    TOK_STATIC_INIT = 385,
    TOK_PARAMETER = 386
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 136 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */

    char* node;

#line 291 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 305 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 55 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:359  */


#include <iostream>
#include "beagle.l.hh"
#include <beagle-parser/Node.hh>


static void beagle_error(parser_context_t *context, const char *msg)
{
    printf ("%s:%d:%d: error: %s - %s\n",
		context->fileName,
		beagle_get_lineno(context->scanner),
		beagle_get_column(context->scanner),
		context->rule,
		msg);
    return;
}


static beagle::Node *beagle_pop( std::vector<beagle::Node*> &stack )
{
	if (stack.size() == 0) return NULL;
    beagle::Node *node = stack[ stack.size() - 1 ];
    stack.pop_back();
    return node;
}


static beagle::Node* beagle_combine( std::vector<beagle::Node*> &stack, int tok, int n )
{
	beagle::Node *temp;

	if (stack.size() < n) return NULL;

	if (tok > 0 )
		temp = new beagle::Node(tok, NULL);
	else
	{
		if (stack.size() <= n) return NULL;
		temp = stack[ stack.size() - 1 - n ];
	}
	for (int i = stack.size() - n; i < stack.size(); ++i)
	{
		//std::cout << temp->getValue() << ": adding child " << p->getValue() << std::endl;;
		temp->addChild( stack[i] );
	}
	for (int i = 0; i < n; ++i)
		stack.pop_back();

	if (tok > 0) stack.push_back(temp);
}


#define scanner              parserContext->scanner
#define PUSH(tok,value)      std::cout << "PUSH " << value << std::endl, parserContext->stack.push_back( new beagle::Node((tok),(value)) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)				 parserContext->rule = (x)


#line 369 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYLAST   1528

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  132
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  161
/* YYNRULES -- Number of rules.  */
#define YYNRULES  340
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  571

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   386

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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   349,   349,   353,   354,   355,   356,   357,   358,   362,
     363,   367,   368,   373,   374,   378,   380,   382,   384,   386,
     388,   390,   392,   394,   396,   398,   403,   405,   410,   411,
     415,   420,   425,   429,   433,   437,   441,   449,   450,   454,
     459,   467,   472,   473,   477,   478,   483,   485,   490,   495,
     496,   500,   505,   512,   513,   517,   518,   522,   523,   527,
     528,   532,   534,   539,   541,   543,   545,   547,   549,   551,
     553,   555,   557,   562,   567,   568,   572,   573,   577,   578,
     583,   587,   591,   593,   598,   602,   603,   607,   609,   614,
     615,   616,   620,   621,   622,   626,   631,   633,   638,   643,
     647,   649,   653,   654,   658,   666,   672,   674,   680,   681,
     686,   687,   690,   692,   697,   699,   707,   711,   712,   715,
     719,   724,   729,   730,   734,   735,   738,   738,   741,   748,
     749,   753,   754,   758,   763,   765,   770,   774,   775,   779,
     781,   786,   787,   791,   795,   802,   802,   804,   804,   806,
     809,   810,   814,   818,   819,   822,   823,   826,   829,   832,
     833,   834,   835,   836,   839,   840,   841,   842,   845,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   855,   859,
     863,   866,   867,   868,   869,   870,   871,   872,   876,   880,
     884,   888,   891,   891,   893,   893,   895,   898,   899,   902,
     905,   906,   909,   910,   913,   916,   919,   922,   922,   924,
     924,   926,   926,   928,   932,   937,   938,   941,   944,   945,
     948,   948,   950,   953,   956,   957,   961,   964,   967,   967,
     969,   970,   972,   973,   976,   980,   983,   984,   987,   988,
     989,   990,   991,   992,   993,   996,   999,  1000,  1003,  1003,
    1005,  1006,  1009,  1010,  1013,  1016,  1017,  1020,  1021,  1024,
    1025,  1026,  1027,  1028,  1029,  1032,  1033,  1036,  1037,  1038,
    1039,  1042,  1045,  1048,  1049,  1050,  1051,  1052,  1055,  1058,
    1061,  1062,  1063,  1064,  1067,  1068,  1069,  1072,  1073,  1074,
    1075,  1078,  1079,  1080,  1083,  1084,  1085,  1088,  1089,  1090,
    1091,  1092,  1093,  1096,  1097,  1098,  1101,  1102,  1105,  1106,
    1109,  1110,  1113,  1114,  1117,  1118,  1121,  1122,  1126,  1127,
    1130,  1133,  1134,  1135,  1138,  1139,  1140,  1141,  1142,  1143,
    1144,  1145,  1146,  1147,  1148,  1149,  1152,  1155,  1159,  1163,
    1167
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
  "TOK_AT", "TOK_VARARG", "TOK_INDENT", "TOK_DEDENT", "TOK_TYPE_CLASS",
  "TOK_TYPE_ARRAY", "TOK_INTERFACES", "TOK_NONE", "TOK_BODY", "TOK_FIELD",
  "TOK_METHOD", "TOK_CONSTRUCTOR", "TOK_LIST", "TOK_VARIABLE",
  "TOK_MODIFIERS", "TOK_UNIT", "TOK_TYPE", "TOK_MEMBER", "TOK_IMPORT_ALL",
  "TOK_STATIC_INIT", "TOK_PARAMETER", "$accept", "Goal", "Literal", "Type",
  "PrimitiveType", "NumericType", "IntegralType", "FloatingPointType",
  "ReferenceType", "ClassOrInterfaceType", "ClassType", "InterfaceType",
  "ArrayType", "Name", "SimpleName", "QualifiedName", "CompilationUnit",
  "PackageDeclarationOpt", "ImportDeclarationsOpt", "ImportDeclarations",
  "PackageDeclaration", "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "TypeDeclaration",
  "AnnotationDeclarationsOpt", "AnnotationDeclarations",
  "AnnotationDeclaration", "Modifiers", "Modifier", "ClassDeclaration",
  "ModifiersOpt", "SuperOpt", "InterfacesOpt", "Super", "Interfaces",
  "InterfaceTypeList", "ClassBody", "ClassBodyDeclarationsOpt",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclarators",
  "VariableDeclarator", "VariableDeclaratorId", "VariableInitializer",
  "MethodDeclaration", "VoidType", "MethodHeader", "ThrowsOpt",
  "FormalParameterListOpt", "FormalParameterList", "FormalParameter",
  "Throws", "ClassTypeList", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "ExplicitConstructorInvocationOpt",
  "BlockStatementsOpt", "ArgumentListOpt", "ConstructorBody",
  "ExplicitConstructorInvocation", "ExtendsInterfacesOpt",
  "InterfaceDeclaration", "ExtendsInterfaces", "InterfaceBody",
  "InterfaceMemberDeclarationsOpt", "InterfaceMemberDeclarations",
  "InterfaceMemberDeclaration", "ConstantDeclaration",
  "AbstractMethodDeclaration", "VariableInitializersOpt", "CMOpt",
  "ArrayInitializer", "VariableInitializers", "Block", "BlockStatements",
  "BlockStatement", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement", "StatementNoShortIf",
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386
};
# endif

#define YYPACT_NINF -467

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-467)))

#define YYTABLE_NINF -324

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      43,    46,   104,  -467,   124,  -467,  -467,   -35,  -467,  -467,
    -467,    46,    66,   124,  -467,  -467,  -467,   122,  -467,   -13,
     163,  -467,   275,    66,  -467,  -467,  -467,  -467,  -467,   -10,
    -467,   -24,  -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,
    -467,  -467,   275,  -467,    44,  -467,   139,  1385,  -467,  -467,
      46,    46,  -467,  1450,   142,  -467,  -467,  -467,  -467,  -467,
    -467,  -467,  1257,  1385,  1385,  1385,  1385,  1385,  1385,  -467,
     496,   176,   181,   201,  -467,   210,  -467,   953,  -467,  1030,
      29,  -467,  -467,  -467,  -467,  -467,  -467,  -467,   140,   -40,
     179,    59,   152,   197,   190,   202,   209,   117,  -467,  -467,
    -467,  1420,  -467,   282,   287,  -467,  -467,  -467,  -467,  -467,
    -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,   245,
    -467,  -467,  -467,   245,   252,   113,   272,   254,  1384,   266,
     106,  -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,  1385,
    1385,  -467,  1385,   223,   288,  1385,  1385,  -467,  -467,  1385,
    1385,  1385,  1385,  1385,  1385,  1385,  1450,  1385,  1385,  1385,
    1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  -467,
    -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,
    -467,  1385,    46,   315,  -467,    46,   225,   267,  1385,   271,
    -467,   271,  1385,    46,   -23,   276,   283,   279,  1301,   161,
     313,   286,   289,   238,  -467,   -20,   292,  -467,  -467,  -467,
    -467,   140,   140,   -40,   -40,   301,  -467,  -467,   302,   149,
     179,   179,   179,   179,    59,    59,   152,   197,   190,   202,
     281,   209,  -467,  -467,  -467,    46,   261,  -467,  -467,  -467,
     260,    46,   306,  1301,  -467,  -467,  -467,   311,  -467,    57,
    1385,  1385,  -467,  1385,   310,   313,  -467,  -467,  -467,  -467,
    -467,  1385,  1385,  -467,   312,   314,   319,  1385,   309,   260,
    -467,   131,  -467,  -467,  -467,    46,  -467,   328,   238,  -467,
    -467,  -467,   329,   238,  -467,  -467,  -467,  -467,  -467,   136,
     275,  -467,   274,   238,   137,  -467,  -467,  -467,  -467,  -467,
    -467,  -467,  -467,   661,   238,   153,  -467,  -467,  -467,  -467,
     290,  -467,  -467,   200,  -467,  -467,  -467,   260,   200,  -467,
    -467,  -467,   260,  -467,   352,   301,  -467,    46,  -467,  1061,
     338,  -467,  -467,   339,   340,   -38,  -467,    98,   341,   360,
    1138,   345,   346,  1385,  1385,   348,   354,  1385,   355,   360,
     260,  1385,  -467,   370,   -18,   238,  -467,  1061,  -467,  -467,
     316,  -467,  -467,  -467,  -467,   317,  -467,  -467,  -467,  -467,
    -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,    58,   111,
      29,   214,   218,  -467,  -467,  -467,   374,   374,   370,  -467,
     356,  1329,   374,  -467,   331,   378,   897,  1385,   332,  -467,
     333,  1385,  1385,   334,  1385,   335,   417,   364,  -467,   367,
    1357,  -467,  -467,  -467,  -467,  1450,   370,   381,   376,  -467,
     383,  -467,  -467,  1329,  -467,  -467,  -467,   384,  -467,   387,
    -467,  -467,   389,  -467,   382,   396,  -467,  -467,   397,   399,
    -467,   401,  -467,   403,   452,   114,  -467,  -467,   370,   402,
     429,   374,   429,  -467,   404,   406,   429,  1385,  1385,  1237,
     363,   363,   260,  1138,   374,   260,  -467,  -467,   402,    46,
     369,  -467,  -467,  -467,  -467,   415,  1329,  -467,   418,   414,
    -467,  -467,  1192,   260,  -467,  -467,   420,  -467,  -467,   419,
     260,  -467,  -467,   386,  1237,   424,   427,   428,  -467,   480,
     484,  -467,  -467,  -467,  -467,   185,   260,    46,  -467,   231,
    -467,   436,  -467,   382,   897,  1385,  1385,   363,  1385,   423,
     185,   185,  -467,   984,  -467,  -467,  -467,   439,   440,   238,
    -467,  1138,   435,   442,   445,  1138,  -467,   433,  -467,   238,
     185,  -467,  1061,  -467,  1385,  1385,  -467,  -467,  1385,   363,
    1192,  -467,  -467,  -467,   449,   451,   447,  1192,  -467,   408,
     410,  1237,   510,  -467,  -467,   462,   363,  1192,  1192,  -467,
    -467
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      43,     0,     0,     2,    45,    42,    39,     0,    37,    38,
       1,     0,    56,    44,    46,    49,    50,     0,    48,     0,
       0,    41,    75,    55,    57,    53,    54,    47,    40,     0,
      51,     0,    67,    68,    69,    65,    64,    63,    66,    70,
      72,    71,    74,    61,     0,    58,     0,   127,    60,    62,
       0,     0,    52,     0,     0,   239,     8,     5,     3,     7,
       4,     6,     0,     0,     0,     0,     0,     0,     0,   238,
     268,     0,   267,   236,   241,   126,   237,   242,   243,   244,
     280,   269,   270,   287,   273,   274,   277,   283,   291,   294,
     297,   303,   306,   308,   310,   312,   314,   316,   318,   336,
     319,     0,   246,    77,   132,    12,    25,    27,    26,    23,
      24,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      11,    13,    14,    32,     0,    30,     0,   249,   268,     0,
     268,   242,   244,   282,   281,   278,   279,   275,   276,   127,
       0,   338,   127,     0,     0,     0,     0,   271,   272,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   324,
     328,   329,   325,   326,   333,   335,   334,   330,   331,   332,
     327,     0,     0,    79,    76,     0,     0,   131,     0,   249,
     252,   249,   127,     0,   258,     0,     0,   248,     0,     0,
     240,     0,     0,     0,    59,   257,     0,   247,   288,   289,
     290,   292,   293,   295,   296,     0,   302,    28,    29,    30,
     298,   299,   300,   301,   304,   305,   307,   309,   311,   313,
       0,   315,   320,    32,    80,     0,     0,    78,    33,   134,
       0,     0,     0,     0,   250,   253,   251,     0,    82,     0,
     127,   127,   255,     0,     0,     0,   285,   259,   265,   339,
     262,   127,   127,   266,     0,     0,     0,     0,    81,     0,
     133,    56,   135,   254,   245,     0,    31,     0,     0,   284,
     256,   286,     0,     0,    34,    36,    35,   317,    73,    56,
      75,   143,     0,     0,    56,   139,   141,   142,    83,   261,
     264,   260,   263,    75,     0,    56,    87,    89,    92,    93,
       0,    91,    94,     0,   144,   136,   140,    66,     0,    90,
      84,    88,   144,   105,     0,     9,    10,     0,   120,   125,
      37,   104,   119,   100,     0,     0,    96,    98,     0,   221,
       0,     0,     0,   210,   210,     0,     0,     0,     0,   221,
       0,     0,   179,     0,   321,     0,   168,   124,   153,   155,
       0,   156,   159,   169,   170,     0,   160,   161,   171,   162,
     172,   163,   173,   174,   175,   177,   176,   178,   187,   186,
       0,   184,   185,   182,   183,   181,   111,   111,     0,    95,
       0,     0,   111,   220,     0,     0,   208,     0,     0,   209,
       0,     0,     0,     0,     0,     0,   229,     0,   100,   158,
       0,   152,   154,   157,   180,     0,     0,     0,   110,   112,
       0,    97,   101,   146,    99,   103,   102,     0,   222,     0,
     216,   218,     0,   207,   215,     0,   224,   225,     0,     0,
     226,     0,   223,     0,     0,   230,   232,   240,     0,   114,
     109,     0,   109,   150,   148,   145,   109,     0,   210,     0,
       0,     0,     0,     0,     0,     0,   231,   233,   115,     0,
       0,   108,   113,   106,   147,     0,     0,   107,     0,     0,
     219,   340,     0,     0,   227,   204,     0,   235,   117,   116,
       0,   149,   151,     0,   212,     0,     0,     0,   188,     0,
     159,   165,   166,   167,   191,   193,     0,     0,   121,   123,
     206,     0,   211,   217,   208,     0,     0,     0,     0,     0,
     195,   192,   197,     0,   200,   234,   118,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   337,     0,   203,     0,
     194,   198,   199,   201,   127,   127,   128,   213,   210,     0,
       0,   189,   202,   196,     0,     0,     0,     0,   205,     0,
       0,   212,     0,   130,   129,     0,     0,     0,     0,   214,
     190
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -467,  -467,  -467,  -275,   -27,  -467,  -467,  -467,   372,   -47,
    -175,  -165,  -467,    -1,   -39,  -467,  -467,  -467,  -467,  -467,
    -467,   517,  -467,  -467,  -467,    -9,  -467,   512,  -467,   491,
    -467,  -183,  -467,  -467,  -467,  -467,   304,  -467,  -467,  -467,
     232,  -467,  -247,   183,   154,  -377,  -399,  -467,  -467,  -211,
    -405,  -186,  -467,  -278,  -467,  -467,  -467,  -467,  -467,  -467,
    -467,  -137,  -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,
     249,  -467,  -187,  -467,  -467,  -467,  -467,  -290,    21,  -335,
    -467,  -375,  -258,  -357,  -459,  -467,  -467,  -371,  -467,  -467,
    -467,  -467,  -467,  -467,  -467,  -467,    24,    27,  -466,  -467,
    -467,  -467,    39,  -336,    -7,  -467,  -467,  -467,  -467,  -465,
     206,  -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,   116,
    -467,  -467,  -467,   -42,  -467,    31,  -467,   443,    81,   458,
     712,    15,   732,    17,    99,   192,   -50,   194,   251,  -166,
    -467,   168,   170,    79,   165,   393,   407,   398,   409,   405,
    -467,   303,   411,   291,  -467,  -467,   -61,  -467,   -25,  -274,
    -430
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    69,   353,   325,   120,   121,   122,   326,   217,
     124,   248,   218,    70,     8,     9,     3,     4,    12,    13,
       5,    14,    15,    16,    21,   290,    23,    24,    42,    43,
      25,    44,   183,   236,   184,   237,   249,   288,   304,   305,
     306,   307,   291,   335,   336,   337,   424,   309,   327,   292,
     470,   417,   418,   419,   471,   489,   331,   319,   311,   529,
     355,    71,   508,   530,   186,    26,   187,   270,   293,   294,
     295,   296,   297,   454,   475,   425,   455,   356,   357,   358,
     359,   360,   361,   499,   362,   363,   364,   365,   366,   367,
     501,   368,   520,   539,   504,   521,   522,   523,   524,   369,
     502,   370,   432,   398,   511,   371,   503,   433,   512,   434,
     394,   372,   373,   374,   375,   376,   444,   377,   445,   446,
     466,    72,    73,    74,    75,   196,    76,   189,   190,   197,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   181,   102,   537,   329,   260,
     482
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   129,   201,    22,   300,   203,   123,   234,   400,   302,
      19,   103,   104,   133,   134,   135,   136,   137,   138,   315,
     239,   430,   412,   500,   453,   431,   119,   328,   -30,   513,
     320,   483,   332,   388,   256,   127,    28,    17,   324,   449,
      47,   250,   308,   324,   261,   142,   139,   473,   152,   153,
     410,   477,   125,    50,    17,   247,   193,   543,   308,    29,
     406,   128,   130,   130,   130,   130,   130,   130,  -268,  -268,
      51,   468,   389,     1,   543,    18,   272,   492,   310,   202,
      46,   411,   395,   156,   206,   207,    48,   535,   480,   281,
     141,   500,     6,   141,   310,   141,   513,    30,   500,   208,
     209,   210,   312,   142,    10,   142,   230,   313,   500,   500,
     298,   416,   416,   277,   278,   147,   148,   416,   312,   557,
     318,   443,   479,   431,   282,   283,  -241,   242,   275,   215,
    -241,  -228,   276,   157,   158,   233,   568,   202,   238,   430,
     448,   159,   160,   431,  -241,  -241,   238,    11,   130,   130,
     130,   130,   130,   130,   130,   219,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   390,   130,    28,   251,
     139,   391,   484,   472,   140,   487,   416,    20,    17,  -243,
     262,   125,   242,  -243,   125,    17,   486,   193,   238,   416,
     431,   518,   125,   558,   238,   167,   519,  -243,  -243,   130,
     562,   420,   168,   279,   105,   485,   427,   412,   106,    31,
     569,   570,   556,   107,   126,   271,   525,   266,   108,   141,
     244,    17,   246,   193,   498,   109,   255,   110,   238,   254,
     149,   150,   161,   162,   125,   151,   220,   221,   222,   223,
     125,   143,    20,   323,   289,  -138,     6,    20,    20,    52,
     -86,  -137,   130,   144,   130,   546,   111,   112,   113,   114,
     115,   116,   117,   118,    20,   553,   130,   -85,   527,   145,
     245,   528,   245,   547,   125,   154,   155,   551,    32,   330,
     303,   146,   399,   399,   164,   334,   403,   378,   338,   163,
     407,    33,   485,   166,   488,   165,   303,   182,   378,   498,
    -269,  -269,   185,    34,  -270,  -270,    35,    36,    37,   547,
     551,    38,   219,   188,    39,   378,   192,   219,   194,    40,
     211,   212,   195,    41,   213,   214,   224,   225,   354,   142,
     426,   200,   526,   204,   205,   240,   435,   235,   241,   243,
     438,   439,    53,   441,   379,   252,   380,   254,   253,   202,
      54,   257,   259,    55,   378,   379,   354,   380,   258,     6,
     267,   263,   426,    56,    57,    58,    59,    60,    61,   264,
     265,   269,   379,   141,   380,   273,   274,    62,   105,   280,
     275,   284,   106,   285,   314,   219,   219,   107,   286,    63,
      64,   219,   108,   299,   301,   354,   478,   399,   333,   109,
     322,   110,   386,   -39,   387,   392,   393,   554,   555,   396,
     397,   379,   401,   380,   219,   426,   408,   378,   402,   404,
       6,   378,   233,   429,   443,   422,   413,   414,   381,   447,
     111,   112,   113,   114,   115,   116,   117,   118,   388,   381,
     378,   428,   436,   437,   440,   442,   450,   451,   452,   456,
     219,   457,   378,   459,   533,   534,   381,   536,   505,   458,
     233,   460,   461,   219,   462,   509,   463,   464,   125,   465,
     390,   469,   378,   481,   379,   474,   380,   476,   379,   490,
     380,   378,   491,   493,   494,   506,   415,   399,   514,   378,
     507,   515,   516,   378,   517,   381,   510,   379,  -164,   380,
     378,   531,   538,   544,   545,   548,   125,   549,   378,   379,
     550,   380,   552,   354,   559,   378,   560,   561,   563,   378,
     564,   382,   354,   383,   566,   378,   378,   567,   216,   379,
      27,   380,   382,    49,   383,    45,   409,   321,   379,   268,
     380,   354,   421,   316,   542,   541,   379,   540,   380,   382,
     379,   383,   380,   532,   565,   405,   226,   379,   381,   380,
     139,   467,   381,   228,   140,   379,   191,   380,    17,  -321,
     287,   227,   379,   231,   380,   229,   379,     0,   380,     0,
     384,   381,   379,   379,   380,   380,   199,     0,   382,     0,
     383,   384,   232,   381,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,     0,     0,     0,   384,   141,
       0,     0,     0,   381,     0,     0,     0,     0,     0,     0,
     385,     0,   381,     0,     0,     0,     0,     0,     0,     0,
     381,   385,     0,     0,   381,     0,     0,     0,     0,     0,
       0,   381,     0,     0,     0,     0,     0,   384,   385,   381,
       0,   382,     0,   383,     0,   382,   381,   383,     0,     0,
     381,     0,     0,     0,    32,     0,   381,   381,     0,     0,
       0,     0,     0,     0,   382,     0,   383,    33,     0,     0,
       0,     0,     0,     0,     0,     0,   382,   385,   383,    34,
       0,     0,    35,    36,    37,     0,     0,   317,     0,     0,
      39,     0,     0,     0,     0,    40,   382,     0,   383,    41,
     384,     0,     0,     0,   384,   382,     0,   383,     0,     0,
       0,     0,     0,   382,     0,   383,     0,   382,     0,   383,
       0,     0,     0,   384,   382,     0,   383,     0,     0,     0,
       0,     0,   382,     0,   383,   384,     0,     0,     0,   382,
     385,   383,     0,   382,   385,   383,     0,     0,     0,   382,
     382,   383,   383,     0,     0,   384,     0,     0,     0,     0,
       0,     0,     0,   385,   384,   131,   131,   131,   131,   131,
     131,     0,   384,     0,     0,   385,   384,     0,     0,     0,
       0,     0,     0,   384,     0,   132,   132,   132,   132,   132,
     132,   384,     0,     0,     0,   385,     0,     0,   384,     0,
       0,     0,   384,     0,   385,     0,     0,     0,   384,   384,
       0,     0,   385,     0,     0,     0,   385,     0,     0,     0,
       0,     0,     0,   385,     0,     0,     0,     0,     0,     0,
       0,   385,     0,     0,     0,     0,     0,     0,   385,     0,
       0,     0,   385,     0,     0,     0,     0,     0,   385,   385,
       0,   131,   131,   131,   131,   131,   131,   131,     0,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,     0,
     131,   132,   132,   132,   132,   132,   132,   132,     0,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,     0,
     132,   105,     0,     0,     0,   106,     0,     0,     0,     0,
     107,     0,   131,     0,     0,   108,     0,     0,     0,     0,
       0,     0,   109,     0,   110,     0,    53,     0,     0,     0,
       0,     0,   132,     0,    54,     0,     0,    55,     0,     0,
       0,     0,     0,     6,     0,     0,     0,    56,    57,    58,
      59,    60,    61,   111,   112,   113,   114,   115,   116,   117,
     118,   351,     0,     0,     0,   131,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,     0,     0,    65,    66,   132,     0,   132,   105,   339,
     518,     0,   106,     0,     0,   519,   340,   107,     0,   132,
       0,     0,   108,   341,     0,   342,     0,     0,     0,   109,
       0,   110,     0,    53,     0,     0,     0,     0,   343,   344,
       0,    54,   345,   346,    55,   347,  -322,     0,     0,   348,
       6,   349,     0,   350,    56,    57,    58,    59,    60,    61,
     111,   112,   113,   114,   115,   116,   117,   118,   351,     0,
       0,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,     0,     0,     0,   105,   339,     0,     0,   106,
      65,    66,     0,   340,   107,     0,     0,     0,     0,   108,
     341,     0,   342,     0,     0,     0,   109,     0,   110,     0,
      53,     0,     0,     0,   352,   343,   344,   141,    54,   345,
     346,    55,   347,  -323,     0,     0,   348,     6,   349,     0,
     350,    56,    57,    58,    59,    60,    61,   111,   112,   113,
     114,   115,   116,   117,   118,   351,     0,     0,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,     0,
       0,     0,     0,   339,     0,     0,     0,    65,    66,     0,
     340,     0,     0,     0,     0,     0,     0,   341,     0,   342,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
       0,   352,   343,   344,   141,    54,   345,   346,    55,   347,
       0,     0,     0,   348,     6,   349,     0,   350,    56,    57,
      58,    59,    60,    61,     0,     0,     0,   339,     0,     0,
       0,     0,   351,     0,   340,     0,     0,     0,     0,     0,
       0,   495,     0,   496,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,    65,    66,   343,   344,     0,    54,
     345,   346,    55,   347,     0,     0,     0,   497,     6,   349,
       0,   350,    56,    57,    58,    59,    60,    61,   352,     0,
       0,   141,     0,     0,     0,     0,   351,     0,     0,     0,
       0,   105,     0,     0,     0,   106,    53,     0,     0,     0,
     107,     0,     0,     0,    54,   108,     0,    55,    65,    66,
       0,     0,   109,     6,   110,     0,    53,    56,    57,    58,
      59,    60,    61,     0,    54,     0,     0,    55,     0,     0,
       0,   351,   352,     6,     0,   141,     0,    56,    57,    58,
      59,    60,    61,   111,   112,   113,   114,   115,   116,   117,
     118,    62,     0,    65,    66,     0,     0,     0,     0,     0,
      53,     0,     0,    63,    64,     0,     0,     0,    54,     0,
       0,    55,     0,    65,    66,    67,    68,     6,     0,     0,
       0,    56,    57,    58,    59,    60,    61,     0,    53,     0,
       0,     0,     0,     0,     0,    62,    54,     0,     0,    55,
     252,     0,     0,     0,     0,     6,     0,    63,    64,    56,
      57,    58,    59,    60,    61,     0,    53,    65,    66,    67,
      68,     0,     0,    62,    54,   423,     0,    55,     0,     0,
       0,     0,     0,     6,     0,    63,    64,    56,    57,    58,
      59,    60,    61,     0,    53,    65,    66,    67,    68,     0,
       0,    62,    54,     0,     0,    55,   286,     0,     0,     0,
       0,     6,     0,    63,    64,    56,    57,    58,    59,    60,
      61,     0,     0,    65,    66,    67,    68,     0,   139,    62,
       0,     0,   198,     0,   105,     0,    17,  -321,   106,     0,
       0,    63,    64,   107,     0,     0,     0,     0,   108,     0,
       0,    65,    66,    67,    68,   109,     0,   110,     0,     0,
       0,     0,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,   169,     0,     0,     6,   141,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,     0,     0,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180
};

static const yytype_int16 yycheck[] =
{
       1,    62,   139,    12,   278,   142,    53,   182,   344,   283,
      11,    50,    51,    63,    64,    65,    66,    67,    68,   293,
     185,   396,   357,   482,   423,   396,    53,   317,    46,   494,
     304,   461,   322,    71,   200,    62,    46,    72,   313,   416,
      64,    64,   289,   318,    64,    70,    64,   452,    88,    89,
      68,   456,    53,     9,    72,   192,    74,   523,   305,    72,
     350,    62,    63,    64,    65,    66,    67,    68,    86,    87,
      26,   448,   110,    30,   540,   110,   241,   476,   289,   140,
      90,   355,   340,    24,   145,   146,   110,   517,   459,   255,
     113,   550,    46,   113,   305,   113,   561,   110,   557,   149,
     150,   151,   289,   128,     0,   130,   167,   290,   567,   568,
     275,   386,   387,   250,   251,    86,    87,   392,   305,   549,
     303,     7,   458,   494,   261,   262,    68,   188,    71,   156,
      72,    17,    75,    74,    75,   182,   566,   198,   185,   514,
     415,    82,    83,   514,    86,    87,   193,    23,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,    68,   168,    46,   194,
      64,    73,   462,   451,    68,   465,   451,   111,    72,    68,
     205,   182,   243,    72,   185,    72,   464,    74,   235,   464,
     561,     6,   193,   550,   241,    78,    11,    86,    87,   200,
     557,   387,    85,   253,     4,   463,   392,   542,     8,    46,
     567,   568,   548,    13,    72,   240,   506,    68,    18,   113,
     189,    72,   191,    74,   482,    25,    65,    27,   275,    68,
      90,    91,    80,    81,   235,    95,   157,   158,   159,   160,
     241,    65,   111,    43,   269,   114,    46,   111,   111,   110,
     114,   114,   253,    72,   255,   529,    56,    57,    58,    59,
      60,    61,    62,    63,   111,   539,   267,   114,    37,    68,
     189,    40,   191,   531,   275,    96,    97,   535,     3,   318,
     289,    71,   343,   344,    94,   324,   347,   329,   327,    92,
     351,    16,   550,    84,   469,    93,   305,    15,   340,   557,
      86,    87,    15,    28,    86,    87,    31,    32,    33,   567,
     568,    36,   313,    68,    39,   357,    64,   318,    46,    44,
     152,   153,    68,    48,   154,   155,   161,   162,   329,   354,
     391,    65,   507,   110,    46,   110,   397,    22,    71,    68,
     401,   402,    29,   404,   329,    69,   329,    68,    65,   410,
      37,    65,   114,    40,   396,   340,   357,   340,    69,    46,
      79,    69,   423,    50,    51,    52,    53,    54,    55,    68,
      68,   110,   357,   113,   357,    69,    65,    64,     4,    69,
      71,    69,     8,    69,   110,   386,   387,    13,    69,    76,
      77,   392,    18,    65,    65,   396,   457,   458,    46,    25,
     110,    27,    64,    64,    64,    64,    46,   544,   545,    64,
      64,   396,    64,   396,   415,   476,    46,   459,    64,    64,
      46,   463,   469,    45,     7,    69,   110,   110,   329,    65,
      56,    57,    58,    59,    60,    61,    62,    63,    71,   340,
     482,   110,   110,   110,   110,   110,    65,    71,    65,    65,
     451,    64,   494,    71,   515,   516,   357,   518,   483,    70,
     507,    65,    65,   464,    65,   490,    65,    64,   469,    17,
      68,    42,   514,   110,   459,    71,   459,    71,   463,   110,
     463,   523,    67,    65,    70,    65,   112,   548,    64,   531,
      71,    64,    64,   535,    14,   396,   110,   482,    14,   482,
     542,    65,    79,    64,    64,    70,   507,    65,   550,   494,
      65,   494,    79,   514,    65,   557,    65,    70,   110,   561,
     110,   329,   523,   329,    14,   567,   568,    65,   156,   514,
      13,   514,   340,    42,   340,    23,   353,   305,   523,   235,
     523,   542,   388,   294,   523,   521,   531,   520,   531,   357,
     535,   357,   535,   514,   561,   349,   163,   542,   459,   542,
      64,   445,   463,   165,    68,   550,   123,   550,    72,    73,
     267,   164,   557,   168,   557,   166,   561,    -1,   561,    -1,
     329,   482,   567,   568,   567,   568,   128,    -1,   396,    -1,
     396,   340,   181,   494,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,   357,   113,
      -1,    -1,    -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,   523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     531,   340,    -1,    -1,   535,    -1,    -1,    -1,    -1,    -1,
      -1,   542,    -1,    -1,    -1,    -1,    -1,   396,   357,   550,
      -1,   459,    -1,   459,    -1,   463,   557,   463,    -1,    -1,
     561,    -1,    -1,    -1,     3,    -1,   567,   568,    -1,    -1,
      -1,    -1,    -1,    -1,   482,    -1,   482,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   494,   396,   494,    28,
      -1,    -1,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    44,   514,    -1,   514,    48,
     459,    -1,    -1,    -1,   463,   523,    -1,   523,    -1,    -1,
      -1,    -1,    -1,   531,    -1,   531,    -1,   535,    -1,   535,
      -1,    -1,    -1,   482,   542,    -1,   542,    -1,    -1,    -1,
      -1,    -1,   550,    -1,   550,   494,    -1,    -1,    -1,   557,
     459,   557,    -1,   561,   463,   561,    -1,    -1,    -1,   567,
     568,   567,   568,    -1,    -1,   514,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   482,   523,    63,    64,    65,    66,    67,
      68,    -1,   531,    -1,    -1,   494,   535,    -1,    -1,    -1,
      -1,    -1,    -1,   542,    -1,    63,    64,    65,    66,    67,
      68,   550,    -1,    -1,    -1,   514,    -1,    -1,   557,    -1,
      -1,    -1,   561,    -1,   523,    -1,    -1,    -1,   567,   568,
      -1,    -1,   531,    -1,    -1,    -1,   535,    -1,    -1,    -1,
      -1,    -1,    -1,   542,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   550,    -1,    -1,    -1,    -1,    -1,    -1,   557,    -1,
      -1,    -1,   561,    -1,    -1,    -1,    -1,    -1,   567,   568,
      -1,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,    -1,
     168,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,    -1,
     168,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      13,    -1,   200,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    -1,    29,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      -1,    -1,    -1,    86,    87,   253,    -1,   255,     4,     5,
       6,    -1,     8,    -1,    -1,    11,    12,    13,    -1,   267,
      -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    25,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    73,    -1,    -1,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,     4,     5,    -1,    -1,     8,
      86,    87,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    25,    -1,    27,    -1,
      29,    -1,    -1,    -1,   110,    34,    35,   113,    37,    38,
      39,    40,    41,    73,    -1,    -1,    45,    46,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    86,    87,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,   110,    34,    35,   113,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    64,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    86,    87,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,   110,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,     8,    29,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    37,    18,    -1,    40,    86,    87,
      -1,    -1,    25,    46,    27,    -1,    29,    50,    51,    52,
      53,    54,    55,    -1,    37,    -1,    -1,    40,    -1,    -1,
      -1,    64,   110,    46,    -1,   113,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    76,    77,    -1,    -1,    -1,    37,    -1,
      -1,    40,    -1,    86,    87,    88,    89,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    37,    -1,    -1,    40,
      69,    -1,    -1,    -1,    -1,    46,    -1,    76,    77,    50,
      51,    52,    53,    54,    55,    -1,    29,    86,    87,    88,
      89,    -1,    -1,    64,    37,    66,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    76,    77,    50,    51,    52,
      53,    54,    55,    -1,    29,    86,    87,    88,    89,    -1,
      -1,    64,    37,    -1,    -1,    40,    69,    -1,    -1,    -1,
      -1,    46,    -1,    76,    77,    50,    51,    52,    53,    54,
      55,    -1,    -1,    86,    87,    88,    89,    -1,    64,    64,
      -1,    -1,    68,    -1,     4,    -1,    72,    73,     8,    -1,
      -1,    76,    77,    13,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    86,    87,    88,    89,    25,    -1,    27,    -1,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    73,    -1,    -1,    46,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    30,   133,   148,   149,   152,    46,   145,   146,   147,
       0,    23,   150,   151,   153,   154,   155,    72,   110,   145,
     111,   156,   157,   158,   159,   162,   197,   153,    46,    72,
     110,    46,     3,    16,    28,    31,    32,    33,    36,    39,
      44,    48,   160,   161,   163,   159,    90,    64,   110,   161,
       9,    26,   110,    29,    37,    40,    50,    51,    52,    53,
      54,    55,    64,    76,    77,    86,    87,    88,    89,   134,
     145,   193,   253,   254,   255,   256,   258,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   288,   146,   146,     4,     8,    13,    18,    25,
      27,    56,    57,    58,    59,    60,    61,    62,    63,   136,
     137,   138,   139,   141,   142,   145,    72,   136,   145,   288,
     145,   262,   264,   268,   268,   268,   268,   268,   268,    64,
      68,   113,   290,    65,    72,    68,    71,    86,    87,    90,
      91,    95,    88,    89,    96,    97,    24,    74,    75,    82,
      83,    80,    81,    92,    94,    93,    84,    78,    85,    73,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   287,    15,   164,   166,    15,   196,   198,    68,   259,
     260,   259,    64,    74,    46,    68,   257,   261,    68,   261,
      65,   193,   288,   193,   110,    46,   288,   288,   268,   268,
     268,   273,   273,   274,   274,   136,   140,   141,   144,   145,
     275,   275,   275,   275,   276,   276,   277,   278,   279,   280,
     288,   281,   284,   141,   142,    22,   165,   167,   141,   143,
     110,    71,   288,    68,   257,   260,   257,   193,   143,   168,
      64,   290,    69,    65,    68,    65,   271,    65,    69,   114,
     291,    64,   290,    69,    68,    68,    68,    79,   168,   110,
     199,   290,   143,    69,    65,    71,    75,   193,   193,   268,
      69,   271,   193,   193,    69,    69,    69,   283,   169,   290,
     157,   174,   181,   200,   201,   202,   203,   204,   143,    65,
     291,    65,   291,   157,   170,   171,   172,   173,   174,   179,
     181,   190,   204,   163,   110,   291,   202,    36,   163,   189,
     291,   172,   110,    43,   135,   136,   140,   180,   209,   290,
     146,   188,   209,    46,   146,   175,   176,   177,   146,     5,
      12,    19,    21,    34,    35,    38,    39,    41,    45,    47,
      49,    64,   110,   135,   145,   192,   209,   210,   211,   212,
     213,   214,   216,   217,   218,   219,   220,   221,   223,   231,
     233,   237,   243,   244,   245,   246,   247,   249,   255,   263,
     265,   266,   267,   269,   270,   285,    64,    64,    71,   110,
      68,    73,    64,    46,   242,   214,    64,    64,   235,   288,
     235,    64,    64,   288,    64,   242,   209,   288,    46,   175,
      68,   291,   211,   110,   110,   112,   135,   183,   184,   185,
     183,   176,    69,    66,   178,   207,   288,   183,   110,    45,
     213,   219,   234,   239,   241,   288,   110,   110,   288,   288,
     110,   288,   110,     7,   248,   250,   251,    65,   135,   177,
      65,    71,    65,   178,   205,   208,    65,    64,    70,    71,
      65,    65,    65,    65,    64,    17,   252,   251,   177,    42,
     182,   186,   185,   182,    71,   206,    71,   182,   288,   235,
     219,   110,   292,   292,   209,   214,   185,   209,   142,   187,
     110,    67,   178,    65,    70,    19,    21,    45,   214,   215,
     216,   222,   232,   238,   226,   290,    65,    71,   194,   290,
     110,   236,   240,   241,    64,    64,    64,    14,     6,    11,
     224,   227,   228,   229,   230,   209,   142,    37,    40,   191,
     195,    65,   234,   288,   288,   292,   288,   289,    79,   225,
     229,   228,   210,   230,    64,    64,   291,   214,    70,    65,
      65,   214,    79,   291,   193,   193,   235,   292,   215,    65,
      65,    70,   215,   110,   110,   236,    14,    65,   292,   215,
     215
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   132,   133,   134,   134,   134,   134,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   143,   144,   144,   144,   145,   145,   146,
     147,   148,   149,   149,   150,   150,   151,   151,   152,   153,
     153,   154,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   162,   163,   163,   164,   164,   165,   165,
     166,   167,   168,   168,   169,   170,   170,   171,   171,   172,
     172,   172,   173,   173,   173,   174,   175,   175,   176,   176,
     177,   177,   178,   178,   179,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   185,   185,   186,   187,   187,   188,
     189,   190,   191,   191,   192,   192,   193,   193,   194,   195,
     195,   196,   196,   197,   198,   198,   199,   200,   200,   201,
     201,   202,   202,   203,   204,   205,   205,   206,   206,   207,
     208,   208,   209,   210,   210,   211,   211,   212,   213,   214,
     214,   214,   214,   214,   215,   215,   215,   215,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   217,
     218,   219,   219,   219,   219,   219,   219,   219,   220,   221,
     222,   223,   224,   224,   225,   225,   226,   227,   227,   228,
     229,   229,   230,   230,   231,   232,   233,   234,   234,   235,
     235,   236,   236,   237,   238,   239,   239,   240,   241,   241,
     242,   242,   243,   244,   245,   245,   246,   247,   248,   248,
     249,   249,   250,   250,   251,   252,   253,   253,   254,   254,
     254,   254,   254,   254,   254,   255,   256,   256,   257,   257,
     258,   258,   259,   259,   260,   261,   261,   262,   262,   263,
     263,   263,   263,   263,   263,   264,   264,   265,   265,   265,
     265,   266,   267,   268,   268,   268,   268,   268,   269,   270,
     271,   271,   271,   271,   272,   272,   272,   273,   273,   273,
     273,   274,   274,   274,   275,   275,   275,   276,   276,   276,
     276,   276,   276,   277,   277,   277,   278,   278,   279,   279,
     280,   280,   281,   281,   282,   282,   283,   283,   284,   284,
     285,   286,   286,   286,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   288,   289,   290,   291,
     292
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     3,     3,     3,     1,     1,     1,
       3,     3,     1,     0,     1,     0,     1,     2,     3,     1,
       1,     3,     5,     1,     1,     1,     0,     1,     2,     6,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     1,     0,     1,     0,     1,     0,
       2,     2,     1,     3,     3,     1,     0,     1,     2,     1,
       2,     1,     1,     1,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     1,     3,     1,     8,     8,     1,     0,
       1,     0,     1,     3,     2,     3,     2,     1,     3,     1,
       2,     9,     1,     0,     1,     0,     1,     0,     3,     5,
       5,     1,     0,     7,     2,     3,     3,     1,     0,     1,
       2,     1,     1,     1,     2,     1,     0,     1,     0,     4,
       1,     3,     3,     1,     2,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     6,     9,
       9,     6,     1,     0,     1,     0,     4,     1,     2,     2,
       1,     2,     3,     2,     5,     5,     7,     1,     0,     1,
       0,     1,     0,     9,     9,     1,     1,     1,     1,     3,
       1,     0,     3,     3,     3,     3,     3,     5,     1,     0,
       3,     4,     1,     2,     5,     2,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     5,     1,     3,     1,     0,
       4,     4,     1,     2,     3,     2,     3,     3,     3,     4,
       6,     6,     4,     6,     6,     4,     4,     1,     1,     1,
       1,     2,     2,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     5,     4,     5,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
        case 12:
#line 369 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_BOOLEAN, (yyvsp[0]. node ));    }
#line 2151 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 379 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT8, (yyvsp[0]. node ));    }
#line 2157 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 381 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2163 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 383 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT32, (yyvsp[0]. node ));    }
#line 2169 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 385 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT64, (yyvsp[0]. node ));    }
#line 2175 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 387 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2181 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 389 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT16, (yyvsp[0]. node ));    }
#line 2187 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 391 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2193 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 393 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2199 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 395 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2205 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 397 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2211 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 399 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2217 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 404 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_FLOAT, (yyvsp[0]. node ));    }
#line 2223 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_DOUBLE, (yyvsp[0]. node ));    }
#line 2229 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 416 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NONE, "InterfaceTypeList");
		COMBINE(TOK_TYPE_CLASS, 2);
	}
#line 2238 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 421 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TYPE_CLASS, 2);   }
#line 2244 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 434 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_TYPE_ARRAY, 1);
	}
#line 2252 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 438 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_TYPE_ARRAY, 1);
	}
#line 2260 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 442 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *node = TOP();
		node->setCounter( node->getCounter() + 1 );
    }
#line 2269 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 455 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_IDENT, (yyvsp[0]. node ));    }
#line 2275 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 460 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_IDENT, (yyvsp[0]. node ));
        COMBINE(0, 1);
    }
#line 2284 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 468 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_UNIT, 3);   }
#line 2290 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 473 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "PackageDeclaration");   }
#line 2296 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 478 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ImportDeclarations");   }
#line 2302 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 484 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2308 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 486 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2314 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 491 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PACKAGE, 1);   }
#line 2320 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 501 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORT, 1);   }
#line 2326 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 506 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_IMPORT_ALL, 1);
	}
#line 2334 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 518 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "AnnotationDeclarations");   }
#line 2340 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 533 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MODIFIERS, 1);   }
#line 2346 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 535 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2352 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 540 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PUBLIC, (yyvsp[0]. node ));   }
#line 2358 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 542 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PROTECTED, (yyvsp[0]. node ));   }
#line 2364 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 544 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PRIVATE, (yyvsp[0]. node ));   }
#line 2370 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 546 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STATIC, (yyvsp[0]. node ));   }
#line 2376 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 548 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ABSTRACT, (yyvsp[0]. node ));   }
#line 2382 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 550 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FINAL, (yyvsp[0]. node ));   }
#line 2388 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 552 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NATIVE, (yyvsp[0]. node ));   }
#line 2394 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 554 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SYNCHRONIZED, (yyvsp[0]. node ));   }
#line 2400 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 556 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_TRANSIENT, (yyvsp[0]. node ));   }
#line 2406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 558 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOLATILE, (yyvsp[0]. node ));   }
#line 2412 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 563 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CLASS, 6);   }
#line 2418 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 568 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ModifiersOpt");   }
#line 2424 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 573 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Super");   }
#line 2430 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 578 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Intf");   }
#line 2436 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 592 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_LIST, 1);   }
#line 2442 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 594 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2448 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 603 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ClassBodyDeclarations");   }
#line 2454 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 608 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2460 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 610 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2466 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 627 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FIELD, 4);   }
#line 2472 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 632 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2478 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 634 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2484 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 639 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NONE, "VariableInitializer");
		COMBINE(TOK_VARIABLE, 2);
	}
#line 2493 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 648 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_IDENT, (yyvsp[0]. node ));   }
#line 2499 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 659 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(0, 1);
	}
#line 2507 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 667 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOID, (yyvsp[0]. node ));   }
#line 2513 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 673 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2519 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 675 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2525 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 681 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Throws");   }
#line 2531 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 687 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "FormalParameterList");   }
#line 2537 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 691 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_LIST, 1);   }
#line 2543 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 693 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2549 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 698 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETER, 2);   }
#line 2555 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 700 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_PARAMETER, 2);
		TOP()->setCounter( TOP()->getCounter() + 1 );
	}
#line 2564 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 720 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_STATIC_INIT, 1);   }
#line 2570 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 725 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CONSTRUCTOR, 6);   }
#line 2576 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 730 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ExplicitConstructorInvocation");   }
#line 2582 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 735 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "BlockStatements");   }
#line 2588 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 738 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2594 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 742 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
    /* BeginBlock ExplicitConstructorInvocationOpt BlockStatementsOpt EndBlock */
    PUSH(TOK_NONE, "ConstructorBody");   }
#line 2602 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 754 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ExtendsInterfaces");   }
#line 2608 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 759 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INTERFACE, 5);   }
#line 2614 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 764 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_LIST, 1);   }
#line 2620 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 766 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2626 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 775 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "InterfaceMemberDeclarations");   }
#line 2632 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 780 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2638 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 782 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2644 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 796 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NONE, "MethodBody");
		COMBINE(0, 1);
	}
#line 2653 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 802 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2659 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 804 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2665 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 804 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2671 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 891 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2677 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 893 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2683 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 922 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2689 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 924 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2695 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 926 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2701 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 948 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2707 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 967 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2713 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1003 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2719 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 2723 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1171 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


