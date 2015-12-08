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
#include <beagle-compiler/Node.hh>
#include <beagle-compiler/Parser.hh>


/*
 * The parser need to know about the 'yyscan_t' type,
 * but the generated header by Flex don't provide this information.
 */
typedef void *yyscan_t;


typedef struct
{
    yyscan_t scanner;

    std::vector<beagle::compiler::Node*> stack;

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
#line 176 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */

    char* node;

#line 313 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 327 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 58 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:359  */


#include <iostream>
#include "beagle.l.hh"
#include <beagle-compiler/Node.hh>


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
        stack[i]->print(std::cout, beagle::compiler::Parser::name, 1, false);
}


static void beagle_push(
    parser_context_t *context,
    int token,
    const char *value )
{
    //std::cout << "PUSH " << value << std::endl;
    context->stack.push_back( new beagle::compiler::Node(token,value) );
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


#define scanner              parserContext->scanner
#define PUSH(token,value)    beagle_push( parserContext, (token), (value) )
#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)


#line 428 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYLAST   1096

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  151
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  154
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  555

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
       0,   405,   405,   410,   412,   414,   416,   418,   420,   425,
     426,   430,   431,   436,   437,   441,   443,   445,   447,   449,
     451,   453,   455,   457,   462,   464,   469,   470,   474,   482,
     486,   490,   495,   500,   508,   509,   513,   518,   537,   538,
     543,   545,   550,   554,   555,   559,   564,   571,   572,   576,
     577,   581,   583,   588,   590,   598,   600,   605,   607,   609,
     611,   613,   615,   617,   619,   621,   623,   625,   630,   635,
     636,   640,   641,   645,   646,   651,   655,   659,   661,   666,
     670,   671,   675,   677,   682,   683,   684,   688,   689,   690,
     694,   699,   701,   706,   711,   716,   718,   722,   723,   727,
     733,   739,   741,   747,   748,   753,   754,   757,   759,   764,
     766,   775,   780,   782,   787,   791,   796,   801,   802,   806,
     807,   811,   812,   816,   821,   823,   828,   829,   833,   838,
     840,   845,   849,   850,   854,   856,   861,   862,   866,   870,
     878,   882,   883,   887,   889,   894,   898,   900,   905,   906,
     910,   914,   919,   920,   921,   922,   923,   924,   925,   929,
     930,   931,   932,   933,   934,   935,   936,   937,   938,   939,
     943,   948,   952,   953,   954,   955,   956,   957,   958,   962,
     970,   979,   984,   989,   990,   994,   998,  1000,  1005,  1010,
    1012,  1017,  1019,  1027,  1033,  1038,  1039,  1043,  1044,  1048,
    1049,  1053,  1058,  1060,  1065,  1070,  1071,  1075,  1079,  1081,
    1086,  1091,  1099,  1104,  1112,  1118,  1123,  1125,  1130,  1131,
    1135,  1140,  1145,  1147,  1152,  1157,  1162,  1163,  1167,  1168,
    1170,  1171,  1172,  1173,  1174,  1178,  1183,  1185,  1190,  1191,
    1195,  1229,  1234,  1236,  1241,  1246,  1251,  1257,  1259,  1267,
    1279,  1281,  1303,  1305,  1310,  1311,  1312,  1313,  1317,  1322,
    1327,  1328,  1329,  1331,  1333,  1337,  1342,  1347,  1348,  1350,
    1352,  1357,  1377,  1379,  1396,  1397,  1399,  1401,  1406,  1407,
    1409,  1414,  1415,  1417,  1422,  1423,  1425,  1427,  1429,  1431,
    1436,  1437,  1439,  1444,  1445,  1450,  1451,  1456,  1457,  1462,
    1463,  1468,  1469,  1474,  1475,  1480,  1481,  1485,  1505,  1506,
    1507,  1511,  1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,
    1529,  1531,  1536,  1540,  1544,  1548
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
  "Name", "SimpleName", "QualifiedName", "ImportDeclarationsOpt",
  "ImportDeclarations", "PackageDeclaration", "ImportDeclaration",
  "SingleTypeImportDeclaration", "TypeImportOnDemandDeclaration",
  "TypeDeclaration", "AnnotationDeclarationsOpt", "AnnotationDeclarations",
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

#define YYPACT_NINF -415

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-415)))

#define YYTABLE_NINF -311

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    -4,   109,   111,  -415,   -21,  -415,  -415,  -415,    -4,
      31,   111,  -415,  -415,  -415,   117,  -415,   -20,    -4,  -415,
     270,    31,  -415,  -415,  -415,  -415,  -415,   -19,  -415,   -24,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,   270,  -415,    22,  -415,    63,   910,  -415,  -415,    -4,
      -4,  -415,   976,   106,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,   739,   910,   910,   910,   910,   910,   910,  -415,   323,
     102,   113,   140,  -415,   143,  -415,   967,  -415,   978,    14,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,    45,     2,   126,
      12,   151,   127,   132,   135,   149,   -41,  -415,  -415,  -415,
     988,  -415,   241,   247,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,   196,  -415,  -415,  -415,
     196,   203,   198,    -4,   210,   943,   216,    56,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,   910,   910,   175,    -4,
     910,   910,  -415,  -415,   910,   910,   910,   910,   910,   910,
     910,   976,   910,   910,   910,   910,   910,   910,   910,   910,
     910,   910,   910,   910,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,   910,    -4,   274,  -415,    -4,
     188,   234,   910,   196,  -415,   243,   910,   248,   245,   251,
     249,   840,    98,   709,   255,   253,  -415,   263,   260,  -415,
    -415,  -415,  -415,    45,    45,     2,     2,   264,  -415,   268,
     276,   126,   126,   126,   126,    12,    12,   151,   127,   132,
     135,   252,   149,  -415,  -415,  -415,    -4,   236,  -415,  -415,
    -415,   237,    -4,   277,  -415,   840,  -415,   285,   910,  -415,
     910,   282,   709,  -415,  -415,  -415,   910,  -415,   284,   286,
     287,   910,  -415,   283,   237,  -415,  -415,    58,  -415,  -415,
    -415,   298,  -415,  -415,  -415,   299,  -415,  -415,  -415,  -415,
      -4,  -415,    96,   270,  -415,   256,   254,   103,  -415,  -415,
    -415,  -415,  -415,  -415,   304,   254,   105,  -415,  -415,  -415,
    -415,   257,  -415,  -415,   968,  -415,  -415,  -415,  -415,   237,
     968,  -415,  -415,  -415,   237,  -415,   325,   264,  -415,    -4,
    -415,   602,   307,  -415,  -415,   -47,   308,   -60,  -415,   -44,
     309,   -40,   266,   313,   315,   910,   317,   319,   320,   910,
     321,   -36,   279,   910,   280,   341,   207,   254,  -415,   602,
    -415,  -415,   281,  -415,  -415,  -415,  -415,   290,  -415,  -415,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,    97,   124,    14,   156,   164,  -415,  -415,  -415,
     664,   664,   341,  -415,   324,   880,   664,   292,  -415,   237,
     802,   910,   300,  -415,   910,   910,   910,   301,   910,   302,
    -415,   237,   327,  -415,  -415,   336,  -415,  -415,  -415,  -415,
     976,   341,   329,   337,  -415,   347,  -415,  -415,   880,  -415,
    -415,  -415,   349,  -415,   387,   325,  -415,  -415,   363,  -415,
     364,   369,  -415,   371,   372,   377,  -415,   378,  -415,   447,
    -415,   341,   386,   414,   664,   414,  -415,   389,   390,   414,
     393,   344,   910,   432,   521,   351,   353,   355,   356,   399,
     450,    37,  -415,   386,    -4,   359,  -415,  -415,  -415,  -415,
     880,  -415,   910,   652,   402,  -415,   237,   360,   237,   237,
     237,   237,   664,   365,  -415,  -415,  -415,   404,   237,  -415,
     408,   415,   413,   416,   432,   467,  -415,  -415,    88,  -415,
    -415,  -415,   423,   237,    -4,  -415,    95,   380,   910,   381,
     382,   428,  -415,   364,   395,   910,   438,   254,    88,  -415,
       4,  -415,   411,  -415,  -415,   430,   431,   602,  -415,  -415,
     451,   237,   237,   412,   237,  -415,   444,   417,  -415,  -415,
    -415,  -415,   237,   910,   910,   254,   910,  -415,  -415,   237,
    -415,   418,  -415,  -415,   459,   460,  -415,   484,  -415,  -415,
     441,   442,  -415,  -415,  -415
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
      66,    69,    55,     0,    52,     0,   122,    54,    56,     0,
       0,    46,     0,     0,   229,     8,     5,     3,     7,     4,
       6,     0,     0,     0,     0,     0,     0,     0,   228,   255,
       0,   254,   226,   231,   121,   227,   232,   233,   234,   267,
     256,   257,   274,   260,   261,   264,   270,   278,   281,   284,
     290,   293,   295,   297,   299,   301,   303,   305,   322,   306,
       0,   236,    72,   127,    12,    23,    25,    24,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    11,    13,    14,
      29,     0,    28,     0,   239,   255,     0,   255,   232,   234,
     269,   268,   265,   266,   262,   263,   122,     0,     0,     0,
       0,     0,   258,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   311,   315,   316,   312,   313,   319,
     321,   320,   317,   318,   314,     0,     0,    74,    71,     0,
       0,   126,     0,   240,   242,   239,   122,   248,     0,     0,
     238,     0,     0,   230,     0,     0,    53,   247,     0,   237,
     275,   276,   277,   279,   280,   282,   283,     0,   289,    26,
      27,   285,   286,   287,   288,   291,   292,   294,   296,   298,
     300,     0,   302,   307,    29,    75,     0,     0,    73,    30,
     129,     0,     0,     0,   243,     0,   241,     0,   122,   245,
       0,     0,     0,   272,   249,   252,   122,   253,     0,     0,
       0,     0,    77,    76,     0,   324,   128,    50,   130,   244,
     235,     0,   271,   246,   273,     0,    31,    32,    33,   304,
       0,    68,    50,    70,   138,     0,     0,    50,   134,   136,
     137,   251,   250,    78,    70,     0,    50,    82,    84,    87,
      88,     0,    86,    89,     0,   139,   325,   131,   135,    60,
       0,    85,    79,    83,   139,   100,     0,     9,    10,     0,
     115,   120,    34,    99,   114,    95,     0,     0,    91,    93,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   308,     0,   159,   119,
     146,   148,     0,   149,   152,   169,   160,     0,   153,   154,
     155,   161,   156,   162,   157,   158,   163,   164,   165,   167,
     166,   168,   178,   177,     0,   175,   176,   173,   174,   172,
     106,   106,     0,    90,     0,     0,   106,     0,   211,     0,
     196,     0,     0,   197,     0,     0,     0,     0,     0,     0,
     213,     0,     0,   170,    95,   151,   145,   147,   150,   171,
       0,     0,     0,   105,   107,     0,    92,    96,   142,    94,
      98,    97,     0,   210,     0,     0,   206,   208,     0,   195,
     205,     0,   214,     0,     0,     0,   215,     0,   212,   219,
     230,     0,   109,   104,     0,   104,   143,     0,   141,   104,
       0,     0,   198,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   222,   110,     0,     0,   103,   108,   101,   140,
       0,   102,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,   221,   223,   112,   111,     0,   144,
       0,     0,     0,     0,   200,   179,   180,   182,   184,   216,
     217,   193,     0,     0,     0,   116,   118,     0,     0,     0,
       0,     0,   199,   207,     0,     0,     0,     0,   183,   186,
       0,   189,     0,   225,   113,     0,     0,   120,   117,   194,
       0,     0,     0,     0,     0,   323,     0,     0,   185,   187,
     188,   190,     0,   122,   122,     0,     0,   203,   202,     0,
     181,     0,   192,   224,     0,     0,   123,     0,   201,   191,
       0,     0,   204,   125,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -415,  -415,  -415,  -272,   -38,  -415,  -415,  -415,   403,   -49,
    -170,  -186,  -415,    -1,   -17,  -415,  -415,  -415,  -415,   542,
    -415,  -415,  -415,    -5,  -415,   534,  -415,   515,  -415,  -236,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,   272,  -415,
    -179,   258,   187,  -358,  -389,  -415,  -415,  -174,  -274,  -261,
    -415,  -414,  -415,  -415,  -415,  -415,  -415,  -415,    43,  -127,
    -415,  -415,  -415,  -415,  -415,  -415,  -415,  -415,   288,  -415,
    -172,  -415,  -415,  -415,  -275,  -415,   223,  -415,   183,  -415,
    -415,  -415,  -415,  -364,  -415,  -415,  -415,  -415,  -415,  -415,
    -415,    60,  -415,    59,  -415,  -415,  -415,   128,  -415,  -415,
    -415,  -415,  -415,  -415,    82,  -415,  -415,  -415,  -415,  -415,
    -415,  -415,  -415,   120,  -415,  -415,  -415,  -304,  -415,   394,
    -415,   461,    15,   455,   354,  -262,   385,  -256,  -254,  -242,
     296,  -206,  -140,  -167,  -415,   112,   138,    51,   134,   424,
     425,   427,   422,   426,  -415,   334,   420,  -103,  -415,  -415,
     -59,  -415,  -220,  -281
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    68,   401,   307,   117,   118,   119,   308,   209,
     121,   230,   210,    69,     6,     7,    10,    11,     3,    12,
      13,    14,    19,   273,    21,    22,    41,    42,    23,    43,
     177,   227,   178,   228,   253,   271,   285,   286,   287,   288,
     274,   395,   318,   319,   409,   290,   309,   275,   455,   402,
     403,   404,   456,   477,   313,   301,   292,   517,   337,    70,
     495,   518,   180,    24,   181,   256,   276,   277,   278,   279,
     280,   410,   437,   438,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   507,   487,
     508,   509,   510,   511,   352,   353,   418,   382,   501,   354,
     355,   482,   419,   502,   420,   356,   357,   358,   359,   360,
     450,   361,   451,   452,   474,    71,    72,    73,    74,   189,
      75,   183,   184,   190,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   175,
     101,   526,   311,   297
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    29,   126,   120,   302,    20,   225,   362,    17,   194,
     505,   257,   372,   377,   116,   506,   417,   389,   -36,   436,
     457,     1,   306,   124,   310,   374,   243,    26,   306,   314,
     375,    49,   102,   103,   272,   362,   151,   294,   162,   335,
     252,    46,     4,   432,   449,   163,   258,    50,   300,   363,
     373,   122,    15,    27,  -218,   364,   396,   365,   492,   237,
     125,   127,   127,   127,   127,   127,   127,   335,   -36,   366,
     378,   479,    45,   453,   390,   264,   362,   363,   195,   465,
     467,   198,   199,   364,   283,   365,    47,   152,   153,    16,
      28,   147,   148,   289,   505,   154,   155,   366,   291,   506,
     293,   142,   143,   221,   414,   367,   187,   289,   415,     8,
     405,   261,   291,   207,   293,   412,   429,   255,   363,   265,
     417,   136,   197,   233,   364,   137,   365,   224,   431,    15,
     229,   515,   195,   367,     9,   516,   144,   145,   366,   362,
     362,   146,    18,   127,   127,   127,   127,   127,   127,   127,
     122,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   458,   127,    26,   242,   461,  -231,   241,   138,    18,
    -231,   368,  -133,    51,   367,   122,   233,   229,   122,   123,
     362,   363,   363,   229,  -231,  -231,   139,   364,   364,   365,
     365,   485,   127,  -233,   489,   490,   491,  -233,   234,   368,
     234,   366,   366,   211,   212,   213,   214,    18,   369,   140,
     -81,  -233,  -233,   362,    18,   141,    18,  -132,   513,   -80,
     158,   229,   363,   149,   150,   122,   528,   159,   364,   160,
     365,   122,   156,   157,   161,   530,   369,   367,   367,   127,
     368,   127,   366,  -256,  -256,   335,   537,   538,   488,   540,
     127,  -257,  -257,   -28,   546,   363,   176,   543,   496,   203,
     204,   364,   179,   365,   548,   182,   383,   284,   186,   122,
     387,    15,   136,    30,   392,   366,   137,   369,   367,   188,
      15,   284,   193,   312,   476,   196,    31,   205,   206,   316,
     215,   216,   320,   122,  -255,  -255,   226,    32,   231,   122,
      33,    34,    35,   368,   368,    36,   232,    30,    37,    38,
     336,   367,   235,   238,    39,   239,   411,   240,   241,    40,
      31,   244,   421,   245,   514,   423,   424,   425,   246,   427,
     247,    32,   251,   248,    33,    34,    35,   249,   336,   299,
     369,   369,    37,    38,   368,   250,   254,   259,    39,   411,
     255,   260,   263,    40,   266,   270,   267,   268,   130,   131,
     132,   133,   134,   135,   281,   282,   295,   304,   296,   122,
     122,   315,   370,   371,   376,   122,   379,   368,   380,   336,
     381,   369,   384,   383,   385,   386,   388,   394,   136,   391,
     393,   398,   137,   430,   407,   433,    15,  -308,   441,   122,
     399,   411,   413,   480,   483,   224,   544,   545,   372,   434,
     422,   426,   428,   435,   369,   439,   128,   128,   128,   128,
     128,   128,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,   440,   122,   442,   444,   443,   445,   446,   520,
     200,   201,   202,   447,   448,   224,   525,   129,   129,   129,
     129,   129,   129,   122,   449,   374,   454,   459,   462,   463,
      52,   468,   460,   469,   472,   470,   471,   473,    53,   478,
     486,   122,    54,   484,   497,   493,   494,   547,     4,   499,
     498,   504,   500,    55,    56,    57,    58,    59,    60,   512,
     519,   521,   522,   122,   523,   533,   534,   333,   128,   128,
     128,   128,   128,   128,   128,   524,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   336,   128,   527,    64,
      65,   532,   539,   536,   541,   550,   551,   542,   549,   129,
     129,   129,   129,   129,   129,   129,   262,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   128,   129,    52,
     552,   553,   554,    25,   208,    44,    48,    53,   303,   406,
     535,    54,   397,   416,   317,   298,   503,     4,   529,   531,
     464,   475,    55,    56,    57,    58,    59,    60,   129,   236,
     192,   185,   217,   220,   218,   269,   333,   219,     0,   222,
       0,     0,     0,     0,   128,   223,   128,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   104,   321,    64,    65,
     105,     0,     0,     0,   322,   106,     0,     0,     0,     0,
     107,   323,     0,   324,     0,   129,     0,   129,     0,     0,
      52,   466,     0,     0,     0,   325,   129,     0,    53,   326,
     327,   328,    54,   329,     0,     0,     0,   330,     4,     0,
     331,     0,   332,    55,    56,    57,    58,    59,    60,   108,
     109,   110,   111,   112,   113,   114,   115,   333,   104,     0,
       0,     0,   105,     0,     0,     0,     0,   106,     0,     0,
      52,     0,   107,     0,     0,     0,     0,     0,    53,    64,
      65,     0,    54,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,     0,
       4,     0,     0,     0,     0,   255,     0,    61,     0,   334,
       0,   108,   109,   110,   111,   112,   113,   114,   115,    62,
      63,     0,     0,     0,     0,     0,     0,    52,     0,    64,
      65,    66,    67,   104,     0,    53,     0,   105,     0,    54,
       0,     0,   106,     0,     0,     4,     0,   107,     0,     0,
      55,    56,    57,    58,    59,    60,     0,    52,   481,     0,
       0,     0,     0,     0,    61,    53,   400,     0,     0,    54,
       0,     0,     0,     0,     0,     4,    62,    63,     0,     0,
      55,    56,    57,    58,    59,    60,   108,   109,   110,   111,
     112,   113,   114,   115,    61,     0,   104,     0,     0,     0,
     105,     0,     0,     0,     0,   106,    62,    63,     0,     0,
     107,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      52,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,   108,
     109,   110,   111,   112,   113,   114,   115,   333,    52,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,     0,     4,     0,     0,    64,
      65,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,     0,    52,     0,
     239,     0,     0,     0,     0,     0,    53,    62,    63,     0,
      54,     0,     0,     0,     0,     0,     4,    64,    65,    66,
      67,    55,    56,    57,    58,    59,    60,     0,    52,     0,
       0,     0,     0,     0,     0,    61,    53,   408,     0,     0,
      54,     0,     0,     0,     0,     0,     4,    62,    63,     0,
       0,    55,    56,    57,    58,    59,    60,    64,    65,    66,
      67,     0,   104,     0,     0,    61,   105,     0,     0,     0,
     104,   106,     0,     0,   105,     0,   107,    62,    63,   106,
       0,     0,     0,     0,   107,     0,     0,    64,    65,    66,
      67,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,   305,   191,     0,     4,     0,    15,  -308,     0,     0,
       0,     0,     4,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,   108,   109,   110,   111,   112,   113,   114,
     115,  -309,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -310,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,     0,     0,     0,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,     0,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174
};

static const yytype_int16 yycheck[] =
{
       1,    18,    61,    52,   285,    10,   176,   311,     9,   136,
       6,   231,    72,    53,    52,    11,   380,    53,    65,   408,
     434,    29,   294,    61,   299,    69,   193,    46,   300,   304,
      74,     9,    49,    50,   254,   339,    24,   273,    79,   311,
     226,    65,    46,   401,     7,    86,   232,    25,   284,   311,
     110,    52,    73,    73,    17,   311,   337,   311,   472,   186,
      61,    62,    63,    64,    65,    66,    67,   339,   115,   311,
     110,   460,    91,   431,   110,   242,   380,   339,   137,   443,
     444,   140,   141,   339,   270,   339,   110,    75,    76,   110,
     110,    89,    90,   272,     6,    83,    84,   339,   272,    11,
     272,    87,    88,   162,   379,   311,   123,   286,   380,     0,
     371,   238,   286,   151,   286,   376,   391,   113,   380,   246,
     484,    65,   139,   182,   380,    69,   380,   176,   400,    73,
     179,    36,   191,   339,    23,    40,    91,    92,   380,   443,
     444,    96,   111,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   435,   163,    46,    66,   439,    69,    69,    66,   111,
      73,   311,   114,   110,   380,   176,   235,   226,   179,    73,
     484,   443,   444,   232,    87,    88,    73,   443,   444,   443,
     444,   466,   193,    69,   469,   470,   471,    73,   183,   339,
     185,   443,   444,   152,   153,   154,   155,   111,   311,    69,
     114,    87,    88,   517,   111,    72,   111,   114,   493,   114,
      93,   270,   484,    97,    98,   226,   507,    95,   484,    94,
     484,   232,    81,    82,    85,   510,   339,   443,   444,   240,
     380,   242,   484,    87,    88,   517,   521,   522,   468,   524,
     251,    87,    88,    46,   535,   517,    15,   532,   478,   147,
     148,   517,    15,   517,   539,    69,   325,   272,    65,   270,
     329,    73,    65,     3,   333,   517,    69,   380,   484,    69,
      73,   286,    66,   300,   454,   110,    16,   149,   150,   306,
     156,   157,   309,   294,    87,    88,    22,    27,   110,   300,
      30,    31,    32,   443,   444,    35,    72,     3,    38,    39,
     311,   517,    69,    65,    44,    70,   375,    66,    69,    49,
      16,    66,   381,    70,   494,   384,   385,   386,    65,   388,
      70,    27,    80,    69,    30,    31,    32,    69,   339,    35,
     443,   444,    38,    39,   484,    69,   110,    70,    44,   408,
     113,    66,    70,    49,    70,    72,    70,    70,    62,    63,
      64,    65,    66,    67,    66,    66,   110,   110,   114,   370,
     371,    46,    65,    65,    65,   376,   110,   517,    65,   380,
      65,   484,    65,   442,    65,    65,    65,    46,    65,   110,
     110,   110,    69,    66,    70,    66,    73,    74,   415,   400,
     110,   460,   110,   462,   463,   454,   533,   534,    72,    72,
     110,   110,   110,    66,   517,    66,    62,    63,    64,    65,
      66,    67,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    45,   434,    71,    66,    72,    66,    66,   498,
     144,   145,   146,    66,    66,   494,   505,    62,    63,    64,
      65,    66,    67,   454,     7,    69,    42,    68,    65,   115,
      28,   110,    72,   110,    65,   110,   110,    17,    36,   110,
     110,   472,    40,    71,    66,   110,    72,   536,    46,    66,
      65,    14,    66,    51,    52,    53,    54,    55,    56,    66,
     110,   110,   110,   494,    66,    65,    65,    65,   144,   145,
     146,   147,   148,   149,   150,   110,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   517,   163,    80,    87,
      88,   110,   110,    72,    80,    66,    66,   110,   110,   144,
     145,   146,   147,   148,   149,   150,   240,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   193,   163,    28,
      66,   110,   110,    11,   151,    21,    41,    36,   286,   372,
     517,    40,   339,   380,   306,   277,   484,    46,   508,   510,
     442,   451,    51,    52,    53,    54,    55,    56,   193,   185,
     125,   120,   158,   161,   159,   251,    65,   160,    -1,   163,
      -1,    -1,    -1,    -1,   240,   175,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   251,     4,     5,    87,    88,
       8,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    -1,   240,    -1,   242,    -1,    -1,
      28,   110,    -1,    -1,    -1,    33,   251,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    45,    46,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     4,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      28,    -1,    18,    -1,    -1,    -1,    -1,    -1,    36,    87,
      88,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      46,    -1,    -1,    -1,    -1,   113,    -1,    65,    -1,   117,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    87,
      88,    89,    90,     4,    -1,    36,    -1,     8,    -1,    40,
      -1,    -1,    13,    -1,    -1,    46,    -1,    18,    -1,    -1,
      51,    52,    53,    54,    55,    56,    -1,    28,   116,    -1,
      -1,    -1,    -1,    -1,    65,    36,   112,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    77,    78,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,     4,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    13,    77,    78,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    87,
      88,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    28,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    36,    77,    78,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    87,    88,    89,
      90,    51,    52,    53,    54,    55,    56,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    36,    67,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    77,    78,    -1,
      -1,    51,    52,    53,    54,    55,    56,    87,    88,    89,
      90,    -1,     4,    -1,    -1,    65,     8,    -1,    -1,    -1,
       4,    13,    -1,    -1,     8,    -1,    18,    77,    78,    13,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    43,    69,    -1,    46,    -1,    73,    74,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    57,    58,    59,    60,    61,    62,    63,
      64,    74,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    29,   152,   169,    46,   164,   165,   166,     0,    23,
     167,   168,   170,   171,   172,    73,   110,   164,   111,   173,
     174,   175,   176,   179,   214,   170,    46,    73,   110,   165,
       3,    16,    27,    30,    31,    32,    35,    38,    39,    44,
      49,   177,   178,   180,   176,    91,    65,   110,   178,     9,
      25,   110,    28,    36,    40,    51,    52,    53,    54,    55,
      56,    65,    77,    78,    87,    88,    89,    90,   153,   164,
     210,   266,   267,   268,   269,   271,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   301,   165,   165,     4,     8,    13,    18,    57,    58,
      59,    60,    61,    62,    63,    64,   155,   156,   157,   158,
     160,   161,   164,    73,   155,   164,   301,   164,   275,   277,
     281,   281,   281,   281,   281,   281,    65,    69,    66,    73,
      69,    72,    87,    88,    91,    92,    96,    89,    90,    97,
      98,    24,    75,    76,    83,    84,    81,    82,    93,    95,
      94,    85,    79,    86,    74,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   300,    15,   181,   183,    15,
     213,   215,    69,   272,   273,   272,    65,   165,    69,   270,
     274,    69,   274,    66,   210,   301,   110,   165,   301,   301,
     281,   281,   281,   286,   286,   287,   287,   155,   159,   160,
     163,   288,   288,   288,   288,   289,   289,   290,   291,   292,
     293,   301,   294,   297,   160,   161,    22,   182,   184,   160,
     162,   110,    72,   301,   273,    69,   270,   210,    65,    70,
      66,    69,    66,   284,    66,    70,    65,    70,    69,    69,
      69,    80,   162,   185,   110,   113,   216,   303,   162,    70,
      66,   210,   281,    70,   284,   210,    70,    70,    70,   296,
      72,   186,   303,   174,   191,   198,   217,   218,   219,   220,
     221,    66,    66,   162,   174,   187,   188,   189,   190,   191,
     196,   198,   207,   221,   180,   110,   114,   304,   219,    35,
     180,   206,   304,   189,   110,    43,   154,   155,   159,   197,
     225,   303,   165,   205,   225,    46,   165,   192,   193,   194,
     165,     5,    12,    19,    21,    33,    37,    38,    39,    41,
      45,    48,    50,    65,   117,   154,   164,   209,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   245,   246,   250,   251,   256,   257,   258,   259,
     260,   262,   268,   276,   278,   279,   280,   282,   283,   298,
      65,    65,    72,   110,    69,    74,    65,    53,   110,   110,
      65,    65,   248,   301,    65,    65,    65,   301,    65,    53,
     110,   110,   301,   110,    46,   192,   304,   227,   110,   110,
     112,   154,   200,   201,   202,   200,   193,    70,    67,   195,
     222,   301,   200,   110,   225,   154,   229,   234,   247,   253,
     255,   301,   110,   301,   301,   301,   110,   301,   110,   225,
      66,   154,   194,    66,    72,    66,   195,   223,   224,    66,
      45,   165,    71,    72,    66,    66,    66,    66,    66,     7,
     261,   263,   264,   194,    42,   199,   203,   202,   199,    68,
      72,   199,    65,   115,   248,   234,   110,   234,   110,   110,
     110,   110,    65,    17,   265,   264,   161,   204,   110,   195,
     301,   116,   252,   301,    71,   225,   110,   240,   303,   225,
     225,   225,   202,   110,    72,   211,   303,    66,    65,    66,
      66,   249,   254,   255,    14,     6,    11,   239,   241,   242,
     243,   244,    66,   225,   161,    36,    40,   208,   212,   110,
     301,   110,   110,    66,   110,   301,   302,    80,   304,   242,
     225,   244,   110,    65,    65,   209,    72,   225,   225,   110,
     225,    80,   110,   225,   210,   210,   304,   301,   225,   110,
      66,    66,    66,   110,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   151,   152,   153,   153,   153,   153,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   158,   158,   159,   159,   160,   161,
     162,   163,   163,   163,   164,   164,   165,   166,   167,   167,
     168,   168,   169,   170,   170,   171,   172,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   179,   180,
     180,   181,   181,   182,   182,   183,   184,   185,   185,   186,
     187,   187,   188,   188,   189,   189,   189,   190,   190,   190,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   204,   204,   205,   206,   207,   208,   208,   209,
     209,   210,   210,   211,   212,   212,   213,   213,   214,   215,
     215,   216,   217,   217,   218,   218,   219,   219,   220,   221,
     222,   223,   223,   224,   224,   225,   226,   226,   227,   227,
     228,   229,   230,   230,   230,   230,   230,   230,   230,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     232,   233,   234,   234,   234,   234,   234,   234,   234,   235,
     236,   237,   238,   239,   239,   240,   241,   241,   242,   243,
     243,   244,   244,   245,   246,   247,   247,   248,   248,   249,
     249,   250,   251,   251,   252,   253,   253,   254,   255,   255,
     256,   256,   257,   257,   258,   259,   260,   260,   261,   261,
     262,   262,   263,   263,   264,   265,   266,   266,   267,   267,
     267,   267,   267,   267,   267,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   273,   274,   274,   275,   275,   276,
     276,   276,   277,   277,   278,   278,   278,   278,   279,   280,
     281,   281,   281,   281,   281,   282,   283,   284,   284,   284,
     284,   285,   285,   285,   286,   286,   286,   286,   287,   287,
     287,   288,   288,   288,   289,   289,   289,   289,   289,   289,
     290,   290,   290,   291,   291,   292,   292,   293,   293,   294,
     294,   295,   295,   296,   296,   297,   297,   298,   299,   299,
     299,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   301,   302,   303,   304
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
       5,     1,     3,     1,     3,     1,     3,     1,     1,     3,
       1,     8,     8,     1,     0,     1,     0,     1,     3,     2,
       3,     2,     1,     3,     1,     2,     9,     1,     0,     1,
       0,     1,     0,     4,     5,     5,     1,     0,     7,     2,
       3,     3,     1,     0,     1,     2,     1,     1,     1,     2,
       3,     1,     0,     1,     3,     3,     1,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     9,     6,     1,     0,     3,     1,     2,     2,     1,
       2,     4,     3,     6,     8,     1,     0,     1,     0,     1,
       0,    10,     9,     9,     6,     1,     1,     1,     1,     3,
       3,     2,     3,     2,     3,     3,     6,     6,     1,     0,
       4,     5,     1,     2,     6,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     5,     1,     3,     1,     0,
       3,     4,     1,     2,     3,     2,     3,     3,     3,     4,
       6,     6,     4,     4,     1,     1,     1,     1,     2,     2,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     5,     4,     5,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     1,     3,     1,     1,
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
#line 406 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_UNIT, 3);   }
#line 2117 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 411 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_INTLITERAL, (yyvsp[0]. node ));   }
#line 2123 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 413 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FLOATLITERAL, (yyvsp[0]. node ));   }
#line 2129 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 415 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_BOOLLITERAL, (yyvsp[0]. node ));   }
#line 2135 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 417 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STRINGLITERAL, (yyvsp[0]. node ));   }
#line 2141 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 419 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CHARLITERAL, (yyvsp[0]. node ));   }
#line 2147 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 421 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULLLITERAL, (yyvsp[0]. node ));   }
#line 2153 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 432 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_BOOLEAN, (yyvsp[0]. node ));    }
#line 2159 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 442 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT8, (yyvsp[0]. node ));    }
#line 2165 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 444 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2171 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 446 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT32, (yyvsp[0]. node ));    }
#line 2177 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 448 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT64, (yyvsp[0]. node ));    }
#line 2183 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 450 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2189 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 452 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT16, (yyvsp[0]. node ));    }
#line 2195 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 454 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2201 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 456 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2207 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 458 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2213 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 463 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_FLOAT, (yyvsp[0]. node ));    }
#line 2219 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 465 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_DOUBLE, (yyvsp[0]. node ));    }
#line 2225 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 475 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "InterfaceTypeList" */ );
        COMBINE(TOK_TYPE_CLASS, 2);
    }
#line 2234 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 491 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
        TOP()->counter = 1;
    }
#line 2243 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 496 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
        TOP()->counter = 1;
    }
#line 2252 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 501 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        beagle::compiler::Node *node = TOP();
        ++node->counter;
    }
#line 2261 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 514 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));    }
#line 2267 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 519 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        //PUSH(TOK_NAME, $3);
        //COMBINE(0, 1);
        beagle::compiler::Node *name = TOP();
        name->text += '.';
        name->text += (yyvsp[0]. node );
        name->type = TOK_QNAME;
    }
#line 2280 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 538 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ImportDeclarations" */ );   }
#line 2286 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 544 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORTS, 1);   }
#line 2292 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 546 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2298 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 560 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORT, 1);   }
#line 2304 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 565 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_IMPORT_ALL, 1);
    }
#line 2312 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 577 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "AnnotationDeclarations" */ );   }
#line 2318 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 582 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATIONS, 1);   }
#line 2324 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 584 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2330 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 589 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATION, 2);   }
#line 2336 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 591 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "ArgumentList" */ );
		COMBINE(TOK_ANNOTATION, 2);
	}
#line 2345 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 599 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MODIFIERS, 1);   }
#line 2351 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 601 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2357 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 606 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PUBLIC, (yyvsp[0]. node ));   }
#line 2363 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 608 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PROTECTED, (yyvsp[0]. node ));   }
#line 2369 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 610 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PRIVATE, (yyvsp[0]. node ));   }
#line 2375 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 612 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STATIC, (yyvsp[0]. node ));   }
#line 2381 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 614 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ABSTRACT, (yyvsp[0]. node ));   }
#line 2387 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 616 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FINAL, (yyvsp[0]. node ));   }
#line 2393 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 618 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NATIVE, (yyvsp[0]. node ));   }
#line 2399 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 620 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_READLOCK, (yyvsp[0]. node ));   }
#line 2405 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 622 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_WRITELOCK, (yyvsp[0]. node ));   }
#line 2411 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 624 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_TRANSIENT, (yyvsp[0]. node ));   }
#line 2417 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 626 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOLATILE, (yyvsp[0]. node ));   }
#line 2423 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 631 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CLASS, 6);   }
#line 2429 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 636 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Modifiers" */ );   }
#line 2435 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 641 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Super" */ );   }
#line 2441 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 646 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Interfaces" */ );   }
#line 2447 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 660 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2453 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 662 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2459 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 671 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ClassBodyDeclarations" */ );   }
#line 2465 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 676 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2471 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 678 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2477 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 695 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FIELD, 4);   }
#line 2483 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 700 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLES, 1);   }
#line 2489 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 702 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2495 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 707 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "VariableInitializer" */ );
        COMBINE(TOK_VARIABLE, 2);
    }
#line 2504 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 712 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2510 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 717 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));   }
#line 2516 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 728 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2522 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 734 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOID, (yyvsp[0]. node ));   }
#line 2528 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 740 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2534 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 742 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2540 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 748 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Throws" */ );   }
#line 2546 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 754 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "FormalParameterList" */ );   }
#line 2552 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 758 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETERS, 1);   }
#line 2558 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 760 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2564 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 765 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETER, 2);   }
#line 2570 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 767 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_PARAMETER, 2);
        ++TOP()->counter;
    }
#line 2579 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 781 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROWS, 1);   }
#line 2585 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 783 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2591 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 792 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_STATIC_INIT, 1);   }
#line 2597 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 797 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CONSTRUCTOR, 6);   }
#line 2603 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 802 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ExplicitConstructorInvocation" */ );   }
#line 2609 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 807 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "BlockStatements" */ );   }
#line 2615 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 812 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ArgumentList" */ );   }
#line 2621 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 817 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 2);   }
#line 2627 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 822 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_THIS;   }
#line 2633 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 824 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_SUPER;   }
#line 2639 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 829 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ExtendsInterfaces" */ );   }
#line 2645 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 834 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INTERFACE, 5);   }
#line 2651 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 839 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2657 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 841 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2663 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 850 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "InterfaceMemberDeclarations" */ );   }
#line 2669 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 855 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2675 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 857 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2681 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 871 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "MethodBody" */ );
        COMBINE(0, 1);
    }
#line 2690 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 883 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "VariableInitializers" */ ); }
#line 2696 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 888 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARRAY, 1);   }
#line 2702 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 890 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2708 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 899 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BLOCK, 1);   }
#line 2714 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 901 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2720 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 915 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2726 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 944 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PASS, (yyvsp[-1]. node ));   }
#line 2732 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 963 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "Block" */ );
		COMBINE(TOK_IF, 3);
	}
#line 2741 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 971 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_BLOCK, 1);
		PUSH(TOK_NULL, NULL /* "Block" */ );
		COMBINE(TOK_IF, 3);
	}
#line 2751 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 980 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IF, 3);   }
#line 2757 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 985 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SWITCH, 2);   }
#line 2763 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 990 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "SwitchBlockStatementGroups" */ );   }
#line 2769 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 999 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2775 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 1001 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2781 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 1006 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GROUP, 2);   }
#line 2787 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 1011 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2793 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 1013 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2799 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 1018 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CASE, 1);   }
#line 2805 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 1020 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_DEFAULT, (yyvsp[-2]. node ));
		COMBINE(TOK_CASE, 1);
	}
#line 2814 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1028 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_WHILE, 2);   }
#line 2820 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1034 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DO, 2);   }
#line 2826 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1039 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ForInit" */ );   }
#line 2832 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1044 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Expression" */ );   }
#line 2838 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1049 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ForUpdate" */ );   }
#line 2844 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1054 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR, 4);   }
#line 2850 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1059 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2856 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1061 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2862 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1066 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RANGE, 2);   }
#line 2868 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1080 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2874 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1082 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2880 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1087 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_BREAK, 1);
	}
#line 2889 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 1092 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_BREAK, 1);
	}
#line 2898 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1100 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2907 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1105 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2916 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1113 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RETURN, 1);   }
#line 2922 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 1119 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROW, 1);   }
#line 2928 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1124 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2934 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1126 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2940 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1131 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Catches" */ );   }
#line 2946 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1136 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "finally" */ );
		COMBINE(TOK_TRY, 3);
	}
#line 2955 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1141 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TRY, 3);   }
#line 2961 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1146 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2967 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1148 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2973 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1153 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CATCH, 2);   }
#line 2979 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 1158 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_FINALLY;   }
#line 2985 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 1169 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_THIS, (yyvsp[0]. node ));   }
#line 2991 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 1179 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW, 2);   }
#line 2997 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 236:
#line 1184 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARGUMENTS, 1);   }
#line 3003 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1186 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3009 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 1191 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Dims" */ );   }
#line 3015 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1196 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3053 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 1230 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW_ARRAY, 3);   }
#line 3059 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1235 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 3065 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1237 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3071 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 1247 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_TYPE_ARRAY, "");
		TOP()->counter = 1;
	}
#line 3080 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1252 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3088 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1258 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_FIELD, 2);   }
#line 3094 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 248:
#line 1260 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_SUPER, (yyvsp[-2]. node ));
		COMBINE(TOK_ACCESS_FIELD, 2);
	}
#line 3103 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1268 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_NULL, NULL /* "Primary" */ );
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	}
#line 3119 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 250:
#line 1280 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CALL, 3);   }
#line 3125 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1282 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {

		beagle::compiler::Node *second, *third;

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
#line 3148 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 252:
#line 1304 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3154 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1306 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3160 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 258:
#line 1318 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3166 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 259:
#line 1323 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3172 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 262:
#line 1330 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 1);   }
#line 3178 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 263:
#line 1332 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 1);   }
#line 3184 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 265:
#line 1338 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3190 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 266:
#line 1343 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3196 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1349 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TILDE, 1);   }
#line 3202 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 269:
#line 1351 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BANG, 1);   }
#line 3208 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1358 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		if (second->type == TOK_NULL)
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
#line 3232 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 272:
#line 1378 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CAST, 2);   }
#line 3238 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1380 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		second->addChild(*first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CAST, 2);
	}
#line 3256 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 275:
#line 1398 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MUL, 2);   }
#line 3262 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1400 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DIV, 2);   }
#line 3268 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1402 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MOD, 2);   }
#line 3274 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 279:
#line 1408 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 2);   }
#line 3280 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 280:
#line 1410 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 2);   }
#line 3286 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1416 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHL, 2);   }
#line 3292 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 283:
#line 1418 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHR, 2);   }
#line 3298 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 285:
#line 1424 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LT, 2);   }
#line 3304 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1426 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GT, 2);   }
#line 3310 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 287:
#line 1428 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LE, 2);   }
#line 3316 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 288:
#line 1430 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GE, 2);   }
#line 3322 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 289:
#line 1432 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INSTANCEOF, 2);   }
#line 3328 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 291:
#line 1438 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_EQ, 2);   }
#line 3334 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 292:
#line 1440 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NE, 2);   }
#line 3340 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 294:
#line 1446 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_AND, 2);   }
#line 3346 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 296:
#line 1452 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CARET, 2);   }
#line 3352 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 298:
#line 1458 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OR, 2);   }
#line 3358 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 300:
#line 1464 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANDAND, 2);   }
#line 3364 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 302:
#line 1470 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OROR, 2);   }
#line 3370 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 304:
#line 1476 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_QUEST, 2);   }
#line 3376 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1486 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3397 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 311:
#line 1512 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ASN, (yyvsp[0]. node ));   }
#line 3403 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 312:
#line 1514 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MUASN, (yyvsp[0]. node ));   }
#line 3409 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 313:
#line 1516 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_DIASN, (yyvsp[0]. node ));   }
#line 3415 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 314:
#line 1518 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MODASN, (yyvsp[0]. node ));   }
#line 3421 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 315:
#line 1520 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PLASN, (yyvsp[0]. node ));   }
#line 3427 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 316:
#line 1522 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MIASN, (yyvsp[0]. node ));   }
#line 3433 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 317:
#line 1524 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SLASN, (yyvsp[0]. node ));   }
#line 3439 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 318:
#line 1526 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SRASN, (yyvsp[0]. node ));   }
#line 3445 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 319:
#line 1528 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ANDASN, (yyvsp[0]. node ));   }
#line 3451 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 320:
#line 1530 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CARETASN, (yyvsp[0]. node ));   }
#line 3457 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 321:
#line 1532 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ORASN, (yyvsp[0]. node ));   }
#line 3463 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3467 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1552 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


