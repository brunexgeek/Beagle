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
    TOK_MODASN = 362,
    TOK_BAD_TOKEN = 363,
    TOK_EOL = 364,
    TOK_AT = 365,
    TOK_VARARG = 366,
    TOK_INDENT = 367,
    TOK_DEDENT = 368,
    TOK_IN = 369,
    TOK_RANGE = 370,
    TOK_PASS = 371,
    TOK_TYPE_CLASS = 372,
    TOK_TYPE_ARRAY = 373,
    TOK_INTERFACES = 374,
    TOK_NULL = 375,
    TOK_BODY = 376,
    TOK_FIELD = 377,
    TOK_METHOD = 378,
    TOK_CONSTRUCTOR = 379,
    TOK_LIST = 380,
    TOK_IMPORTS = 381,
    TOK_VARIABLE = 382,
    TOK_VARIABLES = 383,
    TOK_MODIFIERS = 384,
    TOK_UNIT = 385,
    TOK_TYPE = 386,
    TOK_TYPES = 387,
    TOK_MEMBER = 388,
    TOK_IMPORT_ALL = 389,
    TOK_STATIC_INIT = 390,
    TOK_PARAMETER = 391,
    TOK_PARAMETERS = 392,
    TOK_BLOCK = 393,
    TOK_CALL = 394,
    TOK_ACCESS_FIELD = 395,
    TOK_CAST = 396,
    TOK_ACCESS_ARRAY = 397,
    TOK_FOR_EACH = 398,
    TOK_GROUP = 399,
    TOK_ANNOTATION = 400,
    TOK_NEW_ARRAY = 401,
    TOK_ARRAY = 402,
    TOK_ANNOTATIONS = 403,
    TOK_ARGUMENTS = 404
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 175 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */

    char* node;

#line 311 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 325 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:358  */
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

    if ((int) stack.size() < n) return NULL;

    if (tok > 0 )
        temp = new beagle::Node(tok, NULL);
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


static void beagle_printStack( std::vector<beagle::Node*> &stack, beagle::Parser *parser )
{
    std::cout << "Stack:" << std::endl;
    for (int i = 0; i < (int) stack.size(); ++i)
        stack[i]->print(std::cout, beagle::Parser::name, 1, false);
}


static void beagle_push(
    parser_context_t *context,
    int token,
    const char *value )
{
    //std::cout << "PUSH " << value << std::endl;
    context->stack.push_back( new beagle::Node(token,value) );
}


static void beagle_push(
    parser_context_t *context,
    beagle::Node *node )
{
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


#line 426 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYLAST   1154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  150
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  154
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  557

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   404

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
     145,   146,   147,   148,   149
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   403,   403,   408,   410,   412,   414,   416,   418,   423,
     424,   428,   429,   434,   435,   439,   441,   443,   445,   447,
     449,   451,   453,   455,   460,   462,   467,   468,   472,   480,
     484,   488,   492,   496,   504,   505,   509,   514,   532,   533,
     538,   540,   545,   549,   550,   554,   559,   566,   567,   571,
     572,   576,   578,   583,   585,   593,   595,   600,   602,   604,
     606,   608,   610,   612,   614,   616,   618,   620,   625,   630,
     631,   635,   636,   640,   641,   646,   650,   654,   656,   661,
     665,   666,   670,   672,   677,   678,   679,   683,   684,   685,
     689,   694,   696,   701,   706,   711,   713,   717,   718,   722,
     728,   734,   736,   742,   743,   748,   749,   752,   754,   759,
     761,   770,   775,   777,   782,   786,   791,   796,   797,   801,
     802,   806,   807,   811,   816,   818,   823,   824,   828,   833,
     835,   840,   844,   845,   849,   851,   856,   857,   861,   865,
     873,   877,   878,   882,   884,   889,   893,   895,   900,   901,
     905,   909,   914,   915,   916,   917,   918,   919,   920,   924,
     925,   926,   927,   928,   929,   930,   931,   932,   933,   934,
     938,   943,   947,   948,   949,   950,   951,   952,   953,   957,
     965,   974,   979,   984,   985,   989,   993,   995,  1000,  1005,
    1007,  1012,  1014,  1022,  1028,  1033,  1034,  1038,  1039,  1043,
    1044,  1048,  1053,  1055,  1060,  1065,  1066,  1070,  1074,  1076,
    1081,  1086,  1094,  1099,  1107,  1113,  1118,  1120,  1125,  1126,
    1130,  1135,  1140,  1142,  1147,  1152,  1157,  1158,  1162,  1163,
    1165,  1166,  1167,  1168,  1169,  1173,  1178,  1180,  1185,  1186,
    1190,  1224,  1229,  1231,  1236,  1241,  1246,  1252,  1254,  1262,
    1274,  1276,  1298,  1300,  1305,  1306,  1307,  1308,  1312,  1317,
    1322,  1323,  1324,  1326,  1328,  1332,  1337,  1342,  1343,  1345,
    1347,  1352,  1372,  1374,  1391,  1392,  1394,  1396,  1401,  1402,
    1404,  1409,  1410,  1412,  1417,  1418,  1420,  1422,  1424,  1426,
    1431,  1432,  1434,  1439,  1440,  1445,  1446,  1451,  1452,  1457,
    1458,  1463,  1464,  1469,  1470,  1475,  1476,  1480,  1500,  1501,
    1502,  1506,  1508,  1510,  1512,  1514,  1516,  1518,  1520,  1522,
    1524,  1526,  1531,  1535,  1539,  1543
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
  "TOK_VOLATILE", "TOK_WHILE", "TOK_NAME", "TOK_CONTINUE", "TOK_TRANSIENT",
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
  "TOK_RANGE", "TOK_PASS", "TOK_TYPE_CLASS", "TOK_TYPE_ARRAY",
  "TOK_INTERFACES", "TOK_NULL", "TOK_BODY", "TOK_FIELD", "TOK_METHOD",
  "TOK_CONSTRUCTOR", "TOK_LIST", "TOK_IMPORTS", "TOK_VARIABLE",
  "TOK_VARIABLES", "TOK_MODIFIERS", "TOK_UNIT", "TOK_TYPE", "TOK_TYPES",
  "TOK_MEMBER", "TOK_IMPORT_ALL", "TOK_STATIC_INIT", "TOK_PARAMETER",
  "TOK_PARAMETERS", "TOK_BLOCK", "TOK_CALL", "TOK_ACCESS_FIELD",
  "TOK_CAST", "TOK_ACCESS_ARRAY", "TOK_FOR_EACH", "TOK_GROUP",
  "TOK_ANNOTATION", "TOK_NEW_ARRAY", "TOK_ARRAY", "TOK_ANNOTATIONS",
  "TOK_ARGUMENTS", "$accept", "CompilationUnit", "Literal", "Type",
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
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404
};
# endif

#define YYPACT_NINF -398

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-398)))

#define YYTABLE_NINF -311

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,    52,   127,    87,  -398,   -25,  -398,  -398,  -398,    52,
      31,    87,  -398,  -398,  -398,   136,  -398,   -22,    52,  -398,
     351,    31,  -398,  -398,  -398,  -398,  -398,   -32,  -398,   -57,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,   351,  -398,    65,  -398,    77,   897,  -398,  -398,    52,
      52,  -398,   949,   116,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,   650,   897,   897,   897,   897,   897,   897,  -398,  1002,
     134,   140,   160,  -398,   162,  -398,   988,  -398,  1023,   108,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,    24,    46,   125,
      89,   180,   158,   164,   159,   172,    33,  -398,  -398,  -398,
    1047,  -398,   250,   262,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,   211,  -398,  -398,  -398,
     211,   219,   223,    52,   228,  1012,   232,   -23,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,   897,   897,   189,    52,
     897,   897,  -398,  -398,   897,   897,   897,   897,   897,   897,
     897,   949,   897,   897,   897,   897,   897,   897,   897,   897,
     897,   897,   897,   897,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,   897,    52,   277,  -398,    52,
     197,   236,   897,   211,  -398,   240,   897,   246,   243,   251,
     247,   779,   111,  1005,   253,   252,  -398,   256,   255,  -398,
    -398,  -398,  -398,    24,    24,    46,    46,   254,  -398,  -398,
     261,    56,   125,   125,   125,   125,    89,    89,   180,   158,
     164,   159,   258,   172,  -398,  -398,  -398,    52,   231,  -398,
    -398,  -398,   229,    52,   274,  -398,   779,  -398,   280,   897,
    -398,   897,   279,  1005,  -398,  -398,  -398,   897,  -398,   281,
     283,   284,   897,  -398,   278,   229,  -398,  -398,    96,  -398,
    -398,  -398,   290,  -398,  -398,  -398,   291,  -398,  -398,  -398,
    -398,    52,  -398,   100,   351,  -398,   257,   259,   110,  -398,
    -398,  -398,  -398,  -398,  -398,   649,   259,   144,  -398,  -398,
    -398,  -398,   260,  -398,  -398,   445,  -398,  -398,  -398,  -398,
     229,   445,  -398,  -398,  -398,   229,  -398,   319,   254,  -398,
      52,  -398,   541,   304,  -398,  -398,   -35,   309,   -33,  -398,
      48,   310,   -39,   270,   320,   323,   897,   324,   327,   328,
     897,   329,   -37,   285,   897,   287,   352,   388,   259,  -398,
     541,  -398,  -398,   288,  -398,  -398,  -398,  -398,   293,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,   143,   176,   108,   182,   195,  -398,  -398,
    -398,   301,   301,   352,  -398,   335,   824,   301,   298,  -398,
     229,   712,   897,   302,  -398,   897,   897,   897,   311,   897,
     322,  -398,   229,   368,  -398,  -398,   365,   853,  -398,  -398,
    -398,  -398,   949,   352,   372,   367,  -398,   374,  -398,  -398,
     824,  -398,  -398,  -398,   375,  -398,   406,   319,  -398,  -398,
     384,  -398,   386,   394,  -398,   396,   399,   400,  -398,   401,
    -398,   460,  -398,   352,   402,   426,   301,   426,  -398,   404,
     398,   426,   408,   362,   897,   985,   750,   369,   371,   373,
     376,   413,   464,    37,  -398,   402,    52,   377,  -398,  -398,
    -398,  -398,   824,  -398,   897,   584,   414,  -398,   229,   378,
     229,   229,   229,   229,   301,   381,  -398,  -398,  -398,   412,
     229,  -398,   424,   428,   429,   431,   985,   479,  -398,  -398,
     131,  -398,  -398,  -398,   432,   229,    52,  -398,   129,   389,
     897,   390,   391,   444,  -398,   386,   405,   897,   434,   259,
     131,  -398,    19,  -398,   407,  -398,  -398,   447,   451,   541,
    -398,  -398,   446,   229,   229,   410,   229,  -398,   441,   422,
    -398,  -398,  -398,  -398,   229,   897,   897,   259,   897,  -398,
    -398,   229,  -398,   433,  -398,  -398,   457,   458,  -398,   482,
    -398,  -398,   435,   439,  -398,  -398,  -398
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
      27,    28,   285,   286,   287,   288,   291,   292,   294,   296,
     298,   300,     0,   302,   307,    29,    75,     0,     0,    73,
      30,   129,     0,     0,     0,   243,     0,   241,     0,   122,
     245,     0,     0,     0,   272,   249,   252,   122,   253,     0,
       0,     0,     0,    77,    76,     0,   324,   128,    50,   130,
     244,   235,     0,   271,   246,   273,     0,    31,    33,    32,
     304,     0,    68,    50,    70,   138,     0,     0,    50,   134,
     136,   137,   251,   250,    78,    70,     0,    50,    82,    84,
      87,    88,     0,    86,    89,     0,   139,   325,   131,   135,
      60,     0,    85,    79,    83,   139,   100,     0,     9,    10,
       0,   115,   120,    34,    99,   114,    95,     0,     0,    91,
      93,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   308,     0,   159,
     119,   146,   148,     0,   149,   152,   169,   160,     0,   153,
     154,   155,   161,   156,   162,   157,   158,   163,   164,   165,
     167,   166,   168,   178,   177,     0,   175,   176,   173,   174,
     172,   106,   106,     0,    90,     0,     0,   106,     0,   211,
       0,   196,     0,     0,   197,     0,     0,     0,     0,     0,
       0,   213,     0,     0,   170,    95,   151,     0,   145,   147,
     150,   171,     0,     0,     0,   105,   107,     0,    92,    96,
     142,    94,    98,    97,     0,   210,     0,     0,   206,   208,
       0,   195,   205,     0,   214,     0,     0,     0,   215,     0,
     212,   219,   230,     0,   109,   104,     0,   104,   143,     0,
     141,   104,     0,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   220,   222,   110,     0,     0,   103,   108,
     101,   140,     0,   102,     0,     0,     0,   209,     0,     0,
       0,     0,     0,     0,     0,     0,   221,   223,   112,   111,
       0,   144,     0,     0,     0,     0,   200,   179,   180,   182,
     184,   216,   217,   193,     0,     0,     0,   116,   118,     0,
       0,     0,     0,     0,   199,   207,     0,     0,     0,     0,
     183,   186,     0,   189,     0,   225,   113,     0,     0,   120,
     117,   194,     0,     0,     0,     0,     0,   323,     0,     0,
     185,   187,   188,   190,     0,   122,   122,     0,     0,   203,
     202,     0,   181,     0,   192,   224,     0,     0,   123,     0,
     201,   191,     0,     0,   204,   125,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -398,  -398,  -398,  -285,   -26,  -398,  -398,  -398,   415,   -46,
    -171,  -196,  -398,    -1,   -17,  -398,  -398,  -398,  -398,   539,
    -398,  -398,  -398,    -7,  -398,   530,  -398,   511,  -398,  -232,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,   268,  -398,
    -182,   249,   184,  -360,  -382,  -398,  -398,  -180,  -248,  -211,
    -398,  -397,  -398,  -398,  -398,  -398,  -398,  -398,    39,  -127,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,   286,  -398,
    -179,  -398,  -398,  -398,  -288,  -398,   221,  -398,   186,  -398,
    -398,  -398,  -398,  -357,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,    53,  -398,    58,  -398,  -398,  -398,   121,  -398,  -398,
    -398,  -398,  -398,  -398,    82,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,   118,  -398,  -398,  -398,  -272,  -398,   387,
    -398,   455,  -137,   459,   269,  -255,   380,  -245,  -243,  -241,
     -44,  -173,  -144,  -157,  -398,   139,   142,    64,   132,   418,
     430,   423,   448,   443,  -398,   333,   436,  -142,  -398,  -398,
     -59,  -398,  -221,  -282
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    68,   403,   308,   117,   118,   119,   309,   209,
     121,   231,   210,    69,     6,     7,    10,    11,     3,    12,
      13,    14,    19,   274,    21,    22,    41,    42,    23,    43,
     177,   228,   178,   229,   254,   272,   286,   287,   288,   289,
     275,   396,   319,   320,   411,   291,   310,   276,   457,   404,
     405,   406,   458,   479,   314,   302,   293,   519,   338,    70,
     497,   520,   180,    24,   181,   257,   277,   278,   279,   280,
     281,   412,   439,   440,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   509,   489,
     510,   511,   512,   513,   353,   354,   420,   383,   503,   355,
     356,   484,   421,   504,   422,   357,   358,   359,   360,   361,
     452,   362,   453,   454,   476,    71,    72,    73,    74,   189,
      75,   183,   184,   190,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   175,
     101,   528,   312,   298
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    29,   126,    20,   303,   226,   120,    46,    17,   194,
     307,   258,   311,   378,    26,   390,   307,   315,   130,   131,
     132,   133,   134,   135,   419,   507,   116,   336,   438,   -36,
     508,   253,   102,   103,   273,   124,   244,   259,   373,   459,
     363,   136,   295,   434,   451,   137,   235,    15,   235,    15,
      27,   122,    47,   301,  -218,   336,   398,   364,    45,   238,
     125,   127,   127,   127,   127,   127,   127,   365,   363,   366,
     379,   367,   391,   455,    49,   284,   374,   494,   195,   -36,
     481,   198,   199,     1,    16,   364,   265,    28,   467,   469,
      50,   290,   416,   292,   294,   365,   417,   366,     4,   367,
     200,   201,   202,   222,   431,   290,   187,   292,   294,   363,
       9,   162,   262,   151,   144,   145,   375,   433,   163,   146,
     266,   376,   197,   234,   251,   207,   364,     8,    15,   419,
     225,   256,   195,   230,   147,   148,   365,   507,   366,   368,
     367,    18,   508,   127,   127,   127,   127,   127,   127,   127,
     211,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   407,   127,   152,   153,   517,   414,   368,   369,   518,
     370,   154,   155,   363,   363,   122,   243,   234,   122,   242,
     487,   230,    26,   491,   492,   493,    51,   230,   123,   460,
     364,   364,   127,   463,   142,   143,   369,   263,   370,   138,
     365,   365,   366,   366,   367,   367,    18,   515,   368,  -133,
      18,  -231,   139,   -81,   363,  -231,   212,   213,   214,   215,
      18,   149,   150,  -132,   532,   230,   122,   530,   140,  -231,
    -231,   364,   122,   141,   336,   539,   540,   369,   542,   370,
     127,   365,   127,   366,  -233,   367,   545,   363,  -233,   490,
     158,   127,   160,   550,    18,   548,   161,   -80,   159,   498,
     156,   157,  -233,  -233,   364,   176,   285,   384,  -256,  -256,
     122,   388,   368,   368,   365,   393,   366,   179,   367,   182,
     285,  -257,  -257,   186,   313,   478,   203,   204,   216,   217,
     317,   205,   206,   321,   211,    15,   188,   193,   196,   227,
     211,   369,   369,   370,   370,   104,   232,   233,   236,   105,
     239,   337,   240,   368,   106,   242,   241,   413,   245,   107,
     247,   246,   249,   423,   248,   516,   425,   426,   427,   250,
     429,   128,   128,   128,   128,   128,   128,   252,   195,   337,
     255,   256,   369,   260,   370,   261,   368,     4,   264,   271,
     267,   413,   268,   269,    30,   282,   283,   108,   109,   110,
     111,   112,   113,   114,   115,   316,   296,    31,   371,   305,
     211,   211,   297,   372,   377,   369,   211,   370,    32,   380,
     337,    33,    34,    35,   381,   384,    36,   382,   385,    37,
      38,   386,   387,   389,   392,    39,   394,   400,   395,    40,
     443,   211,   401,   413,   409,   482,   485,   415,   546,   547,
     225,   424,   402,   128,   128,   128,   128,   128,   128,   128,
     428,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   430,   128,   432,   -28,   211,   373,   435,   436,   437,
     441,   522,   129,   129,   129,   129,   129,   129,   527,   104,
     225,   442,   136,   105,   444,   122,   397,   445,   106,   446,
      15,   447,   128,   107,   448,   449,   450,   451,   456,   462,
     375,   461,   464,   211,  -255,  -255,   465,   474,   470,   549,
     471,   475,   472,   496,   486,   473,   480,   488,   306,   499,
     495,     4,   500,   506,   501,   122,   502,   514,   521,   523,
     524,   108,   109,   110,   111,   112,   113,   114,   115,   525,
     128,   535,   128,   529,   526,   536,   534,   538,   337,   541,
     543,   128,   552,   553,   129,   129,   129,   129,   129,   129,
     129,   544,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   551,   129,   555,   104,   322,   554,   556,   105,
      25,    44,    48,   323,   106,   304,   318,   408,   537,   107,
     324,   399,   325,   531,   299,   466,   208,   418,   505,    52,
     533,   477,   237,   129,   326,   185,   218,    53,   327,   328,
     329,    54,   330,   220,   192,   270,   331,     4,   332,   219,
     333,    55,    56,    57,    58,    59,    60,   108,   109,   110,
     111,   112,   113,   114,   115,   334,   223,     0,     0,   221,
       0,   224,    52,     0,     0,     0,     0,     0,     0,     0,
      53,   129,     0,   129,    54,     0,     0,    64,    65,     0,
       4,     0,   129,     0,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,    30,   256,   104,     0,     0,   335,   105,     0,
      62,    63,     0,   106,     0,    31,     0,     0,   107,     0,
      64,    65,    66,    67,     0,     0,    32,     0,    52,    33,
      34,    35,     0,     0,   300,     0,    53,    37,    38,     0,
      54,     0,     0,    39,     0,     0,     4,    40,     0,   483,
      55,    56,    57,    58,    59,    60,   108,   109,   110,   111,
     112,   113,   114,   115,    61,     0,   104,     0,     0,     0,
     105,     0,     0,     0,     0,   106,    62,    63,     0,     0,
     107,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      52,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     4,     0,
       0,     0,    55,    56,    57,    58,    59,    60,   108,   109,
     110,   111,   112,   113,   114,   115,   334,     0,    52,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
      54,     0,     0,     0,     0,     0,     4,     0,    64,    65,
      55,    56,    57,    58,    59,    60,     0,    52,     0,     0,
       0,     0,     0,     0,   334,    53,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     4,     0,     0,     0,    55,
      56,    57,    58,    59,    60,     0,    64,    65,     0,     0,
       0,     0,     0,    61,     0,     0,     0,     0,   240,     0,
       0,     0,    52,     0,     0,    62,    63,     0,     0,   468,
      53,     0,     0,     0,    54,    64,    65,    66,    67,     0,
       4,     0,     0,     0,    55,    56,    57,    58,    59,    60,
       0,    52,     0,     0,     0,     0,     0,     0,    61,    53,
     410,     0,     0,    54,     0,     0,     0,     0,     0,     4,
      62,    63,     0,    55,    56,    57,    58,    59,    60,     0,
      64,    65,    66,    67,     0,     0,     0,    61,     0,     0,
       0,     0,   269,     0,     0,    52,     0,     0,     0,    62,
      63,     0,     0,    53,     0,     0,     0,    54,     0,    64,
      65,    66,    67,     4,     0,     0,     0,    55,    56,    57,
      58,    59,    60,   104,     0,     0,     0,   105,     0,     0,
       0,    61,   106,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,    52,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     4,     0,    52,     0,    55,    56,    57,    58,    59,
      60,    53,     0,     0,     0,    54,     0,     0,     0,   334,
       0,     4,     0,     0,     0,    55,    56,    57,    58,    59,
      60,  -309,     0,     0,     0,     0,   136,     0,     0,    61,
     137,    64,    65,     0,    15,  -308,   136,     0,     0,     0,
     191,    62,    63,     0,    15,  -308,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -310,     0,     0,     0,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
     164,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174
};

static const yytype_int16 yycheck[] =
{
       1,    18,    61,    10,   286,   176,    52,    64,     9,   136,
     295,   232,   300,    52,    46,    52,   301,   305,    62,    63,
      64,    65,    66,    67,   381,     6,    52,   312,   410,    64,
      11,   227,    49,    50,   255,    61,   193,   233,    71,   436,
     312,    64,   274,   403,     7,    68,   183,    72,   185,    72,
      72,    52,   109,   285,    17,   340,   338,   312,    90,   186,
      61,    62,    63,    64,    65,    66,    67,   312,   340,   312,
     109,   312,   109,   433,     9,   271,   109,   474,   137,   114,
     462,   140,   141,    29,   109,   340,   243,   109,   445,   446,
      25,   273,   380,   273,   273,   340,   381,   340,    46,   340,
     144,   145,   146,   162,   392,   287,   123,   287,   287,   381,
      23,    78,   239,    24,    90,    91,    68,   402,    85,    95,
     247,    73,   139,   182,    68,   151,   381,     0,    72,   486,
     176,   112,   191,   179,    88,    89,   381,     6,   381,   312,
     381,   110,    11,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   372,   163,    74,    75,    36,   377,   340,   312,    40,
     312,    82,    83,   445,   446,   176,    65,   236,   179,    68,
     468,   227,    46,   471,   472,   473,   109,   233,    72,   437,
     445,   446,   193,   441,    86,    87,   340,   241,   340,    65,
     445,   446,   445,   446,   445,   446,   110,   495,   381,   113,
     110,    68,    72,   113,   486,    72,   152,   153,   154,   155,
     110,    96,    97,   113,   512,   271,   227,   509,    68,    86,
      87,   486,   233,    71,   519,   523,   524,   381,   526,   381,
     241,   486,   243,   486,    68,   486,   534,   519,    72,   470,
      92,   252,    93,   541,   110,   537,    84,   113,    94,   480,
      80,    81,    86,    87,   519,    15,   273,   326,    86,    87,
     271,   330,   445,   446,   519,   334,   519,    15,   519,    68,
     287,    86,    87,    64,   301,   456,   147,   148,   156,   157,
     307,   149,   150,   310,   295,    72,    68,    65,   109,    22,
     301,   445,   446,   445,   446,     4,   109,    71,    68,     8,
      64,   312,    69,   486,    13,    68,    65,   376,    65,    18,
      64,    69,    68,   382,    69,   496,   385,   386,   387,    68,
     389,    62,    63,    64,    65,    66,    67,    79,   397,   340,
     109,   112,   486,    69,   486,    65,   519,    46,    69,    71,
      69,   410,    69,    69,     3,    65,    65,    56,    57,    58,
      59,    60,    61,    62,    63,    46,   109,    16,    64,   109,
     371,   372,   113,    64,    64,   519,   377,   519,    27,   109,
     381,    30,    31,    32,    64,   444,    35,    64,    64,    38,
      39,    64,    64,    64,   109,    44,   109,   109,    46,    48,
     417,   402,   109,   462,    69,   464,   465,   109,   535,   536,
     456,   109,   111,   144,   145,   146,   147,   148,   149,   150,
     109,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   109,   163,    65,    46,   436,    71,    65,    71,    65,
      65,   500,    62,    63,    64,    65,    66,    67,   507,     4,
     496,    45,    64,     8,    70,   456,    68,    71,    13,    65,
      72,    65,   193,    18,    65,    65,    65,     7,    42,    71,
      68,    67,    64,   474,    86,    87,   114,    64,   109,   538,
     109,    17,   109,    71,    70,   109,   109,   109,    43,    65,
     109,    46,    64,    14,    65,   496,    65,    65,   109,   109,
     109,    56,    57,    58,    59,    60,    61,    62,    63,    65,
     241,    64,   243,    79,   109,    64,   109,    71,   519,   109,
      79,   252,    65,    65,   144,   145,   146,   147,   148,   149,
     150,   109,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   109,   163,   109,     4,     5,    65,   109,     8,
      11,    21,    41,    12,    13,   287,   307,   373,   519,    18,
      19,   340,    21,   510,   278,   444,   151,   381,   486,    28,
     512,   453,   185,   193,    33,   120,   158,    36,    37,    38,
      39,    40,    41,   160,   125,   252,    45,    46,    47,   159,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,   163,    -1,    -1,   161,
      -1,   175,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,   241,    -1,   243,    40,    -1,    -1,    86,    87,    -1,
      46,    -1,   252,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,     3,   112,     4,    -1,    -1,   116,     8,    -1,
      76,    77,    -1,    13,    -1,    16,    -1,    -1,    18,    -1,
      86,    87,    88,    89,    -1,    -1,    27,    -1,    28,    30,
      31,    32,    -1,    -1,    35,    -1,    36,    38,    39,    -1,
      40,    -1,    -1,    44,    -1,    -1,    46,    48,    -1,   115,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,     4,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    13,    76,    77,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    86,    87,
      50,    51,    52,    53,    54,    55,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    28,    -1,    -1,    76,    77,    -1,    -1,   109,
      36,    -1,    -1,    -1,    40,    86,    87,    88,    89,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    64,    36,
      66,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      76,    77,    -1,    50,    51,    52,    53,    54,    55,    -1,
      86,    87,    88,    89,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    28,    -1,    -1,    -1,    76,
      77,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    86,
      87,    88,    89,    46,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    64,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    28,    -1,    50,    51,    52,    53,    54,
      55,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,    64,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    73,    -1,    -1,    -1,    -1,    64,    -1,    -1,    64,
      68,    86,    87,    -1,    72,    73,    64,    -1,    -1,    -1,
      68,    76,    77,    -1,    72,    73,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    73,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      73,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    29,   151,   168,    46,   163,   164,   165,     0,    23,
     166,   167,   169,   170,   171,    72,   109,   163,   110,   172,
     173,   174,   175,   178,   213,   169,    46,    72,   109,   164,
       3,    16,    27,    30,    31,    32,    35,    38,    39,    44,
      48,   176,   177,   179,   175,    90,    64,   109,   177,     9,
      25,   109,    28,    36,    40,    50,    51,    52,    53,    54,
      55,    64,    76,    77,    86,    87,    88,    89,   152,   163,
     209,   265,   266,   267,   268,   270,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   300,   164,   164,     4,     8,    13,    18,    56,    57,
      58,    59,    60,    61,    62,    63,   154,   155,   156,   157,
     159,   160,   163,    72,   154,   163,   300,   163,   274,   276,
     280,   280,   280,   280,   280,   280,    64,    68,    65,    72,
      68,    71,    86,    87,    90,    91,    95,    88,    89,    96,
      97,    24,    74,    75,    82,    83,    80,    81,    92,    94,
      93,    84,    78,    85,    73,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   299,    15,   180,   182,    15,
     212,   214,    68,   271,   272,   271,    64,   164,    68,   269,
     273,    68,   273,    65,   209,   300,   109,   164,   300,   300,
     280,   280,   280,   285,   285,   286,   286,   154,   158,   159,
     162,   163,   287,   287,   287,   287,   288,   288,   289,   290,
     291,   292,   300,   293,   296,   159,   160,    22,   181,   183,
     159,   161,   109,    71,   300,   272,    68,   269,   209,    64,
      69,    65,    68,    65,   283,    65,    69,    64,    69,    68,
      68,    68,    79,   161,   184,   109,   112,   215,   302,   161,
      69,    65,   209,   280,    69,   283,   209,    69,    69,    69,
     295,    71,   185,   302,   173,   190,   197,   216,   217,   218,
     219,   220,    65,    65,   161,   173,   186,   187,   188,   189,
     190,   195,   197,   206,   220,   179,   109,   113,   303,   218,
      35,   179,   205,   303,   188,   109,    43,   153,   154,   158,
     196,   224,   302,   164,   204,   224,    46,   164,   191,   192,
     193,   164,     5,    12,    19,    21,    33,    37,    38,    39,
      41,    45,    47,    49,    64,   116,   153,   163,   208,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   244,   245,   249,   250,   255,   256,   257,
     258,   259,   261,   267,   275,   277,   278,   279,   281,   282,
     297,    64,    64,    71,   109,    68,    73,    64,    52,   109,
     109,    64,    64,   247,   300,    64,    64,    64,   300,    64,
      52,   109,   109,   300,   109,    46,   191,    68,   303,   226,
     109,   109,   111,   153,   199,   200,   201,   199,   192,    69,
      66,   194,   221,   300,   199,   109,   224,   153,   228,   233,
     246,   252,   254,   300,   109,   300,   300,   300,   109,   300,
     109,   224,    65,   153,   193,    65,    71,    65,   194,   222,
     223,    65,    45,   164,    70,    71,    65,    65,    65,    65,
      65,     7,   260,   262,   263,   193,    42,   198,   202,   201,
     198,    67,    71,   198,    64,   114,   247,   233,   109,   233,
     109,   109,   109,   109,    64,    17,   264,   263,   160,   203,
     109,   194,   300,   115,   251,   300,    70,   224,   109,   239,
     302,   224,   224,   224,   201,   109,    71,   210,   302,    65,
      64,    65,    65,   248,   253,   254,    14,     6,    11,   238,
     240,   241,   242,   243,    65,   224,   160,    36,    40,   207,
     211,   109,   300,   109,   109,    65,   109,   300,   301,    79,
     303,   241,   224,   243,   109,    64,    64,   208,    71,   224,
     224,   109,   224,    79,   109,   224,   209,   209,   303,   300,
     224,   109,    65,    65,    65,   109,   109
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   150,   151,   152,   152,   152,   152,   152,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   157,   157,   158,   158,   159,   160,
     161,   162,   162,   162,   163,   163,   164,   165,   166,   166,
     167,   167,   168,   169,   169,   170,   171,   172,   172,   173,
     173,   174,   174,   175,   175,   176,   176,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   179,
     179,   180,   180,   181,   181,   182,   183,   184,   184,   185,
     186,   186,   187,   187,   188,   188,   188,   189,   189,   189,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     196,   197,   197,   198,   198,   199,   199,   200,   200,   201,
     201,   202,   203,   203,   204,   205,   206,   207,   207,   208,
     208,   209,   209,   210,   211,   211,   212,   212,   213,   214,
     214,   215,   216,   216,   217,   217,   218,   218,   219,   220,
     221,   222,   222,   223,   223,   224,   225,   225,   226,   226,
     227,   228,   229,   229,   229,   229,   229,   229,   229,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     231,   232,   233,   233,   233,   233,   233,   233,   233,   234,
     235,   236,   237,   238,   238,   239,   240,   240,   241,   242,
     242,   243,   243,   244,   245,   246,   246,   247,   247,   248,
     248,   249,   250,   250,   251,   252,   252,   253,   254,   254,
     255,   255,   256,   256,   257,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   264,   265,   265,   266,   266,
     266,   266,   266,   266,   266,   267,   268,   268,   269,   269,
     270,   270,   271,   271,   272,   273,   273,   274,   274,   275,
     275,   275,   276,   276,   277,   277,   277,   277,   278,   279,
     280,   280,   280,   280,   280,   281,   282,   283,   283,   283,
     283,   284,   284,   284,   285,   285,   285,   285,   286,   286,
     286,   287,   287,   287,   288,   288,   288,   288,   288,   288,
     289,   289,   289,   290,   290,   291,   291,   292,   292,   293,
     293,   294,   294,   295,   295,   296,   296,   297,   298,   298,
     298,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   300,   301,   302,   303
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
#line 404 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_UNIT, 3);   }
#line 2126 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 409 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_INTLITERAL, (yyvsp[0]. node ));   }
#line 2132 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 411 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FLOATLITERAL, (yyvsp[0]. node ));   }
#line 2138 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 413 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_BOOLLITERAL, (yyvsp[0]. node ));   }
#line 2144 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 415 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STRINGLITERAL, (yyvsp[0]. node ));   }
#line 2150 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 417 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CHARLITERAL, (yyvsp[0]. node ));   }
#line 2156 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 419 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULLLITERAL, (yyvsp[0]. node ));   }
#line 2162 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 430 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_BOOLEAN, (yyvsp[0]. node ));    }
#line 2168 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 440 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT8, (yyvsp[0]. node ));    }
#line 2174 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 442 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2180 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 444 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT32, (yyvsp[0]. node ));    }
#line 2186 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 446 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT64, (yyvsp[0]. node ));    }
#line 2192 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 448 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2198 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 450 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT16, (yyvsp[0]. node ));    }
#line 2204 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 452 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2210 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 454 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2216 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 456 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2222 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 461 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_FLOAT, (yyvsp[0]. node ));    }
#line 2228 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 463 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_DOUBLE, (yyvsp[0]. node ));    }
#line 2234 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 473 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "InterfaceTypeList" */ );
        COMBINE(TOK_TYPE_CLASS, 2);
    }
#line 2243 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 489 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2251 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 493 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2259 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 497 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        beagle::Node *node = TOP();
        ++node->counter;
    }
#line 2268 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 510 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));    }
#line 2274 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 515 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        //PUSH(TOK_NAME, $3);
        //COMBINE(0, 1);
        beagle::Node *name = TOP();
        name->text += '.';
        name->text += (yyvsp[0]. node );
    }
#line 2286 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 533 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ImportDeclarations" */ );   }
#line 2292 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 539 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORTS, 1);   }
#line 2298 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 541 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2304 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 555 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORT, 1);   }
#line 2310 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 560 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_IMPORT_ALL, 1);
    }
#line 2318 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 572 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "AnnotationDeclarations" */ );   }
#line 2324 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 577 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATIONS, 1);   }
#line 2330 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 579 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2336 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 584 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATION, 2);   }
#line 2342 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 586 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "ArgumentList" */ );
		COMBINE(TOK_ANNOTATION, 2);
	}
#line 2351 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 594 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MODIFIERS, 1);   }
#line 2357 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 596 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2363 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 601 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PUBLIC, (yyvsp[0]. node ));   }
#line 2369 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 603 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PROTECTED, (yyvsp[0]. node ));   }
#line 2375 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 605 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PRIVATE, (yyvsp[0]. node ));   }
#line 2381 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 607 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STATIC, (yyvsp[0]. node ));   }
#line 2387 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 609 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ABSTRACT, (yyvsp[0]. node ));   }
#line 2393 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 611 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FINAL, (yyvsp[0]. node ));   }
#line 2399 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 613 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NATIVE, (yyvsp[0]. node ));   }
#line 2405 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 615 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_READLOCK, (yyvsp[0]. node ));   }
#line 2411 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 617 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_WRITELOCK, (yyvsp[0]. node ));   }
#line 2417 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 619 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_TRANSIENT, (yyvsp[0]. node ));   }
#line 2423 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 621 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOLATILE, (yyvsp[0]. node ));   }
#line 2429 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 626 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CLASS, 6);   }
#line 2435 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 631 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Modifiers" */ );   }
#line 2441 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 636 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Super" */ );   }
#line 2447 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 641 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Interfaces" */ );   }
#line 2453 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 655 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2459 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 657 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2465 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 666 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ClassBodyDeclarations" */ );   }
#line 2471 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 671 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2477 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 673 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2483 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 690 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FIELD, 4);   }
#line 2489 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 695 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLES, 1);   }
#line 2495 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 697 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2501 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 702 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "VariableInitializer" */ );
        COMBINE(TOK_VARIABLE, 2);
    }
#line 2510 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 707 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2516 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 712 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));   }
#line 2522 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 723 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2528 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 729 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOID, (yyvsp[0]. node ));   }
#line 2534 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 735 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2540 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 737 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2546 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 743 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Throws" */ );   }
#line 2552 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 749 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "FormalParameterList" */ );   }
#line 2558 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 753 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETERS, 1);   }
#line 2564 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 755 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2570 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 760 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETER, 2);   }
#line 2576 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 762 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_PARAMETER, 2);
        ++TOP()->counter;
    }
#line 2585 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 776 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROWS, 1);   }
#line 2591 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 778 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2597 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 787 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_STATIC_INIT, 1);   }
#line 2603 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 792 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CONSTRUCTOR, 6);   }
#line 2609 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 797 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ExplicitConstructorInvocation" */ );   }
#line 2615 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 802 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "BlockStatements" */ );   }
#line 2621 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 807 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ArgumentList" */ );   }
#line 2627 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 812 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 2);   }
#line 2633 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 817 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_THIS;   }
#line 2639 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 819 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_SUPER;   }
#line 2645 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 824 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ExtendsInterfaces" */ );   }
#line 2651 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 829 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INTERFACE, 5);   }
#line 2657 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 834 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2663 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 836 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2669 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 845 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "InterfaceMemberDeclarations" */ );   }
#line 2675 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 850 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2681 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 852 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2687 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 866 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "MethodBody" */ );
        COMBINE(0, 1);
    }
#line 2696 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 878 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "VariableInitializers" */ ); }
#line 2702 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 883 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARRAY, 1);   }
#line 2708 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 885 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2714 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 894 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BLOCK, 1);   }
#line 2720 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 896 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2726 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 910 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2732 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 939 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PASS, (yyvsp[-1]. node ));   }
#line 2738 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 958 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "Block" */ );
		COMBINE(TOK_IF, 3);
	}
#line 2747 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 966 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_BLOCK, 1);
		PUSH(TOK_NULL, NULL /* "Block" */ );
		COMBINE(TOK_IF, 3);
	}
#line 2757 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 975 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IF, 3);   }
#line 2763 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 980 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SWITCH, 2);   }
#line 2769 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 985 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "SwitchBlockStatementGroups" */ );   }
#line 2775 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 994 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2781 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 996 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2787 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 1001 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GROUP, 2);   }
#line 2793 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 1006 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2799 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 1008 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2805 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 1013 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CASE, 1);   }
#line 2811 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 1015 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_DEFAULT, (yyvsp[-2]. node ));
		COMBINE(TOK_CASE, 1);
	}
#line 2820 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1023 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_WHILE, 2);   }
#line 2826 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1029 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DO, 2);   }
#line 2832 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1034 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ForInit" */ );   }
#line 2838 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1039 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Expression" */ );   }
#line 2844 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1044 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ForUpdate" */ );   }
#line 2850 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1049 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR, 4);   }
#line 2856 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1054 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2862 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1056 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2868 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1061 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RANGE, 2);   }
#line 2874 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1075 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2880 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1077 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2886 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1082 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_BREAK, 1);
	}
#line 2895 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 1087 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_BREAK, 1);
	}
#line 2904 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1095 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2913 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1100 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2922 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1108 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RETURN, 1);   }
#line 2928 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 1114 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROW, 1);   }
#line 2934 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1119 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2940 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1121 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2946 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1126 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Catches" */ );   }
#line 2952 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1131 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "finally" */ );
		COMBINE(TOK_TRY, 3);
	}
#line 2961 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1136 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TRY, 3);   }
#line 2967 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1141 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2973 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1143 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2979 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1148 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CATCH, 2);   }
#line 2985 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 1153 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_FINALLY;   }
#line 2991 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 1164 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_THIS, (yyvsp[0]. node ));   }
#line 2997 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 1174 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW, 2);   }
#line 3003 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 236:
#line 1179 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARGUMENTS, 1);   }
#line 3009 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1181 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3015 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 1186 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Dims" */ );   }
#line 3021 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1191 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
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
#line 3059 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 1225 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW_ARRAY, 3);   }
#line 3065 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1230 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 3071 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1232 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3077 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 1242 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_TYPE_ARRAY, "");
		TOP()->counter = 1;
	}
#line 3086 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1247 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3094 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1253 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_FIELD, 2);   }
#line 3100 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 248:
#line 1255 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_SUPER, (yyvsp[-2]. node ));
		COMBINE(TOK_ACCESS_FIELD, 2);
	}
#line 3109 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1263 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_NULL, NULL /* "Primary" */ );
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	}
#line 3125 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 250:
#line 1275 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CALL, 3);   }
#line 3131 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1277 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
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
#line 3154 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 252:
#line 1299 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3160 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1301 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3166 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 258:
#line 1313 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3172 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 259:
#line 1318 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3178 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 262:
#line 1325 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 1);   }
#line 3184 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 263:
#line 1327 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 1);   }
#line 3190 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 265:
#line 1333 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3196 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 266:
#line 1338 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3202 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1344 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TILDE, 1);   }
#line 3208 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 269:
#line 1346 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BANG, 1);   }
#line 3214 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1353 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *first, *second, *third;

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
#line 3238 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 272:
#line 1373 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CAST, 2);   }
#line 3244 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1375 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
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
#line 3262 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 275:
#line 1393 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MUL, 2);   }
#line 3268 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1395 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DIV, 2);   }
#line 3274 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1397 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MOD, 2);   }
#line 3280 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 279:
#line 1403 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 2);   }
#line 3286 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 280:
#line 1405 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 2);   }
#line 3292 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1411 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHL, 2);   }
#line 3298 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 283:
#line 1413 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHR, 2);   }
#line 3304 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 285:
#line 1419 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LT, 2);   }
#line 3310 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1421 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GT, 2);   }
#line 3316 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 287:
#line 1423 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LE, 2);   }
#line 3322 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 288:
#line 1425 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GE, 2);   }
#line 3328 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 289:
#line 1427 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INSTANCEOF, 2);   }
#line 3334 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 291:
#line 1433 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_EQ, 2);   }
#line 3340 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 292:
#line 1435 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NE, 2);   }
#line 3346 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 294:
#line 1441 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_AND, 2);   }
#line 3352 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 296:
#line 1447 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CARET, 2);   }
#line 3358 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 298:
#line 1453 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OR, 2);   }
#line 3364 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 300:
#line 1459 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANDAND, 2);   }
#line 3370 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 302:
#line 1465 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OROR, 2);   }
#line 3376 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 304:
#line 1471 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_QUEST, 2);   }
#line 3382 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1481 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
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
#line 3403 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 311:
#line 1507 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ASN, (yyvsp[0]. node ));   }
#line 3409 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 312:
#line 1509 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MUASN, (yyvsp[0]. node ));   }
#line 3415 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 313:
#line 1511 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_DIASN, (yyvsp[0]. node ));   }
#line 3421 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 314:
#line 1513 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MODASN, (yyvsp[0]. node ));   }
#line 3427 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 315:
#line 1515 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PLASN, (yyvsp[0]. node ));   }
#line 3433 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 316:
#line 1517 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MIASN, (yyvsp[0]. node ));   }
#line 3439 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 317:
#line 1519 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SLASN, (yyvsp[0]. node ));   }
#line 3445 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 318:
#line 1521 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SRASN, (yyvsp[0]. node ));   }
#line 3451 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 319:
#line 1523 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ANDASN, (yyvsp[0]. node ));   }
#line 3457 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 320:
#line 1525 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CARETASN, (yyvsp[0]. node ));   }
#line 3463 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 321:
#line 1527 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ORASN, (yyvsp[0]. node ));   }
#line 3469 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3473 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1547 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


