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

    beagle::Parser *parser;

} parser_context_t;


/**
 * Get the current column in the lexer scanner.
 *
 * For some reason this prototype is not generated in the Flex
 * header file, so we include it here.
 */
int beagle_get_column  (yyscan_t yyscanner);


#line 145 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */

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
    TOK_READLOCK = 294,
    TOK_WRITELOCK = 295,
    TOK_THIS = 296,
    TOK_THROW = 297,
    TOK_THROWS = 298,
    TOK_VOID = 299,
    TOK_VOLATILE = 300,
    TOK_WHILE = 301,
    TOK_NAME = 302,
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
    TOK_PASS = 372,
    TOK_TYPE_CLASS = 373,
    TOK_TYPE_ARRAY = 374,
    TOK_INTERFACES = 375,
    TOK_NULL = 376,
    TOK_BODY = 377,
    TOK_FIELD = 378,
    TOK_METHOD = 379,
    TOK_CONSTRUCTOR = 380,
    TOK_LIST = 381,
    TOK_IMPORTS = 382,
    TOK_VARIABLE = 383,
    TOK_VARIABLES = 384,
    TOK_MODIFIERS = 385,
    TOK_UNIT = 386,
    TOK_TYPE = 387,
    TOK_TYPES = 388,
    TOK_MEMBER = 389,
    TOK_IMPORT_ALL = 390,
    TOK_STATIC_INIT = 391,
    TOK_PARAMETER = 392,
    TOK_PARAMETERS = 393,
    TOK_BLOCK = 394,
    TOK_CALL = 395,
    TOK_ACCESS_FIELD = 396,
    TOK_CAST = 397,
    TOK_ACCESS_ARRAY = 398,
    TOK_FOR_EACH = 399,
    TOK_GROUP = 400,
    TOK_ANNOTATION = 401,
    TOK_NEW_ARRAY = 402,
    TOK_ARRAY = 403,
    TOK_ANNOTATIONS = 404,
    TOK_ARGUMENTS = 405
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 175 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */

    char* node;

#line 312 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 326 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 57 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:359  */


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
        temp->addChild( *stack[i] );
    }
    for (int i = 0; i < n; ++i)
        stack.pop_back();

    if (tok > 0) stack.push_back(temp);
}


static void beagle_printStack( std::vector<beagle::Node*> &stack, beagle::Parser *parser )
{
    std::cout << "Stack:" << std::endl;
    for (int i = 0; i < stack.size(); ++i)
        stack[i]->print(std::cout, parser, 1, false);
}


static void beagle_push(
    parser_context_t *context,
    int token,
    const char *value )
{
    std::cout << "PUSH " << value << std::endl;
    context->stack.push_back( new beagle::Node(token,value) );
}


static void beagle_push(
    parser_context_t *context,
    beagle::Node *node )
{
    std::cout << "PUSH " << node->getText() << std::endl;
    context->stack.push_back(node);
}


static void beagle_push(
    parser_context_t *context,
    beagle::Node &node )
{
	beagle_push(context, &node);
}


#define scanner              parserContext->scanner
#define PUSH(token,value)    beagle_push( parserContext, (token), (value) )
#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)


#line 427 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  151
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  155
/* YYNRULES -- Number of rules.  */
#define YYNRULES  327
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  558

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   405

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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   404,   404,   409,   411,   413,   415,   417,   419,   424,
     425,   429,   430,   435,   436,   440,   442,   444,   446,   448,
     450,   452,   454,   456,   461,   463,   468,   469,   473,   481,
     485,   489,   493,   497,   505,   506,   510,   515,   523,   524,
     528,   529,   534,   536,   541,   546,   547,   551,   556,   563,
     564,   568,   569,   573,   575,   580,   582,   590,   592,   597,
     599,   601,   603,   605,   607,   609,   611,   613,   615,   617,
     622,   627,   628,   632,   633,   637,   638,   643,   647,   651,
     653,   658,   662,   663,   667,   669,   674,   675,   676,   680,
     681,   682,   686,   691,   693,   698,   703,   708,   710,   714,
     715,   719,   725,   731,   733,   739,   740,   745,   746,   749,
     751,   756,   758,   767,   772,   774,   779,   783,   788,   793,
     794,   798,   799,   803,   804,   808,   813,   815,   820,   821,
     825,   830,   832,   837,   841,   842,   846,   848,   853,   854,
     858,   862,   870,   874,   875,   879,   881,   886,   890,   892,
     897,   898,   902,   906,   911,   912,   913,   914,   915,   916,
     917,   921,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   931,   935,   940,   944,   945,   946,   947,   948,   949,
     950,   954,   962,   971,   976,   981,   982,   986,   990,   992,
     997,  1002,  1004,  1009,  1011,  1019,  1025,  1030,  1031,  1035,
    1036,  1040,  1041,  1045,  1050,  1052,  1057,  1062,  1063,  1067,
    1071,  1073,  1078,  1083,  1091,  1096,  1104,  1110,  1115,  1117,
    1122,  1123,  1127,  1132,  1137,  1139,  1144,  1149,  1154,  1155,
    1159,  1160,  1162,  1163,  1164,  1165,  1166,  1170,  1175,  1177,
    1182,  1183,  1187,  1221,  1226,  1228,  1233,  1238,  1243,  1249,
    1251,  1259,  1271,  1273,  1295,  1297,  1302,  1303,  1304,  1305,
    1309,  1314,  1319,  1320,  1321,  1323,  1325,  1329,  1334,  1339,
    1340,  1342,  1344,  1349,  1369,  1371,  1388,  1389,  1391,  1393,
    1398,  1399,  1401,  1406,  1407,  1409,  1414,  1415,  1417,  1419,
    1421,  1423,  1428,  1429,  1431,  1436,  1437,  1442,  1443,  1448,
    1449,  1454,  1455,  1460,  1461,  1466,  1467,  1472,  1473,  1477,
    1497,  1498,  1499,  1503,  1505,  1507,  1509,  1511,  1513,  1515,
    1517,  1519,  1521,  1523,  1528,  1532,  1536,  1540
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
  "TOK_READLOCK", "TOK_WRITELOCK", "TOK_THIS", "TOK_THROW", "TOK_THROWS",
  "TOK_VOID", "TOK_VOLATILE", "TOK_WHILE", "TOK_NAME", "TOK_CONTINUE",
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
  "TOK_PASS", "TOK_TYPE_CLASS", "TOK_TYPE_ARRAY", "TOK_INTERFACES",
  "TOK_NULL", "TOK_BODY", "TOK_FIELD", "TOK_METHOD", "TOK_CONSTRUCTOR",
  "TOK_LIST", "TOK_IMPORTS", "TOK_VARIABLE", "TOK_VARIABLES",
  "TOK_MODIFIERS", "TOK_UNIT", "TOK_TYPE", "TOK_TYPES", "TOK_MEMBER",
  "TOK_IMPORT_ALL", "TOK_STATIC_INIT", "TOK_PARAMETER", "TOK_PARAMETERS",
  "TOK_BLOCK", "TOK_CALL", "TOK_ACCESS_FIELD", "TOK_CAST",
  "TOK_ACCESS_ARRAY", "TOK_FOR_EACH", "TOK_GROUP", "TOK_ANNOTATION",
  "TOK_NEW_ARRAY", "TOK_ARRAY", "TOK_ANNOTATIONS", "TOK_ARGUMENTS",
  "$accept", "CompilationUnit", "Literal", "Type", "PrimitiveType",
  "NumericType", "IntegralType", "FloatingPointType", "ReferenceType",
  "ClassOrInterfaceType", "ClassType", "InterfaceType", "ArrayType",
  "Name", "SimpleName", "QualifiedName", "PackageDeclarationOpt",
  "ImportDeclarationsOpt", "ImportDeclarations", "PackageDeclaration",
  "ImportDeclaration", "SingleTypeImportDeclaration",
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
  "AbstractMethodDeclaration", "ArrayInitializer",
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405
};
# endif

#define YYPACT_NINF -394

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-394)))

#define YYTABLE_NINF -313

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,     0,    77,   115,  -394,  -394,   -19,  -394,  -394,  -394,
       0,    87,   115,  -394,  -394,  -394,   137,  -394,     1,     0,
    -394,   318,    87,  -394,  -394,  -394,  -394,  -394,   -36,  -394,
     -57,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,   318,  -394,    22,  -394,   124,   950,  -394,  -394,
       0,     0,  -394,  1028,   139,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,   703,   950,   950,   950,   950,   950,   950,  -394,
     485,   165,   152,   176,  -394,   181,  -394,   288,  -394,   387,
     -61,  -394,  -394,  -394,  -394,  -394,  -394,  -394,    81,    40,
      10,    18,   104,   162,   167,   166,   180,   -35,  -394,  -394,
    -394,  1047,  -394,   251,   265,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,   214,  -394,  -394,
    -394,   214,   220,   213,     0,   218,  1057,   222,    70,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,   950,   950,   179,
       0,   950,   950,  -394,  -394,   950,   950,   950,   950,   950,
     950,   950,  1028,   950,   950,   950,   950,   950,   950,   950,
     950,   950,   950,   950,   950,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,   950,     0,   269,  -394,
       0,   182,   224,   950,   214,  -394,   225,   950,   233,   229,
     234,   237,   832,   131,  1064,   236,   238,  -394,   242,   239,
    -394,  -394,  -394,  -394,    81,    81,    40,    40,   244,  -394,
    -394,   247,    36,    10,    10,    10,    10,    18,    18,   104,
     162,   167,   166,   223,   180,  -394,  -394,  -394,     0,   201,
    -394,  -394,  -394,   204,     0,   260,  -394,   832,  -394,   254,
     950,  -394,   950,   262,  1064,  -394,  -394,  -394,   950,  -394,
     263,   266,   274,   950,  -394,   276,   204,  -394,  -394,    96,
    -394,  -394,  -394,   287,  -394,  -394,  -394,   289,  -394,  -394,
    -394,  -394,     0,  -394,   103,   318,  -394,   246,   221,   105,
    -394,  -394,  -394,  -394,  -394,  -394,   436,   221,   118,  -394,
    -394,  -394,  -394,   249,  -394,  -394,  1003,  -394,  -394,  -394,
    -394,   204,  1003,  -394,  -394,  -394,   204,  -394,   313,   244,
    -394,     0,  -394,   597,   296,  -394,  -394,   -43,   299,   -32,
    -394,    23,   300,   -39,   258,   304,   308,   950,   310,   311,
     315,   950,   320,   -37,   273,   950,   291,   350,   250,   221,
    -394,   597,  -394,  -394,   293,  -394,  -394,  -394,  -394,   295,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,    54,    93,   -61,   116,   151,  -394,
    -394,  -394,   366,   366,   350,  -394,   328,   877,   366,   298,
    -394,   204,   765,   950,   302,  -394,   950,   950,   950,   312,
     950,   321,  -394,   204,   348,  -394,  -394,   360,   906,  -394,
    -394,  -394,  -394,  1028,   350,   367,   362,  -394,   369,  -394,
    -394,   877,  -394,  -394,  -394,   371,  -394,   392,   313,  -394,
    -394,   370,  -394,   368,   384,  -394,   388,   389,   391,  -394,
     393,  -394,   446,  -394,   350,   394,   415,   366,   415,  -394,
     397,   390,   415,   395,   351,   950,   516,   803,   361,   363,
     372,   373,   405,   460,    73,  -394,   394,     0,   374,  -394,
    -394,  -394,  -394,   877,  -394,   950,   635,   408,  -394,   204,
     406,   204,   204,   204,   204,   366,   410,  -394,  -394,  -394,
     425,   204,  -394,   439,   453,   455,   456,   516,   509,  -394,
    -394,   159,  -394,  -394,  -394,   458,   204,     0,  -394,    91,
     422,   950,   433,   438,   480,  -394,   368,   441,   950,   469,
     221,   159,  -394,     6,  -394,   442,  -394,  -394,   490,   491,
     597,  -394,  -394,   488,   204,   204,   451,   204,  -394,   482,
     454,  -394,  -394,  -394,  -394,   204,   950,   950,   221,   950,
    -394,  -394,   204,  -394,   463,  -394,  -394,   499,   500,  -394,
     510,  -394,  -394,   465,   467,  -394,  -394,  -394
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      39,     0,     0,    41,    38,    36,     0,    34,    35,     1,
       0,    52,    40,    42,    45,    46,     0,    44,     0,     0,
       2,    72,    51,    53,    49,    50,    43,    37,     0,    47,
       0,    63,    64,    65,    61,    60,    59,    62,    66,    67,
      69,    68,    71,    57,     0,    54,     0,   124,    56,    58,
       0,     0,    48,     0,     0,   231,     8,     5,     3,     7,
       4,     6,     0,     0,     0,     0,     0,     0,     0,   230,
     257,     0,   256,   228,   233,   123,   229,   234,   235,   236,
     269,   258,   259,   276,   262,   263,   266,   272,   280,   283,
     286,   292,   295,   297,   299,   301,   303,   305,   307,   324,
     308,     0,   238,    74,   129,    12,    23,    25,    24,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    11,    13,
      14,    29,     0,    28,     0,   241,   257,     0,   257,   234,
     236,   271,   270,   267,   268,   264,   265,   124,     0,     0,
       0,     0,     0,   260,   261,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   313,   317,   318,   314,   315,
     321,   323,   322,   319,   320,   316,     0,     0,    76,    73,
       0,     0,   128,     0,   242,   244,   241,   124,   250,     0,
       0,   240,     0,     0,   232,     0,     0,    55,   249,     0,
     239,   277,   278,   279,   281,   282,   284,   285,     0,   291,
      26,    27,    28,   287,   288,   289,   290,   293,   294,   296,
     298,   300,   302,     0,   304,   309,    29,    77,     0,     0,
      75,    30,   131,     0,     0,     0,   245,     0,   243,     0,
     124,   247,     0,     0,     0,   274,   251,   254,   124,   255,
       0,     0,     0,     0,    79,    78,     0,   326,   130,    52,
     132,   246,   237,     0,   273,   248,   275,     0,    31,    33,
      32,   306,     0,    70,    52,    72,   140,     0,     0,    52,
     136,   138,   139,   253,   252,    80,    72,     0,    52,    84,
      86,    89,    90,     0,    88,    91,     0,   141,   327,   133,
     137,    62,     0,    87,    81,    85,   141,   102,     0,     9,
      10,     0,   117,   122,    34,   101,   116,    97,     0,     0,
      93,    95,     0,     0,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   310,     0,
     161,   121,   148,   150,     0,   151,   154,   171,   162,     0,
     155,   156,   157,   163,   158,   164,   159,   160,   165,   166,
     167,   169,   168,   170,   180,   179,     0,   177,   178,   175,
     176,   174,   108,   108,     0,    92,     0,     0,   108,     0,
     213,     0,   198,     0,     0,   199,     0,     0,     0,     0,
       0,     0,   215,     0,     0,   172,    97,   153,     0,   147,
     149,   152,   173,     0,     0,     0,   107,   109,     0,    94,
      98,   144,    96,   100,    99,     0,   212,     0,     0,   208,
     210,     0,   197,   207,     0,   216,     0,     0,     0,   217,
       0,   214,   221,   232,     0,   111,   106,     0,   106,   145,
       0,   143,   106,     0,     0,   200,     0,     0,     0,     0,
       0,     0,     0,     0,   222,   224,   112,     0,     0,   105,
     110,   103,   142,     0,   104,     0,     0,     0,   211,     0,
       0,     0,     0,     0,     0,     0,     0,   223,   225,   114,
     113,     0,   146,     0,     0,     0,     0,   202,   181,   182,
     184,   186,   218,   219,   195,     0,     0,     0,   118,   120,
       0,     0,     0,     0,     0,   201,   209,     0,     0,     0,
       0,   185,   188,     0,   191,     0,   227,   115,     0,     0,
     122,   119,   196,     0,     0,     0,     0,     0,   325,     0,
       0,   187,   189,   190,   192,     0,   124,   124,     0,     0,
     205,   204,     0,   183,     0,   194,   226,     0,     0,   125,
       0,   203,   193,     0,     0,   206,   127,   126
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -394,  -394,  -394,  -283,   -38,  -394,  -394,  -394,   426,   -46,
    -175,  -185,  -394,    -1,   -18,  -394,  -394,  -394,  -394,  -394,
     567,  -394,  -394,  -394,    -7,  -394,   558,  -394,   540,  -394,
    -186,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,   306,
    -394,  -229,   275,   226,  -358,  -393,  -394,  -394,  -193,  -255,
    -167,  -394,  -387,  -394,  -394,  -394,  -394,  -394,  -394,    76,
    -127,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,   319,
    -394,  -176,  -394,  -394,  -394,  -278,  -394,   267,  -394,   217,
    -394,  -394,  -394,  -394,  -361,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,   100,  -394,    94,  -394,  -394,  -394,   168,  -394,
    -394,  -394,  -394,  -394,  -394,   125,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,   160,  -394,  -394,  -394,  -272,  -394,
     431,  -394,   498,   -17,   494,   353,  -257,   380,  -245,  -177,
    -173,   -29,  -142,  -121,  -169,  -394,   102,   108,    68,   121,
     462,   468,   464,   461,   466,  -394,   376,   470,  -105,  -394,
    -394,   -59,  -394,  -227,  -282
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    69,   404,   309,   118,   119,   120,   310,   210,
     122,   232,   211,    70,     7,     8,     3,    11,    12,     4,
      13,    14,    15,    20,   275,    22,    23,    42,    43,    24,
      44,   178,   229,   179,   230,   255,   273,   287,   288,   289,
     290,   276,   397,   320,   321,   412,   292,   311,   277,   458,
     405,   406,   407,   459,   480,   315,   303,   294,   520,   339,
      71,   498,   521,   181,    25,   182,   258,   278,   279,   280,
     281,   282,   413,   440,   441,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   510,
     490,   511,   512,   513,   514,   354,   355,   421,   384,   504,
     356,   357,   485,   422,   505,   423,   358,   359,   360,   361,
     362,   453,   363,   454,   455,   477,    72,    73,    74,    75,
     190,    76,   184,   185,   191,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     176,   102,   529,   313,   299
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    30,   227,   127,    21,   304,   259,   121,    47,    18,
     195,    27,   508,   308,   379,   117,   391,   509,   439,   308,
       1,   420,   -36,   312,   125,   245,   143,   144,   316,   274,
     337,    50,   103,   104,   131,   132,   133,   134,   135,   136,
     374,   364,   152,   254,   163,   291,   435,     5,    51,   260,
     460,   164,   123,    48,    16,    46,   365,   399,   337,   291,
     239,   126,   128,   128,   128,   128,   128,   128,   366,   364,
     482,   380,   -36,   392,    28,   266,   456,     9,   375,   196,
     452,   293,   199,   200,   365,   468,   470,   285,   495,   296,
    -220,    17,   376,   153,   154,   293,   366,   377,   295,   418,
     302,   155,   156,   417,   223,   252,   188,   150,   151,    16,
     364,    29,   295,   263,   208,   432,   201,   202,   203,   257,
     434,   267,   198,  -233,   235,   365,   420,  -233,   518,   148,
     149,   226,   519,   196,   231,   137,   367,   366,    10,   138,
     368,  -233,  -233,    16,   128,   128,   128,   128,   128,   128,
     128,   212,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,  -235,   128,   367,   508,  -235,   236,   368,   236,
     509,   369,   145,   146,   364,   364,   123,   147,   235,   123,
    -235,  -235,   231,   461,    27,   157,   158,   464,   231,   365,
     365,   488,   370,   128,   492,   493,   494,   244,    19,   369,
     243,   366,   366,  -258,  -258,   367,   408,    19,   371,   368,
    -135,   415,   124,   264,    19,   364,    19,   -83,   516,  -134,
     370,   213,   214,   215,   216,   140,   231,   123,   531,    19,
     365,   139,   -82,   123,    52,   533,   371,   337,  -259,  -259,
     369,   128,   366,   128,   491,   141,   540,   541,   364,   543,
     204,   205,   128,   142,   499,   159,   549,   546,   206,   207,
     161,   370,   160,   365,   551,   162,   177,   286,   385,   367,
     367,   123,   389,   368,   368,   366,   394,   371,   217,   218,
     180,   286,   479,   183,   314,   187,    16,   189,   194,   197,
     318,   228,   233,   322,   237,   212,   234,   -28,   240,   241,
     242,   212,   246,   253,   369,   369,   243,   248,   247,   249,
     367,   256,   338,   250,   368,   137,   251,   257,   414,   398,
     262,    31,   517,    16,   424,   370,   370,   426,   427,   428,
     261,   430,   265,   268,    32,   298,   269,  -257,  -257,   196,
     338,   371,   371,   367,   270,   369,    33,   368,   272,    34,
      35,    36,   414,   283,    37,   284,   297,    38,    39,   306,
     317,   372,  -311,    40,   373,   378,   370,    41,   381,   382,
     105,   212,   212,   383,   106,   386,   387,   212,   369,   107,
     388,   338,   371,   393,   108,   390,   385,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,   396,   410,   370,
     444,   395,   212,   401,   414,   402,   483,   486,   416,   547,
     548,   226,   425,     5,   433,   371,   129,   129,   129,   129,
     129,   129,   429,   109,   110,   111,   112,   113,   114,   115,
     116,   431,   374,   436,   437,   438,   212,   442,   443,    31,
     446,   445,   523,   130,   130,   130,   130,   130,   130,   528,
     447,   226,    32,   452,   448,   449,   123,   450,   457,   451,
     465,  -312,   463,   376,    33,   462,   466,    34,    35,    36,
     475,   471,   301,   472,   212,    38,    39,   476,   403,   487,
     550,    40,   473,   474,   481,    41,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,   123,   497,   129,   129,
     129,   129,   129,   129,   129,   500,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   489,   129,   501,   338,
     496,   502,   503,   507,   515,   130,   130,   130,   130,   130,
     130,   130,   522,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   524,   130,    53,   526,   129,   525,   530,
     137,   527,   535,    54,   138,   536,   537,    55,    16,  -310,
     539,   542,   544,     5,   545,   553,   554,    56,    57,    58,
      59,    60,    61,   552,   130,   556,   555,   557,   209,    26,
      45,   335,    49,   319,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,   305,   129,   538,   129,   300,   419,
     409,   105,   323,    65,    66,   106,   129,   534,   400,   324,
     107,   532,   506,   467,   478,   108,   325,   238,   326,   186,
     193,   219,   130,   222,   130,   221,    53,     0,   220,   271,
     224,   327,     0,   130,    54,   328,   329,   330,    55,   331,
       0,     0,     0,   332,     5,   333,   225,   334,    56,    57,
      58,    59,    60,    61,   109,   110,   111,   112,   113,   114,
     115,   116,   335,     0,    53,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     5,     0,    65,    66,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,   105,     0,     0,
     257,   106,    63,    64,   336,     0,   107,     0,     0,     0,
       0,   108,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       5,   484,     0,     0,    56,    57,    58,    59,    60,    61,
     109,   110,   111,   112,   113,   114,   115,   116,    62,   105,
       0,     0,     0,   106,     0,     0,     0,     0,   107,     0,
      63,    64,     0,   108,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,    53,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     5,     0,     0,     0,    56,    57,    58,    59,
      60,    61,   109,   110,   111,   112,   113,   114,   115,   116,
     335,     0,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       5,     0,    65,    66,    56,    57,    58,    59,    60,    61,
       0,    53,     0,     0,     0,     0,     0,     0,   335,    54,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     5,
       0,     0,     0,    56,    57,    58,    59,    60,    61,     0,
      65,    66,     0,     0,     0,     0,     0,    62,     0,     0,
       0,     0,   241,     0,     0,     0,    53,     0,     0,    63,
      64,     0,     0,   469,    54,     0,     0,     0,    55,    65,
      66,    67,    68,     0,     5,     0,     0,     0,    56,    57,
      58,    59,    60,    61,     0,    53,     0,     0,     0,     0,
       0,     0,    62,    54,   411,     0,     0,    55,     0,     0,
       0,     0,     0,     5,    63,    64,     0,    56,    57,    58,
      59,    60,    61,     0,    65,    66,    67,    68,     0,     0,
       0,    62,     0,     0,     0,     0,   270,     0,     0,    53,
       0,     0,     0,    63,    64,     0,     0,    54,     0,     0,
       0,    55,     0,    65,    66,    67,    68,     5,     0,     0,
       0,    56,    57,    58,    59,    60,    61,   105,     0,     0,
       0,   106,     0,     0,     0,    62,   107,     0,     0,     0,
       0,   108,     0,     0,     0,     0,     0,    63,    64,     0,
       0,     0,   105,     0,     0,     0,   106,    65,    66,    67,
      68,   107,     0,     0,     0,     0,   108,   307,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,   113,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   115,   116,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     5,     0,     0,     0,    56,    57,    58,    59,    60,
      61,   165,   137,     0,     0,     0,   192,     0,     0,    62,
      16,  -310,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310
};

static const yytype_int16 yycheck[] =
{
       1,    19,   177,    62,    11,   287,   233,    53,    65,    10,
     137,    47,     6,   296,    53,    53,    53,    11,   411,   302,
      30,   382,    65,   301,    62,   194,    87,    88,   306,   256,
     313,     9,    50,    51,    63,    64,    65,    66,    67,    68,
      72,   313,    24,   228,    79,   274,   404,    47,    26,   234,
     437,    86,    53,   110,    73,    91,   313,   339,   341,   288,
     187,    62,    63,    64,    65,    66,    67,    68,   313,   341,
     463,   110,   115,   110,    73,   244,   434,     0,   110,   138,
       7,   274,   141,   142,   341,   446,   447,   272,   475,   275,
      17,   110,    69,    75,    76,   288,   341,    74,   274,   382,
     286,    83,    84,   381,   163,    69,   124,    97,    98,    73,
     382,   110,   288,   240,   152,   393,   145,   146,   147,   113,
     403,   248,   140,    69,   183,   382,   487,    73,    37,    89,
      90,   177,    41,   192,   180,    65,   313,   382,    23,    69,
     313,    87,    88,    73,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    69,   164,   341,     6,    73,   184,   341,   186,
      11,   313,    91,    92,   446,   447,   177,    96,   237,   180,
      87,    88,   228,   438,    47,    81,    82,   442,   234,   446,
     447,   469,   313,   194,   472,   473,   474,    66,   111,   341,
      69,   446,   447,    87,    88,   382,   373,   111,   313,   382,
     114,   378,    73,   242,   111,   487,   111,   114,   496,   114,
     341,   153,   154,   155,   156,    73,   272,   228,   510,   111,
     487,    66,   114,   234,   110,   513,   341,   520,    87,    88,
     382,   242,   487,   244,   471,    69,   524,   525,   520,   527,
     148,   149,   253,    72,   481,    93,   538,   535,   150,   151,
      94,   382,    95,   520,   542,    85,    15,   274,   327,   446,
     447,   272,   331,   446,   447,   520,   335,   382,   157,   158,
      15,   288,   457,    69,   302,    65,    73,    69,    66,   110,
     308,    22,   110,   311,    69,   296,    72,    47,    65,    70,
      66,   302,    66,    80,   446,   447,    69,    65,    70,    70,
     487,   110,   313,    69,   487,    65,    69,   113,   377,    69,
      66,     3,   497,    73,   383,   446,   447,   386,   387,   388,
      70,   390,    70,    70,    16,   114,    70,    87,    88,   398,
     341,   446,   447,   520,    70,   487,    28,   520,    72,    31,
      32,    33,   411,    66,    36,    66,   110,    39,    40,   110,
      47,    65,    74,    45,    65,    65,   487,    49,   110,    65,
       4,   372,   373,    65,     8,    65,    65,   378,   520,    13,
      65,   382,   487,   110,    18,    65,   445,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    47,    70,   520,
     418,   110,   403,   110,   463,   110,   465,   466,   110,   536,
     537,   457,   110,    47,    66,   520,    63,    64,    65,    66,
      67,    68,   110,    57,    58,    59,    60,    61,    62,    63,
      64,   110,    72,    66,    72,    66,   437,    66,    46,     3,
      72,    71,   501,    63,    64,    65,    66,    67,    68,   508,
      66,   497,    16,     7,    66,    66,   457,    66,    43,    66,
      65,    74,    72,    69,    28,    68,   115,    31,    32,    33,
      65,   110,    36,   110,   475,    39,    40,    17,   112,    71,
     539,    45,   110,   110,   110,    49,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   497,    72,   145,   146,
     147,   148,   149,   150,   151,    66,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   110,   164,    65,   520,
     110,    66,    66,    14,    66,   145,   146,   147,   148,   149,
     150,   151,   110,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   110,   164,    29,    66,   194,   110,    80,
      65,   110,   110,    37,    69,    65,    65,    41,    73,    74,
      72,   110,    80,    47,   110,    66,    66,    51,    52,    53,
      54,    55,    56,   110,   194,   110,    66,   110,   152,    12,
      22,    65,    42,   308,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   288,   242,   520,   244,   279,   382,
     374,     4,     5,    87,    88,     8,   253,   513,   341,    12,
      13,   511,   487,   445,   454,    18,    19,   186,    21,   121,
     126,   159,   242,   162,   244,   161,    29,    -1,   160,   253,
     164,    34,    -1,   253,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    46,    47,    48,   176,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    87,    88,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
     113,     8,    77,    78,   117,    -1,    13,    -1,    -1,    -1,
      -1,    18,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      47,   116,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    13,    -1,
      77,    78,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    87,    88,    51,    52,    53,    54,    55,    56,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    65,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    29,    -1,    -1,    77,
      78,    -1,    -1,   110,    37,    -1,    -1,    -1,    41,    87,
      88,    89,    90,    -1,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    37,    67,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    47,    77,    78,    -1,    51,    52,    53,
      54,    55,    56,    -1,    87,    88,    89,    90,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    29,
      -1,    -1,    -1,    77,    78,    -1,    -1,    37,    -1,    -1,
      -1,    41,    -1,    87,    88,    89,    90,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    65,    13,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,     4,    -1,    -1,    -1,     8,    87,    88,    89,
      90,    13,    -1,    -1,    -1,    -1,    18,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    74,    65,    -1,    -1,    -1,    69,    -1,    -1,    65,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    30,   152,   167,   170,    47,   164,   165,   166,     0,
      23,   168,   169,   171,   172,   173,    73,   110,   164,   111,
     174,   175,   176,   177,   180,   215,   171,    47,    73,   110,
     165,     3,    16,    28,    31,    32,    33,    36,    39,    40,
      45,    49,   178,   179,   181,   177,    91,    65,   110,   179,
       9,    26,   110,    29,    37,    41,    51,    52,    53,    54,
      55,    56,    65,    77,    78,    87,    88,    89,    90,   153,
     164,   211,   267,   268,   269,   270,   272,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   302,   165,   165,     4,     8,    13,    18,    57,
      58,    59,    60,    61,    62,    63,    64,   155,   156,   157,
     158,   160,   161,   164,    73,   155,   164,   302,   164,   276,
     278,   282,   282,   282,   282,   282,   282,    65,    69,    66,
      73,    69,    72,    87,    88,    91,    92,    96,    89,    90,
      97,    98,    24,    75,    76,    83,    84,    81,    82,    93,
      95,    94,    85,    79,    86,    74,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   301,    15,   182,   184,
      15,   214,   216,    69,   273,   274,   273,    65,   165,    69,
     271,   275,    69,   275,    66,   211,   302,   110,   165,   302,
     302,   282,   282,   282,   287,   287,   288,   288,   155,   159,
     160,   163,   164,   289,   289,   289,   289,   290,   290,   291,
     292,   293,   294,   302,   295,   298,   160,   161,    22,   183,
     185,   160,   162,   110,    72,   302,   274,    69,   271,   211,
      65,    70,    66,    69,    66,   285,    66,    70,    65,    70,
      69,    69,    69,    80,   162,   186,   110,   113,   217,   304,
     162,    70,    66,   211,   282,    70,   285,   211,    70,    70,
      70,   297,    72,   187,   304,   175,   192,   199,   218,   219,
     220,   221,   222,    66,    66,   162,   175,   188,   189,   190,
     191,   192,   197,   199,   208,   222,   181,   110,   114,   305,
     220,    36,   181,   207,   305,   190,   110,    44,   154,   155,
     159,   198,   226,   304,   165,   206,   226,    47,   165,   193,
     194,   195,   165,     5,    12,    19,    21,    34,    38,    39,
      40,    42,    46,    48,    50,    65,   117,   154,   164,   210,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   246,   247,   251,   252,   257,   258,
     259,   260,   261,   263,   269,   277,   279,   280,   281,   283,
     284,   299,    65,    65,    72,   110,    69,    74,    65,    53,
     110,   110,    65,    65,   249,   302,    65,    65,    65,   302,
      65,    53,   110,   110,   302,   110,    47,   193,    69,   305,
     228,   110,   110,   112,   154,   201,   202,   203,   201,   194,
      70,    67,   196,   223,   302,   201,   110,   226,   154,   230,
     235,   248,   254,   256,   302,   110,   302,   302,   302,   110,
     302,   110,   226,    66,   154,   195,    66,    72,    66,   196,
     224,   225,    66,    46,   165,    71,    72,    66,    66,    66,
      66,    66,     7,   262,   264,   265,   195,    43,   200,   204,
     203,   200,    68,    72,   200,    65,   115,   249,   235,   110,
     235,   110,   110,   110,   110,    65,    17,   266,   265,   161,
     205,   110,   196,   302,   116,   253,   302,    71,   226,   110,
     241,   304,   226,   226,   226,   203,   110,    72,   212,   304,
      66,    65,    66,    66,   250,   255,   256,    14,     6,    11,
     240,   242,   243,   244,   245,    66,   226,   161,    37,    41,
     209,   213,   110,   302,   110,   110,    66,   110,   302,   303,
      80,   305,   243,   226,   245,   110,    65,    65,   210,    72,
     226,   226,   110,   226,    80,   110,   226,   211,   211,   305,
     302,   226,   110,    66,    66,    66,   110,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   151,   152,   153,   153,   153,   153,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   158,   158,   159,   159,   160,   161,
     162,   163,   163,   163,   164,   164,   165,   166,   167,   167,
     168,   168,   169,   169,   170,   171,   171,   172,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     180,   181,   181,   182,   182,   183,   183,   184,   185,   186,
     186,   187,   188,   188,   189,   189,   190,   190,   190,   191,
     191,   191,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   205,   205,   206,   207,   208,   209,
     209,   210,   210,   211,   211,   212,   213,   213,   214,   214,
     215,   216,   216,   217,   218,   218,   219,   219,   220,   220,
     221,   222,   223,   224,   224,   225,   225,   226,   227,   227,
     228,   228,   229,   230,   231,   231,   231,   231,   231,   231,
     231,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   233,   234,   235,   235,   235,   235,   235,   235,
     235,   236,   237,   238,   239,   240,   240,   241,   242,   242,
     243,   244,   244,   245,   245,   246,   247,   248,   248,   249,
     249,   250,   250,   251,   252,   252,   253,   254,   254,   255,
     256,   256,   257,   257,   258,   258,   259,   260,   261,   261,
     262,   262,   263,   263,   264,   264,   265,   266,   267,   267,
     268,   268,   268,   268,   268,   268,   268,   269,   270,   270,
     271,   271,   272,   272,   273,   273,   274,   275,   275,   276,
     276,   277,   277,   277,   278,   278,   279,   279,   279,   279,
     280,   281,   282,   282,   282,   282,   282,   283,   284,   285,
     285,   285,   285,   286,   286,   286,   287,   287,   287,   287,
     288,   288,   288,   289,   289,   289,   290,   290,   290,   290,
     290,   290,   291,   291,   291,   292,   292,   293,   293,   294,
     294,   295,   295,   296,   296,   297,   297,   298,   298,   299,
     300,   300,   300,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   302,   303,   304,   305
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     1,     3,     1,     0,
       1,     0,     1,     2,     3,     1,     1,     3,     5,     1,
       1,     1,     0,     1,     2,     6,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       8,     1,     0,     1,     0,     1,     0,     2,     2,     1,
       3,     3,     1,     0,     1,     2,     1,     2,     1,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       1,     3,     1,     8,     8,     1,     0,     1,     0,     1,
       3,     2,     3,     2,     1,     3,     1,     2,     9,     1,
       0,     1,     0,     1,     0,     4,     5,     5,     1,     0,
       7,     2,     3,     3,     1,     0,     1,     2,     1,     1,
       1,     2,     3,     1,     0,     1,     3,     3,     1,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     6,     6,     9,     6,     1,     0,     3,     1,     2,
       2,     1,     2,     4,     3,     6,     8,     1,     0,     1,
       0,     1,     0,    10,     9,     9,     6,     1,     1,     1,
       1,     3,     3,     2,     3,     2,     3,     3,     6,     6,
       1,     0,     4,     5,     1,     2,     6,     3,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     5,     1,     3,
       1,     0,     3,     4,     1,     2,     3,     2,     3,     3,
       3,     4,     6,     6,     4,     4,     1,     1,     1,     1,
       2,     2,     1,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     5,     4,     5,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 405 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_UNIT, 3);   }
#line 2131 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 410 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_INTLITERAL, (yyvsp[0]. node ));   }
#line 2137 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 412 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FLOATLITERAL, (yyvsp[0]. node ));   }
#line 2143 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 414 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_BOOLLITERAL, (yyvsp[0]. node ));   }
#line 2149 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 416 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STRINGLITERAL, (yyvsp[0]. node ));   }
#line 2155 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 418 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CHARLITERAL, (yyvsp[0]. node ));   }
#line 2161 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 420 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULLLITERAL, (yyvsp[0]. node ));   }
#line 2167 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 431 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_BOOLEAN, (yyvsp[0]. node ));    }
#line 2173 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 441 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT8, (yyvsp[0]. node ));    }
#line 2179 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 443 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2185 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 445 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT32, (yyvsp[0]. node ));    }
#line 2191 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 447 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT64, (yyvsp[0]. node ));    }
#line 2197 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 449 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2203 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 451 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT16, (yyvsp[0]. node ));    }
#line 2209 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 453 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2215 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 455 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2221 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 457 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2227 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 462 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_FLOAT, (yyvsp[0]. node ));    }
#line 2233 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 464 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_DOUBLE, (yyvsp[0]. node ));    }
#line 2239 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 474 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, "InterfaceTypeList");
        COMBINE(TOK_TYPE_CLASS, 2);
    }
#line 2248 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 490 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2256 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 494 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2264 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 498 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        beagle::Node *node = TOP();
        node->setCounter( node->getCounter() + 1 );
    }
#line 2273 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 511 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));    }
#line 2279 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 516 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NAME, (yyvsp[0]. node ));
        COMBINE(0, 1);
    }
#line 2288 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 524 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "PackageDeclaration");   }
#line 2294 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 529 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ImportDeclarations");   }
#line 2300 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 535 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORTS, 1);   }
#line 2306 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 537 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2312 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 542 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PACKAGE, 1);   }
#line 2318 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 552 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORT, 1);   }
#line 2324 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 557 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_IMPORT_ALL, 1);
    }
#line 2332 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 569 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "AnnotationDeclarations");   }
#line 2338 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 574 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATIONS, 1);   }
#line 2344 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 576 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2350 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 581 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATION, 2);   }
#line 2356 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 583 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, "ArgumentList");
		COMBINE(TOK_ANNOTATION, 2);
	}
#line 2365 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 591 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MODIFIERS, 1);   }
#line 2371 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 593 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2377 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 598 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PUBLIC, (yyvsp[0]. node ));   }
#line 2383 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 600 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PROTECTED, (yyvsp[0]. node ));   }
#line 2389 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 602 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PRIVATE, (yyvsp[0]. node ));   }
#line 2395 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 604 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STATIC, (yyvsp[0]. node ));   }
#line 2401 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 606 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ABSTRACT, (yyvsp[0]. node ));   }
#line 2407 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 608 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FINAL, (yyvsp[0]. node ));   }
#line 2413 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 610 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NATIVE, (yyvsp[0]. node ));   }
#line 2419 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 612 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_READLOCK, (yyvsp[0]. node ));   }
#line 2425 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 614 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_WRITELOCK, (yyvsp[0]. node ));   }
#line 2431 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 616 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_TRANSIENT, (yyvsp[0]. node ));   }
#line 2437 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 618 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOLATILE, (yyvsp[0]. node ));   }
#line 2443 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 623 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CLASS, 6);   }
#line 2449 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 628 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Modifiers");   }
#line 2455 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 633 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Super");   }
#line 2461 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 638 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Interfaces");   }
#line 2467 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 652 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2473 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 654 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2479 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 663 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ClassBodyDeclarations");   }
#line 2485 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 668 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2491 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 670 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2497 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 687 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FIELD, 4);   }
#line 2503 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 692 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLES, 1);   }
#line 2509 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 694 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2515 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 699 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, "VariableInitializer");
        COMBINE(TOK_VARIABLE, 2);
    }
#line 2524 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 704 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2530 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 709 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));   }
#line 2536 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 720 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2542 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 726 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOID, (yyvsp[0]. node ));   }
#line 2548 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 732 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2554 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 734 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2560 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 740 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Throws");   }
#line 2566 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 746 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "FormalParameterList");   }
#line 2572 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 750 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETERS, 1);   }
#line 2578 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 752 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2584 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 757 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETER, 2);   }
#line 2590 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 759 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_PARAMETER, 2);
        TOP()->setCounter( TOP()->getCounter() + 1 );
    }
#line 2599 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 773 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROWS, 1);   }
#line 2605 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 775 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2611 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 784 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_STATIC_INIT, 1);   }
#line 2617 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 789 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CONSTRUCTOR, 6);   }
#line 2623 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 794 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ExplicitConstructorInvocation");   }
#line 2629 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 799 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "BlockStatements");   }
#line 2635 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 804 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ArgumentList");   }
#line 2641 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 809 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 2);   }
#line 2647 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 814 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_THIS);   }
#line 2653 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 816 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_SUPER);   }
#line 2659 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 821 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ExtendsInterfaces");   }
#line 2665 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 826 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INTERFACE, 5);   }
#line 2671 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 831 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2677 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 833 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2683 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 842 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "InterfaceMemberDeclarations");   }
#line 2689 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 847 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2695 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 849 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2701 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 863 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, "MethodBody");
        COMBINE(0, 1);
    }
#line 2710 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 875 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "VariableInitializers"); }
#line 2716 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 880 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARRAY, 1);   }
#line 2722 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 882 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2728 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 891 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BLOCK, 1);   }
#line 2734 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 893 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2740 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 907 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2746 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 172:
#line 936 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PASS, (yyvsp[-1]. node ));   }
#line 2752 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 955 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, "Block");
		COMBINE(TOK_IF, 3);
	}
#line 2761 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 963 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_BLOCK, 1);
		PUSH(TOK_NULL, "Block");
		COMBINE(TOK_IF, 3);
	}
#line 2771 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 972 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IF, 3);   }
#line 2777 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 977 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SWITCH, 2);   }
#line 2783 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 982 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "SwitchBlockStatementGroups");   }
#line 2789 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 991 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2795 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 993 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2801 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 998 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GROUP, 2);   }
#line 2807 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 1003 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2813 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 1005 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2819 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1010 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CASE, 1);   }
#line 2825 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1012 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_DEFAULT, (yyvsp[-2]. node ));
		COMBINE(TOK_CASE, 1);
	}
#line 2834 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 1020 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_WHILE, 2);   }
#line 2840 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1026 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DO, 2);   }
#line 2846 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1031 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ForInit");   }
#line 2852 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1036 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Expression");   }
#line 2858 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1041 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ForUpdate");   }
#line 2864 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1046 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR, 4);   }
#line 2870 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1051 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2876 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 1053 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2882 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1058 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RANGE, 2);   }
#line 2888 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1072 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2894 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 1074 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2900 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1079 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_BREAK, 1);
	}
#line 2909 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1084 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_BREAK, 1);
	}
#line 2918 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1092 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2927 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 1097 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2936 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1105 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RETURN, 1);   }
#line 2942 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1111 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROW, 1);   }
#line 2948 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1116 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2954 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1118 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2960 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1123 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Catches");   }
#line 2966 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1128 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, "finally");
		COMBINE(TOK_TRY, 3);
	}
#line 2975 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1133 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TRY, 3);   }
#line 2981 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1138 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2987 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 1140 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2993 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 1145 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CATCH, 2);   }
#line 2999 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 227:
#line 1150 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_FINALLY);   }
#line 3005 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 231:
#line 1161 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_THIS, (yyvsp[0]. node ));   }
#line 3011 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1171 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW, 2);   }
#line 3017 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 238:
#line 1176 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARGUMENTS, 1);   }
#line 3023 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 1178 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3029 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 1183 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Dims");   }
#line 3035 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1188 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
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

        COMBINE(TOK_NEW_ARRAY, 2);
    }
#line 3073 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1222 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW_ARRAY, 3);   }
#line 3079 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 244:
#line 1227 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 3085 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 1229 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3091 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1239 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_TYPE_ARRAY, "");
		TOP()->setCounter(1);
	}
#line 3100 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 248:
#line 1244 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		TOP()->setCounter( TOP()->getCounter() + 1 );
	}
#line 3108 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1250 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_FIELD, 2);   }
#line 3114 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 250:
#line 1252 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_SUPER, (yyvsp[-2]. node ));
		COMBINE(TOK_ACCESS_FIELD, 2);
	}
#line 3123 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1260 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_NULL, "Primary");
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	}
#line 3139 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 252:
#line 1272 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CALL, 3);   }
#line 3145 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1274 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {

		beagle::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_SUPER, "");
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	/*
	| Name BeginBlock ArgumentListOpt EndBlock
	| Primary TOK_DOT SimpleName BeginBlock ArgumentListOpt EndBlock
	| TOK_SUPER TOK_DOT TOK_NAME BeginBlock ArgumentListOpt EndBlock
	*/

	}
#line 3168 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 254:
#line 1296 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3174 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 255:
#line 1298 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3180 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 260:
#line 1310 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3186 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 261:
#line 1315 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3192 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 264:
#line 1322 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 1);   }
#line 3198 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 265:
#line 1324 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 1);   }
#line 3204 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 267:
#line 1330 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3210 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1335 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3216 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 270:
#line 1341 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TILDE, 1);   }
#line 3222 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1343 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BANG, 1);   }
#line 3228 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1350 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		if (second->getType() == TOK_NULL)
		{
			delete second;
			second = first;
		}
		else
			second->addChild(*first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CAST, 2);
	}
#line 3252 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 274:
#line 1370 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CAST, 2);   }
#line 3258 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 275:
#line 1372 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		second->addChild(*first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CAST, 2);
	}
#line 3276 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1390 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MUL, 2);   }
#line 3282 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 278:
#line 1392 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DIV, 2);   }
#line 3288 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 279:
#line 1394 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MOD, 2);   }
#line 3294 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 281:
#line 1400 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 2);   }
#line 3300 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1402 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 2);   }
#line 3306 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 284:
#line 1408 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHL, 2);   }
#line 3312 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 285:
#line 1410 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHR, 2);   }
#line 3318 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 287:
#line 1416 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LT, 2);   }
#line 3324 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 288:
#line 1418 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GT, 2);   }
#line 3330 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 289:
#line 1420 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LE, 2);   }
#line 3336 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 290:
#line 1422 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GE, 2);   }
#line 3342 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 291:
#line 1424 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INSTANCEOF, 2);   }
#line 3348 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 293:
#line 1430 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_EQ, 2);   }
#line 3354 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 294:
#line 1432 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NE, 2);   }
#line 3360 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 296:
#line 1438 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_AND, 2);   }
#line 3366 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 298:
#line 1444 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CARET, 2);   }
#line 3372 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 300:
#line 1450 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OR, 2);   }
#line 3378 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 302:
#line 1456 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANDAND, 2);   }
#line 3384 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 304:
#line 1462 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OROR, 2);   }
#line 3390 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 306:
#line 1468 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_QUEST, 2);   }
#line 3396 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 309:
#line 1478 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {

        /*
         * Change the expression notation from infixed to prefixed
         */

        beagle::Node *left, *right, *oper;

        right = POP();
        oper = POP();
        left = POP();

        oper->addChild(*left);
        oper->addChild(*right);
        NPUSH(oper);
    }
#line 3417 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 313:
#line 1504 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ASN, (yyvsp[0]. node ));   }
#line 3423 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 314:
#line 1506 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MUASN, (yyvsp[0]. node ));   }
#line 3429 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 315:
#line 1508 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_DIASN, (yyvsp[0]. node ));   }
#line 3435 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 316:
#line 1510 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MODASN, (yyvsp[0]. node ));   }
#line 3441 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 317:
#line 1512 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PLASN, (yyvsp[0]. node ));   }
#line 3447 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 318:
#line 1514 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MIASN, (yyvsp[0]. node ));   }
#line 3453 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 319:
#line 1516 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SLASN, (yyvsp[0]. node ));   }
#line 3459 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 320:
#line 1518 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SRASN, (yyvsp[0]. node ));   }
#line 3465 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 321:
#line 1520 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ANDASN, (yyvsp[0]. node ));   }
#line 3471 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 322:
#line 1522 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CARETASN, (yyvsp[0]. node ));   }
#line 3477 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 323:
#line 1524 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ORASN, (yyvsp[0]. node ));   }
#line 3483 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3487 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1544 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


