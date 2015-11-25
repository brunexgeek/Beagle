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
    TOK_IDENT = 302,
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
    TOK_NONE = 376,
    TOK_BODY = 377,
    TOK_FIELD = 378,
    TOK_METHOD = 379,
    TOK_CONSTRUCTOR = 380,
    TOK_LIST = 381,
    TOK_VARIABLE = 382,
    TOK_MODIFIERS = 383,
    TOK_UNIT = 384,
    TOK_TYPE = 385,
    TOK_MEMBER = 386,
    TOK_IMPORT_ALL = 387,
    TOK_STATIC_INIT = 388,
    TOK_PARAMETER = 389,
    TOK_BLOCK = 390,
    TOK_CALL = 391,
    TOK_FIELD_ACCESS = 392,
    TOK_CAST = 393,
    TOK_ARRAY_ACCESS = 394,
    TOK_FOR_EACH = 395,
    TOK_GROUP = 396,
    TOK_ANNOTATION = 397,
    TOK_NEW_ARRAY = 398
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 167 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */

    char* node;

#line 305 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 319 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:358  */
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
        temp->addChild( stack[i] );
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


#define scanner              parserContext->scanner
#define PUSH(token,value)    beagle_push( parserContext, (token), (value) )
#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)


#line 412 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYLAST   1154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  157
/* YYNRULES -- Number of rules.  */
#define YYNRULES  332
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  561

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   398

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
     135,   136,   137,   138,   139,   140,   141,   142,   143
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   393,   393,   397,   399,   401,   403,   405,   407,   412,
     413,   417,   418,   423,   424,   428,   430,   432,   434,   436,
     438,   440,   442,   444,   446,   448,   453,   455,   460,   461,
     465,   470,   475,   479,   483,   487,   491,   499,   500,   504,
     509,   517,   522,   523,   527,   528,   533,   535,   540,   545,
     546,   550,   555,   562,   563,   567,   568,   572,   574,   579,
     581,   589,   591,   596,   598,   600,   602,   604,   606,   608,
     610,   612,   614,   616,   621,   626,   627,   631,   632,   636,
     637,   642,   646,   650,   652,   657,   661,   662,   666,   668,
     673,   674,   675,   679,   680,   681,   685,   690,   692,   697,
     702,   707,   709,   713,   714,   718,   724,   730,   732,   738,
     739,   744,   745,   748,   750,   755,   757,   765,   769,   770,
     774,   778,   783,   788,   789,   793,   794,   798,   799,   803,
     808,   810,   815,   816,   820,   825,   827,   832,   836,   837,
     841,   843,   848,   849,   853,   857,   864,   864,   866,   866,
     868,   871,   872,   876,   880,   882,   887,   888,   892,   896,
     901,   902,   903,   904,   905,   906,   907,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   925,   930,
     934,   935,   936,   937,   938,   939,   940,   944,   952,   961,
     966,   971,   972,   976,   980,   982,   987,   992,   994,   999,
    1001,  1009,  1015,  1020,  1021,  1025,  1026,  1030,  1031,  1035,
    1040,  1042,  1047,  1052,  1053,  1057,  1061,  1063,  1068,  1073,
    1081,  1086,  1094,  1100,  1105,  1107,  1112,  1113,  1117,  1122,
    1127,  1129,  1134,  1139,  1144,  1145,  1149,  1150,  1152,  1153,
    1154,  1155,  1156,  1160,  1165,  1167,  1172,  1173,  1177,  1211,
    1216,  1218,  1223,  1228,  1233,  1239,  1241,  1249,  1261,  1263,
    1285,  1287,  1292,  1293,  1294,  1295,  1299,  1304,  1309,  1310,
    1311,  1313,  1315,  1319,  1324,  1329,  1330,  1332,  1334,  1339,
    1359,  1364,  1365,  1367,  1369,  1374,  1375,  1377,  1382,  1383,
    1385,  1390,  1391,  1393,  1395,  1397,  1399,  1404,  1405,  1407,
    1412,  1413,  1418,  1419,  1424,  1425,  1430,  1431,  1436,  1437,
    1442,  1443,  1448,  1449,  1453,  1473,  1474,  1475,  1479,  1481,
    1483,  1485,  1487,  1489,  1491,  1493,  1495,  1497,  1499,  1504,
    1508,  1512,  1516
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
  "TOK_VOID", "TOK_VOLATILE", "TOK_WHILE", "TOK_IDENT", "TOK_CONTINUE",
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
  "TOK_NONE", "TOK_BODY", "TOK_FIELD", "TOK_METHOD", "TOK_CONSTRUCTOR",
  "TOK_LIST", "TOK_VARIABLE", "TOK_MODIFIERS", "TOK_UNIT", "TOK_TYPE",
  "TOK_MEMBER", "TOK_IMPORT_ALL", "TOK_STATIC_INIT", "TOK_PARAMETER",
  "TOK_BLOCK", "TOK_CALL", "TOK_FIELD_ACCESS", "TOK_CAST",
  "TOK_ARRAY_ACCESS", "TOK_FOR_EACH", "TOK_GROUP", "TOK_ANNOTATION",
  "TOK_NEW_ARRAY", "$accept", "Goal", "Literal", "Type", "PrimitiveType",
  "NumericType", "IntegralType", "FloatingPointType", "ReferenceType",
  "ClassOrInterfaceType", "ClassType", "InterfaceType", "ArrayType",
  "Name", "SimpleName", "QualifiedName", "CompilationUnit",
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
     395,   396,   397,   398
};
# endif

#define YYPACT_NINF -426

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-426)))

#define YYTABLE_NINF -318

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    10,    89,  -426,    91,  -426,  -426,   -30,  -426,  -426,
    -426,    10,    23,    91,  -426,  -426,  -426,    74,  -426,   -23,
      10,  -426,   326,    23,  -426,  -426,  -426,  -426,  -426,    -5,
    -426,   -49,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,   326,  -426,    29,  -426,    57,   920,  -426,
    -426,    10,    10,  -426,   974,    96,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,   669,   920,   920,   920,   920,   920,   920,
    -426,  1046,   107,   106,   132,  -426,   149,  -426,   424,  -426,
     912,   -15,  -426,  -426,  -426,  -426,  -426,  -426,  -426,    39,
     118,   116,     9,   145,   130,   136,   139,   151,   -38,  -426,
    -426,  -426,  1025,  -426,   225,   232,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
     192,  -426,  -426,  -426,   192,   197,    24,    10,   195,   199,
      44,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,   920,
     920,   162,    10,   920,   920,  -426,  -426,   920,   920,   920,
     920,   920,   920,   920,   974,   920,   920,   920,   920,   920,
     920,   920,   920,   920,   920,   920,   920,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,   920,    10,
     256,  -426,    10,   170,   215,   920,   192,  -426,   219,   920,
      10,   224,   220,   227,   228,  1030,   233,   230,  -426,   229,
     231,  -426,  -426,  -426,  -426,    39,    39,   118,   118,   234,
    -426,  -426,   235,    69,   116,   116,   116,   116,     9,     9,
     145,   130,   136,   139,   218,   151,  -426,  -426,  -426,    10,
     198,  -426,  -426,  -426,   194,    10,   239,  -426,   802,  -426,
     244,  -426,   -25,   920,  -426,   920,   241,  -426,  -426,  -426,
     920,  -426,   245,   248,   252,   920,   259,   194,  -426,  -426,
      72,  -426,  -426,  -426,    10,  -426,   258,  -426,  -426,   266,
    -426,  -426,  -426,  -426,  -426,    77,   326,  -426,   223,   221,
      79,  -426,  -426,  -426,  -426,  -426,  -426,  1073,   221,    88,
    -426,  -426,  -426,  -426,   226,  -426,  -426,   428,  -426,  -426,
    -426,  -426,   194,   428,  -426,  -426,  -426,   194,  -426,   287,
     234,  -426,    10,  -426,   563,   272,  -426,  -426,   -34,   274,
     -32,  -426,    22,   275,   -41,   236,   278,   279,   920,   282,
     285,   288,   920,   295,   -39,   251,   920,   254,   320,   596,
     221,  -426,   563,  -426,  -426,   267,  -426,  -426,  -426,  -426,
     270,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,    97,   137,   -15,   142,   155,
    -426,  -426,  -426,   366,   366,   320,  -426,   298,   847,   366,
     273,  -426,   194,   735,   920,   276,  -426,   920,   920,   920,
     277,   920,   280,  -426,   194,   303,  -426,  -426,   304,   876,
    -426,  -426,  -426,  -426,   974,   320,   322,   317,  -426,   328,
    -426,  -426,   847,  -426,  -426,  -426,   329,  -426,   346,   287,
    -426,  -426,   330,  -426,   325,   333,  -426,   334,   344,   345,
    -426,   348,  -426,   405,  -426,   320,   347,   372,   366,   372,
    -426,   361,   362,   372,   370,   323,   920,  1010,   773,   332,
     335,   338,   339,   374,   423,    32,  -426,   347,    10,   341,
    -426,  -426,  -426,  -426,   376,   847,  -426,   920,   601,   381,
    -426,   194,   354,   194,   194,   194,   194,   366,   355,  -426,
    -426,  -426,   382,   194,  -426,  -426,   390,   401,   402,   403,
    1010,   453,  -426,  -426,   117,  -426,  -426,  -426,   404,   194,
      10,  -426,    70,   363,   920,   364,   367,   413,  -426,   325,
     373,   920,   391,   221,   117,  -426,    19,  -426,   383,  -426,
    -426,   415,   417,   563,  -426,  -426,   412,   194,   194,   384,
     194,  -426,   416,   385,  -426,  -426,  -426,  -426,   194,   920,
     920,   221,   920,  -426,  -426,   194,  -426,   387,  -426,  -426,
     441,   452,  -426,   454,  -426,  -426,   411,   425,  -426,  -426,
    -426
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      43,     0,     0,     2,    45,    42,    39,     0,    37,    38,
       1,     0,    56,    44,    46,    49,    50,     0,    48,     0,
       0,    41,    76,    55,    57,    53,    54,    47,    40,     0,
      51,     0,    67,    68,    69,    65,    64,    63,    66,    70,
      71,    73,    72,    75,    61,     0,    58,     0,   128,    60,
      62,     0,     0,    52,     0,     0,   237,     8,     5,     3,
       7,     4,     6,     0,     0,     0,     0,     0,     0,     0,
     236,   263,     0,   262,   234,   239,   127,   235,   240,   241,
     242,   275,   264,   265,   281,   268,   269,   272,   278,   285,
     288,   291,   297,   300,   302,   304,   306,   308,   310,   312,
     329,   313,     0,   244,    78,   133,    12,    25,    27,    26,
      23,    24,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    11,    13,    14,    32,     0,    30,     0,   247,     0,
     263,   240,   242,   277,   276,   273,   274,   270,   271,   128,
       0,     0,     0,     0,     0,   266,   267,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,   322,   323,
     319,   320,   326,   328,   327,   324,   325,   321,     0,     0,
      80,    77,     0,     0,   132,     0,   248,   250,   247,   128,
       0,   256,     0,     0,   246,   238,     0,     0,    59,   255,
       0,   245,   282,   283,   284,   286,   287,   289,   290,     0,
     296,    28,    29,    30,   292,   293,   294,   295,   298,   299,
     301,   303,   305,   307,     0,   309,   314,    32,    81,     0,
       0,    79,    33,   135,     0,     0,     0,   251,     0,   249,
       0,    83,     0,   128,   253,     0,     0,   280,   257,   260,
     128,   261,     0,     0,     0,     0,    82,     0,   331,   134,
      56,   136,   252,   243,     0,    31,     0,   279,   254,     0,
      34,    36,    35,   311,    74,    56,    76,   144,     0,     0,
      56,   140,   142,   143,    84,   259,   258,    76,     0,    56,
      88,    90,    93,    94,     0,    92,    95,     0,   145,   332,
     137,   141,    66,     0,    91,    85,    89,   145,   106,     0,
       9,    10,     0,   121,   126,    37,   105,   120,   101,     0,
       0,    97,    99,     0,     0,     0,     0,     0,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   315,
       0,   167,   125,   154,   156,     0,   157,   160,   177,   168,
       0,   161,   162,   163,   169,   164,   170,   165,   166,   171,
     172,   173,   175,   174,   176,   186,   185,     0,   183,   184,
     181,   182,   180,   112,   112,     0,    96,     0,     0,   112,
       0,   219,     0,   204,     0,     0,   205,     0,     0,     0,
       0,     0,     0,   221,     0,     0,   178,   101,   159,     0,
     153,   155,   158,   179,     0,     0,     0,   111,   113,     0,
      98,   102,   147,   100,   104,   103,     0,   218,     0,     0,
     214,   216,     0,   203,   213,     0,   222,     0,     0,     0,
     223,     0,   220,   227,   238,     0,   115,   110,     0,   110,
     151,   149,   146,   110,     0,     0,   206,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   230,   116,     0,     0,
     109,   114,   107,   148,     0,     0,   108,     0,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,   229,
     231,   118,   117,     0,   150,   152,     0,     0,     0,     0,
     208,   187,   188,   190,   192,   224,   225,   201,     0,     0,
       0,   122,   124,     0,     0,     0,     0,     0,   207,   215,
       0,     0,     0,     0,   191,   194,     0,   197,     0,   233,
     119,     0,     0,   126,   123,   202,     0,     0,     0,     0,
       0,   330,     0,     0,   193,   195,   196,   198,     0,   128,
     128,     0,     0,   211,   210,     0,   189,     0,   200,   232,
       0,     0,   129,     0,   209,   199,     0,     0,   212,   131,
     130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -426,  -426,  -426,  -288,   -27,  -426,  -426,  -426,   379,   -53,
    -175,  -158,  -426,    -1,   -17,  -426,  -426,  -426,  -426,  -426,
    -426,   521,  -426,  -426,  -426,    -7,  -426,   513,  -426,   494,
    -426,  -231,  -426,  -426,  -426,  -426,   309,  -426,  -426,  -426,
     250,  -426,  -229,   253,   165,  -373,  -375,  -426,  -426,  -201,
    -298,  -199,  -426,  -425,  -426,  -426,  -426,  -426,  -426,  -426,
      36,  -131,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
     281,  -426,  -181,  -426,  -426,  -426,  -426,  -279,  -426,   222,
    -426,   180,  -426,  -426,  -426,  -426,  -372,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,    51,  -426,    50,  -426,  -426,  -426,
     123,  -426,  -426,  -426,  -426,  -426,  -426,    80,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,   119,  -426,  -426,  -426,
    -244,  -426,   389,  -426,   448,   -66,  -426,   353,  -209,   394,
    -178,  -174,  -171,   -47,  -142,  -127,   378,  -426,   102,   105,
      61,   125,   418,   421,   422,   414,   420,  -426,   336,   409,
     -92,  -426,  -426,   -61,  -426,  -228,  -281
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    70,   405,   310,   121,   122,   123,   311,   211,
     125,   241,   212,    71,     8,     9,     3,     4,    12,    13,
       5,    14,    15,    16,    21,   276,    23,    24,    43,    44,
      25,    45,   180,   230,   181,   231,   242,   274,   288,   289,
     290,   291,   277,   398,   321,   322,   413,   293,   312,   278,
     459,   406,   407,   408,   460,   482,   316,   304,   295,   523,
     340,    72,   501,   524,   183,    26,   184,   259,   279,   280,
     281,   282,   283,   441,   464,   414,   442,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   513,   493,   514,   515,   516,   517,   355,   356,   422,
     385,   507,   357,   358,   488,   423,   508,   424,   359,   360,
     361,   362,   363,   454,   364,   455,   456,   479,    73,    74,
      75,    76,   193,    77,   186,   187,   194,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   178,   103,   532,   314,   300
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   124,   129,    31,   228,    22,   260,   305,   196,   309,
      19,   421,   380,   461,   392,   309,    48,   133,   134,   135,
     136,   137,   138,   313,   233,   511,   338,   120,   317,   275,
     512,   -39,   436,   154,   104,   105,   128,   440,    51,   453,
     375,   165,    28,    17,     1,   297,   292,   264,   166,  -226,
      29,   265,   498,   126,   338,    52,   303,     6,   240,   400,
     292,    49,   457,   130,   130,   130,   130,   130,   130,   381,
     365,   393,   145,   146,   294,   470,   472,   261,   376,   197,
      18,   -39,   200,   201,   155,   156,    47,    30,   294,    10,
     485,   377,   157,   158,   296,   419,   378,    17,   365,   190,
     202,   203,   204,   418,   224,   366,   284,   521,   296,   139,
     191,   522,   266,   140,    11,   433,   435,    17,   421,   269,
     237,    28,   237,   511,   236,   199,   227,   209,   512,   232,
     147,   148,   258,   366,    20,   149,   367,   232,   254,   365,
     368,   462,    17,   369,   190,   466,   130,   130,   130,   130,
     130,   130,   130,   213,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   367,   130,  -239,    53,   368,   127,
    -239,   369,   370,   141,   366,   409,   232,   236,   126,   142,
     416,   126,   232,    20,  -239,  -239,  -139,   371,    20,   126,
      20,   -87,   491,  -138,   130,   495,   496,   497,   267,    20,
     370,   143,   -86,   365,   365,   367,  -241,   150,   151,   368,
    -241,   232,   369,   152,   153,   371,   214,   215,   216,   217,
     519,   144,   372,   161,  -241,  -241,   159,   160,   126,  -264,
    -264,   162,   534,   163,   126,   338,   164,   536,   366,   366,
     179,   370,  -265,  -265,   130,   494,   365,   182,   543,   544,
     372,   546,   205,   206,   130,   502,   371,   207,   208,   549,
     552,   185,   189,   126,   192,   195,   554,   386,   287,   367,
     367,   390,   198,   368,   368,   395,   369,   369,   229,   365,
     234,   366,   287,   481,   218,   219,   315,   235,   238,   243,
     244,   372,   319,   245,   250,   323,   213,   246,   255,   248,
     249,   251,   213,   252,   253,   370,   370,   258,   257,   262,
     263,   268,   367,   339,   366,   270,   368,   415,   271,   369,
     371,   371,   272,   425,   285,   520,   427,   428,   429,    32,
     431,   264,   286,   298,   318,   299,   307,   373,   197,   374,
     379,   339,    33,   383,   384,   367,   382,   387,   370,   368,
     388,   415,   369,   389,    34,   372,   372,    35,    36,    37,
     391,   394,    38,   371,   396,    39,    40,   397,   411,   434,
     106,    41,   213,   213,   107,    42,   375,   402,   213,   108,
     403,   370,   339,   417,   109,   386,   426,   430,   437,   438,
     432,   110,   444,   111,   439,   443,   371,   447,   372,   448,
     449,   446,   445,   213,   415,   227,   486,   489,   550,   551,
     450,   451,   453,     6,   452,   458,   377,   131,   131,   131,
     131,   131,   131,   112,   113,   114,   115,   116,   117,   118,
     119,   372,   106,   463,   465,   467,   107,   213,   468,   477,
     478,   108,   473,   526,   484,   474,   109,   227,   475,   476,
     531,   483,   490,   110,   500,   111,   503,   126,   132,   132,
     132,   132,   132,   132,   492,   499,   504,   510,   505,   506,
     518,   533,   308,   525,   527,     6,   213,   528,   404,   529,
     539,   553,   540,   530,   542,   112,   113,   114,   115,   116,
     117,   118,   119,   538,   545,   548,   547,   555,  -316,   126,
     131,   131,   131,   131,   131,   131,   131,   556,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   557,   131,
     558,   559,   339,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,   210,    27,   560,    46,    50,   256,   306,
     410,   132,   132,   132,   132,   132,   132,   132,   131,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   541,
     132,   301,   320,   420,   401,   535,   537,   106,   324,   469,
     509,   107,   188,   247,   480,   325,   108,   239,   223,   220,
       0,   109,   326,   221,   327,   222,   225,   226,   110,   132,
     111,   273,    54,     0,     0,     0,     0,   328,   131,     0,
      55,   329,   330,   331,    56,   332,     0,     0,   131,   333,
       6,   334,     0,   335,    57,    58,    59,    60,    61,    62,
     112,   113,   114,   115,   116,   117,   118,   119,   336,     0,
      54,     0,     0,     0,     0,     0,     0,     0,    55,   132,
       0,     0,    56,   -30,     0,     0,     0,     0,     6,   132,
      66,    67,    57,    58,    59,    60,    61,    62,     0,     0,
       0,   139,     0,     0,     0,   399,    63,     0,     0,    17,
       0,   190,     0,   106,     0,     0,   258,   107,    64,    65,
     337,     0,   108,  -263,  -263,     0,     0,   109,    66,    67,
      68,    69,     0,     0,   110,     0,   111,     0,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     6,   487,     0,     0,
      57,    58,    59,    60,    61,    62,   112,   113,   114,   115,
     116,   117,   118,   119,    63,     0,     0,     0,     0,   106,
       0,     0,     0,   107,     0,     0,    64,    65,   108,     0,
       0,     0,     0,   109,     0,     0,    66,    67,    68,    69,
     110,     0,   111,     0,    54,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,    56,     0,     0,     0,
       0,     0,     6,     0,     0,     0,    57,    58,    59,    60,
      61,    62,   112,   113,   114,   115,   116,   117,   118,   119,
     336,     0,    54,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,    56,     0,     0,     0,     0,     0,
       6,     0,    66,    67,    57,    58,    59,    60,    61,    62,
       0,    54,     0,     0,     0,     0,     0,     0,   336,    55,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     6,
       0,     0,     0,    57,    58,    59,    60,    61,    62,     0,
      66,    67,     0,     0,     0,     0,     0,    63,     0,     0,
       0,     0,   244,     0,     0,     0,    54,     0,     0,    64,
      65,     0,     0,   471,    55,     0,     0,     0,    56,    66,
      67,    68,    69,     0,     6,     0,     0,     0,    57,    58,
      59,    60,    61,    62,     0,    54,     0,     0,     0,     0,
       0,     0,    63,    55,   412,     0,     0,    56,     0,     0,
       0,     0,     0,     6,    64,    65,     0,    57,    58,    59,
      60,    61,    62,     0,    66,    67,    68,    69,     0,     0,
       0,    63,     0,     0,     0,     0,   272,     0,     0,    54,
       0,     0,     0,    64,    65,     0,     0,    55,     0,     0,
       0,    56,     0,    66,    67,    68,    69,     6,     0,     0,
       0,    57,    58,    59,    60,    61,    62,     0,   106,     0,
       0,     0,   107,     0,     0,    63,  -317,   108,     0,     0,
       0,     0,   109,     0,     0,     0,     0,    64,    65,   110,
       0,   111,     0,     0,     0,     0,     0,    66,    67,    68,
      69,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   113,   114,   115,   116,   117,   118,   119,    54,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     6,     0,    54,
       0,    57,    58,    59,    60,    61,    62,    55,     0,     0,
       0,    56,     0,     0,     0,   336,    32,     6,     0,     0,
       0,    57,    58,    59,    60,    61,    62,     0,     0,    33,
       0,     0,     0,     0,     0,    63,     0,    66,    67,   167,
       0,    34,     0,     0,    35,    36,    37,    64,    65,   302,
       0,   139,    39,    40,     0,   140,     0,     0,    41,    17,
    -315,     0,    42,     0,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315
};

static const yytype_int16 yycheck[] =
{
       1,    54,    63,    20,   179,    12,   234,   288,   139,   297,
      11,   383,    53,   438,    53,   303,    65,    64,    65,    66,
      67,    68,    69,   302,   182,     6,   314,    54,   307,   257,
      11,    65,   405,    24,    51,    52,    63,   412,     9,     7,
      72,    79,    47,    73,    30,   276,   275,    72,    86,    17,
      73,    76,   477,    54,   342,    26,   287,    47,   189,   340,
     289,   110,   435,    64,    65,    66,    67,    68,    69,   110,
     314,   110,    87,    88,   275,   447,   448,   235,   110,   140,
     110,   115,   143,   144,    75,    76,    91,   110,   289,     0,
     465,    69,    83,    84,   275,   383,    74,    73,   342,    75,
     147,   148,   149,   382,   165,   314,   264,    37,   289,    65,
     127,    41,   243,    69,    23,   394,   404,    73,   490,   250,
     186,    47,   188,     6,   185,   142,   179,   154,    11,   182,
      91,    92,   113,   342,   111,    96,   314,   190,    69,   383,
     314,   439,    73,   314,    75,   443,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   342,   166,    69,   110,   342,    73,
      73,   342,   314,    66,   383,   374,   229,   238,   179,    73,
     379,   182,   235,   111,    87,    88,   114,   314,   111,   190,
     111,   114,   471,   114,   195,   474,   475,   476,   245,   111,
     342,    69,   114,   447,   448,   383,    69,    89,    90,   383,
      73,   264,   383,    97,    98,   342,   155,   156,   157,   158,
     499,    72,   314,    93,    87,    88,    81,    82,   229,    87,
      88,    95,   513,    94,   235,   523,    85,   516,   447,   448,
      15,   383,    87,    88,   245,   473,   490,    15,   527,   528,
     342,   530,   150,   151,   255,   483,   383,   152,   153,   538,
     541,    69,    65,   264,    69,    66,   545,   328,   275,   447,
     448,   332,   110,   447,   448,   336,   447,   448,    22,   523,
     110,   490,   289,   458,   159,   160,   303,    72,    69,    65,
      70,   383,   309,    66,    65,   312,   297,    69,    80,    66,
      70,    70,   303,    69,    69,   447,   448,   113,   110,    70,
      66,    70,   490,   314,   523,    70,   490,   378,    70,   490,
     447,   448,    70,   384,    66,   500,   387,   388,   389,     3,
     391,    72,    66,   110,    47,   114,   110,    65,   399,    65,
      65,   342,    16,    65,    65,   523,   110,    65,   490,   523,
      65,   412,   523,    65,    28,   447,   448,    31,    32,    33,
      65,   110,    36,   490,   110,    39,    40,    47,    70,    66,
       4,    45,   373,   374,     8,    49,    72,   110,   379,    13,
     110,   523,   383,   110,    18,   446,   110,   110,    66,    72,
     110,    25,    46,    27,    66,    66,   523,    72,   490,    66,
      66,    71,   419,   404,   465,   458,   467,   468,   539,   540,
      66,    66,     7,    47,    66,    43,    69,    64,    65,    66,
      67,    68,    69,    57,    58,    59,    60,    61,    62,    63,
      64,   523,     4,    72,    72,    65,     8,   438,   115,    65,
      17,    13,   110,   504,    68,   110,    18,   500,   110,   110,
     511,   110,    71,    25,    72,    27,    66,   458,    64,    65,
      66,    67,    68,    69,   110,   110,    65,    14,    66,    66,
      66,    80,    44,   110,   110,    47,   477,   110,   112,    66,
      65,   542,    65,   110,    72,    57,    58,    59,    60,    61,
      62,    63,    64,   110,   110,   110,    80,   110,    74,   500,
     147,   148,   149,   150,   151,   152,   153,    66,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    66,   166,
      66,   110,   523,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   154,    13,   110,    23,    43,   229,   289,
     375,   147,   148,   149,   150,   151,   152,   153,   195,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   523,
     166,   280,   309,   383,   342,   514,   516,     4,     5,   446,
     490,     8,   124,   195,   455,    12,    13,   188,   164,   161,
      -1,    18,    19,   162,    21,   163,   166,   178,    25,   195,
      27,   255,    29,    -1,    -1,    -1,    -1,    34,   245,    -1,
      37,    38,    39,    40,    41,    42,    -1,    -1,   255,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,   245,
      -1,    -1,    41,    47,    -1,    -1,    -1,    -1,    47,   255,
      87,    88,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    69,    65,    -1,    -1,    73,
      -1,    75,    -1,     4,    -1,    -1,   113,     8,    77,    78,
     117,    -1,    13,    87,    88,    -1,    -1,    18,    87,    88,
      89,    90,    -1,    -1,    25,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,   116,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    -1,     8,    -1,    -1,    77,    78,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    87,    88,    89,    90,
      25,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,
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
      -1,    51,    52,    53,    54,    55,    56,    -1,     4,    -1,
      -1,    -1,     8,    -1,    -1,    65,    74,    13,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    77,    78,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    29,
      -1,    51,    52,    53,    54,    55,    56,    37,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    65,     3,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    87,    88,    74,
      -1,    28,    -1,    -1,    31,    32,    33,    77,    78,    36,
      -1,    65,    39,    40,    -1,    69,    -1,    -1,    45,    73,
      74,    -1,    49,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    30,   145,   160,   161,   164,    47,   157,   158,   159,
       0,    23,   162,   163,   165,   166,   167,    73,   110,   157,
     111,   168,   169,   170,   171,   174,   209,   165,    47,    73,
     110,   158,     3,    16,    28,    31,    32,    33,    36,    39,
      40,    45,    49,   172,   173,   175,   171,    91,    65,   110,
     173,     9,    26,   110,    29,    37,    41,    51,    52,    53,
      54,    55,    56,    65,    77,    78,    87,    88,    89,    90,
     146,   157,   205,   262,   263,   264,   265,   267,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   297,   158,   158,     4,     8,    13,    18,
      25,    27,    57,    58,    59,    60,    61,    62,    63,    64,
     148,   149,   150,   151,   153,   154,   157,    73,   148,   297,
     157,   271,   273,   277,   277,   277,   277,   277,   277,    65,
      69,    66,    73,    69,    72,    87,    88,    91,    92,    96,
      89,    90,    97,    98,    24,    75,    76,    83,    84,    81,
      82,    93,    95,    94,    85,    79,    86,    74,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   296,    15,
     176,   178,    15,   208,   210,    69,   268,   269,   268,    65,
      75,   158,    69,   266,   270,    66,   205,   297,   110,   158,
     297,   297,   277,   277,   277,   282,   282,   283,   283,   148,
     152,   153,   156,   157,   284,   284,   284,   284,   285,   285,
     286,   287,   288,   289,   297,   290,   293,   153,   154,    22,
     177,   179,   153,   155,   110,    72,   297,   269,    69,   266,
     205,   155,   180,    65,    70,    66,    69,   280,    66,    70,
      65,    70,    69,    69,    69,    80,   180,   110,   113,   211,
     299,   155,    70,    66,    72,    76,   205,   277,    70,   205,
      70,    70,    70,   292,   181,   299,   169,   186,   193,   212,
     213,   214,   215,   216,   155,    66,    66,   169,   182,   183,
     184,   185,   186,   191,   193,   202,   216,   175,   110,   114,
     300,   214,    36,   175,   201,   300,   184,   110,    44,   147,
     148,   152,   192,   221,   299,   158,   200,   221,    47,   158,
     187,   188,   189,   158,     5,    12,    19,    21,    34,    38,
      39,    40,    42,    46,    48,    50,    65,   117,   147,   157,
     204,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   241,   242,   246,   247,   252,
     253,   254,   255,   256,   258,   264,   272,   274,   275,   276,
     278,   279,   294,    65,    65,    72,   110,    69,    74,    65,
      53,   110,   110,    65,    65,   244,   297,    65,    65,    65,
     297,    65,    53,   110,   110,   297,   110,    47,   187,    69,
     300,   223,   110,   110,   112,   147,   195,   196,   197,   195,
     188,    70,    67,   190,   219,   297,   195,   110,   221,   147,
     225,   230,   243,   249,   251,   297,   110,   297,   297,   297,
     110,   297,   110,   221,    66,   147,   189,    66,    72,    66,
     190,   217,   220,    66,    46,   158,    71,    72,    66,    66,
      66,    66,    66,     7,   257,   259,   260,   189,    43,   194,
     198,   197,   194,    72,   218,    72,   194,    65,   115,   244,
     230,   110,   230,   110,   110,   110,   110,    65,    17,   261,
     260,   154,   199,   110,    68,   190,   297,   116,   248,   297,
      71,   221,   110,   236,   299,   221,   221,   221,   197,   110,
      72,   206,   299,    66,    65,    66,    66,   245,   250,   251,
      14,     6,    11,   235,   237,   238,   239,   240,    66,   221,
     154,    37,    41,   203,   207,   110,   297,   110,   110,    66,
     110,   297,   298,    80,   300,   238,   221,   240,   110,    65,
      65,   204,    72,   221,   221,   110,   221,    80,   110,   221,
     205,   205,   300,   297,   221,   110,    66,    66,    66,   110,
     110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   144,   145,   146,   146,   146,   146,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   151,   151,   152,   152,
     153,   153,   154,   155,   156,   156,   156,   157,   157,   158,
     159,   160,   161,   161,   162,   162,   163,   163,   164,   165,
     165,   166,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   174,   175,   175,   176,   176,   177,
     177,   178,   179,   180,   180,   181,   182,   182,   183,   183,
     184,   184,   184,   185,   185,   185,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   192,   193,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   198,   199,   199,
     200,   201,   202,   203,   203,   204,   204,   205,   205,   206,
     207,   207,   208,   208,   209,   210,   210,   211,   212,   212,
     213,   213,   214,   214,   215,   216,   217,   217,   218,   218,
     219,   220,   220,   221,   222,   222,   223,   223,   224,   225,
     226,   226,   226,   226,   226,   226,   226,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   228,   229,
     230,   230,   230,   230,   230,   230,   230,   231,   232,   233,
     234,   235,   235,   236,   237,   237,   238,   239,   239,   240,
     240,   241,   242,   243,   243,   244,   244,   245,   245,   246,
     247,   247,   248,   249,   249,   250,   251,   251,   252,   252,
     253,   253,   254,   255,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   261,   262,   262,   263,   263,   263,   263,
     263,   263,   263,   264,   265,   265,   266,   266,   267,   267,
     268,   268,   269,   270,   270,   271,   271,   272,   272,   272,
     273,   273,   274,   274,   274,   274,   275,   276,   277,   277,
     277,   277,   277,   278,   279,   280,   280,   280,   280,   281,
     281,   282,   282,   282,   282,   283,   283,   283,   284,   284,
     284,   285,   285,   285,   285,   285,   285,   286,   286,   286,
     287,   287,   288,   288,   289,   289,   290,   290,   291,   291,
     292,   292,   293,   293,   294,   295,   295,   295,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   297,
     298,   299,   300
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
       1,     1,     1,     1,     8,     1,     0,     1,     0,     1,
       0,     2,     2,     1,     3,     3,     1,     0,     1,     2,
       1,     2,     1,     1,     1,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     1,     3,     1,     8,     8,     1,
       0,     1,     0,     1,     3,     2,     3,     2,     1,     3,
       1,     2,     9,     1,     0,     1,     0,     1,     0,     4,
       5,     5,     1,     0,     7,     2,     3,     3,     1,     0,
       1,     2,     1,     1,     1,     2,     1,     0,     1,     0,
       4,     1,     3,     3,     1,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     6,     6,     9,
       6,     1,     0,     3,     1,     2,     2,     1,     2,     4,
       3,     6,     8,     1,     0,     1,     0,     1,     0,    10,
       9,     9,     6,     1,     1,     1,     1,     3,     3,     2,
       3,     2,     3,     3,     6,     6,     1,     0,     4,     5,
       1,     2,     6,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     5,     1,     3,     1,     0,     3,     4,
       1,     2,     3,     2,     3,     3,     3,     4,     6,     6,
       4,     4,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     5,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
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
        case 3:
#line 398 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_INTLITERAL, (yyvsp[0]. node ));   }
#line 2116 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 400 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FLOATLITERAL, (yyvsp[0]. node ));   }
#line 2122 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 402 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_BOOLLITERAL, (yyvsp[0]. node ));   }
#line 2128 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 404 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STRINGLITERAL, (yyvsp[0]. node ));   }
#line 2134 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CHARLITERAL, (yyvsp[0]. node ));   }
#line 2140 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 408 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULLLITERAL, (yyvsp[0]. node ));   }
#line 2146 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 419 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_BOOLEAN, (yyvsp[0]. node ));    }
#line 2152 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 429 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT8, (yyvsp[0]. node ));    }
#line 2158 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 431 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2164 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 433 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT32, (yyvsp[0]. node ));    }
#line 2170 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 435 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT64, (yyvsp[0]. node ));    }
#line 2176 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 437 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2182 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 439 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT16, (yyvsp[0]. node ));    }
#line 2188 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 441 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2194 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 443 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2200 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 445 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2206 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 447 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2212 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 449 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2218 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 454 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_FLOAT, (yyvsp[0]. node ));    }
#line 2224 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 456 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_DOUBLE, (yyvsp[0]. node ));    }
#line 2230 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 466 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NONE, "InterfaceTypeList");
        COMBINE(TOK_TYPE_CLASS, 2);
    }
#line 2239 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 471 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TYPE_CLASS, 2);   }
#line 2245 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 484 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2253 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 488 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2261 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 492 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        beagle::Node *node = TOP();
        node->setCounter( node->getCounter() + 1 );
    }
#line 2270 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 505 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_IDENT, (yyvsp[0]. node ));    }
#line 2276 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 510 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_IDENT, (yyvsp[0]. node ));
        COMBINE(0, 1);
    }
#line 2285 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 518 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_UNIT, 3);   }
#line 2291 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 523 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "PackageDeclaration");   }
#line 2297 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 528 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ImportDeclarations");   }
#line 2303 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 534 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2309 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 536 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2315 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 541 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PACKAGE, 1);   }
#line 2321 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 551 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORT, 1);   }
#line 2327 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 556 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_IMPORT_ALL, 1);
    }
#line 2335 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 568 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "AnnotationDeclarations");   }
#line 2341 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 573 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2347 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 575 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2353 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 580 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATION, 2);   }
#line 2359 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 582 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NONE, "ArgumentList");
		COMBINE(TOK_ANNOTATION, 2);
	}
#line 2368 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 590 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MODIFIERS, 1);   }
#line 2374 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 592 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2380 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 597 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PUBLIC, (yyvsp[0]. node ));   }
#line 2386 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 599 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PROTECTED, (yyvsp[0]. node ));   }
#line 2392 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 601 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PRIVATE, (yyvsp[0]. node ));   }
#line 2398 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 603 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STATIC, (yyvsp[0]. node ));   }
#line 2404 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 605 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ABSTRACT, (yyvsp[0]. node ));   }
#line 2410 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 607 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FINAL, (yyvsp[0]. node ));   }
#line 2416 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 609 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NATIVE, (yyvsp[0]. node ));   }
#line 2422 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 611 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_READLOCK, (yyvsp[0]. node ));   }
#line 2428 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 613 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_WRITELOCK, (yyvsp[0]. node ));   }
#line 2434 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 615 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_TRANSIENT, (yyvsp[0]. node ));   }
#line 2440 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 617 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOLATILE, (yyvsp[0]. node ));   }
#line 2446 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 622 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CLASS, 6);   }
#line 2452 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 627 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ModifiersOpt");   }
#line 2458 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 632 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Super");   }
#line 2464 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 637 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Intf");   }
#line 2470 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 651 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_LIST, 1);   }
#line 2476 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 653 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2482 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 662 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ClassBodyDeclarations");   }
#line 2488 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 667 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2494 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 669 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2500 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 686 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FIELD, 4);   }
#line 2506 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 691 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2512 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 693 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2518 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 698 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NONE, "VariableInitializer");
        COMBINE(TOK_VARIABLE, 2);
    }
#line 2527 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 703 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2533 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 708 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_IDENT, (yyvsp[0]. node ));   }
#line 2539 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 719 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2545 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 725 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOID, (yyvsp[0]. node ));   }
#line 2551 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 731 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2557 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 733 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2563 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 739 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Throws");   }
#line 2569 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 745 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "FormalParameterList");   }
#line 2575 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 749 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_LIST, 1);   }
#line 2581 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 751 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2587 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 756 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETER, 2);   }
#line 2593 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 758 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_PARAMETER, 2);
        TOP()->setCounter( TOP()->getCounter() + 1 );
    }
#line 2602 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 779 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_STATIC_INIT, 1);   }
#line 2608 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 784 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CONSTRUCTOR, 6);   }
#line 2614 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 789 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ExplicitConstructorInvocation");   }
#line 2620 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 794 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "BlockStatements");   }
#line 2626 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 799 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ArgumentList");   }
#line 2632 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 804 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 2);   }
#line 2638 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 809 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_THIS);   }
#line 2644 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 811 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_SUPER);   }
#line 2650 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 816 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ExtendsInterfaces");   }
#line 2656 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 821 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INTERFACE, 5);   }
#line 2662 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 826 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_LIST, 1);   }
#line 2668 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 828 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2674 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 837 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "InterfaceMemberDeclarations");   }
#line 2680 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 842 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2686 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 844 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2692 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 858 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NONE, "MethodBody");
        COMBINE(0, 1);
    }
#line 2701 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 864 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2707 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 866 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2713 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 866 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    { (yyval. node ) = NULL; }
#line 2719 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 154:
#line 881 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BLOCK, 1);   }
#line 2725 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 155:
#line 883 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2731 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 159:
#line 897 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2737 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 926 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PASS, (yyvsp[-1]. node ));   }
#line 2743 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 945 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NONE, "Block");
		COMBINE(TOK_IF, 3);
	}
#line 2752 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 953 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_BLOCK, 1);
		PUSH(TOK_NONE, "Block");
		COMBINE(TOK_IF, 3);
	}
#line 2762 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 962 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IF, 3);   }
#line 2768 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 967 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SWITCH, 2);   }
#line 2774 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 972 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "SwitchBlockStatementGroups");   }
#line 2780 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 981 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2786 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 983 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2792 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 988 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GROUP, 2);   }
#line 2798 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 993 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2804 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 995 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2810 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 1000 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CASE, 1);   }
#line 2816 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1002 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_DEFAULT, (yyvsp[-2]. node ));
		COMBINE(TOK_CASE, 1);
	}
#line 2825 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1010 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_WHILE, 2);   }
#line 2831 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1016 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DO, 2);   }
#line 2837 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1021 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ForInit");   }
#line 2843 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1026 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Expression");   }
#line 2849 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1031 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "ForUpdate");   }
#line 2855 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1036 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR, 4);   }
#line 2861 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1041 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2867 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 1043 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2873 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1048 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RANGE, 2);   }
#line 2879 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1062 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2885 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1064 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2891 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1069 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_BREAK, 1);
	}
#line 2900 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1074 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_BREAK, 1);
	}
#line 2909 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1082 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2918 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1087 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2927 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1095 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RETURN, 1);   }
#line 2933 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1101 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROW, 1);   }
#line 2939 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1106 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2945 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 1108 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2951 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 227:
#line 1113 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Catches");   }
#line 2957 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 228:
#line 1118 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NONE, "finally");
		COMBINE(TOK_TRY, 3);
	}
#line 2966 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 1123 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TRY, 3);   }
#line 2972 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 230:
#line 1128 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2978 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 231:
#line 1130 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2984 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 232:
#line 1135 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CATCH, 2);   }
#line 2990 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 233:
#line 1140 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_FINALLY);   }
#line 2996 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1151 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_THIS, (yyvsp[0]. node ));   }
#line 3002 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1161 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW, 2);   }
#line 3008 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 244:
#line 1166 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 3014 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 1168 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3020 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1173 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NONE, "Dims");   }
#line 3026 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 248:
#line 1178 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
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
#line 3064 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1212 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW_ARRAY, 3);   }
#line 3070 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 250:
#line 1217 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 3076 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1219 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3082 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1229 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_TYPE_ARRAY, "");
		TOP()->setCounter(1);
	}
#line 3091 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 254:
#line 1234 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		TOP()->setCounter( TOP()->getCounter() + 1 );
	}
#line 3099 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 255:
#line 1240 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FIELD_ACCESS, 2);   }
#line 3105 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 256:
#line 1242 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_SUPER, (yyvsp[-2]. node ));
		COMBINE(TOK_FIELD_ACCESS, 2);
	}
#line 3114 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 257:
#line 1250 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_NONE, "Primary");
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	}
#line 3130 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 258:
#line 1262 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CALL, 3);   }
#line 3136 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 259:
#line 1264 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {

		beagle::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_SUPER, "super");
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	/*
	| Name BeginBlock ArgumentListOpt EndBlock
	| Primary TOK_DOT SimpleName BeginBlock ArgumentListOpt EndBlock
	| TOK_SUPER TOK_DOT TOK_IDENT BeginBlock ArgumentListOpt EndBlock
	*/

	}
#line 3159 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 260:
#line 1286 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARRAY_ACCESS, 2);   }
#line 3165 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 261:
#line 1288 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARRAY_ACCESS, 2);   }
#line 3171 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 266:
#line 1300 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3177 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 267:
#line 1305 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3183 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 270:
#line 1312 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 1);   }
#line 3189 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1314 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 1);   }
#line 3195 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1320 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3201 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 274:
#line 1325 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3207 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1331 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TILDE, 1);   }
#line 3213 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1333 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BANG, 1);   }
#line 3219 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 279:
#line 1340 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		if (second->getType() == TOK_NONE)
		{
			delete second;
			second = first;
		}
		else
			second->addChild(first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CAST, 2);
	}
#line 3243 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 280:
#line 1360 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CAST, 2);   }
#line 3249 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1366 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MUL, 2);   }
#line 3255 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 283:
#line 1368 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DIV, 2);   }
#line 3261 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 284:
#line 1370 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MOD, 2);   }
#line 3267 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1376 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 2);   }
#line 3273 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 287:
#line 1378 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 2);   }
#line 3279 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 289:
#line 1384 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHL, 2);   }
#line 3285 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 290:
#line 1386 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHR, 2);   }
#line 3291 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 292:
#line 1392 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LT, 2);   }
#line 3297 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 293:
#line 1394 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GT, 2);   }
#line 3303 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 294:
#line 1396 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LE, 2);   }
#line 3309 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 295:
#line 1398 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GE, 2);   }
#line 3315 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 296:
#line 1400 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INSTANCEOF, 2);   }
#line 3321 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 298:
#line 1406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_EQ, 2);   }
#line 3327 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 299:
#line 1408 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NE, 2);   }
#line 3333 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 301:
#line 1414 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_AND, 2);   }
#line 3339 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 303:
#line 1420 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CARET, 2);   }
#line 3345 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 305:
#line 1426 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OR, 2);   }
#line 3351 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1432 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANDAND, 2);   }
#line 3357 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 309:
#line 1438 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OROR, 2);   }
#line 3363 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 311:
#line 1444 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_QUEST, 2);   }
#line 3369 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 314:
#line 1454 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {

        /*
         * Change the expression notation from infixed to prefixed
         */

        beagle::Node *left, *right, *oper;

        right = POP();
        oper = POP();
        left = POP();

        oper->addChild(left);
        oper->addChild(right);
        NPUSH(oper);
    }
#line 3390 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 318:
#line 1480 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ASN, (yyvsp[0]. node ));   }
#line 3396 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 319:
#line 1482 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MUASN, (yyvsp[0]. node ));   }
#line 3402 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 320:
#line 1484 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_DIASN, (yyvsp[0]. node ));   }
#line 3408 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 321:
#line 1486 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MODASN, (yyvsp[0]. node ));   }
#line 3414 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 322:
#line 1488 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PLASN, (yyvsp[0]. node ));   }
#line 3420 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 323:
#line 1490 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MIASN, (yyvsp[0]. node ));   }
#line 3426 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 324:
#line 1492 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SLASN, (yyvsp[0]. node ));   }
#line 3432 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 325:
#line 1494 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SRASN, (yyvsp[0]. node ));   }
#line 3438 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 326:
#line 1496 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ANDASN, (yyvsp[0]. node ));   }
#line 3444 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 327:
#line 1498 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CARETASN, (yyvsp[0]. node ));   }
#line 3450 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 328:
#line 1500 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ORASN, (yyvsp[0]. node ));   }
#line 3456 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3460 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1520 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


