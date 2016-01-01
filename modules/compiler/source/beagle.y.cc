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

#line 73 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:339  */

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
#ifndef YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED
# define YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int beagle_debug;
#endif
/* "%code requires" blocks.  */
#line 15 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */



#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <beagle-loader/Node.hh>
#include <beagle-compiler/Parser.hh>


/*
 * The parser need to know about the 'yyscan_t' type,
 * but the generated header by Flex don't provide this information.
 */
typedef void *yyscan_t;


typedef struct
{
    yyscan_t lexer;

    std::vector<beagle::loader::Node*> stack;

    const char *fileName;

    const char *rule;

    beagle::compiler::Parser *parser;

} parser_context_t;


/**
 * Get the current column in the lexer scanner.
 *
 * For some reason this prototype is not generated in the Flex
 * header file, so we include it here.
 */
int beagle_get_column  (yyscan_t yyscanner);


#line 146 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:355  */

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
    TOK_INTERFACE = 280,
    TOK_LONG = 281,
    TOK_NATIVE = 282,
    TOK_NEW = 283,
    TOK_PACKAGE = 284,
    TOK_PRIVATE = 285,
    TOK_PROTECTED = 286,
    TOK_PUBLIC = 287,
    TOK_RETURN = 288,
    TOK_SUSPEND = 289,
    TOK_STATIC = 290,
    TOK_SUPER = 291,
    TOK_SWITCH = 292,
    TOK_READLOCK = 293,
    TOK_WRITELOCK = 294,
    TOK_THIS = 295,
    TOK_THROW = 296,
    TOK_THROWS = 297,
    TOK_VOID = 298,
    TOK_VOLATILE = 299,
    TOK_WHILE = 300,
    TOK_NAME = 301,
    TOK_QNAME = 302,
    TOK_CONTINUE = 303,
    TOK_TRANSIENT = 304,
    TOK_TRY = 305,
    TOK_NULLLITERAL = 306,
    TOK_BOOLLITERAL = 307,
    TOK_INTLITERAL = 308,
    TOK_CHARLITERAL = 309,
    TOK_FLOATLITERAL = 310,
    TOK_STRINGLITERAL = 311,
    TOK_UINT8 = 312,
    TOK_UINT16 = 313,
    TOK_UINT32 = 314,
    TOK_UINT64 = 315,
    TOK_INT8 = 316,
    TOK_INT16 = 317,
    TOK_INT32 = 318,
    TOK_INT64 = 319,
    TOK_LP = 320,
    TOK_RP = 321,
    TOK_LC = 322,
    TOK_RC = 323,
    TOK_LB = 324,
    TOK_RB = 325,
    TOK_SM = 326,
    TOK_CM = 327,
    TOK_DOT = 328,
    TOK_ASN = 329,
    TOK_LT = 330,
    TOK_GT = 331,
    TOK_BANG = 332,
    TOK_TILDE = 333,
    TOK_QUEST = 334,
    TOK_COLON = 335,
    TOK_EQ = 336,
    TOK_NE = 337,
    TOK_LE = 338,
    TOK_GE = 339,
    TOK_ANDAND = 340,
    TOK_OROR = 341,
    TOK_INC = 342,
    TOK_DEC = 343,
    TOK_PLUS = 344,
    TOK_MINUS = 345,
    TOK_MUL = 346,
    TOK_DIV = 347,
    TOK_AND = 348,
    TOK_OR = 349,
    TOK_CARET = 350,
    TOK_MOD = 351,
    TOK_SHL = 352,
    TOK_SHR = 353,
    TOK_PLASN = 354,
    TOK_MIASN = 355,
    TOK_MUASN = 356,
    TOK_DIASN = 357,
    TOK_ANDASN = 358,
    TOK_ORASN = 359,
    TOK_CARETASN = 360,
    TOK_SLASN = 361,
    TOK_SRASN = 362,
    TOK_MODASN = 363,
    TOK_BAD_TOKEN = 364,
    TOK_EOL = 365,
    TOK_AT = 366,
    TOK_VARARG = 367,
    TOK_INDENT = 368,
    TOK_DEDENT = 369,
    TOK_IN = 370,
    TOK_RANGE = 371,
    TOK_PASS = 372
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 186 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */

    char* node;

#line 280 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 294 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 58 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:359  */


#include <iostream>
#include "beagle.l.hh"
#include <beagle-loader/Node.hh>


using namespace beagle::compiler;


static void beagle_error(parser_context_t *context, const char *msg)
{
    printf ("%s:%d:%d: error: %s - %s\n",
        context->fileName,
        beagle_get_lineno(context->lexer),
        beagle_get_column(context->lexer),
        context->rule,
        msg);
    return;
}


static beagle::compiler::Node *beagle_pop( std::vector<beagle::compiler::Node*> &stack )
{
    if (stack.size() == 0) return NULL;
    beagle::compiler::Node *node = stack[ stack.size() - 1 ];
    stack.pop_back();
    return node;
}


static beagle::compiler::Node* beagle_combine( std::vector<beagle::compiler::Node*> &stack, int tok, int n )
{
    beagle::compiler::Node *temp;

    if ((int) stack.size() < n) return NULL;

    if (tok > 0 )
        temp = new beagle::compiler::Node(tok, NULL);
    else
    {
        if ((int) stack.size() <= n) return NULL;
        temp = stack[ stack.size() - 1 - n ];
    }
    for (size_t i = stack.size() - n; i < (int) stack.size(); ++i)
    {
        //std::cout << temp->getValue() << ": adding child " << p->getValue() << std::endl;;
        temp->addChild( *stack[i] );
    }
    for (int i = 0; i < n; ++i)
        stack.pop_back();

    if (tok > 0) stack.push_back(temp);
    return temp;
}


static void beagle_printStack( std::vector<beagle::compiler::Node*> &stack, beagle::compiler::Parser *parser )
{
    std::cout << "Stack:" << std::endl;
    for (int i = 0; i < (int) stack.size(); ++i)
        stack[i]->print(std::cout, beagle::compiler::Node::name, 1, false);
}


static void beagle_push(
    parser_context_t *context,
    int token,
    const char *value,
    uint32_t line = 1,
    uint32_t column = 1 )
{
    //std::cout << "PUSH " << value << std::endl;
    beagle::compiler::Node *node;
    node = new beagle::compiler::Node(token,value);
    node->line = line;
    node->column = column;
    context->stack.push_back(node);
}


static void beagle_push(
    parser_context_t *context,
    beagle::compiler::Node *node )
{
    context->stack.push_back(node);
}


static void beagle_push(
    parser_context_t *context,
    beagle::compiler::Node &node )
{
	beagle_push(context, &node);
}


#define scanner              parserContext->lexer
#define PUSH(token,value)    beagle_push( parserContext, (token), (value), \
    beagle_get_lineno(parserContext->lexer), beagle_get_column(parserContext->lexer) )
#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)


#line 405 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1116

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  322
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  550

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   372

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
     115,   116,   117
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   381,   381,   386,   388,   390,   392,   394,   396,   401,
     402,   406,   407,   412,   413,   417,   419,   421,   423,   425,
     427,   429,   431,   433,   438,   440,   445,   446,   450,   458,
     462,   466,   471,   476,   484,   485,   489,   494,   513,   514,
     519,   521,   526,   530,   531,   535,   540,   547,   548,   552,
     553,   557,   559,   564,   566,   574,   576,   581,   583,   585,
     587,   589,   591,   593,   595,   597,   599,   601,   606,   611,
     612,   616,   617,   621,   622,   627,   631,   635,   637,   642,
     646,   647,   651,   653,   658,   659,   660,   664,   665,   666,
     670,   675,   677,   683,   688,   694,   695,   699,   705,   711,
     713,   719,   720,   725,   726,   729,   731,   736,   738,   747,
     752,   754,   759,   763,   768,   773,   774,   778,   779,   783,
     784,   788,   793,   795,   800,   801,   805,   819,   821,   826,
     830,   831,   835,   837,   842,   843,   847,   851,   859,   863,
     864,   868,   870,   875,   879,   881,   886,   887,   891,   895,
     900,   901,   902,   903,   904,   905,   906,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   923,   928,   932,
     933,   934,   935,   936,   937,   938,   942,   950,   959,   964,
     969,   970,   974,   978,   980,   985,   990,   992,   997,   999,
    1007,  1013,  1018,  1019,  1023,  1024,  1028,  1029,  1033,  1038,
    1040,  1045,  1050,  1051,  1055,  1059,  1061,  1066,  1071,  1079,
    1084,  1092,  1098,  1103,  1105,  1110,  1111,  1115,  1120,  1125,
    1127,  1132,  1137,  1142,  1143,  1147,  1148,  1150,  1151,  1152,
    1153,  1154,  1158,  1163,  1165,  1170,  1171,  1175,  1209,  1214,
    1216,  1221,  1226,  1231,  1237,  1239,  1247,  1259,  1261,  1283,
    1285,  1290,  1291,  1292,  1293,  1297,  1302,  1307,  1308,  1309,
    1311,  1313,  1317,  1322,  1327,  1328,  1330,  1332,  1337,  1357,
    1359,  1376,  1377,  1379,  1381,  1386,  1387,  1389,  1394,  1395,
    1397,  1402,  1403,  1405,  1407,  1409,  1411,  1416,  1417,  1419,
    1424,  1425,  1430,  1431,  1436,  1437,  1442,  1443,  1448,  1449,
    1454,  1455,  1460,  1461,  1465,  1485,  1486,  1487,  1491,  1493,
    1495,  1497,  1499,  1501,  1503,  1505,  1507,  1509,  1511,  1516,
    1520,  1524,  1528
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
  "TOK_INTERFACE", "TOK_LONG", "TOK_NATIVE", "TOK_NEW", "TOK_PACKAGE",
  "TOK_PRIVATE", "TOK_PROTECTED", "TOK_PUBLIC", "TOK_RETURN",
  "TOK_SUSPEND", "TOK_STATIC", "TOK_SUPER", "TOK_SWITCH", "TOK_READLOCK",
  "TOK_WRITELOCK", "TOK_THIS", "TOK_THROW", "TOK_THROWS", "TOK_VOID",
  "TOK_VOLATILE", "TOK_WHILE", "TOK_NAME", "TOK_QNAME", "TOK_CONTINUE",
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
  "TOK_SRASN", "TOK_MODASN", "TOK_BAD_TOKEN", "TOK_EOL", "TOK_AT",
  "TOK_VARARG", "TOK_INDENT", "TOK_DEDENT", "TOK_IN", "TOK_RANGE",
  "TOK_PASS", "$accept", "CompilationUnit", "Literal", "Type",
  "PrimitiveType", "NumericType", "IntegralType", "FloatingPointType",
  "ReferenceType", "ClassOrInterfaceType", "ClassType", "InterfaceType",
  "ArrayType", "Name", "SimpleName", "QualifiedName",
  "ImportDeclarationsOpt", "ImportDeclarations", "PackageDeclaration",
  "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "TypeDeclaration",
  "AnnotationDeclarationsOpt", "AnnotationDeclarations",
  "AnnotationDeclaration", "Modifiers", "Modifier", "ClassDeclaration",
  "ModifiersOpt", "SuperOpt", "InterfacesOpt", "Super", "Interfaces",
  "InterfaceTypeList", "ClassBody", "ClassBodyDeclarationsOpt",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclarators",
  "VariableDeclarator", "VariableInitializer", "MethodDeclaration",
  "VoidType", "MethodHeader", "ThrowsOpt", "FormalParameterListOpt",
  "FormalParameterList", "FormalParameter", "Throws", "ClassTypeList",
  "MethodBody", "StaticInitializer", "ConstructorDeclaration",
  "ExplicitConstructorInvocationOpt", "BlockStatementsOpt",
  "ArgumentListOpt", "ConstructorBody", "ExplicitConstructorInvocation",
  "ExtendsInterfacesOpt", "InterfaceDeclaration", "ExtendsInterfaces",
  "InterfaceBody", "InterfaceMemberDeclarationsOpt",
  "InterfaceMemberDeclarations", "InterfaceMemberDeclaration",
  "ConstantDeclaration", "AbstractMethodDeclaration", "ArrayInitializer",
  "VariableInitializersOpt", "VariableInitializers", "Block",
  "BlockStatements", "BlockStatement", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "ExpressionStatement", "StatementExpression", "IfThenStatement",
  "IfThenInlineStatement", "IfThenElseStatement", "SwitchStatement",
  "SwitchBlockStatementGroupsOpt", "SwitchBlock",
  "SwitchBlockStatementGroups", "SwitchBlockStatementGroup",
  "SwitchLabels", "SwitchLabel", "WhileStatement", "DoStatement",
  "ForInitOpt", "ExpressionOpt", "ForUpdateOpt", "ForStatement",
  "ForEachStatement", "Range", "ForInit", "ForUpdate",
  "StatementExpressionList", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "LockStatement", "CatchesOpt",
  "TryStatement", "Catches", "CatchClause", "Finally", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression", "ArgumentList",
  "DimsOpt", "ArrayCreationExpression", "DimExprs", "DimExpr", "Dims",
  "FieldAccess", "MethodInvocation", "ArrayAccess", "PostFixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "CastExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "Assignment",
  "LeftHandSide", "AssignmentOperator", "Expression", "ConstantExpression",
  "BeginBlock", "EndBlock", YY_NULLPTR
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
     365,   366,   367,   368,   369,   370,   371,   372
};
# endif

#define YYPACT_NINF -399

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-399)))

#define YYTABLE_NINF -308

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    29,    95,   101,  -399,   -58,  -399,  -399,  -399,    29,
      27,   101,  -399,  -399,  -399,    96,  -399,   -19,    29,  -399,
     313,    27,  -399,  -399,  -399,  -399,  -399,   -17,  -399,   -23,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,   313,  -399,    25,  -399,    55,   866,  -399,  -399,    29,
      29,  -399,   932,   109,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,   660,   866,   866,   866,   866,   866,   866,  -399,   421,
     118,   117,   133,  -399,   164,  -399,   973,  -399,   995,   175,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,    80,   193,   187,
      24,   206,   140,   148,   144,   170,   -39,  -399,  -399,  -399,
    1008,  -399,   234,   243,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,   191,  -399,  -399,  -399,
     191,   201,   197,    29,   203,   985,   210,   136,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,   866,   866,   171,    29,
     866,   866,  -399,  -399,   866,   866,   866,   866,   866,   866,
     866,   932,   866,   866,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,   866,    29,   267,  -399,    29,
     184,   226,   866,   191,  -399,   233,   866,   240,   241,   246,
     251,   791,   141,   990,   249,   252,  -399,   258,   257,  -399,
    -399,  -399,  -399,    80,    80,   193,   193,   261,  -399,   263,
     264,   187,   187,   187,   187,    24,    24,   206,   140,   148,
     144,   254,   170,  -399,  -399,  -399,    29,   227,  -399,  -399,
    -399,   223,    29,   268,  -399,   791,  -399,   273,   866,  -399,
     866,   271,   990,  -399,  -399,  -399,   866,  -399,   272,   277,
     280,   866,  -399,   281,   223,  -399,  -399,   113,  -399,  -399,
    -399,   288,  -399,  -399,  -399,   289,  -399,  -399,  -399,  -399,
      29,  -399,   134,   313,  -399,   248,   245,   142,  -399,  -399,
    -399,  -399,  -399,  -399,   659,   245,   143,  -399,  -399,  -399,
    -399,   250,  -399,  -399,   924,  -399,  -399,  -399,  -399,   223,
     924,  -399,  -399,  -399,   223,  -399,    29,   261,  -399,    29,
    -399,   549,   296,  -399,  -399,   122,   -53,  -399,   298,   -40,
     255,   303,   304,   866,   305,   307,   308,   866,   309,   -37,
     266,   866,   269,    29,   124,   245,   549,  -399,  -399,   270,
    -399,  -399,  -399,  -399,   274,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,    46,
     192,   175,   209,   213,  -399,  -399,  -399,   400,   400,   836,
      29,  -399,   400,   275,  -399,   223,   723,   866,   282,  -399,
     866,   866,   866,   283,   866,   284,  -399,   223,   311,  -399,
     323,   306,  -399,  -399,  -399,  -399,   932,    29,   332,   331,
    -399,   339,   836,  -399,  -399,  -399,  -399,   340,  -399,   362,
      29,  -399,  -399,   338,  -399,   342,   349,  -399,   350,   351,
     353,  -399,   354,  -399,   414,  -399,    29,  -399,   380,   400,
     380,  -399,   355,   352,   380,   360,   -29,   866,   969,   761,
     316,   317,   319,   320,   366,   415,    32,  -399,  -399,    29,
     325,  -399,  -399,  -399,  -399,   836,  -399,   866,   594,   363,
    -399,   223,   326,   223,   223,   223,   223,   400,   328,  -399,
    -399,  -399,   361,   223,  -399,   373,   376,   377,   379,   969,
     428,  -399,  -399,   155,  -399,  -399,  -399,   381,   223,    29,
    -399,    19,   345,   866,   346,   357,   399,  -399,   342,   382,
     866,   409,   245,   155,  -399,     3,  -399,   383,  -399,  -399,
     426,   431,   549,  -399,  -399,   425,   223,   223,   388,   223,
    -399,   419,   390,  -399,  -399,  -399,  -399,   223,   866,   866,
     245,   866,  -399,  -399,   223,  -399,   391,  -399,  -399,   436,
     437,  -399,   438,  -399,  -399,   395,   396,  -399,  -399,  -399
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,    39,    36,     0,    34,    35,     1,     0,
      50,    38,    40,    43,    44,     0,    42,     0,     0,     2,
      70,    49,    51,    47,    48,    41,    37,     0,    45,     0,
      61,    62,    63,    59,    58,    57,    60,    64,    65,    67,
      66,    69,    55,     0,    52,     0,   120,    54,    56,     0,
       0,    46,     0,     0,   226,     8,     5,     3,     7,     4,
       6,     0,     0,     0,     0,     0,     0,     0,   225,   252,
       0,   251,   223,   228,   119,   224,   229,   230,   231,   264,
     253,   254,   271,   257,   258,   261,   267,   275,   278,   281,
     287,   290,   292,   294,   296,   298,   300,   302,   319,   303,
       0,   233,    72,   125,    12,    23,    25,    24,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    11,    13,    14,
      29,     0,    28,     0,   236,   252,     0,   252,   229,   231,
     266,   265,   262,   263,   259,   260,   120,     0,     0,     0,
       0,     0,   255,   256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   308,   312,   313,   309,   310,   316,
     318,   317,   314,   315,   311,     0,     0,    74,    71,     0,
       0,   124,     0,   237,   239,   236,   120,   245,     0,     0,
     235,     0,     0,   227,     0,     0,    53,   244,     0,   234,
     272,   273,   274,   276,   277,   279,   280,     0,   286,    26,
      27,   282,   283,   284,   285,   288,   289,   291,   293,   295,
     297,     0,   299,   304,    29,    75,     0,     0,    73,    30,
     127,     0,     0,     0,   240,     0,   238,     0,   120,   242,
       0,     0,     0,   269,   246,   249,   120,   250,     0,     0,
       0,     0,    77,    76,     0,   321,   126,    50,   128,   241,
     232,     0,   268,   243,   270,     0,    31,    32,    33,   301,
       0,    68,    50,    70,   136,     0,     0,    50,   132,   134,
     135,   248,   247,    78,    70,     0,    50,    82,    84,    87,
      88,     0,    86,    89,     0,   137,   322,   129,   133,    60,
       0,    85,    79,    83,   137,    98,     0,     9,    10,     0,
     113,   118,    34,    97,   112,    93,     0,    91,     0,     0,
       0,     0,     0,   195,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   305,     0,   117,   144,   146,     0,
     147,   150,   166,   157,     0,   151,   152,   153,   158,   154,
     159,   155,   156,   160,   161,   162,   164,   163,   165,   175,
     174,     0,   172,   173,   170,   171,   169,   104,   104,     0,
       0,    90,   104,     0,   208,     0,   193,     0,     0,   194,
       0,     0,     0,     0,     0,     0,   210,     0,     0,   167,
      93,   149,   143,   145,   148,   168,     0,     0,     0,   103,
     105,     0,   140,    94,    96,    95,    92,     0,   207,     0,
       0,   203,   205,     0,   192,   202,     0,   211,     0,     0,
       0,   212,     0,   209,   216,   227,     0,   107,   102,     0,
     102,   141,     0,   139,   102,     0,    93,   195,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   219,   108,     0,
       0,   101,   106,    99,   138,     0,   100,     0,     0,     0,
     206,     0,     0,     0,     0,     0,     0,     0,     0,   218,
     220,   110,   109,     0,   142,     0,     0,     0,     0,   197,
     176,   177,   179,   181,   213,   214,   190,     0,     0,     0,
     114,   116,     0,     0,     0,     0,     0,   196,   204,     0,
       0,     0,     0,   180,   183,     0,   186,     0,   222,   111,
       0,     0,   118,   115,   191,     0,     0,     0,     0,     0,
     320,     0,     0,   182,   184,   185,   187,     0,   120,   120,
       0,     0,   200,   199,     0,   178,     0,   189,   221,     0,
       0,   121,     0,   198,   188,     0,     0,   201,   123,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -399,  -399,  -399,  -283,   -20,  -399,  -399,  -399,   356,   -49,
    -175,  -188,  -399,    -1,   -14,  -399,  -399,  -399,  -399,   497,
    -399,  -399,  -399,    -8,  -399,   488,  -399,   469,  -399,  -179,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,   228,  -399,
    -176,   207,   145,  -375,  -399,  -399,  -174,  -316,  -251,  -399,
    -398,  -399,  -399,  -399,  -399,  -399,  -399,     4,  -118,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,   242,  -399,  -150,
    -399,  -399,  -399,  -297,  -399,   182,  -399,   154,  -399,  -399,
    -399,  -399,  -350,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
      35,  -399,    44,  -399,  -399,  -399,   114,  -399,  -399,  -399,
    -399,  -399,  -399,    73,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,   110,  -399,  -399,  -399,  -299,  -399,   370,  -399,
     439,    49,   433,   324,  -265,   387,  -253,  -244,  -239,   -42,
    -235,  -148,  -163,  -399,   156,   157,    63,   161,   402,   404,
     405,   408,   410,  -399,   321,   401,  -130,  -399,  -399,   -56,
    -399,  -221,  -279
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    68,   397,   307,   117,   118,   119,   308,   209,
     121,   230,   210,    69,     6,     7,    10,    11,     3,    12,
      13,    14,    19,   273,    21,    22,    41,    42,    23,    43,
     177,   227,   178,   228,   253,   271,   285,   286,   287,   288,
     274,   391,   317,   403,   290,   309,   275,   450,   398,   399,
     400,   451,   472,   313,   301,   292,   512,   335,    70,   490,
     513,   180,    24,   181,   256,   276,   277,   278,   279,   280,
     404,   432,   433,   310,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   502,   482,   503,
     504,   505,   506,   349,   350,   413,   378,   496,   351,   352,
     477,   414,   497,   415,   353,   354,   355,   356,   357,   445,
     358,   446,   447,   469,    71,    72,    73,    74,   189,    75,
     183,   184,   190,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   175,   101,
     521,   311,   297
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,   225,    20,   120,    29,   126,   302,   314,    17,   500,
     257,   306,   359,   373,   501,    15,   385,   306,   194,   370,
     130,   131,   132,   133,   134,   135,   412,   431,   333,    26,
     243,   452,   116,   272,    49,   102,   103,   359,   252,   444,
     162,   124,    46,     1,   258,   369,   360,   163,   151,  -215,
      50,   122,    16,   333,    27,   510,   392,   371,   361,   511,
     125,   127,   127,   127,   127,   127,   127,   362,   237,   487,
     374,   360,   363,   386,    45,     4,   364,   359,   409,   264,
     474,   195,   283,   361,   198,   199,   458,    47,   460,   462,
     424,    28,   362,   410,   294,     8,   289,   363,   291,   152,
     153,   364,   200,   201,   202,   300,   221,   154,   155,   187,
     289,   360,   291,   426,   453,  -228,   255,   401,   456,  -228,
     261,   407,   293,   361,     9,   197,   233,   224,   265,   412,
     229,   207,   362,  -228,  -228,   195,   293,   363,    18,   359,
     359,   364,    26,   127,   127,   127,   127,   127,   127,   127,
     122,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   500,   127,   365,   480,    51,   501,   484,   485,   486,
     -28,   144,   145,   360,   360,   122,   146,   229,   122,   233,
     359,   366,   123,   229,   138,   361,   361,   368,   365,   136,
     139,   508,   127,   137,   362,   362,   369,    15,   262,   363,
     363,   136,   140,   364,   364,   137,   366,   242,   525,    15,
     241,  -252,  -252,   359,   360,   211,   212,   213,   214,   532,
     533,   229,   535,   523,    18,   122,   361,  -131,   365,   333,
     538,   122,   234,   158,   234,   362,   141,   543,   160,   127,
     363,   127,   483,   159,   364,    18,   366,   360,   -81,   176,
     127,   541,   491,    18,    18,   161,  -130,   -80,   179,   361,
     182,  -230,   142,   143,   284,  -230,   186,   379,   362,   122,
      15,   383,   188,   363,   471,   388,   193,   364,   284,  -230,
    -230,   196,   147,   148,   149,   150,   312,   156,   157,   226,
     365,   365,   315,   122,   231,   318,  -253,  -253,   232,   122,
    -254,  -254,   235,   203,   204,   238,   205,   206,   366,   366,
     334,   239,   240,   405,   509,   244,    30,   215,   216,   390,
     241,   416,   245,   246,   418,   419,   420,   247,   422,    31,
     248,   365,   249,   250,   251,   334,   255,   254,   259,   260,
      32,   263,   266,    33,    34,    35,   405,   267,    36,   366,
     268,    37,    38,   270,   281,   282,   390,    39,   295,   296,
     304,   367,    40,   372,   365,   375,   122,   122,   376,   377,
     380,   122,   381,   382,   384,   334,   387,   425,   370,   389,
     394,   379,   366,   427,   395,   408,   128,   128,   128,   128,
     128,   128,   417,   421,   423,   122,   436,   369,   428,   405,
     224,   475,   478,   429,   104,   430,   434,   435,   105,   437,
     539,   540,   448,   106,   438,   439,   440,   441,   107,   442,
     443,   444,   449,   454,   455,   457,   463,   464,   122,   465,
     466,   467,   468,   489,   479,   473,   481,   515,   488,   492,
     224,   493,   499,   494,   520,   495,     4,   507,   122,   129,
     129,   129,   129,   129,   129,   514,   516,   108,   109,   110,
     111,   112,   113,   114,   115,   518,   122,   517,   128,   128,
     128,   128,   128,   128,   128,   542,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   136,   128,   122,   522,
     137,   528,   519,   527,    15,  -305,   529,   531,   534,   536,
     537,   544,   545,   546,   547,   548,   549,   208,    25,    44,
      48,   334,   396,   316,   303,   406,   530,   128,   393,   298,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
     411,   129,   129,   129,   129,   129,   129,   129,   524,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   526,
     129,   459,   498,   104,   319,   236,   470,   105,   192,   185,
     217,   320,   106,   218,   128,   219,   128,   107,   321,   220,
     322,     0,   269,   222,     0,   128,   223,    52,     0,     0,
     129,     0,   323,     0,     0,    53,   324,   325,   326,    54,
     327,     0,     0,     0,   328,     4,     0,   329,     0,   330,
      55,    56,    57,    58,    59,    60,   108,   109,   110,   111,
     112,   113,   114,   115,   331,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,   129,     0,   129,
      53,     0,     0,     0,    54,     0,    64,    65,   129,     0,
       4,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,     0,    30,     0,   104,     0,   332,     0,   105,     0,
       0,    62,    63,   106,     0,    31,     0,     0,   107,     0,
       0,    64,    65,    66,    67,     0,    32,     0,    52,    33,
      34,    35,     0,     0,   299,     0,    53,    37,    38,     0,
      54,     0,     0,    39,     0,     0,     4,     0,    40,     0,
     476,    55,    56,    57,    58,    59,    60,   108,   109,   110,
     111,   112,   113,   114,   115,    61,     0,   104,     0,     0,
       0,   105,     0,     0,     0,     0,   106,    62,    63,     0,
       0,   107,     0,     0,     0,     0,     0,    64,    65,    66,
      67,    52,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
     108,   109,   110,   111,   112,   113,   114,   115,   331,    52,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
       0,    54,     0,     0,     0,     0,     0,     4,     0,     0,
      64,    65,    55,    56,    57,    58,    59,    60,     0,    52,
       0,     0,     0,     0,     0,     0,   331,    53,     0,     0,
       0,    54,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,    64,    65,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,   239,     0,     0,    52,     0,     0,     0,    62,    63,
       0,   461,    53,     0,     0,     0,    54,     0,    64,    65,
      66,    67,     4,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,     0,    52,     0,     0,     0,     0,     0,
       0,    61,    53,   402,     0,     0,    54,     0,     0,     0,
       0,     0,     4,    62,    63,     0,     0,    55,    56,    57,
      58,    59,    60,    64,    65,    66,    67,     0,   104,     0,
       0,    61,   105,     0,     0,     0,   104,   106,     0,     0,
     105,     0,   107,    62,    63,   106,     0,     0,     0,     0,
     107,     0,     0,    64,    65,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   305,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   108,
     109,   110,   111,   112,   113,   114,   115,    52,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     4,     0,     0,    52,     0,
      55,    56,    57,    58,    59,    60,    53,     0,     0,     0,
      54,     0,     0,     0,   331,     0,     4,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,  -306,     0,     0,
     136,     0,     0,     0,   191,    61,    64,    65,    15,  -305,
       0,     0,     0,     0,     0,     0,     0,    62,    63,  -307,
       0,     0,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,  -306,   164,     0,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,     0,     0,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174
};

static const yytype_int16 yycheck[] =
{
       1,   176,    10,    52,    18,    61,   285,   304,     9,     6,
     231,   294,   311,    53,    11,    73,    53,   300,   136,    72,
      62,    63,    64,    65,    66,    67,   376,   402,   311,    46,
     193,   429,    52,   254,     9,    49,    50,   336,   226,     7,
      79,    61,    65,    29,   232,    74,   311,    86,    24,    17,
      25,    52,   110,   336,    73,    36,   335,   110,   311,    40,
      61,    62,    63,    64,    65,    66,    67,   311,   186,   467,
     110,   336,   311,   110,    91,    46,   311,   376,   375,   242,
     455,   137,   270,   336,   140,   141,   115,   110,   438,   439,
     387,   110,   336,   376,   273,     0,   272,   336,   272,    75,
      76,   336,   144,   145,   146,   284,   162,    83,    84,   123,
     286,   376,   286,   396,   430,    69,   113,   368,   434,    73,
     238,   372,   272,   376,    23,   139,   182,   176,   246,   479,
     179,   151,   376,    87,    88,   191,   286,   376,   111,   438,
     439,   376,    46,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,     6,   163,   311,   461,   110,    11,   464,   465,   466,
      46,    91,    92,   438,   439,   176,    96,   226,   179,   235,
     479,   311,    73,   232,    66,   438,   439,    65,   336,    65,
      73,   488,   193,    69,   438,   439,    74,    73,   240,   438,
     439,    65,    69,   438,   439,    69,   336,    66,   505,    73,
      69,    87,    88,   512,   479,   152,   153,   154,   155,   516,
     517,   270,   519,   502,   111,   226,   479,   114,   376,   512,
     527,   232,   183,    93,   185,   479,    72,   534,    94,   240,
     479,   242,   463,    95,   479,   111,   376,   512,   114,    15,
     251,   530,   473,   111,   111,    85,   114,   114,    15,   512,
      69,    69,    87,    88,   272,    73,    65,   323,   512,   270,
      73,   327,    69,   512,   449,   331,    66,   512,   286,    87,
      88,   110,    89,    90,    97,    98,   300,    81,    82,    22,
     438,   439,   306,   294,   110,   309,    87,    88,    72,   300,
      87,    88,    69,   147,   148,    65,   149,   150,   438,   439,
     311,    70,    66,   369,   489,    66,     3,   156,   157,   333,
      69,   377,    70,    65,   380,   381,   382,    70,   384,    16,
      69,   479,    69,    69,    80,   336,   113,   110,    70,    66,
      27,    70,    70,    30,    31,    32,   402,    70,    35,   479,
      70,    38,    39,    72,    66,    66,   370,    44,   110,   114,
     110,    65,    49,    65,   512,   110,   367,   368,    65,    65,
      65,   372,    65,    65,    65,   376,   110,    66,    72,   110,
     110,   437,   512,   397,   110,   110,    62,    63,    64,    65,
      66,    67,   110,   110,   110,   396,   410,    74,    66,   455,
     449,   457,   458,    72,     4,    66,    66,    45,     8,    71,
     528,   529,   426,    13,    72,    66,    66,    66,    18,    66,
      66,     7,    42,    68,    72,    65,   110,   110,   429,   110,
     110,    65,    17,    72,    71,   110,   110,   493,   110,    66,
     489,    65,    14,    66,   500,    66,    46,    66,   449,    62,
      63,    64,    65,    66,    67,   110,   110,    57,    58,    59,
      60,    61,    62,    63,    64,    66,   467,   110,   144,   145,
     146,   147,   148,   149,   150,   531,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,    65,   163,   489,    80,
      69,    65,   110,   110,    73,    74,    65,    72,   110,    80,
     110,   110,    66,    66,    66,   110,   110,   151,    11,    21,
      41,   512,   112,   306,   286,   370,   512,   193,   336,   277,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     376,   144,   145,   146,   147,   148,   149,   150,   503,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   505,
     163,   437,   479,     4,     5,   185,   446,     8,   125,   120,
     158,    12,    13,   159,   240,   160,   242,    18,    19,   161,
      21,    -1,   251,   163,    -1,   251,   175,    28,    -1,    -1,
     193,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,   240,    -1,   242,
      36,    -1,    -1,    -1,    40,    -1,    87,    88,   251,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,     3,    -1,     4,    -1,   117,    -1,     8,    -1,
      -1,    77,    78,    13,    -1,    16,    -1,    -1,    18,    -1,
      -1,    87,    88,    89,    90,    -1,    27,    -1,    28,    30,
      31,    32,    -1,    -1,    35,    -1,    36,    38,    39,    -1,
      40,    -1,    -1,    44,    -1,    -1,    46,    -1,    49,    -1,
     116,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    13,    77,    78,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      87,    88,    51,    52,    53,    54,    55,    56,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    36,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    28,    -1,    -1,    -1,    77,    78,
      -1,   110,    36,    -1,    -1,    -1,    40,    -1,    87,    88,
      89,    90,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    36,    67,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    46,    77,    78,    -1,    -1,    51,    52,    53,
      54,    55,    56,    87,    88,    89,    90,    -1,     4,    -1,
      -1,    65,     8,    -1,    -1,    -1,     4,    13,    -1,    -1,
       8,    -1,    18,    77,    78,    13,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    57,
      58,    59,    60,    61,    62,    63,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    28,    -1,
      51,    52,    53,    54,    55,    56,    36,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    65,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    74,    -1,    -1,
      65,    -1,    -1,    -1,    69,    65,    87,    88,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    74,
      -1,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    74,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    29,   119,   136,    46,   131,   132,   133,     0,    23,
     134,   135,   137,   138,   139,    73,   110,   131,   111,   140,
     141,   142,   143,   146,   180,   137,    46,    73,   110,   132,
       3,    16,    27,    30,    31,    32,    35,    38,    39,    44,
      49,   144,   145,   147,   143,    91,    65,   110,   145,     9,
      25,   110,    28,    36,    40,    51,    52,    53,    54,    55,
      56,    65,    77,    78,    87,    88,    89,    90,   120,   131,
     176,   232,   233,   234,   235,   237,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   267,   132,   132,     4,     8,    13,    18,    57,    58,
      59,    60,    61,    62,    63,    64,   122,   123,   124,   125,
     127,   128,   131,    73,   122,   131,   267,   131,   241,   243,
     247,   247,   247,   247,   247,   247,    65,    69,    66,    73,
      69,    72,    87,    88,    91,    92,    96,    89,    90,    97,
      98,    24,    75,    76,    83,    84,    81,    82,    93,    95,
      94,    85,    79,    86,    74,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   266,    15,   148,   150,    15,
     179,   181,    69,   238,   239,   238,    65,   132,    69,   236,
     240,    69,   240,    66,   176,   267,   110,   132,   267,   267,
     247,   247,   247,   252,   252,   253,   253,   122,   126,   127,
     130,   254,   254,   254,   254,   255,   255,   256,   257,   258,
     259,   267,   260,   263,   127,   128,    22,   149,   151,   127,
     129,   110,    72,   267,   239,    69,   236,   176,    65,    70,
      66,    69,    66,   250,    66,    70,    65,    70,    69,    69,
      69,    80,   129,   152,   110,   113,   182,   269,   129,    70,
      66,   176,   247,    70,   250,   176,    70,    70,    70,   262,
      72,   153,   269,   141,   158,   164,   183,   184,   185,   186,
     187,    66,    66,   129,   141,   154,   155,   156,   157,   158,
     162,   164,   173,   187,   147,   110,   114,   270,   185,    35,
     147,   172,   270,   156,   110,    43,   121,   122,   126,   163,
     191,   269,   132,   171,   191,   132,   159,   160,   132,     5,
      12,    19,    21,    33,    37,    38,    39,    41,    45,    48,
      50,    65,   117,   121,   131,   175,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   211,
     212,   216,   217,   222,   223,   224,   225,   226,   228,   234,
     242,   244,   245,   246,   248,   249,   264,    65,    65,    74,
      72,   110,    65,    53,   110,   110,    65,    65,   214,   267,
      65,    65,    65,   267,    65,    53,   110,   110,   267,   110,
     132,   159,   270,   193,   110,   110,   112,   121,   166,   167,
     168,   166,    67,   161,   188,   267,   160,   166,   110,   191,
     121,   195,   200,   213,   219,   221,   267,   110,   267,   267,
     267,   110,   267,   110,   191,    66,   121,   132,    66,    72,
      66,   161,   189,   190,    66,    45,   132,    71,    72,    66,
      66,    66,    66,    66,     7,   227,   229,   230,   132,    42,
     165,   169,   168,   165,    68,    72,   165,    65,   115,   214,
     200,   110,   200,   110,   110,   110,   110,    65,    17,   231,
     230,   128,   170,   110,   161,   267,   116,   218,   267,    71,
     191,   110,   206,   269,   191,   191,   191,   168,   110,    72,
     177,   269,    66,    65,    66,    66,   215,   220,   221,    14,
       6,    11,   205,   207,   208,   209,   210,    66,   191,   128,
      36,    40,   174,   178,   110,   267,   110,   110,    66,   110,
     267,   268,    80,   270,   208,   191,   210,   110,    65,    65,
     175,    72,   191,   191,   110,   191,    80,   110,   191,   176,
     176,   270,   267,   191,   110,    66,    66,    66,   110,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   118,   119,   120,   120,   120,   120,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   128,
     129,   130,   130,   130,   131,   131,   132,   133,   134,   134,
     135,   135,   136,   137,   137,   138,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   146,   147,
     147,   148,   148,   149,   149,   150,   151,   152,   152,   153,
     154,   154,   155,   155,   156,   156,   156,   157,   157,   157,
     158,   159,   159,   160,   160,   161,   161,   162,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   168,   168,   169,
     170,   170,   171,   172,   173,   174,   174,   175,   175,   176,
     176,   177,   178,   178,   179,   179,   180,   181,   181,   182,
     183,   183,   184,   184,   185,   185,   186,   187,   188,   189,
     189,   190,   190,   191,   192,   192,   193,   193,   194,   195,
     196,   196,   196,   196,   196,   196,   196,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   198,   199,   200,
     200,   200,   200,   200,   200,   200,   201,   202,   203,   204,
     205,   205,   206,   207,   207,   208,   209,   209,   210,   210,
     211,   212,   213,   213,   214,   214,   215,   215,   216,   217,
     217,   218,   219,   219,   220,   221,   221,   222,   222,   223,
     223,   224,   225,   226,   226,   227,   227,   228,   228,   229,
     229,   230,   231,   232,   232,   233,   233,   233,   233,   233,
     233,   233,   234,   235,   235,   236,   236,   237,   237,   238,
     238,   239,   240,   240,   241,   241,   242,   242,   242,   243,
     243,   244,   244,   244,   244,   245,   246,   247,   247,   247,
     247,   247,   248,   249,   250,   250,   250,   250,   251,   251,
     251,   252,   252,   252,   252,   253,   253,   253,   254,   254,
     254,   255,   255,   255,   255,   255,   255,   256,   256,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   261,   261,
     262,   262,   263,   263,   264,   265,   265,   265,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   267,
     268,   269,   270
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     1,     3,     1,     0,
       1,     2,     3,     1,     1,     3,     5,     1,     1,     1,
       0,     1,     2,     6,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     8,     1,
       0,     1,     0,     1,     0,     2,     2,     1,     3,     3,
       1,     0,     1,     2,     1,     2,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     1,     3,     1,     8,
       8,     1,     0,     1,     0,     1,     3,     2,     3,     2,
       1,     3,     1,     2,     9,     1,     0,     1,     0,     1,
       0,     4,     5,     5,     1,     0,     7,     2,     3,     3,
       1,     0,     1,     2,     1,     1,     1,     2,     3,     1,
       0,     1,     3,     3,     1,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     6,     6,     9,     6,
       1,     0,     3,     1,     2,     2,     1,     2,     4,     3,
       6,     8,     1,     0,     1,     0,     1,     0,    10,     9,
       9,     6,     1,     1,     1,     1,     3,     3,     2,     3,
       2,     3,     3,     6,     6,     1,     0,     4,     5,     1,
       2,     6,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     5,     1,     3,     1,     0,     3,     4,     1,
       2,     3,     2,     3,     3,     3,     4,     6,     6,     4,
       4,     1,     1,     1,     1,     2,     2,     1,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     5,     4,
       5,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 382 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_UNIT, 3);   }
#line 2080 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 387 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_INTLITERAL, (yyvsp[0]. node ));   }
#line 2086 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 389 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FLOATLITERAL, (yyvsp[0]. node ));   }
#line 2092 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 391 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_BOOLLITERAL, (yyvsp[0]. node ));   }
#line 2098 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 393 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_STRINGLITERAL, (yyvsp[0]. node ));   }
#line 2104 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 395 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CHARLITERAL, (yyvsp[0]. node ));   }
#line 2110 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 397 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULLLITERAL, (yyvsp[0]. node ));   }
#line 2116 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 408 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_BOOLEAN, (yyvsp[0]. node ));    }
#line 2122 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 418 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT8, (yyvsp[0]. node ));    }
#line 2128 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 420 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT16, (yyvsp[0]. node ));    }
#line 2134 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 422 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT32, (yyvsp[0]. node ));    }
#line 2140 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 424 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT64, (yyvsp[0]. node ));    }
#line 2146 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 426 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT8, (yyvsp[0]. node ));    }
#line 2152 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 428 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT16, (yyvsp[0]. node ));    }
#line 2158 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 430 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT32, (yyvsp[0]. node ));    }
#line 2164 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 432 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT64, (yyvsp[0]. node ));    }
#line 2170 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 434 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_CHAR, (yyvsp[0]. node ));    }
#line 2176 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 439 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_FLOAT, (yyvsp[0]. node ));    }
#line 2182 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 441 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_DOUBLE, (yyvsp[0]. node ));    }
#line 2188 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 451 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(NID_NULL, NULL /* "InterfaceTypeList" */ );
        COMBINE(NID_TYPE_CLASS, 2);
    }
#line 2197 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 467 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(NID_TYPE_ARRAY, 1);
        TOP()->counter = 1;
    }
#line 2206 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 472 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(NID_TYPE_ARRAY, 1);
        TOP()->counter = 1;
    }
#line 2215 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 477 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        beagle::compiler::Node *node = TOP();
        ++node->counter;
    }
#line 2224 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 490 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NAME, (yyvsp[0]. node ));    }
#line 2230 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 495 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        //PUSH(NID_NAME, $3);
        //COMBINE(0, 1);
        beagle::compiler::Node *name = TOP();
        name->text += '.';
        name->text += (yyvsp[0]. node );
        name->type = NID_QNAME;
    }
#line 2243 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 514 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ImportDeclarations" */ );   }
#line 2249 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 520 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORTS, 1);   }
#line 2255 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 522 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2261 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 536 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORT, 1);   }
#line 2267 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 541 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(NID_IMPORT_ALL, 1);
    }
#line 2275 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 553 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "AnnotationDeclarations" */ );   }
#line 2281 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 558 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATIONS, 1);   }
#line 2287 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 560 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2293 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 565 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATION, 2);   }
#line 2299 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 567 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_NULL, NULL /* "ArgumentList" */ );
		COMBINE(NID_ANNOTATION, 2);
	}
#line 2308 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 575 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MODIFIERS, 1);   }
#line 2314 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 577 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2320 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 582 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PUBLIC, (yyvsp[0]. node ));   }
#line 2326 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 584 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PROTECTED, (yyvsp[0]. node ));   }
#line 2332 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 586 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PRIVATE, (yyvsp[0]. node ));   }
#line 2338 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 588 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_STATIC, (yyvsp[0]. node ));   }
#line 2344 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 590 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ABSTRACT, (yyvsp[0]. node ));   }
#line 2350 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 592 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FINAL, (yyvsp[0]. node ));   }
#line 2356 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 594 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NATIVE, (yyvsp[0]. node ));   }
#line 2362 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 596 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_READLOCK, (yyvsp[0]. node ));   }
#line 2368 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 598 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_WRITELOCK, (yyvsp[0]. node ));   }
#line 2374 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 600 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_TRANSIENT, (yyvsp[0]. node ));   }
#line 2380 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 602 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOLATILE, (yyvsp[0]. node ));   }
#line 2386 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 607 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CLASS, 6);   }
#line 2392 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 612 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Modifiers" */ );   }
#line 2398 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 617 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Super" */ );   }
#line 2404 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 622 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Interfaces" */ );   }
#line 2410 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 636 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2416 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 638 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2422 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 647 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ClassBodyDeclarations" */ );   }
#line 2428 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 652 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2434 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 654 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2440 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 671 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FIELD, 4);   }
#line 2446 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 676 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2452 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 678 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2458 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 684 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(NID_NULL, NULL /* "VariableInitializer" */ );
        COMBINE(NID_DECLARATOR, 2);
    }
#line 2467 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 689 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DECLARATOR, 2);   }
#line 2473 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 700 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2479 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 706 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOID, (yyvsp[0]. node ));   }
#line 2485 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 712 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 6);   }
#line 2491 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 714 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 6);   }
#line 2497 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 720 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Throws" */ );   }
#line 2503 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 726 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "FormalParameterList" */ );   }
#line 2509 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 730 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETERS, 1);   }
#line 2515 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 732 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2521 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 737 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETER, 2);   }
#line 2527 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 739 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(NID_PARAMETER, 2);
        ++TOP()->counter;
    }
#line 2536 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 753 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROWS, 1);   }
#line 2542 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 755 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2548 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 764 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_STATIC_INIT, 1);   }
#line 2554 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 769 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CONSTRUCTOR, 6);   }
#line 2560 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 774 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ExplicitConstructorInvocation" */ );   }
#line 2566 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 779 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "BlockStatements" */ );   }
#line 2572 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 784 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ArgumentList" */ );   }
#line 2578 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 789 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 2);   }
#line 2584 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 794 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_THIS;   }
#line 2590 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 796 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_SUPER;   }
#line 2596 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 801 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ExtendsInterfaces" */ );   }
#line 2602 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 806 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        // Notice: we need to insert an NID_NULL between 'SimpleName' and 'ExtendsInterfacesOpt'
        //         to make NID_INTERFACE similar to NID_CLASS
        beagle::compiler::Node *intfBody = POP();
        beagle::compiler::Node *extends = POP();
        PUSH(NID_NULL, NULL);
        NPUSH(extends);
        NPUSH(intfBody);
        COMBINE(NID_INTERFACE, 6);
    }
#line 2617 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 820 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2623 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 822 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2629 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 831 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "InterfaceMemberDeclarations" */ );   }
#line 2635 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 836 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2641 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 838 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2647 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 852 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(NID_NULL, NULL /* "MethodBody" */ );
        COMBINE(0, 1);
    }
#line 2656 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 864 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "VariableInitializers" */ ); }
#line 2662 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 869 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARRAY, 1);   }
#line 2668 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 871 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2674 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 880 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 1);   }
#line 2680 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 882 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2686 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 896 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LOCAL, 2);   }
#line 2692 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 167:
#line 924 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PASS, (yyvsp[-1]. node ));   }
#line 2698 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 176:
#line 943 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_NULL, NULL /* "Block" */ );
		COMBINE(NID_IF, 3);
	}
#line 2707 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 177:
#line 951 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_BLOCK, 1);
		PUSH(NID_NULL, NULL /* "Block" */ );
		COMBINE(NID_IF, 3);
	}
#line 2717 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 960 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IF, 3);   }
#line 2723 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 965 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SWITCH, 2);   }
#line 2729 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 970 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "SwitchBlockStatementGroups" */ );   }
#line 2735 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 979 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2741 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 981 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2747 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 986 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GROUP, 2);   }
#line 2753 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 991 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2759 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 993 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2765 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 998 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CASE, 1);   }
#line 2771 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 1000 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_DEFAULT, (yyvsp[-2]. node ));
		COMBINE(NID_CASE, 1);
	}
#line 2780 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 1008 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_WHILE, 2);   }
#line 2786 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 1014 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DO, 2);   }
#line 2792 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1019 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ForInit" */ );   }
#line 2798 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 1024 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Expression" */ );   }
#line 2804 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 1029 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ForUpdate" */ );   }
#line 2810 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1034 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR, 4);   }
#line 2816 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 1039 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2822 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1041 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2828 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1046 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RANGE, 2);   }
#line 2834 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 1060 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2840 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1062 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2846 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 1067 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. node ));
		COMBINE(NID_BREAK, 1);
	}
#line 2855 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1072 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_INTLITERAL, "1");
		COMBINE(NID_BREAK, 1);
	}
#line 2864 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1080 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. node ));
		COMBINE(NID_CONTINUE, 1);
	}
#line 2873 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1085 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_INTLITERAL, "1");
		COMBINE(NID_CONTINUE, 1);
	}
#line 2882 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 1093 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RETURN, 1);   }
#line 2888 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1099 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROW, 1);   }
#line 2894 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1104 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2900 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1106 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2906 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1111 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Catches" */ );   }
#line 2912 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1116 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_NULL, NULL /* "finally" */ );
		COMBINE(NID_TRY, 3);
	}
#line 2921 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1121 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TRY, 3);   }
#line 2927 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1126 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2933 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1128 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2939 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1133 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CATCH, 2);   }
#line 2945 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1138 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_FINALLY;   }
#line 2951 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 1149 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_THIS, (yyvsp[0]. node ));   }
#line 2957 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 232:
#line 1159 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW, 2);   }
#line 2963 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 233:
#line 1164 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARGUMENTS, 1);   }
#line 2969 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 234:
#line 1166 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2975 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 236:
#line 1171 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Dims" */ );   }
#line 2981 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1176 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        /*
         * Note: unlike Java, the current specification of the language
         *       don't support assymetric arrays (i.e. arrays which some
         *       dimensions have different sizes). Example:
         *
         *     int[][] num = new int[2][];
		 *     num[0] = new int[1];
		 *     num[1] = new int[5];
         *
         * To enable this feature, the grammar should include/modify the
         * following rules:
         *
         *     ArrayCreationExpression:
         *         OK_NEW PrimitiveType DimExprs DimsOpt
         *         ;
         *
         *     DimsOpt:
         *         Dims
         *         |
         *         ;
         *
         *     Dims:
         *         TOK_LB TOK_RB
         *         | Dims TOK_LB TOK_RB
         *         ;
         */

        // insert 'DimsOpt' node into 'DimExprs'
        //COMBINE(0, 1);

        COMBINE(NID_NEW_ARRAY, 2);
    }
#line 3019 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 238:
#line 1210 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW_ARRAY, 3);   }
#line 3025 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 1215 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 3031 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1217 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3037 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1227 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, "");
		TOP()->counter = 1;
	}
#line 3046 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1232 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3054 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 244:
#line 1238 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_FIELD, 2);   }
#line 3060 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 1240 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_SUPER, (yyvsp[-2]. node ));
		COMBINE(NID_ACCESS_FIELD, 2);
	}
#line 3069 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1248 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_NULL, NULL /* "Primary" */ );
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CALL, 3);
	}
#line 3085 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1260 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CALL, 3);   }
#line 3091 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 248:
#line 1262 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {

		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_SUPER, "");
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CALL, 3);
	/*
	| Name BeginBlock ArgumentListOpt EndBlock
	| Primary TOK_DOT SimpleName BeginBlock ArgumentListOpt EndBlock
	| TOK_SUPER TOK_DOT TOK_NAME BeginBlock ArgumentListOpt EndBlock
	*/

	}
#line 3114 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1284 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3120 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 250:
#line 1286 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3126 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 255:
#line 1298 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3132 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 256:
#line 1303 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3138 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 259:
#line 1310 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 1);   }
#line 3144 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 260:
#line 1312 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 1);   }
#line 3150 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 262:
#line 1318 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3156 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 263:
#line 1323 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3162 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 265:
#line 1329 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TILDE, 1);   }
#line 3168 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 266:
#line 1331 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BANG, 1);   }
#line 3174 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1338 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		if (second->type == NID_NULL)
		{
			delete second;
			second = first;
		}
		else
			second->addChild(*first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CAST, 2);
	}
#line 3198 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 269:
#line 1358 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CAST, 2);   }
#line 3204 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 270:
#line 1360 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		second->addChild(*first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CAST, 2);
	}
#line 3222 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 272:
#line 1378 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MUL, 2);   }
#line 3228 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1380 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DIV, 2);   }
#line 3234 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 274:
#line 1382 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MOD, 2);   }
#line 3240 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1388 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 2);   }
#line 3246 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1390 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 2);   }
#line 3252 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 279:
#line 1396 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHL, 2);   }
#line 3258 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 280:
#line 1398 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHR, 2);   }
#line 3264 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1404 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LT, 2);   }
#line 3270 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 283:
#line 1406 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GT, 2);   }
#line 3276 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 284:
#line 1408 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LE, 2);   }
#line 3282 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 285:
#line 1410 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GE, 2);   }
#line 3288 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1412 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INSTANCEOF, 2);   }
#line 3294 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 288:
#line 1418 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_EQ, 2);   }
#line 3300 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 289:
#line 1420 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NE, 2);   }
#line 3306 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 291:
#line 1426 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_AND, 2);   }
#line 3312 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 293:
#line 1432 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CARET, 2);   }
#line 3318 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 295:
#line 1438 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_OR, 2);   }
#line 3324 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 297:
#line 1444 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANDAND, 2);   }
#line 3330 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 299:
#line 1450 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_OROR, 2);   }
#line 3336 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 301:
#line 1456 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_QUEST, 2);   }
#line 3342 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 304:
#line 1466 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {

        /*
         * Change the expression notation from infixed to prefixed
         */

        beagle::compiler::Node *left, *right, *oper;

        right = POP();
        oper = POP();
        left = POP();

        oper->addChild(*left);
        oper->addChild(*right);
        NPUSH(oper);
    }
#line 3363 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 308:
#line 1492 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ASN, (yyvsp[0]. node ));   }
#line 3369 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 309:
#line 1494 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MUASN, (yyvsp[0]. node ));   }
#line 3375 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 310:
#line 1496 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_DIASN, (yyvsp[0]. node ));   }
#line 3381 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 311:
#line 1498 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MODASN, (yyvsp[0]. node ));   }
#line 3387 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 312:
#line 1500 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PLASN, (yyvsp[0]. node ));   }
#line 3393 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 313:
#line 1502 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MIASN, (yyvsp[0]. node ));   }
#line 3399 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 314:
#line 1504 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SLASN, (yyvsp[0]. node ));   }
#line 3405 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 315:
#line 1506 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SRASN, (yyvsp[0]. node ));   }
#line 3411 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 316:
#line 1508 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ANDASN, (yyvsp[0]. node ));   }
#line 3417 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 317:
#line 1510 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CARETASN, (yyvsp[0]. node ));   }
#line 3423 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 318:
#line 1512 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ORASN, (yyvsp[0]. node ));   }
#line 3429 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3433 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1532 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


