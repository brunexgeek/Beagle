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
#include "Token.hh"


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


#line 147 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:355  */

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
    TOK_MODASN = 362,
    TOK_BAD_TOKEN = 363,
    TOK_EOL = 364,
    TOK_AT = 365,
    TOK_VARARG = 366,
    TOK_INDENT = 367,
    TOK_DEDENT = 368,
    TOK_IN = 369,
    TOK_RANGE = 370,
    TOK_PASS = 371
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 190 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */

    Token* token;

#line 280 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 296 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 59 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:359  */


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
    for (int i = (int) stack.size() - n; i < (int) stack.size(); ++i)
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
    int type,
    Token *token,
    int line = 0,
    int column = 0 )
{
    //std::cout << "PUSH " << value << std::endl;
    beagle::compiler::Node *node;
    node = new beagle::compiler::Node(type, (token == NULL) ? NULL : token->value.c_str());
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
#define PUSH(type, token)    beagle_push( parserContext, (type), (token), \
    beagle_get_lineno(parserContext->lexer), beagle_get_column(parserContext->lexer) )
#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)

#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wsign-compare"


#line 410 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  313
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  542

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   371

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
     115,   116
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   383,   383,   388,   390,   392,   394,   396,   398,   403,
     404,   408,   409,   414,   415,   419,   421,   423,   425,   427,
     429,   431,   433,   435,   440,   442,   447,   448,   452,   460,
     464,   469,   474,   482,   487,   488,   507,   508,   513,   515,
     520,   524,   525,   529,   534,   541,   542,   546,   547,   551,
     553,   558,   560,   568,   570,   575,   577,   579,   581,   583,
     585,   587,   589,   591,   593,   595,   600,   605,   606,   610,
     611,   615,   616,   620,   624,   628,   630,   635,   639,   640,
     644,   646,   651,   652,   653,   657,   658,   659,   663,   668,
     670,   675,   680,   685,   686,   690,   696,   702,   704,   710,
     711,   716,   717,   720,   722,   727,   729,   738,   743,   745,
     750,   754,   759,   764,   765,   769,   770,   771,   776,   778,
     783,   784,   788,   802,   804,   809,   813,   814,   818,   820,
     825,   826,   830,   834,   842,   846,   847,   851,   853,   858,
     862,   864,   869,   873,   877,   882,   883,   884,   885,   886,
     887,   888,   889,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   906,   911,   915,   916,   917,   918,   919,
     920,   921,   925,   933,   942,   947,   952,   953,   957,   961,
     963,   968,   973,   975,   980,   982,   990,   996,  1001,  1002,
    1006,  1007,  1011,  1012,  1016,  1021,  1023,  1028,  1033,  1034,
    1038,  1042,  1044,  1049,  1054,  1062,  1067,  1075,  1081,  1086,
    1088,  1093,  1094,  1098,  1103,  1108,  1110,  1115,  1120,  1125,
    1126,  1130,  1131,  1133,  1134,  1135,  1136,  1140,  1145,  1147,
    1152,  1186,  1191,  1196,  1203,  1208,  1215,  1217,  1225,  1237,
    1239,  1261,  1266,  1267,  1268,  1269,  1273,  1278,  1283,  1284,
    1285,  1287,  1289,  1293,  1298,  1303,  1304,  1306,  1308,  1312,
    1332,  1334,  1351,  1352,  1354,  1356,  1361,  1362,  1364,  1369,
    1370,  1372,  1377,  1378,  1380,  1382,  1384,  1386,  1391,  1392,
    1394,  1399,  1400,  1405,  1406,  1411,  1412,  1417,  1418,  1423,
    1424,  1429,  1430,  1435,  1436,  1440,  1460,  1461,  1462,  1466,
    1468,  1470,  1472,  1474,  1476,  1478,  1480,  1482,  1484,  1486,
    1491,  1495,  1499,  1503
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
  "TOK_TRY", "TOK_NULLLITERAL", "TOK_BOOLLITERAL", "TOK_INTLITERAL",
  "TOK_CHARLITERAL", "TOK_FLOATLITERAL", "TOK_STRINGLITERAL", "TOK_UINT8",
  "TOK_UINT16", "TOK_UINT32", "TOK_UINT64", "TOK_INT8", "TOK_INT16",
  "TOK_INT32", "TOK_INT64", "TOK_LP", "TOK_RP", "TOK_LC", "TOK_RC",
  "TOK_LB", "TOK_RB", "TOK_SM", "TOK_CM", "TOK_DOT", "TOK_ASN", "TOK_LT",
  "TOK_GT", "TOK_BANG", "TOK_TILDE", "TOK_QUEST", "TOK_COLON", "TOK_EQ",
  "TOK_NE", "TOK_LE", "TOK_GE", "TOK_ANDAND", "TOK_OROR", "TOK_INC",
  "TOK_DEC", "TOK_PLUS", "TOK_MINUS", "TOK_MUL", "TOK_DIV", "TOK_AND",
  "TOK_OR", "TOK_CARET", "TOK_MOD", "TOK_SHL", "TOK_SHR", "TOK_PLASN",
  "TOK_MIASN", "TOK_MUASN", "TOK_DIASN", "TOK_ANDASN", "TOK_ORASN",
  "TOK_CARETASN", "TOK_SLASN", "TOK_SRASN", "TOK_MODASN", "TOK_BAD_TOKEN",
  "TOK_EOL", "TOK_AT", "TOK_VARARG", "TOK_INDENT", "TOK_DEDENT", "TOK_IN",
  "TOK_RANGE", "TOK_PASS", "$accept", "CompilationUnit", "Literal", "Type",
  "PrimitiveType", "NumericType", "IntegralType", "FloatingPointType",
  "ReferenceType", "ClassOrInterfaceType", "InterfaceType", "ArrayType",
  "SimpleName", "Name", "ImportDeclarationsOpt", "ImportDeclarations",
  "PackageDeclaration", "ImportDeclaration", "SingleTypeImportDeclaration",
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
  "ArrayCreationExpression", "Dimensions", "DimensionsExpr", "FieldAccess",
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
     365,   366,   367,   368,   369,   370,   371
};
# endif

#define YYPACT_NINF -455

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-455)))

#define YYTABLE_NINF -298

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,    81,    34,   140,  -455,  -455,   -27,  -455,    81,    72,
     140,  -455,  -455,  -455,    81,  -455,    26,    81,  -455,   860,
      72,  -455,  -455,  -455,  -455,  -455,   -21,  -455,   -26,  -455,
    -455,  -455,  -455,  -455,  -455,  -455,  -455,  -455,  -455,  -455,
     860,  -455,    86,  -455,    99,  1035,  -455,  -455,    81,    81,
    -455,  1047,   154,  -455,  -455,  -455,  -455,  -455,  -455,  -455,
     861,  1035,  1035,  1035,  1035,  1035,  1035,  -455,  1095,   178,
     184,   196,  -455,   197,  -455,  1072,  -455,  -455,    23,  -455,
    -455,  -455,  -455,  -455,  -455,  -455,    75,   104,   122,   171,
     120,   187,   182,   189,   203,    82,  -455,  -455,  -455,  1119,
    -455,   280,   282,  -455,  -455,  -455,  -455,  -455,  -455,  -455,
    -455,  -455,  -455,  -455,  -455,   238,  -455,  -455,  -455,   -12,
     236,    81,   243,  1082,   247,    52,  -455,  -455,  -455,  -455,
    -455,  -455,  -455,  -455,  1035,   209,    81,  1035,  1035,  -455,
    -455,  1035,  1035,  1035,  1035,  1035,  1035,  1035,  1047,  1035,
    1035,  1035,  1035,  1035,  1035,  1035,  1035,  1035,  1035,  1035,
    1035,  -455,  -455,  -455,  -455,  -455,  -455,  -455,  -455,  -455,
    -455,  -455,  1035,    81,   298,  -455,    81,   214,   253,  1035,
     258,  1035,   258,   264,   260,    68,    96,  1089,   265,  -455,
     268,   270,  -455,  -455,  -455,  -455,    75,    75,   104,   104,
     266,  -455,   272,   279,   122,   122,   122,   122,   171,   171,
     120,   187,   182,   189,   254,   203,  -455,  -455,    81,   239,
    -455,  -455,  -455,   246,    81,   281,  1035,   286,  1035,  -455,
    1035,   290,  1089,  -455,  -455,  1035,  -455,   295,   302,   303,
    1035,  -455,   289,   246,  -455,  -455,    74,  -455,  -455,   304,
    -455,   309,  -455,  -455,  -455,   310,  -455,  -455,  -455,  -455,
      81,  -455,   115,   860,  -455,   267,   269,   131,  -455,  -455,
    -455,  -455,  -455,  -455,  -455,  1200,   269,   165,  -455,  -455,
    -455,  -455,   271,  -455,  -455,    29,  -455,  -455,  -455,  -455,
     246,    29,  -455,  -455,  -455,   246,  -455,    81,   266,  -455,
      81,  -455,   685,   317,  -455,  -455,    42,    -5,  -455,   319,
     -38,   275,   329,   331,  1035,   332,   333,   338,  1035,   340,
     -35,   296,  1035,   300,    81,   235,   601,  -455,  -455,   301,
    -455,  -455,  -455,  -455,   305,  -455,  -455,  -455,  -455,  -455,
    -455,  -455,  -455,  -455,  -455,  -455,  -455,  -455,  -455,    90,
     134,    23,   146,   161,  -455,  -455,  -455,   512,   512,   990,
      81,  -455,   512,   307,  -455,   246,   923,  1035,   308,  -455,
    1035,  1035,  1035,   311,  1035,   312,  -455,   246,   342,  -455,
     346,   351,  -455,  -455,  -455,  -455,  1047,    81,   348,   352,
    -455,   359,   990,  -455,  -455,  -455,  -455,   360,  -455,   385,
      81,  -455,  -455,   361,  -455,   363,   367,  -455,   370,   375,
     377,  -455,   378,  -455,   437,  -455,    81,  -455,   404,   512,
     404,  -455,   380,   379,   404,   384,   -41,  1035,   291,   961,
     354,   356,   358,   362,   391,   432,    36,  -455,  -455,    81,
     368,  -455,  -455,  -455,  -455,   990,  -455,  1035,   795,   398,
    -455,   246,   372,   246,   246,   246,   246,   512,   373,  -455,
    -455,  -455,   399,   246,  -455,   411,   405,   414,   418,   291,
     470,  -455,  -455,   167,  -455,  -455,  -455,   422,   246,    81,
    -455,   757,   382,  1035,   386,   387,   423,  -455,   363,   388,
    1035,   410,   269,   167,  -455,     5,  -455,   389,  -455,  -455,
      57,   429,   601,   601,  -455,   428,   246,   246,   401,   246,
    -455,   415,   402,  -455,  -455,  -455,  -455,   246,  1035,  1035,
     601,  -455,  -455,  1035,  -455,  -455,   246,  -455,   403,  -455,
    -455,   435,   448,  -455,   449,  -455,  -455,   406,   408,  -455,
    -455,  -455
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,    37,    33,    34,     0,     1,     0,    48,
      36,    38,    41,    42,     0,    40,     0,     0,     2,    68,
      47,    49,    45,    46,    39,    35,     0,    43,     0,    59,
      65,    60,    61,    57,    56,    55,    58,    62,    63,    64,
      67,    53,     0,    50,     0,   114,    52,    54,     0,     0,
      44,     0,     0,   222,     8,     5,     3,     7,     4,     6,
       0,     0,     0,     0,     0,     0,     0,   221,   243,     0,
     242,   219,   224,   113,   220,   225,   226,   298,   255,   244,
     245,   262,   248,   249,   252,   258,   266,   269,   272,   278,
     281,   283,   285,   287,   289,   291,   293,   310,   294,     0,
     228,    70,   121,    12,    23,    25,    24,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    11,    13,    14,     0,
      28,     0,     0,   243,     0,   243,   219,   225,   257,   256,
     253,   254,   250,   251,   114,     0,     0,     0,     0,   246,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   299,   303,   304,   300,   301,   307,   309,   308,   305,
     306,   302,     0,     0,    72,    69,     0,     0,   120,     0,
     230,   114,   231,   237,     0,     0,     0,   223,     0,    51,
     236,     0,   229,   263,   264,   265,   267,   268,   270,   271,
       0,   277,    26,    27,   273,   274,   275,   276,   279,   280,
     282,   284,   286,   288,     0,   290,   295,    73,     0,     0,
      71,    29,   123,     0,     0,     0,     0,     0,   114,   232,
       0,     0,     0,   260,   238,   114,   241,     0,     0,     0,
       0,    75,    74,     0,   312,   122,    48,   124,   234,     0,
     227,     0,   259,   233,   261,     0,    30,    31,    32,   292,
       0,    66,    48,    68,   132,     0,     0,    48,   128,   130,
     131,   235,   240,   239,    76,    68,     0,    48,    80,    82,
      85,    86,     0,    84,    87,     0,   133,   313,   125,   129,
      58,     0,    83,    77,    81,   133,    96,     0,     9,    10,
       0,   111,     0,    34,    95,   110,    91,     0,    89,     0,
       0,     0,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   296,     0,   140,   152,     0,
     142,   145,   162,   153,     0,   146,   147,   148,   154,   149,
     155,   150,   151,   156,   157,   158,   160,   159,   161,   171,
     170,     0,   168,   169,   166,   167,   165,   102,   102,     0,
       0,    88,   102,     0,   204,     0,   189,     0,     0,   190,
       0,     0,     0,     0,     0,     0,   206,     0,     0,   163,
      91,   144,   141,   139,   143,   164,     0,     0,     0,   101,
     103,     0,   136,    92,    94,    93,    90,     0,   203,     0,
       0,   199,   201,     0,   188,   198,     0,   207,     0,     0,
       0,   208,     0,   205,   212,   223,     0,   105,   100,     0,
     100,   137,     0,   135,   100,     0,    91,   191,     0,     0,
       0,     0,     0,     0,     0,     0,   213,   215,   106,     0,
       0,    99,   104,    97,   134,     0,    98,     0,     0,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,   214,
     216,   108,   107,     0,   138,     0,     0,     0,     0,   193,
     172,   173,   175,   177,   209,   210,   186,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,   192,   200,     0,
       0,     0,     0,   176,   179,     0,   182,     0,   218,   109,
       0,   222,     0,     0,   187,     0,     0,     0,     0,     0,
     311,     0,     0,   178,   180,   181,   183,     0,   114,   114,
       0,   115,   116,     0,   196,   195,     0,   174,     0,   185,
     217,     0,     0,   117,     0,   194,   184,     0,     0,   197,
     119,   118
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -455,  -455,  -455,  -177,   -16,  -455,  -455,  -455,   374,   -50,
    -167,  -455,    -8,    -1,  -455,  -455,  -455,   508,  -455,  -455,
    -455,    -4,  -455,   501,  -455,   483,  -455,  -156,  -455,  -455,
    -455,  -455,  -455,  -455,  -455,  -455,   249,  -455,  -231,   227,
     168,  -366,  -455,  -455,  -165,  -226,  -159,  -455,  -390,  -455,
    -455,  -455,  -455,  -455,  -132,  -455,  -455,  -455,  -455,  -455,
    -455,  -455,  -455,   262,  -455,  -157,  -455,  -455,  -455,  -240,
    -454,  -313,  -455,   166,  -455,  -455,  -455,  -455,  -351,  -455,
    -455,  -455,  -455,  -455,  -455,  -455,    38,  -455,    32,  -455,
    -455,  -455,   106,  -455,  -455,  -455,  -455,  -455,  -455,    65,
    -455,  -455,  -455,  -455,  -455,  -455,  -455,  -455,   100,  -455,
    -455,   396,  -298,  -455,  -455,   412,   425,   443,  -290,  -455,
    -232,   -75,   -66,   -42,   -30,   -28,  -148,  -455,   118,   147,
     217,   151,   400,   407,   409,   419,   397,  -455,   320,   390,
     -17,  -455,  -455,   -57,  -455,  -213,  -268
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    67,   324,   298,   116,   117,   118,   299,   202,
     222,   203,     5,    68,     9,    10,     3,    11,    12,    13,
      18,   263,    20,    21,    40,    41,    22,    42,   174,   219,
     175,   220,   242,   261,   276,   277,   278,   279,   264,   381,
     308,   393,   281,   300,   265,   440,   388,   389,   390,   441,
     462,   304,   292,   283,    69,   480,   502,   177,    23,   178,
     245,   266,   267,   268,   269,   270,   394,   422,   423,   301,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   492,   472,   493,   494,   495,   496,   339,
     340,   403,   368,   486,   341,   342,   467,   404,   487,   405,
     343,   344,   345,   346,   347,   435,   348,   436,   437,   459,
      70,    71,    72,    73,    74,   185,   180,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   172,   100,   511,   302,   288
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   119,   188,   124,   349,    19,    25,    16,   293,    28,
     246,   490,   350,   382,   363,   402,   491,   375,    25,   128,
     129,   130,   131,   132,   133,     4,   421,   503,   349,   442,
     262,   280,   359,   103,     7,   115,   350,   104,    45,   233,
     101,   102,   105,   434,   122,    14,   280,   106,   520,   227,
     120,   241,   181,  -211,     1,   305,   179,   247,   383,   123,
     125,   125,   125,   125,   125,   125,   360,   477,   349,    44,
     351,   364,   296,   448,   376,     4,   350,   450,   452,   464,
     191,   192,    15,    46,   254,   107,   108,   109,   110,   111,
     112,   113,   114,   274,   351,    48,   251,   282,    26,   193,
     194,   195,   214,   255,   361,   284,   358,   285,   297,   139,
     140,    49,   282,   183,   297,   359,   134,   244,   402,   291,
     284,   518,   225,   217,    14,   399,   221,     4,   190,   121,
     349,   349,   200,   230,   351,    27,   231,   414,   350,   350,
     125,   125,   125,   125,   125,   125,   125,   120,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,  -224,   125,
     159,   232,  -224,     8,   231,   141,   142,   160,   221,   249,
     143,   349,   120,   490,   221,   120,  -224,  -224,   491,   350,
     387,   387,    17,   349,    17,   387,   125,  -127,   252,   400,
     382,   350,   144,   145,   443,   148,   351,   351,   446,   391,
     153,   154,  -226,   397,   349,   349,  -226,   382,    50,   416,
     221,   470,   350,   350,   474,   475,   476,   120,   146,   147,
    -226,  -226,   349,   120,   513,    17,   121,   352,   -79,   125,
     350,   125,  -244,  -244,   521,   522,   353,   351,   498,   125,
     473,    17,   387,   135,  -126,   149,   150,  -245,  -245,   351,
     481,   352,   533,   151,   152,   515,   136,   369,   275,   120,
     353,   373,   196,   197,   137,   378,   524,   525,   138,   527,
     351,   351,   354,   275,   355,    17,   156,   530,   -78,   155,
     387,   -28,   157,   303,   120,   356,   535,   158,   351,   306,
     120,   352,   309,   198,   199,   173,   354,   176,   355,   134,
     353,   325,   395,   -28,   208,   209,   179,    14,    14,   356,
     406,   184,   187,   408,   409,   410,   380,   412,   189,    51,
     218,  -243,  -243,   223,   224,   325,   226,    52,   228,   229,
     234,    53,   235,   240,   237,   395,   354,     4,   355,   236,
     238,    54,    55,    56,    57,    58,    59,   239,   243,   356,
     248,   250,   380,   352,   352,   322,   120,   120,   244,   253,
     260,   120,   353,   353,   256,   325,   204,   205,   206,   207,
     369,   257,   258,   271,   272,   273,   286,    63,    64,   417,
     295,   357,   287,   362,   365,   120,   531,   532,   395,   461,
     465,   468,   426,   366,   352,   367,   370,   371,   354,   354,
     355,   355,   372,   353,   374,   377,   352,   415,   438,   379,
     384,   356,   356,   418,   385,   353,   398,   407,   120,   359,
     411,   413,   360,   419,   420,   424,   505,   352,   352,   499,
     425,   427,   429,   510,   428,   430,   353,   353,   120,   354,
     431,   355,   432,   433,   434,   352,   439,   444,   447,   458,
     445,   354,   356,   355,   353,   457,   120,   126,   126,   126,
     126,   126,   126,   453,   356,   454,   534,   455,   469,   483,
     479,   456,   354,   354,   355,   355,   482,   463,   120,   484,
     325,   471,   478,   485,   489,   356,   356,   497,   508,   512,
     354,   504,   355,   519,   528,   506,   507,   509,   517,   523,
     537,   325,   325,   356,   127,   127,   127,   127,   127,   127,
     526,   529,   536,   538,   539,   540,   103,   541,    24,   325,
     104,    43,   201,    47,   307,   105,   294,   516,   396,   289,
     106,   514,   401,   449,   488,   186,   460,   126,   126,   126,
     126,   126,   126,   126,   182,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   210,   126,   215,     4,     0,
     259,     0,   216,   211,     0,     0,   212,     0,   107,   108,
     109,   110,   111,   112,   113,   114,     0,   213,     0,     0,
       0,     0,     0,   126,   127,   127,   127,   127,   127,   127,
     127,     0,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,     0,   127,     0,   103,   310,     0,     0,   104,
       0,     0,     0,   311,   105,     0,     0,     0,     0,   106,
     312,     0,   313,   386,     0,     0,   126,     0,   126,    51,
     127,     0,     0,     0,   314,     0,   126,    52,   315,   316,
     317,    53,   318,     0,     0,     0,   319,     4,     0,   320,
     321,    54,    55,    56,    57,    58,    59,   107,   108,   109,
     110,   111,   112,   113,   114,   322,     0,     0,     0,     0,
       0,     0,     0,   127,     0,   127,     0,     0,     0,     0,
       0,     0,     0,   127,     0,     0,     0,    63,    64,   103,
     310,     0,     0,   104,     0,     0,     0,   311,   105,     0,
       0,     0,     0,   106,   312,     0,   313,     0,     0,     0,
       0,     0,     0,    51,   287,     0,     0,   323,   314,     0,
       0,    52,   315,   316,   317,    53,   318,     0,     0,     0,
     319,     4,     0,   320,   321,    54,    55,    56,    57,    58,
      59,   107,   108,   109,   110,   111,   112,   113,   114,   322,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   310,     0,     0,   104,     0,     0,     0,   311,
     105,    63,    64,     0,     0,   106,   312,     0,   313,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
     314,     0,     0,   500,   315,   316,   317,   501,   318,     0,
       0,   323,   319,     4,     0,   320,   321,    54,    55,    56,
      57,    58,    59,   107,   108,   109,   110,   111,   112,   113,
     114,   322,     0,    51,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     4,     0,    63,    64,    54,    55,    56,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,     0,    29,     0,   103,     0,     0,     0,   104,
      30,    61,    62,   323,   105,     0,    31,     0,     0,   106,
       0,    63,    64,    65,    66,     0,     0,    32,     0,    51,
      33,    34,    35,     0,     0,    36,     0,    52,    37,    38,
       0,    53,     0,     0,    39,     0,     0,     4,     0,     0,
     466,    54,    55,    56,    57,    58,    59,   107,   108,   109,
     110,   111,   112,   113,   114,    60,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,   105,    61,    62,     0,
       0,   106,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    51,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     4,
       0,     0,     0,    54,    55,    56,    57,    58,    59,   107,
     108,   109,   110,   111,   112,   113,   114,   322,     0,    51,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,     0,     0,     4,     0,    63,
      64,    54,    55,    56,    57,    58,    59,     0,    51,     0,
       0,     0,     0,     0,     0,   322,    52,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     4,     0,     0,     0,
      54,    55,    56,    57,    58,    59,     0,    63,    64,     0,
       0,   103,     0,     0,    60,   104,   392,     0,     0,     0,
     105,     0,     0,    51,     0,   106,    61,    62,     0,     0,
     451,    52,     0,     0,     0,    53,    63,    64,    65,    66,
       0,     4,     0,     0,     0,    54,    55,    56,    57,    58,
      59,     0,     0,     4,     0,     0,     0,     0,     0,    60,
       0,     0,     0,   107,   108,   109,   110,   111,   112,   113,
     114,    61,    62,     0,     0,     0,     0,    51,     0,     0,
       0,    63,    64,    65,    66,    52,     0,     0,     0,    53,
       0,     0,     0,     0,     0,     4,     0,     0,     0,    54,
      55,    56,    57,    58,    59,  -297,   134,     0,     0,     0,
     184,     0,     0,    60,    14,  -296,     0,     0,     0,   134,
       0,     0,     0,     0,     0,    61,    62,    14,  -296,     0,
    -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
       0,     0,   161,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,    29,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,    31,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,    32,     0,     0,
      33,    34,    35,     0,     0,   290,     0,     0,    37,    38,
       0,     0,     0,     0,    39
};

static const yytype_int16 yycheck[] =
{
       1,    51,   134,    60,   302,     9,    14,     8,   276,    17,
     223,     6,   302,   326,    52,   366,    11,    52,    26,    61,
      62,    63,    64,    65,    66,    46,   392,   481,   326,   419,
     243,   262,    73,     4,     0,    51,   326,     8,    64,   187,
      48,    49,    13,     7,    60,    72,   277,    18,   502,   181,
      51,   218,    64,    17,    29,   295,    68,   224,   326,    60,
      61,    62,    63,    64,    65,    66,    71,   457,   366,    90,
     302,   109,    43,   114,   109,    46,   366,   428,   429,   445,
     137,   138,   109,   109,   232,    56,    57,    58,    59,    60,
      61,    62,    63,   260,   326,     9,   228,   262,    72,   141,
     142,   143,   159,   235,   109,   262,    64,   263,   285,    86,
      87,    25,   277,   121,   291,    73,    64,   112,   469,   275,
     277,    64,   179,   173,    72,   365,   176,    46,   136,    72,
     428,   429,   148,    65,   366,   109,    68,   377,   428,   429,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,    68,   160,
      78,    65,    72,    23,    68,    90,    91,    85,   218,   226,
      95,   469,   173,     6,   224,   176,    86,    87,    11,   469,
     357,   358,   110,   481,   110,   362,   187,   113,   230,   366,
     503,   481,    88,    89,   420,    24,   428,   429,   424,   358,
      80,    81,    68,   362,   502,   503,    72,   520,   109,   386,
     260,   451,   502,   503,   454,   455,   456,   218,    96,    97,
      86,    87,   520,   224,   492,   110,    72,   302,   113,   230,
     520,   232,    86,    87,   502,   503,   302,   469,   478,   240,
     453,   110,   419,    65,   113,    74,    75,    86,    87,   481,
     463,   326,   520,    82,    83,   495,    72,   314,   262,   260,
     326,   318,   144,   145,    68,   322,   506,   507,    71,   509,
     502,   503,   302,   277,   302,   110,    94,   517,   113,    92,
     457,    46,    93,   291,   285,   302,   526,    84,   520,   297,
     291,   366,   300,   146,   147,    15,   326,    15,   326,    64,
     366,   302,   359,    68,   153,   154,    68,    72,    72,   326,
     367,    68,    65,   370,   371,   372,   324,   374,   109,    28,
      22,    86,    87,   109,    71,   326,    68,    36,    64,    69,
      65,    40,    64,    79,    68,   392,   366,    46,   366,    69,
      68,    50,    51,    52,    53,    54,    55,    68,   109,   366,
      69,    65,   360,   428,   429,    64,   357,   358,   112,    69,
      71,   362,   428,   429,    69,   366,   149,   150,   151,   152,
     427,    69,    69,    69,    65,    65,   109,    86,    87,   387,
     109,    64,   113,    64,   109,   386,   518,   519,   445,   439,
     447,   448,   400,    64,   469,    64,    64,    64,   428,   429,
     428,   429,    64,   469,    64,   109,   481,    65,   416,   109,
     109,   428,   429,    65,   109,   481,   109,   109,   419,    73,
     109,   109,    71,    71,    65,    65,   483,   502,   503,   479,
      45,    70,    65,   490,    71,    65,   502,   503,   439,   469,
      65,   469,    65,    65,     7,   520,    42,    67,    64,    17,
      71,   481,   469,   481,   520,    64,   457,    61,    62,    63,
      64,    65,    66,   109,   481,   109,   523,   109,    70,    64,
      71,   109,   502,   503,   502,   503,    65,   109,   479,    65,
     481,   109,   109,    65,    14,   502,   503,    65,    65,    79,
     520,   109,   520,    64,    79,   109,   109,   109,   109,    71,
      65,   502,   503,   520,    61,    62,    63,    64,    65,    66,
     109,   109,   109,    65,    65,   109,     4,   109,    10,   520,
       8,    20,   148,    40,   297,    13,   277,   495,   360,   267,
      18,   493,   366,   427,   469,   123,   436,   141,   142,   143,
     144,   145,   146,   147,   119,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   155,   160,   160,    46,    -1,
     240,    -1,   172,   156,    -1,    -1,   157,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,   158,    -1,    -1,
      -1,    -1,    -1,   187,   141,   142,   143,   144,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,    -1,   160,    -1,     4,     5,    -1,    -1,     8,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,   111,    -1,    -1,   230,    -1,   232,    28,
     187,    -1,    -1,    -1,    33,    -1,   240,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,    -1,    86,    87,     4,
       5,    -1,    -1,     8,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,   113,    -1,    -1,   116,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,    -1,    -1,     8,    -1,    -1,    -1,    12,
      13,    86,    87,    -1,    -1,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,   116,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    86,    87,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,     3,    -1,     4,    -1,    -1,    -1,     8,
      10,    76,    77,   116,    13,    -1,    16,    -1,    -1,    18,
      -1,    86,    87,    88,    89,    -1,    -1,    27,    -1,    28,
      30,    31,    32,    -1,    -1,    35,    -1,    36,    38,    39,
      -1,    40,    -1,    -1,    44,    -1,    -1,    46,    -1,    -1,
     115,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    13,    76,    77,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    86,
      87,    50,    51,    52,    53,    54,    55,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    36,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    86,    87,    -1,
      -1,     4,    -1,    -1,    64,     8,    66,    -1,    -1,    -1,
      13,    -1,    -1,    28,    -1,    18,    76,    77,    -1,    -1,
     109,    36,    -1,    -1,    -1,    40,    86,    87,    88,    89,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    76,    77,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    86,    87,    88,    89,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    73,    64,    -1,    -1,    -1,
      68,    -1,    -1,    64,    72,    73,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    76,    77,    72,    73,    -1,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,    -1,    73,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    27,    -1,    -1,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    29,   118,   133,    46,   129,   130,     0,    23,   131,
     132,   134,   135,   136,    72,   109,   130,   110,   137,   138,
     139,   140,   143,   175,   134,   129,    72,   109,   129,     3,
      10,    16,    27,    30,    31,    32,    35,    38,    39,    44,
     141,   142,   144,   140,    90,    64,   109,   142,     9,    25,
     109,    28,    36,    40,    50,    51,    52,    53,    54,    55,
      64,    76,    77,    86,    87,    88,    89,   119,   130,   171,
     227,   228,   229,   230,   231,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     260,   129,   129,     4,     8,    13,    18,    56,    57,    58,
      59,    60,    61,    62,    63,   121,   122,   123,   124,   126,
     130,    72,   121,   130,   260,   130,   228,   234,   240,   240,
     240,   240,   240,   240,    64,    65,    72,    68,    71,    86,
      87,    90,    91,    95,    88,    89,    96,    97,    24,    74,
      75,    82,    83,    80,    81,    92,    94,    93,    84,    78,
      85,    73,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   259,    15,   145,   147,    15,   174,   176,    68,
     233,    64,   233,   129,    68,   232,   232,    65,   171,   109,
     129,   260,   260,   240,   240,   240,   245,   245,   246,   246,
     121,   125,   126,   128,   247,   247,   247,   247,   248,   248,
     249,   250,   251,   252,   260,   253,   256,   126,    22,   146,
     148,   126,   127,   109,    71,   260,    68,   171,    64,    69,
      65,    68,    65,   243,    65,    64,    69,    68,    68,    68,
      79,   127,   149,   109,   112,   177,   262,   127,    69,   260,
      65,   171,   240,    69,   243,   171,    69,    69,    69,   255,
      71,   150,   262,   138,   155,   161,   178,   179,   180,   181,
     182,    69,    65,    65,   127,   138,   151,   152,   153,   154,
     155,   159,   161,   170,   182,   144,   109,   113,   263,   180,
      35,   144,   169,   263,   153,   109,    43,   120,   121,   125,
     160,   186,   262,   129,   168,   186,   129,   156,   157,   129,
       5,    12,    19,    21,    33,    37,    38,    39,    41,    45,
      48,    49,    64,   116,   120,   130,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   206,
     207,   211,   212,   217,   218,   219,   220,   221,   223,   229,
     235,   237,   238,   239,   241,   242,   257,    64,    64,    73,
      71,   109,    64,    52,   109,   109,    64,    64,   209,   260,
      64,    64,    64,   260,    64,    52,   109,   109,   260,   109,
     129,   156,   188,   263,   109,   109,   111,   120,   163,   164,
     165,   163,    66,   158,   183,   260,   157,   163,   109,   186,
     120,   190,   195,   208,   214,   216,   260,   109,   260,   260,
     260,   109,   260,   109,   186,    65,   120,   129,    65,    71,
      65,   158,   184,   185,    65,    45,   129,    70,    71,    65,
      65,    65,    65,    65,     7,   222,   224,   225,   129,    42,
     162,   166,   165,   162,    67,    71,   162,    64,   114,   209,
     195,   109,   195,   109,   109,   109,   109,    64,    17,   226,
     225,   126,   167,   109,   158,   260,   115,   213,   260,    70,
     186,   109,   201,   262,   186,   186,   186,   165,   109,    71,
     172,   262,    65,    64,    65,    65,   210,   215,   216,    14,
       6,    11,   200,   202,   203,   204,   205,    65,   186,   126,
      36,    40,   173,   187,   109,   260,   109,   109,    65,   109,
     260,   261,    79,   263,   203,   186,   205,   109,    64,    64,
     187,   263,   263,    71,   186,   186,   109,   186,    79,   109,
     186,   171,   171,   263,   260,   186,   109,    65,    65,    65,
     109,   109
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   117,   118,   119,   119,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   127,
     128,   128,   128,   129,   130,   130,   131,   131,   132,   132,
     133,   134,   134,   135,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   143,   144,   144,   145,
     145,   146,   146,   147,   148,   149,   149,   150,   151,   151,
     152,   152,   153,   153,   153,   154,   154,   154,   155,   156,
     156,   157,   157,   158,   158,   159,   160,   161,   161,   162,
     162,   163,   163,   164,   164,   165,   165,   166,   167,   167,
     168,   169,   170,   171,   171,   172,   172,   172,   173,   173,
     174,   174,   175,   176,   176,   177,   178,   178,   179,   179,
     180,   180,   181,   182,   183,   184,   184,   185,   185,   186,
     187,   187,   188,   189,   190,   191,   191,   191,   191,   191,
     191,   191,   191,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   194,   195,   195,   195,   195,   195,
     195,   195,   196,   197,   198,   199,   200,   200,   201,   202,
     202,   203,   204,   204,   205,   205,   206,   207,   208,   208,
     209,   209,   210,   210,   211,   212,   212,   213,   214,   214,
     215,   216,   216,   217,   217,   218,   218,   219,   220,   221,
     221,   222,   222,   223,   223,   224,   224,   225,   226,   227,
     227,   228,   228,   228,   228,   228,   228,   229,   230,   230,
     231,   231,   232,   232,   233,   233,   234,   234,   235,   235,
     235,   236,   237,   237,   237,   237,   238,   239,   240,   240,
     240,   240,   240,   241,   242,   243,   243,   243,   243,   244,
     244,   244,   245,   245,   245,   245,   246,   246,   246,   247,
     247,   247,   248,   248,   248,   248,   248,   248,   249,   249,
     249,   250,   250,   251,   251,   252,   252,   253,   253,   254,
     254,   255,   255,   256,   256,   257,   258,   258,   258,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     260,   261,   262,   263
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     1,     3,     1,     0,     1,     2,
       3,     1,     1,     3,     5,     1,     1,     1,     0,     1,
       2,     6,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     1,     0,     1,
       0,     1,     0,     2,     2,     1,     3,     3,     1,     0,
       1,     2,     1,     2,     1,     1,     1,     1,     5,     1,
       3,     1,     3,     1,     1,     3,     1,     8,     8,     1,
       0,     1,     0,     1,     3,     2,     3,     2,     1,     3,
       1,     2,     9,     1,     0,     3,     3,     4,     5,     5,
       1,     0,     7,     2,     3,     3,     1,     0,     1,     2,
       1,     1,     1,     2,     3,     1,     0,     1,     3,     3,
       1,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     6,     6,     9,     6,     1,     0,     3,     1,
       2,     2,     1,     2,     4,     3,     6,     8,     1,     0,
       1,     0,     1,     0,    10,     9,     9,     6,     1,     1,
       1,     1,     3,     3,     2,     3,     2,     3,     3,     6,
       6,     1,     0,     4,     5,     1,     2,     6,     3,     1,
       1,     1,     1,     3,     1,     1,     1,     5,     1,     3,
       3,     3,     2,     3,     3,     4,     3,     3,     4,     6,
       6,     4,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     5,
       4,     5,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 384 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_UNIT, 3);   }
#line 2103 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 389 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_INTLITERAL, (yyvsp[0]. token ));   }
#line 2109 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 391 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FLOATLITERAL, (yyvsp[0]. token ));   }
#line 2115 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 393 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_BOOLLITERAL, (yyvsp[0]. token ));   }
#line 2121 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 395 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_STRINGLITERAL, (yyvsp[0]. token ));   }
#line 2127 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 397 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CHARLITERAL, (yyvsp[0]. token ));   }
#line 2133 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 399 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULLLITERAL, (yyvsp[0]. token ));   }
#line 2139 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 410 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_BOOLEAN, (yyvsp[0]. token ));    }
#line 2145 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 420 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT8, (yyvsp[0]. token ));    }
#line 2151 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 422 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT16, (yyvsp[0]. token ));    }
#line 2157 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 424 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT32, (yyvsp[0]. token ));    }
#line 2163 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 426 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT64, (yyvsp[0]. token ));    }
#line 2169 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 428 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT8, (yyvsp[0]. token ));    }
#line 2175 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 430 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT16, (yyvsp[0]. token ));    }
#line 2181 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 432 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT32, (yyvsp[0]. token ));    }
#line 2187 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 434 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT64, (yyvsp[0]. token ));    }
#line 2193 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 436 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_CHAR, (yyvsp[0]. token ));    }
#line 2199 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 441 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_FLOAT, (yyvsp[0]. token ));    }
#line 2205 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 443 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_DOUBLE, (yyvsp[0]. token ));    }
#line 2211 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 453 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(NID_NULL, NULL /* "InterfaceTypeList" */ );
        COMBINE(NID_TYPE_CLASS, 2);
    }
#line 2220 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 465 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(NID_TYPE_ARRAY, 1);
        TOP()->counter = 1;
    }
#line 2229 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 470 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(NID_TYPE_ARRAY, 1);
        TOP()->counter = 1;
    }
#line 2238 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 475 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        beagle::compiler::Node *node = TOP();
        ++node->counter;
    }
#line 2247 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 483 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NAME, (yyvsp[0]. token ));    }
#line 2253 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 489 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        //PUSH(NID_NAME, $3);
        //COMBINE(0, 1);
        beagle::compiler::Node *name = TOP();
        name->text += '.';
        name->text += (yyvsp[0]. token )->value;
        name->type = NID_QNAME;
    }
#line 2266 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 508 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ImportDeclarations" */ );   }
#line 2272 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 514 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORTS, 1);   }
#line 2278 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 516 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2284 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 530 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORT, 1);   }
#line 2290 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 535 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(NID_IMPORT_ALL, 1);
    }
#line 2298 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 547 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "AnnotationDeclarations" */ );   }
#line 2304 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 552 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATIONS, 1);   }
#line 2310 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 554 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2316 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 559 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATION, 2);   }
#line 2322 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 561 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_NULL, NULL /* "ArgumentList" */ );
		COMBINE(NID_ANNOTATION, 2);
	}
#line 2331 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 569 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MODIFIERS, 1);   }
#line 2337 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 571 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2343 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 576 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PUBLIC, (yyvsp[0]. token ));   }
#line 2349 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 578 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PROTECTED, (yyvsp[0]. token ));   }
#line 2355 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 580 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PRIVATE, (yyvsp[0]. token ));   }
#line 2361 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 582 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_STATIC, (yyvsp[0]. token ));   }
#line 2367 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 584 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ABSTRACT, (yyvsp[0]. token ));   }
#line 2373 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 586 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FINAL, (yyvsp[0]. token ));   }
#line 2379 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 588 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NATIVE, (yyvsp[0]. token ));   }
#line 2385 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 590 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_READLOCK, (yyvsp[0]. token ));   }
#line 2391 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 592 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_WRITELOCK, (yyvsp[0]. token ));   }
#line 2397 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 594 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOLATILE, (yyvsp[0]. token ));   }
#line 2403 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 596 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CONST, (yyvsp[0]. token ));   }
#line 2409 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 601 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CLASS, 6);   }
#line 2415 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 606 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Modifiers" */ );   }
#line 2421 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 611 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Super" */ );   }
#line 2427 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 616 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Interfaces" */ );   }
#line 2433 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 629 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2439 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 631 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2445 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 640 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ClassBodyDeclarations" */ );   }
#line 2451 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 645 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2457 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 647 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2463 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 664 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FIELD, 4);   }
#line 2469 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 669 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2475 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 671 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2481 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 676 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(NID_NULL, NULL /* "VariableInitializer" */ );
        COMBINE(NID_DECLARATOR, 2);
    }
#line 2490 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 681 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DECLARATOR, 2);   }
#line 2496 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 691 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2502 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 697 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOID, (yyvsp[0]. token ));   }
#line 2508 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 703 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 6);   }
#line 2514 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 705 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 6);   }
#line 2520 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 711 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Throws" */ );   }
#line 2526 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 717 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "FormalParameterList" */ );   }
#line 2532 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 721 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETERS, 1);   }
#line 2538 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 723 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2544 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 728 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETER, 2);   }
#line 2550 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 730 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(NID_PARAMETER, 2);
        ++TOP()->counter;
    }
#line 2559 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 744 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROWS, 1);   }
#line 2565 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 746 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2571 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 755 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_STATIC_INIT, 1);   }
#line 2577 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 760 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CONSTRUCTOR, 6);   }
#line 2583 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 765 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ArgumentList" */ );   }
#line 2589 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 772 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 2);   }
#line 2595 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 777 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_THIS;   }
#line 2601 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 779 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_SUPER;   }
#line 2607 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 784 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ExtendsInterfaces" */ );   }
#line 2613 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 789 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 2628 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 803 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2634 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 805 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2640 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 814 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "InterfaceMemberDeclarations" */ );   }
#line 2646 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 819 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2652 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 821 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2658 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 835 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(NID_NULL, NULL /* "MethodBody" */ );
        COMBINE(0, 1);
    }
#line 2667 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 847 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "VariableInitializers" */ ); }
#line 2673 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 852 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARRAY, 1);   }
#line 2679 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 854 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2685 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 863 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 1);   }
#line 2691 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 865 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2697 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 878 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LOCAL, 2);   }
#line 2703 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 163:
#line 907 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PASS, (yyvsp[-1]. token ));   }
#line 2709 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 172:
#line 926 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_NULL, NULL /* "Block" */ );
		COMBINE(NID_IF, 3);
	}
#line 2718 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 173:
#line 934 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_BLOCK, 1);
		PUSH(NID_NULL, NULL /* "Block" */ );
		COMBINE(NID_IF, 3);
	}
#line 2728 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 174:
#line 943 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IF, 3);   }
#line 2734 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 948 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SWITCH, 2);   }
#line 2740 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 177:
#line 953 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "SwitchBlockStatementGroups" */ );   }
#line 2746 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 962 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2752 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 964 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2758 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 969 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GROUP, 2);   }
#line 2764 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 974 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2770 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 976 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2776 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 981 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CASE, 1);   }
#line 2782 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 983 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_DEFAULT, (yyvsp[-2]. token ));
		COMBINE(NID_CASE, 1);
	}
#line 2791 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 991 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_WHILE, 2);   }
#line 2797 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 997 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DO, 2);   }
#line 2803 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 1002 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ForInit" */ );   }
#line 2809 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 1007 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Expression" */ );   }
#line 2815 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1012 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ForUpdate" */ );   }
#line 2821 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1017 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR, 4);   }
#line 2827 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 1022 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2833 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1024 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2839 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 1029 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RANGE, 2);   }
#line 2845 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1043 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2851 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1045 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2857 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1050 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. token ));
		COMBINE(NID_BREAK, 1);
	}
#line 2866 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1055 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_INTLITERAL, NULL);
		COMBINE(NID_BREAK, 1);
	}
#line 2875 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 1063 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. token ));
		COMBINE(NID_CONTINUE, 1);
	}
#line 2884 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1068 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_INTLITERAL, NULL);
		COMBINE(NID_CONTINUE, 1);
	}
#line 2893 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 1076 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RETURN, 1);   }
#line 2899 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1082 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROW, 1);   }
#line 2905 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1087 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2911 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1089 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2917 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1094 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Catches" */ );   }
#line 2923 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1099 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_NULL, NULL /* "finally" */ );
		COMBINE(NID_TRY, 3);
	}
#line 2932 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1104 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TRY, 3);   }
#line 2938 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 1109 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2944 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1111 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2950 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1116 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CATCH, 2);   }
#line 2956 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1121 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_FINALLY;   }
#line 2962 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1132 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_THIS, (yyvsp[0]. token ));   }
#line 2968 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 227:
#line 1141 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW, 2);   }
#line 2974 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 228:
#line 1146 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARGUMENTS, 1);   }
#line 2980 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 1148 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2986 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 230:
#line 1153 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3024 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 231:
#line 1187 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW_ARRAY, 3);   }
#line 3030 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 232:
#line 1192 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
#line 3039 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 233:
#line 1197 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3047 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 234:
#line 1204 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
#line 3056 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 1209 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3064 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 236:
#line 1216 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_FIELD, 2);   }
#line 3070 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1218 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_SUPER, (yyvsp[-2]. token ));
		COMBINE(NID_ACCESS_FIELD, 2);
	}
#line 3079 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 238:
#line 1226 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_NULL, NULL /* "Primary" */ );
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CALL, 3);
	}
#line 3095 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 1238 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CALL, 3);   }
#line 3101 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1240 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {

		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_SUPER, NULL);
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CALL, 3);
	/*
	| Name BeginBlock ArgumentListOpt EndBlock
	| Primary TOK_DOT SimpleName BeginBlock ArgumentListOpt EndBlock
	| TOK_SUPER TOK_DOT TOK_NAME BeginBlock ArgumentListOpt EndBlock
	*/

	}
#line 3124 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 1262 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3130 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1274 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3136 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1279 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3142 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 250:
#line 1286 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 1);   }
#line 3148 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1288 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 1);   }
#line 3154 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1294 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3160 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 254:
#line 1299 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3166 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 256:
#line 1305 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TILDE, 1);   }
#line 3172 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 257:
#line 1307 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BANG, 1);   }
#line 3178 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 259:
#line 1313 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3202 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 260:
#line 1333 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CAST, 2);   }
#line 3208 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 261:
#line 1335 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3226 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 263:
#line 1353 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MUL, 2);   }
#line 3232 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 264:
#line 1355 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DIV, 2);   }
#line 3238 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 265:
#line 1357 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MOD, 2);   }
#line 3244 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 267:
#line 1363 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 2);   }
#line 3250 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1365 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 2);   }
#line 3256 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 270:
#line 1371 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHL, 2);   }
#line 3262 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1373 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHR, 2);   }
#line 3268 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1379 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LT, 2);   }
#line 3274 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 274:
#line 1381 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GT, 2);   }
#line 3280 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 275:
#line 1383 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LE, 2);   }
#line 3286 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1385 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GE, 2);   }
#line 3292 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1387 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INSTANCEOF, 2);   }
#line 3298 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 279:
#line 1393 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_EQ, 2);   }
#line 3304 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 280:
#line 1395 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NE, 2);   }
#line 3310 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1401 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_AND, 2);   }
#line 3316 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 284:
#line 1407 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CARET, 2);   }
#line 3322 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1413 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_OR, 2);   }
#line 3328 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 288:
#line 1419 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANDAND, 2);   }
#line 3334 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 290:
#line 1425 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_OROR, 2);   }
#line 3340 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 292:
#line 1431 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_QUEST, 2);   }
#line 3346 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 295:
#line 1441 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3367 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 299:
#line 1467 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ASN, (yyvsp[0]. token ));   }
#line 3373 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 300:
#line 1469 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MUASN, (yyvsp[0]. token ));   }
#line 3379 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 301:
#line 1471 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_DIASN, (yyvsp[0]. token ));   }
#line 3385 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 302:
#line 1473 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MODASN, (yyvsp[0]. token ));   }
#line 3391 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 303:
#line 1475 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PLASN, (yyvsp[0]. token ));   }
#line 3397 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 304:
#line 1477 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MIASN, (yyvsp[0]. token ));   }
#line 3403 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 305:
#line 1479 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SLASN, (yyvsp[0]. token ));   }
#line 3409 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 306:
#line 1481 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SRASN, (yyvsp[0]. token ));   }
#line 3415 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1483 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ANDASN, (yyvsp[0]. token ));   }
#line 3421 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 308:
#line 1485 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CARETASN, (yyvsp[0]. token ));   }
#line 3427 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 309:
#line 1487 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ORASN, (yyvsp[0]. token ));   }
#line 3433 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3437 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1507 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


