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
#line 201 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */

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

#define PUSH(type, token) \
	beagle_push( parserContext, (type), (token), \
		beagle_get_lineno(parserContext->lexer), beagle_get_column(parserContext->lexer) )

#define SPUSH(type, string) \
	do {                                                \
		beagle_push( parserContext, (type), NULL,       \
			beagle_get_lineno(parserContext->lexer),    \
			beagle_get_column(parserContext->lexer) );  \
		TOP()->text = (string);                         \
	} while (0)

#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)

#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wsign-compare"


#line 421 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYLAST   1359

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  311
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
       0,   399,   399,   404,   409,   411,   415,   417,   422,   423,
     427,   432,   437,   438,   442,   443,   447,   449,   454,   456,
     464,   466,   471,   473,   475,   477,   479,   481,   483,   485,
     487,   489,   491,   496,   501,   502,   506,   508,   512,   514,
     518,   522,   524,   529,   530,   534,   536,   541,   542,   546,
     547,   548,   552,   557,   559,   564,   569,   574,   575,   579,
     584,   589,   591,   596,   597,   601,   605,   606,   609,   611,
     616,   618,   626,   628,   633,   634,   638,   643,   648,   649,
     653,   655,   656,   661,   663,   668,   669,   673,   687,   689,
     694,   698,   699,   703,   705,   710,   711,   715,   719,   727,
     731,   732,   736,   738,   743,   747,   749,   754,   758,   762,
     767,   768,   769,   770,   771,   772,   773,   774,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   791,   796,
     800,   801,   802,   803,   804,   805,   806,   810,   818,   827,
     832,   837,   838,   842,   846,   848,   853,   858,   860,   865,
     867,   875,   881,   886,   887,   891,   892,   896,   897,   901,
     906,   908,   913,   918,   919,   923,   927,   929,   934,   939,
     947,   952,   960,   966,   971,   973,   978,   979,   983,   988,
     993,   995,  1000,  1005,  1010,  1011,  1015,  1016,  1018,  1019,
    1020,  1021,  1022,  1026,  1031,  1033,  1038,  1072,  1077,  1082,
    1089,  1094,  1101,  1103,  1111,  1123,  1125,  1147,  1149,  1154,
    1155,  1156,  1157,  1161,  1166,  1171,  1172,  1173,  1175,  1177,
    1181,  1186,  1191,  1192,  1194,  1196,  1200,  1220,  1222,  1239,
    1240,  1242,  1244,  1249,  1250,  1252,  1257,  1258,  1260,  1265,
    1266,  1268,  1270,  1272,  1274,  1279,  1280,  1282,  1287,  1288,
    1293,  1294,  1299,  1300,  1305,  1306,  1311,  1312,  1317,  1318,
    1323,  1324,  1328,  1348,  1349,  1350,  1354,  1356,  1358,  1360,
    1362,  1364,  1366,  1368,  1370,  1372,  1374,  1379,  1383,  1387,
    1391,  1395,  1397,  1399,  1401,  1403,  1405,  1410,  1411,  1415,
    1416,  1421,  1422,  1426,  1428,  1430,  1432,  1434,  1436,  1438,
    1440,  1442,  1447,  1449,  1454,  1455,  1459,  1464,  1469,  1476,
    1481,  1482
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
  "TOK_RANGE", "TOK_PASS", "$accept", "CompilationUnit",
  "PackageDeclaration", "ImportDeclarationsOpt", "ImportDeclarations",
  "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "TypeDeclaration",
  "AnnotationDeclarationsOpt", "AnnotationDeclarations",
  "AnnotationDeclaration", "Modifiers", "Modifier", "ClassDeclaration",
  "ModifiersOpt", "SuperOpt", "InterfacesOpt", "Interfaces",
  "InterfaceTypeList", "ClassBodyOpt", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclarators", "VariableDeclarator", "VariableInitializer",
  "MethodDeclaration", "VoidType", "MethodHeader", "ThrowsOpt", "Throws",
  "FormalParameterListOpt", "FormalParameterList", "FormalParameter",
  "ClassTypeList", "MethodBodyOpt", "StaticInitializer",
  "ConstructorDeclaration", "ArgumentListOpt", "ConstructorBody",
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
  "BeginBlock", "EndBlock", "Literal", "Type", "PrimitiveType",
  "NumericType", "IntegralType", "FloatingPointType", "ReferenceType",
  "ArrayType", "SimpleName", "Name", YY_NULLPTR
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

#define YYPACT_NINF -457

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-457)))

#define YYTABLE_NINF -305

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    91,   156,   137,  -457,  -457,   -24,  -457,    91,    55,
     137,  -457,  -457,  -457,    91,  -457,   -20,    91,  -457,  1209,
      55,  -457,  -457,  -457,  -457,  -457,    -2,  -457,   -51,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    1209,  -457,    71,  -457,    85,  1119,  -457,  -457,    91,    91,
    -457,  1205,    97,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
     902,  1119,  1119,  1119,  1119,  1119,  1119,   131,   135,  -457,
    -457,   132,  -457,   468,  -457,   409,    84,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,    98,    15,   109,     0,   129,   119,
     128,   120,   141,    83,  -457,  -457,  -457,   580,  -457,  -457,
    1210,   214,   218,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,   169,  -457,  -457,  -457,    60,
      91,   176,   179,  1234,  -457,   197,  -457,    94,  -457,  -457,
    -457,  -457,  -457,   158,    91,  1119,  1119,  -457,  -457,  1119,
    1119,  1119,  1119,  1119,  1119,  1119,  1205,  1119,  1119,  1119,
    1119,  1119,  1119,  1119,  1119,  1119,  1119,  1119,  1119,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    1119,  1119,  1119,    91,   250,    91,   166,   202,  1119,   208,
    1119,   208,   213,   873,   211,   -34,  1002,   -14,  -457,   223,
    -457,   219,  -457,  -457,  -457,    98,    98,    15,    15,   225,
    -457,   227,   -19,   109,   109,   109,   109,     0,     0,   129,
     119,   128,   120,   203,   141,  -457,   226,   228,   229,    91,
     189,  -457,   229,   187,    91,   234,  1119,   239,  1119,  -457,
    -457,  1119,   236,   873,  1119,  -457,   237,   240,   244,  1119,
    -457,  -457,   246,   229,   187,  -457,  -457,    13,   229,  -457,
     249,  -457,   254,  -457,  -457,  -457,   255,  -457,  -457,  -457,
    -457,    91,  -457,    55,  1209,  -457,   212,   215,    66,  -457,
    -457,  -457,  -457,  -457,  -457,   229,  1315,    70,  -457,  -457,
    -457,  -457,   222,  -457,  1171,  -457,  -457,  -457,  -457,   187,
    1171,  -457,  -457,  -457,   187,  -457,    91,    91,   225,  -457,
    -457,   695,   260,  -457,  -457,   263,   -38,  -457,    33,   -41,
     230,   270,   272,  1119,   273,   276,   277,  1119,   283,   -30,
     242,  1119,   243,   611,  -457,  -457,   245,  -457,  -457,  -457,
    -457,   251,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,    43,    48,    84,   134,
     164,  -457,  -457,  -457,    91,   113,   828,   828,    91,  -457,
     828,  1046,   252,  -457,   187,   964,  1119,   259,  -457,  1119,
    1119,  1119,   261,  1119,   262,  -457,   187,   284,  -457,  -457,
    -457,  -457,  -457,   282,   275,  1075,  1205,   298,   301,  -457,
      91,   308,  -457,   309,  1046,  -457,  -457,  -457,  -457,   330,
    -457,  -457,   306,  -457,   310,    91,   314,  -457,   315,   321,
     324,  -457,   325,  -457,   385,  -457,    91,   352,   828,  -457,
     352,   352,  -457,   328,   332,   337,  1119,  1241,   -28,   549,
     287,   299,   300,   302,   343,   393,    77,  -457,  -457,    91,
     304,  -457,  -457,  -457,  -457,  -457,  1046,  1119,   345,  -457,
     816,   187,   311,   187,   187,   187,   187,   828,   312,  -457,
    -457,   351,   229,   187,  -457,   359,  1241,   361,   363,   364,
     412,  -457,  -457,    17,  -457,  -457,  -457,   365,   187,    91,
    -457,   767,   323,   368,  -457,   310,  1119,   326,   331,   339,
    1119,   355,   215,    17,  -457,     9,  -457,   340,  -457,   229,
      61,   373,   611,   611,  -457,   341,   370,   187,   187,   187,
    -457,   374,   346,  -457,  -457,  -457,  -457,   187,  1119,  1119,
     611,  -457,  -457,   187,  1119,  -457,  -457,  -457,   348,  -457,
    -457,   387,   394,  -457,  -457,   395,  -457,   349,   353,  -457,
    -457,  -457
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,   309,   310,     0,     1,     0,    15,
       4,     6,     8,     9,     0,     3,     0,     0,     2,    35,
      14,    16,    12,    13,     7,   311,     0,    10,     0,    26,
      32,    27,    28,    24,    23,    22,    25,    29,    30,    31,
      34,    20,     0,    17,     0,    79,    19,    21,     0,     0,
      11,     0,     0,   187,   286,   283,   281,   285,   282,   284,
       0,     0,     0,     0,     0,     0,     0,     0,   209,   184,
     189,    78,   185,   190,   191,   192,   222,   211,   212,   229,
     215,   216,   219,   225,   233,   236,   239,   245,   248,   250,
     252,   254,   256,   258,   260,   277,   261,     0,   194,   186,
     210,    37,    86,   290,   301,   303,   302,   293,   294,   295,
     296,   297,   298,   299,   300,     0,   289,   291,   292,     0,
       0,     0,     0,   210,   190,   192,   224,   210,   223,   220,
     221,   217,   218,     0,     0,     0,     0,   213,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   266,
     270,   271,   267,   268,   274,   276,   275,   272,   273,   269,
       0,    79,     0,     0,    39,     0,     0,    85,     0,   196,
      79,   197,   203,   188,     0,     0,     0,     0,    18,   202,
     195,     0,   230,   231,   232,   234,   235,   237,   238,     0,
     244,   305,   304,   240,   241,   242,   243,   246,   247,   249,
     251,   253,   255,     0,   257,   262,     0,     0,    36,     0,
       0,    38,    88,     0,     0,     0,     0,     0,    79,   227,
     198,     0,     0,     0,    79,   208,     0,     0,     0,     0,
     204,   207,    40,    41,    44,   279,    87,    15,    89,   200,
       0,   193,     0,   226,   199,   228,     0,   306,   308,   307,
     259,     0,    33,    15,    35,    97,     0,     0,    15,    93,
      95,    96,   201,   206,   205,    42,    35,    15,    45,    47,
      49,    50,     0,    51,     0,    98,   280,    90,    94,    25,
       0,    48,    46,    43,    75,    60,     0,     0,   287,   288,
      76,     0,   310,    59,    74,     0,     0,    53,    55,     0,
       0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   117,     0,   107,   110,   127,
     118,     0,   111,   112,   113,   119,   114,   120,   115,   116,
     121,   122,   123,   125,   124,   126,   136,   135,     0,   133,
     134,   131,   132,   130,     0,   265,    67,    67,     0,    52,
      67,     0,     0,   169,     0,   154,     0,     0,   155,     0,
       0,     0,     0,     0,     0,   171,     0,     0,   128,   106,
     104,   108,   129,   109,    55,     0,     0,     0,    66,    68,
       0,     0,    54,     0,   101,    56,    58,    57,   168,     0,
     164,   166,     0,   153,   163,     0,     0,   172,     0,     0,
       0,   173,     0,   170,   177,   188,     0,    64,     0,    70,
      64,    64,   102,     0,   100,     0,   156,     0,    55,     0,
       0,     0,     0,     0,     0,     0,   178,   180,    71,     0,
       0,    63,    69,    62,    61,    99,     0,     0,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
     181,    65,    72,     0,   103,     0,   158,     0,     0,     0,
     137,   138,   140,   142,   174,   175,   151,     0,     0,     0,
      77,     0,     0,     0,   157,   165,     0,     0,     0,     0,
       0,     0,     0,   141,   144,     0,   147,     0,   183,    73,
       0,   187,     0,     0,   152,     0,     0,     0,     0,     0,
     278,     0,     0,   143,   145,   146,   148,     0,    79,    79,
       0,    80,    81,     0,     0,   161,   160,   139,     0,   150,
     182,     0,     0,    82,   159,     0,   149,     0,     0,   162,
      84,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -457,  -457,  -457,  -457,  -457,   451,  -457,  -457,  -457,    -6,
    -457,   443,  -457,   424,  -457,  -177,  -457,  -457,  -457,  -457,
    -457,  -457,   190,  -457,  -245,   177,   123,  -368,  -457,  -457,
    -182,  -205,  -457,  -162,  -457,  -401,  -457,  -457,  -457,  -457,
    -161,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,   216,
    -457,  -457,  -457,  -457,  -457,  -264,  -456,  -319,  -457,   114,
    -457,  -457,  -457,  -457,  -357,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,   -10,  -457,    -9,  -457,  -457,  -457,    59,  -457,
    -457,  -457,  -457,  -457,  -457,    23,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,    54,  -457,  -457,  -457,  -254,  -457,
    -457,   369,   372,   381,  -187,   407,  -137,  -104,   -97,   -23,
     -84,   -27,  -167,  -457,   121,   111,   -57,   118,   342,   344,
     362,   338,   360,  -457,   257,   327,   -15,  -457,  -457,   -59,
    -457,  -217,  -268,  -457,  -255,   -39,  -457,  -457,  -457,   354,
    -457,   -12,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    10,    11,    12,    13,    18,   264,
      20,    21,    40,    41,    22,    42,   174,   220,   221,   242,
     262,   277,   278,   279,   265,   383,   307,   395,   281,   296,
     266,   440,   441,   387,   388,   389,   461,   303,   291,   283,
      67,   480,   502,   176,    23,   177,   246,   267,   268,   269,
     270,   271,   396,   423,   424,   300,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   492,
     472,   493,   494,   495,   496,   336,   337,   402,   367,   483,
     338,   339,   468,   403,   484,   404,   340,   341,   342,   343,
     344,   435,   345,   436,   437,   459,    68,    69,    70,    71,
      72,   185,   179,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   170,    98,
     511,   301,   287,    99,   354,   298,   116,   117,   118,   299,
     201,     5,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   121,    25,    19,   379,    28,   247,    16,   401,   293,
     216,   362,   115,    45,    25,   490,   229,   442,   280,   227,
     491,   122,   374,   490,   146,   503,   422,   263,   491,   297,
     304,   231,   280,   358,   232,   297,   101,   102,   126,   128,
     129,   130,   131,   132,     4,   361,   520,   346,    14,   238,
     119,   233,    26,    14,   232,   380,   477,     1,    46,   123,
     127,   127,   127,   127,   127,   127,   255,   252,   363,   346,
     449,   359,   452,   256,   147,   148,   190,   191,   464,   375,
      48,   282,   149,   150,   434,    15,   450,   284,    44,    27,
     203,   204,   205,   206,  -176,   282,    49,   360,   213,   290,
     399,   390,   390,   142,   143,   390,   361,   199,   182,   401,
     405,   346,   414,   217,   347,  -189,   192,   193,   194,   225,
    -191,   245,   189,    17,   180,   518,   -92,   217,   178,  -189,
    -189,   416,    14,   120,  -191,  -191,   347,     4,   127,   127,
     127,   127,   127,   127,   127,   202,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,     7,   127,   171,  -304,
       8,   157,   172,   390,   348,    17,    14,   250,   158,   120,
     137,   138,   218,   346,   222,   346,    17,   171,   347,   -91,
      17,   385,   127,   286,   379,    14,   348,   470,   139,   140,
     474,   475,   476,   141,    50,   391,   133,   349,   393,  -210,
    -210,   379,   390,   135,   350,   144,   145,   134,   253,   151,
     152,   153,   346,   155,   498,   443,   444,   351,   243,   349,
    -211,  -211,   154,   248,   513,   156,   350,   346,   348,   173,
     127,   515,   127,   175,   521,   522,   473,   178,   127,   351,
     347,   183,   347,   525,   526,   527,   481,   184,   346,   346,
    -212,  -212,   533,   530,   368,   197,   198,   276,   372,   534,
     275,   349,   377,   195,   196,   136,   346,   188,   350,   207,
     208,   276,   219,   224,   352,   223,   226,   228,   302,   347,
     230,   351,   239,   202,   305,   308,   353,   234,   235,   202,
     348,   240,   348,   236,   347,   237,   352,   241,   244,   245,
     355,    14,   397,   249,   251,   254,   257,   406,   353,   258,
     408,   409,   410,   259,   412,   347,   347,   261,   272,   273,
     274,   285,   355,   349,   356,   349,   217,   357,   286,   348,
     350,   294,   350,   347,   365,   397,   366,   369,   352,   364,
     370,   371,   384,   351,   348,   351,   384,   373,   361,   415,
     353,   376,   378,   358,   381,   202,   202,   531,   532,   202,
     382,   398,   349,   417,   355,   348,   348,   368,   407,   350,
     411,   413,   418,   420,   421,   425,   426,   349,   419,   429,
     430,   427,   351,   348,   350,   202,   431,   397,   465,   432,
     433,   469,   434,   428,   439,   445,   453,   351,   349,   349,
     352,   447,   352,   446,   438,   350,   350,   457,   454,   455,
     458,   456,   353,   463,   353,   466,   349,   202,   351,   351,
     471,   478,   479,   350,   482,   486,   489,   506,   487,   488,
     497,   510,   504,   505,   512,   507,   351,   519,   462,   352,
     508,   524,   124,   124,   124,   124,   124,   124,   509,   517,
     523,   353,   537,   528,   352,   529,   202,   536,   540,   538,
     539,    24,   541,    43,    47,   535,   353,   292,   125,   125,
     125,   125,   125,   125,   306,   352,   352,   136,   499,   400,
     355,   392,  -264,   514,   288,   448,   516,   353,   353,   485,
     460,   181,   187,   352,   212,   209,   260,   215,   210,     0,
     200,   355,   355,     0,     0,   353,     0,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,   211,   214,   355,
     124,   124,   124,   124,   124,   124,   124,     0,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,     0,   124,
       0,  -263,     0,     0,     0,     0,   125,   125,   125,   125,
     125,   125,   125,     0,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   124,   125,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,     0,    51,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
     125,     0,     0,     0,     0,     4,     0,     0,     0,    54,
      55,    56,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,   124,   321,   124,   103,   309,     0,     0,   104,
     124,     0,     0,   310,   105,     0,     0,     0,     0,   106,
     311,     0,   312,     0,     0,    63,    64,     0,   125,    51,
     125,     0,     0,     0,   313,     0,   125,    52,   314,   315,
     316,    53,   317,   159,     0,     0,   318,     4,   451,   319,
     320,    54,    55,    56,    57,    58,    59,   107,   108,   109,
     110,   111,   112,   113,   114,   321,     0,     0,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,   103,
     309,     0,     0,   104,     0,     0,     0,   310,   105,     0,
       0,     0,     0,   106,   311,     0,   312,     0,     0,     0,
       0,     0,     0,    51,   286,     0,     0,   322,   313,     0,
       0,    52,   314,   315,   316,    53,   317,     0,     0,     0,
     318,     4,     0,   319,   320,    54,    55,    56,    57,    58,
      59,   107,   108,   109,   110,   111,   112,   113,   114,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   309,     0,     0,   104,     0,     0,     0,   310,
     105,    63,    64,     0,     0,   106,   311,     0,   312,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
     313,     0,     0,   500,   314,   315,   316,   501,   317,     0,
       0,   322,   318,     4,     0,   319,   320,    54,    55,    56,
      57,    58,    59,   107,   108,   109,   110,   111,   112,   113,
     114,   321,   103,     0,     0,     0,   104,     0,     0,     0,
       0,   105,     0,     0,    51,     0,   106,     0,     0,     0,
       0,     0,    52,    63,    64,     0,    53,     0,     0,     0,
       0,     0,     4,     0,     0,     0,    54,    55,    56,    57,
      58,    59,     0,     0,     4,     0,     0,     0,     0,     0,
      60,     0,     0,   322,   107,   108,   109,   110,   111,   112,
     113,   114,    61,    62,     0,     0,     0,     0,     0,     0,
       0,    51,    63,    64,    65,    66,   103,     0,     0,    52,
     104,     0,     0,    53,     0,   105,     0,     0,     0,     4,
     106,     0,     0,    54,    55,    56,    57,    58,    59,     0,
      51,   467,     0,     0,     0,     0,     0,    60,    52,   386,
       0,     0,    53,     0,     0,     0,     0,     0,     4,    61,
      62,     0,    54,    55,    56,    57,    58,    59,   107,   108,
     109,   110,   111,   112,   113,   114,    60,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,   105,    61,    62,
       0,     0,   106,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    51,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       4,     0,     0,     0,    54,    55,    56,    57,    58,    59,
     107,   108,   109,   110,   111,   112,   113,   114,   321,     0,
      51,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     4,     0,
      63,    64,    54,    55,    56,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,   230,     0,     0,    51,     0,     0,     0,    61,    62,
       0,     0,    52,     0,     0,     0,    53,     0,    63,    64,
      65,    66,     4,     0,     0,     0,    54,    55,    56,    57,
      58,    59,     0,    51,     0,     0,     0,     0,     0,     0,
      60,    52,   394,     0,     0,    53,     0,     0,     0,     0,
       0,     4,    61,    62,     0,    54,    55,    56,    57,    58,
      59,     0,    63,    64,    65,    66,     0,     0,     0,    60,
       0,     0,     0,     0,   259,     0,     0,    51,     0,     0,
       0,    61,    62,     0,     0,    52,     0,     0,     0,    53,
       0,    63,    64,    65,    66,     4,     0,     0,     0,    54,
      55,    56,    57,    58,    59,   103,     0,     0,     0,   104,
       0,     0,     0,    60,   105,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    66,   103,
       0,     0,    29,   104,   295,     0,     0,     4,   105,    30,
       0,     0,     0,   106,     0,    31,     0,   107,   108,   109,
     110,   111,   112,   113,   114,     0,    32,     0,     0,    33,
      34,    35,     0,     0,    36,     0,     0,    37,    38,     0,
       0,     4,     0,    39,     0,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,   111,   112,   113,   114,    51,
       0,     0,     0,     0,   171,     0,     0,    52,   172,     0,
       0,    53,    14,  -265,     0,     0,     0,     4,     0,     0,
       0,    54,    55,    56,    57,    58,    59,     0,   171,     0,
       0,     0,   186,     0,     0,   321,    14,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,    29,     0,
       0,     0,     0,     0,     0,    30,     0,    63,    64,     0,
       0,    31,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,    32,     0,     0,    33,    34,    35,     0,     0,
     289,     0,     0,    37,    38,     0,     0,     0,     0,    39
};

static const yytype_int16 yycheck[] =
{
       1,    60,    14,     9,   323,    17,   223,     8,   365,   277,
     171,    52,    51,    64,    26,     6,   183,   418,   263,   180,
      11,    60,    52,     6,    24,   481,   394,   244,    11,   284,
     294,    65,   277,    71,    68,   290,    48,    49,    61,    62,
      63,    64,    65,    66,    46,    73,   502,   301,    72,    68,
      51,    65,    72,    72,    68,   323,   457,    29,   109,    60,
      61,    62,    63,    64,    65,    66,   233,   228,   109,   323,
     427,   109,   429,   234,    74,    75,   135,   136,   446,   109,
       9,   263,    82,    83,     7,   109,   114,   264,    90,   109,
     147,   148,   149,   150,    17,   277,    25,    64,   157,   276,
     364,   356,   357,    88,    89,   360,    73,   146,   120,   466,
     365,   365,   376,   172,   301,    72,   139,   140,   141,   178,
      72,   112,   134,   110,    64,    64,   113,   186,    68,    86,
      87,   386,    72,    72,    86,    87,   323,    46,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,   158,    64,    46,
      23,    78,    68,   418,   301,   110,    72,   226,    85,    72,
      86,    87,   173,   427,   175,   429,   110,    64,   365,   113,
     110,    68,   183,   113,   503,    72,   323,   451,    90,    91,
     454,   455,   456,    95,   109,   357,    65,   301,   360,    86,
      87,   520,   457,    71,   301,    96,    97,    72,   231,    80,
      81,    92,   466,    93,   478,   420,   421,   301,   219,   323,
      86,    87,    94,   224,   492,    84,   323,   481,   365,    15,
     231,   495,   233,    15,   502,   503,   453,    68,   239,   323,
     427,    65,   429,   507,   508,   509,   463,    68,   502,   503,
      86,    87,   520,   517,   313,   144,   145,   263,   317,   523,
     261,   365,   321,   142,   143,    68,   520,   109,   365,   151,
     152,   277,    22,    71,   301,   109,    68,    64,   290,   466,
      69,   365,    79,   284,   296,   297,   301,    64,    69,   290,
     427,    65,   429,    68,   481,    68,   323,    69,   109,   112,
     301,    72,   361,    69,    65,    69,    69,   366,   323,    69,
     369,   370,   371,    69,   373,   502,   503,    71,    69,    65,
      65,   109,   323,   427,    64,   429,   385,    64,   113,   466,
     427,   109,   429,   520,    64,   394,    64,    64,   365,   109,
      64,    64,   354,   427,   481,   429,   358,    64,    73,    65,
     365,   109,   109,    71,   109,   356,   357,   518,   519,   360,
     109,   109,   466,    65,   365,   502,   503,   426,   109,   466,
     109,   109,    71,    65,    65,    45,    70,   481,   390,    65,
      65,    71,   466,   520,   481,   386,    65,   446,   447,    65,
      65,   450,     7,   405,    42,    67,   109,   481,   502,   503,
     427,    64,   429,    71,   416,   502,   503,    64,   109,   109,
      17,   109,   427,   109,   429,    70,   520,   418,   502,   503,
     109,   109,    71,   520,    65,    64,    14,   486,    65,    65,
      65,   490,   109,    65,    79,   109,   520,    64,   439,   466,
     109,    71,    61,    62,    63,    64,    65,    66,   109,   109,
     109,   466,    65,    79,   481,   109,   457,   109,   109,    65,
      65,    10,   109,    20,    40,   524,   481,   277,    61,    62,
      63,    64,    65,    66,   297,   502,   503,    68,   479,   365,
     481,   358,    73,   493,   268,   426,   495,   502,   503,   466,
     436,   119,   123,   520,   156,   153,   239,   170,   154,    -1,
     146,   502,   503,    -1,    -1,   520,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   155,   158,   520,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      -1,    73,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   183,   158,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
     183,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,    64,   233,     4,     5,    -1,    -1,     8,
     239,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    -1,    -1,    86,    87,    -1,   231,    28,
     233,    -1,    -1,    -1,    33,    -1,   239,    36,    37,    38,
      39,    40,    41,    73,    -1,    -1,    45,    46,   109,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,     4,
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
      63,    64,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    28,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    36,    86,    87,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,   116,    56,    57,    58,    59,    60,    61,
      62,    63,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    86,    87,    88,    89,     4,    -1,    -1,    36,
       8,    -1,    -1,    40,    -1,    13,    -1,    -1,    -1,    46,
      18,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      28,   115,    -1,    -1,    -1,    -1,    -1,    64,    36,   111,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    76,
      77,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,     4,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    13,    76,    77,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      86,    87,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    28,    -1,    -1,    -1,    76,    77,
      -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    86,    87,
      88,    89,    46,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    36,    66,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,    76,    77,    -1,    50,    51,    52,    53,    54,
      55,    -1,    86,    87,    88,    89,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    28,    -1,    -1,
      -1,    76,    77,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    86,    87,    88,    89,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    64,    13,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,     4,
      -1,    -1,     3,     8,    43,    -1,    -1,    46,    13,    10,
      -1,    -1,    -1,    18,    -1,    16,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    27,    -1,    -1,    30,
      31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,    -1,
      -1,    46,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    28,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    36,    68,    -1,
      -1,    40,    72,    73,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    64,    72,    73,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    86,    87,    -1,
      -1,    16,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    27,    -1,    -1,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    29,   118,   119,    46,   258,   259,     0,    23,   120,
     121,   122,   123,   124,    72,   109,   259,   110,   125,   126,
     127,   128,   131,   161,   122,   258,    72,   109,   258,     3,
      10,    16,    27,    30,    31,    32,    35,    38,    39,    44,
     129,   130,   132,   128,    90,    64,   109,   130,     9,    25,
     109,    28,    36,    40,    50,    51,    52,    53,    54,    55,
      64,    76,    77,    86,    87,    88,    89,   157,   213,   214,
     215,   216,   217,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   246,   250,
     259,   258,   258,     4,     8,    13,    18,    56,    57,    58,
      59,    60,    61,    62,    63,   252,   253,   254,   255,   259,
      72,   246,   252,   259,   220,   222,   226,   259,   226,   226,
     226,   226,   226,    65,    72,    71,    68,    86,    87,    90,
      91,    95,    88,    89,    96,    97,    24,    74,    75,    82,
      83,    80,    81,    92,    94,    93,    84,    78,    85,    73,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     245,    64,    68,    15,   133,    15,   160,   162,    68,   219,
      64,   219,   258,    65,    68,   218,    68,   218,   109,   258,
     246,   246,   226,   226,   226,   231,   231,   232,   232,   252,
     256,   257,   259,   233,   233,   233,   233,   234,   234,   235,
     236,   237,   238,   246,   239,   242,   157,   246,   259,    22,
     134,   135,   259,   109,    71,   246,    68,   157,    64,   229,
      69,    65,    68,    65,    64,    69,    68,    68,    68,    79,
      65,    69,   136,   259,   109,   112,   163,   248,   259,    69,
     246,    65,   157,   226,    69,   229,   157,    69,    69,    69,
     241,    71,   137,   248,   126,   141,   147,   164,   165,   166,
     167,   168,    69,    65,    65,   259,   126,   138,   139,   140,
     141,   145,   147,   156,   132,   109,   113,   249,   166,    35,
     132,   155,   139,   249,   109,    43,   146,   251,   252,   256,
     172,   248,   258,   154,   172,   258,   142,   143,   258,     5,
      12,    19,    21,    33,    37,    38,    39,    41,    45,    48,
      49,    64,   116,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   192,   193,   197,   198,
     203,   204,   205,   206,   207,   209,   215,   221,   223,   224,
     225,   227,   228,   243,   251,   259,    64,    64,    71,   109,
      64,    73,    52,   109,   109,    64,    64,   195,   246,    64,
      64,    64,   246,    64,    52,   109,   109,   246,   109,   174,
     249,   109,   109,   142,   258,    68,   111,   150,   151,   152,
     251,   150,   143,   150,    66,   144,   169,   246,   109,   172,
     176,   181,   194,   200,   202,   251,   246,   109,   246,   246,
     246,   109,   246,   109,   172,    65,   251,    65,    71,   258,
      65,    65,   144,   170,   171,    45,    70,    71,   258,    65,
      65,    65,    65,    65,     7,   208,   210,   211,   258,    42,
     148,   149,   152,   148,   148,    67,    71,    64,   195,   181,
     114,   109,   181,   109,   109,   109,   109,    64,    17,   212,
     211,   153,   259,   109,   144,   246,    70,   115,   199,   246,
     172,   109,   187,   248,   172,   172,   172,   152,   109,    71,
     158,   248,    65,   196,   201,   202,    64,    65,    65,    14,
       6,    11,   186,   188,   189,   190,   191,    65,   172,   259,
      36,    40,   159,   173,   109,    65,   246,   109,   109,   109,
     246,   247,    79,   249,   189,   172,   191,   109,    64,    64,
     173,   249,   249,   109,    71,   172,   172,   172,    79,   109,
     172,   157,   157,   249,   172,   246,   109,    65,    65,    65,
     109,   109
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   117,   118,   119,   120,   120,   121,   121,   122,   122,
     123,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   132,   132,   133,   133,   134,   134,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   140,   141,   142,   142,   143,   143,   144,   144,   145,
     146,   147,   147,   148,   148,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   156,   157,   157,
     158,   158,   158,   159,   159,   160,   160,   161,   162,   162,
     163,   164,   164,   165,   165,   166,   166,   167,   168,   169,
     170,   170,   171,   171,   172,   173,   173,   174,   175,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   179,   180,
     181,   181,   181,   181,   181,   181,   181,   182,   183,   184,
     185,   186,   186,   187,   188,   188,   189,   190,   190,   191,
     191,   192,   193,   194,   194,   195,   195,   196,   196,   197,
     198,   198,   199,   200,   200,   201,   202,   202,   203,   203,
     204,   204,   205,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   212,   213,   213,   214,   214,   214,   214,
     214,   214,   214,   215,   216,   216,   217,   217,   218,   218,
     219,   219,   220,   220,   221,   221,   221,   222,   222,   223,
     223,   223,   223,   224,   225,   226,   226,   226,   226,   226,
     227,   228,   229,   229,   229,   229,   230,   230,   230,   231,
     231,   231,   231,   232,   232,   232,   233,   233,   233,   234,
     234,   234,   234,   234,   234,   235,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   239,   240,   240,   241,   241,
     242,   242,   243,   244,   244,   244,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   247,   248,
     249,   250,   250,   250,   250,   250,   250,   251,   251,   252,
     252,   253,   253,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   255,   255,   256,   256,   257,   257,   257,   258,
     259,   259
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     1,     0,     1,     2,     1,     1,
       3,     5,     1,     1,     1,     0,     1,     2,     6,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     1,     0,     2,     0,     1,     0,
       2,     1,     3,     3,     0,     1,     2,     1,     2,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     1,     3,
       1,     8,     8,     1,     0,     2,     1,     0,     1,     3,
       2,     3,     1,     3,     1,     0,     2,     9,     1,     0,
       3,     3,     4,     5,     5,     1,     0,     7,     2,     3,
       3,     1,     0,     1,     2,     1,     1,     1,     2,     3,
       1,     0,     1,     3,     3,     1,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     6,     6,     9,
       6,     1,     0,     3,     1,     2,     2,     1,     2,     4,
       3,     6,     8,     1,     0,     1,     0,     1,     0,    10,
       9,     9,     6,     1,     1,     1,     1,     3,     3,     2,
       3,     2,     3,     3,     6,     6,     1,     0,     4,     5,
       1,     2,     6,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     5,     1,     3,     3,     3,     2,     3,
       3,     4,     3,     3,     4,     6,     6,     4,     4,     1,
       1,     1,     1,     2,     2,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     5,     4,     5,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       1,     3
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
#line 400 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_UNIT, 3);   }
#line 2136 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 405 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PACKAGE, 1);   }
#line 2142 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 410 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "ImportDeclarations";   }
#line 2148 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 411 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_NULL, "ImportDeclarations");   }
#line 2154 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 416 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORTS, 1);   }
#line 2160 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 418 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2166 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 428 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORT, 1);   }
#line 2172 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 433 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORT_ALL, 1);   }
#line 2178 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 443 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_NULL, "AnnotationDeclarations");   }
#line 2184 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 448 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATIONS, 1);   }
#line 2190 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 450 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2196 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 455 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATION, 2);   }
#line 2202 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 457 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		SPUSH(NID_NULL, "ArgumentList");
		COMBINE(NID_ANNOTATION, 2);
	}
#line 2211 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 465 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MODIFIERS, 1);   }
#line 2217 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 467 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2223 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 472 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PUBLIC, (yyvsp[0]. token ));   }
#line 2229 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 474 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PROTECTED, (yyvsp[0]. token ));   }
#line 2235 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 476 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PRIVATE, (yyvsp[0]. token ));   }
#line 2241 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 478 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_STATIC, (yyvsp[0]. token ));   }
#line 2247 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 480 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ABSTRACT, (yyvsp[0]. token ));   }
#line 2253 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 482 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FINAL, (yyvsp[0]. token ));   }
#line 2259 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 484 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NATIVE, (yyvsp[0]. token ));   }
#line 2265 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 486 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_READLOCK, (yyvsp[0]. token ));   }
#line 2271 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 488 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_WRITELOCK, (yyvsp[0]. token ));   }
#line 2277 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 490 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOLATILE, (yyvsp[0]. token ));   }
#line 2283 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 492 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CONST, (yyvsp[0]. token ));   }
#line 2289 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 497 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CLASS, 6);   }
#line 2295 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 502 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_NULL, "Modifiers");   }
#line 2301 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 507 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "Super";   }
#line 2307 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 508 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_NULL, "Super");   }
#line 2313 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 513 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "Interfaces";   }
#line 2319 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 514 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_NULL, "Interfaces");   }
#line 2325 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 523 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2331 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 525 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2337 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 530 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_BODY, "ClassBody");   }
#line 2343 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 535 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2349 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 537 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2355 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 553 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FIELD, 4);   }
#line 2361 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 558 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2367 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 560 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2373 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 565 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		SPUSH(NID_NULL, "VariableInitializer");
		COMBINE(NID_DECLARATOR, 2);
	}
#line 2382 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 570 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DECLARATOR, 2);   }
#line 2388 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 580 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2394 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 585 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOID, (yyvsp[0]. token ));   }
#line 2400 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 590 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 6);   }
#line 2406 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 592 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 6);   }
#line 2412 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 597 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Throws" */ );   }
#line 2418 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 606 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "FormalParameterList" */ );   }
#line 2424 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 610 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETERS, 1);   }
#line 2430 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 612 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2436 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 617 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETER, 2);   }
#line 2442 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 619 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_PARAMETER, 2);
		++TOP()->counter;
	}
#line 2451 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 627 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROWS, 1);   }
#line 2457 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 629 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2463 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 634 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_BLOCK, "MethodBody");   }
#line 2469 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 639 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_STATIC_INIT, 1);   }
#line 2475 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 644 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CONSTRUCTOR, 6);   }
#line 2481 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 649 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ArgumentList" */ );   }
#line 2487 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 654 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 1);   }
#line 2493 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 657 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 2);   }
#line 2499 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 662 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_THIS;   }
#line 2505 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 664 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_SUPER;   }
#line 2511 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 669 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ExtendsInterfaces" */ );   }
#line 2517 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 674 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 2532 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 688 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2538 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 690 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2544 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 699 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "InterfaceMemberDeclarations" */ );   }
#line 2550 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 704 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2556 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 706 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2562 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 720 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		SPUSH(NID_NULL, "MethodBody" );
		COMBINE(0, 1);
	}
#line 2571 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 732 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_NULL, "VariableInitializers"); }
#line 2577 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 737 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARRAY, 1);   }
#line 2583 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 739 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2589 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 748 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 1);   }
#line 2595 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 750 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2601 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 763 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LOCAL, 2);   }
#line 2607 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 792 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PASS, (yyvsp[-1]. token ));   }
#line 2613 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 811 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		SPUSH(NID_NULL, "Block");
		COMBINE(NID_IF, 3);
	}
#line 2622 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 819 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_BLOCK, 1);
		SPUSH(NID_NULL, "Block");
		COMBINE(NID_IF, 3);
	}
#line 2632 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 828 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IF, 3);   }
#line 2638 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 833 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SWITCH, 2);   }
#line 2644 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 838 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   SPUSH(NID_NULL, "SwitchBlockStatementGroups" );   }
#line 2650 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 847 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2656 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 849 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2662 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 854 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GROUP, 2);   }
#line 2668 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 859 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2674 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 861 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2680 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 866 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CASE, 1);   }
#line 2686 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 150:
#line 868 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_DEFAULT, (yyvsp[-2]. token ));
		COMBINE(NID_CASE, 1);
	}
#line 2695 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 876 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_WHILE, 2);   }
#line 2701 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 882 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DO, 2);   }
#line 2707 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 154:
#line 887 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ForInit" */ );   }
#line 2713 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 156:
#line 892 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Expression" */ );   }
#line 2719 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 158:
#line 897 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "ForUpdate" */ );   }
#line 2725 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 159:
#line 902 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR, 4);   }
#line 2731 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 160:
#line 907 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2737 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 161:
#line 909 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2743 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 162:
#line 914 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RANGE, 2);   }
#line 2749 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 166:
#line 928 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2755 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 167:
#line 930 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2761 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 168:
#line 935 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. token ));
		COMBINE(NID_BREAK, 1);
	}
#line 2770 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 169:
#line 940 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_INTLITERAL, NULL);
		COMBINE(NID_BREAK, 1);
	}
#line 2779 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 948 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. token ));
		COMBINE(NID_CONTINUE, 1);
	}
#line 2788 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 171:
#line 953 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_INTLITERAL, NULL);
		COMBINE(NID_CONTINUE, 1);
	}
#line 2797 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 172:
#line 961 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RETURN, 1);   }
#line 2803 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 173:
#line 967 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROW, 1);   }
#line 2809 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 174:
#line 972 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2815 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 974 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2821 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 177:
#line 979 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULL, NULL /* "Catches" */ );   }
#line 2827 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 984 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_NULL, NULL /* "finally" */ );
		COMBINE(NID_TRY, 3);
	}
#line 2836 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 989 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TRY, 3);   }
#line 2842 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 994 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2848 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 996 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2854 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 1001 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CATCH, 2);   }
#line 2860 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 1006 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_FINALLY;   }
#line 2866 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 1017 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_THIS, (yyvsp[0]. token ));   }
#line 2872 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1027 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW, 2);   }
#line 2878 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1032 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARGUMENTS, 1);   }
#line 2884 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 1034 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2890 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1039 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 2928 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 1073 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW_ARRAY, 3);   }
#line 2934 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1078 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
#line 2943 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 1083 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 2951 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1090 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
#line 2960 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1095 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 2968 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1102 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_FIELD, 2);   }
#line 2974 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1104 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_SUPER, (yyvsp[-2]. token ));
		COMBINE(NID_ACCESS_FIELD, 2);
	}
#line 2983 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1112 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_NULL, NULL /* "Primary" */ );
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CALL, 3);
	}
#line 2999 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 1124 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CALL, 3);   }
#line 3005 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1126 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3028 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 1148 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3034 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1150 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3040 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1162 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3046 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1167 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3052 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1174 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 1);   }
#line 3058 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1176 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 1);   }
#line 3064 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1182 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3070 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1187 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3076 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1193 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TILDE, 1);   }
#line 3082 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1195 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BANG, 1);   }
#line 3088 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 1201 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3112 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 227:
#line 1221 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CAST, 2);   }
#line 3118 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 228:
#line 1223 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3136 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 230:
#line 1241 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MUL, 2);   }
#line 3142 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 231:
#line 1243 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DIV, 2);   }
#line 3148 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 232:
#line 1245 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MOD, 2);   }
#line 3154 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 234:
#line 1251 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 2);   }
#line 3160 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 1253 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 2);   }
#line 3166 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1259 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHL, 2);   }
#line 3172 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 238:
#line 1261 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHR, 2);   }
#line 3178 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1267 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LT, 2);   }
#line 3184 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 1269 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GT, 2);   }
#line 3190 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1271 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LE, 2);   }
#line 3196 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1273 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GE, 2);   }
#line 3202 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 244:
#line 1275 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INSTANCEOF, 2);   }
#line 3208 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1281 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_EQ, 2);   }
#line 3214 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1283 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NE, 2);   }
#line 3220 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1289 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_AND, 2);   }
#line 3226 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1295 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CARET, 2);   }
#line 3232 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1301 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_OR, 2);   }
#line 3238 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 255:
#line 1307 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANDAND, 2);   }
#line 3244 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 257:
#line 1313 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_OROR, 2);   }
#line 3250 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 259:
#line 1319 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_QUEST, 3);   }
#line 3256 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 262:
#line 1329 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 3277 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 266:
#line 1355 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ASN, (yyvsp[0]. token ));   }
#line 3283 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 267:
#line 1357 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MUASN, (yyvsp[0]. token ));   }
#line 3289 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1359 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_DIASN, (yyvsp[0]. token ));   }
#line 3295 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 269:
#line 1361 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MODASN, (yyvsp[0]. token ));   }
#line 3301 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 270:
#line 1363 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PLASN, (yyvsp[0]. token ));   }
#line 3307 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1365 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MIASN, (yyvsp[0]. token ));   }
#line 3313 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 272:
#line 1367 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SLASN, (yyvsp[0]. token ));   }
#line 3319 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1369 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SRASN, (yyvsp[0]. token ));   }
#line 3325 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 274:
#line 1371 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ANDASN, (yyvsp[0]. token ));   }
#line 3331 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 275:
#line 1373 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CARETASN, (yyvsp[0]. token ));   }
#line 3337 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1375 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ORASN, (yyvsp[0]. token ));   }
#line 3343 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 281:
#line 1396 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_INTLITERAL, (yyvsp[0]. token ));   }
#line 3349 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1398 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FLOATLITERAL, (yyvsp[0]. token ));   }
#line 3355 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 283:
#line 1400 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_BOOLLITERAL, (yyvsp[0]. token ));   }
#line 3361 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 284:
#line 1402 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_STRINGLITERAL, (yyvsp[0]. token ));   }
#line 3367 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 285:
#line 1404 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CHARLITERAL, (yyvsp[0]. token ));   }
#line 3373 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1406 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NULLLITERAL, (yyvsp[0]. token ));   }
#line 3379 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 290:
#line 1417 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_BOOLEAN, (yyvsp[0]. token ));    }
#line 3385 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 293:
#line 1427 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT8, (yyvsp[0]. token ));    }
#line 3391 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 294:
#line 1429 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT16, (yyvsp[0]. token ));    }
#line 3397 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 295:
#line 1431 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT32, (yyvsp[0]. token ));    }
#line 3403 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 296:
#line 1433 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT64, (yyvsp[0]. token ));    }
#line 3409 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 297:
#line 1435 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT8, (yyvsp[0]. token ));    }
#line 3415 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 298:
#line 1437 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT16, (yyvsp[0]. token ));    }
#line 3421 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 299:
#line 1439 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT32, (yyvsp[0]. token ));    }
#line 3427 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 300:
#line 1441 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT64, (yyvsp[0]. token ));    }
#line 3433 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 301:
#line 1443 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_CHAR, (yyvsp[0]. token ));    }
#line 3439 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 302:
#line 1448 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_FLOAT, (yyvsp[0]. token ));    }
#line 3445 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 303:
#line 1450 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_DOUBLE, (yyvsp[0]. token ));    }
#line 3451 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 306:
#line 1460 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_TYPE_ARRAY, 1);
		TOP()->counter = 1;
	}
#line 3460 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1465 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_TYPE_ARRAY, 1);
		TOP()->counter = 1;
	}
#line 3469 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 308:
#line 1470 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *node = TOP();
		++node->counter;
	}
#line 3478 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 309:
#line 1477 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NAME, (yyvsp[0]. token ));   }
#line 3484 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 311:
#line 1483 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		/*beagle::compiler::Node *current = POP();

		if (TOP()->getChildCount() > 0)
		{
			TOP()->addChild( *current );
		}
		else
		{
			NPUSH(current);
			COMBINE(NID_QNAME, 2);
		}*/
		beagle::compiler::Node *current = POP();
		TOP()->text += '.';
		TOP()->text += current->text;
		delete current;
	}
#line 3506 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3510 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1502 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
	return yytname[YYTRANSLATE(tok)];
}


