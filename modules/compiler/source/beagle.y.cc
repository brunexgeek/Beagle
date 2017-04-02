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
#line 7 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */



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

	std::string fileName;

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
    TOK_ELIF = 270,
    TOK_EXTENDS = 271,
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
    TOK_VOID = 297,
    TOK_VOLATILE = 298,
    TOK_WHILE = 299,
    TOK_NAME = 300,
    TOK_QNAME = 301,
    TOK_CONTINUE = 302,
    TOK_TRY = 303,
    TOK_NLITERAL = 304,
    TOK_BLITERAL = 305,
    TOK_ILITERAL = 306,
    TOK_CLITERAL = 307,
    TOK_FLITERAL = 308,
    TOK_SLITERAL = 309,
    TOK_UINT8 = 310,
    TOK_UINT16 = 311,
    TOK_UINT32 = 312,
    TOK_UINT64 = 313,
    TOK_INT8 = 314,
    TOK_INT16 = 315,
    TOK_INT32 = 316,
    TOK_INT64 = 317,
    TOK_LP = 318,
    TOK_RP = 319,
    TOK_LC = 320,
    TOK_RC = 321,
    TOK_LB = 322,
    TOK_RB = 323,
    TOK_SM = 324,
    TOK_CM = 325,
    TOK_DOT = 326,
    TOK_ASN = 327,
    TOK_LT = 328,
    TOK_GT = 329,
    TOK_BANG = 330,
    TOK_TILDE = 331,
    TOK_QUEST = 332,
    TOK_COLON = 333,
    TOK_EQ = 334,
    TOK_NE = 335,
    TOK_LE = 336,
    TOK_GE = 337,
    TOK_AND = 338,
    TOK_OR = 339,
    TOK_INC = 340,
    TOK_DEC = 341,
    TOK_PLUS = 342,
    TOK_MINUS = 343,
    TOK_MUL = 344,
    TOK_DIV = 345,
    TOK_BAND = 346,
    TOK_BOR = 347,
    TOK_CARET = 348,
    TOK_MOD = 349,
    TOK_SHL = 350,
    TOK_SHR = 351,
    TOK_PLASN = 352,
    TOK_MIASN = 353,
    TOK_MUASN = 354,
    TOK_DIASN = 355,
    TOK_ANDASN = 356,
    TOK_ORASN = 357,
    TOK_CARETASN = 358,
    TOK_SLASN = 359,
    TOK_SRASN = 360,
    TOK_MODASN = 361,
    TOK_BAD_TOKEN = 362,
    TOK_EOL = 363,
    TOK_AT = 364,
    TOK_VARARG = 365,
    TOK_INDENT = 366,
    TOK_DEDENT = 367,
    TOK_IN = 368,
    TOK_RANGE = 369,
    TOK_PASS = 370,
    TOK_NULLABLE = 371
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 202 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */

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
#line 51 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:359  */


#include <iostream>
#include "beagle.l.hh"
#include <beagle-loader/Node.hh>


using namespace beagle::compiler;


#pragma GCC diagnostic ignored "-Wunused-function"


static void beagle_error(parser_context_t *context, const char *msg)
{
	printf ("%s:%d:%d: error: (%s) %s\n",
		context->fileName.c_str(),
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
		temp->add(stack[i]);
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
		stack[i]->print(std::cout, 1, false);
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

#define PUSH_STRING(type, string) \
	do {                                                \
		beagle_push( parserContext, (type), NULL,       \
			beagle_get_lineno(parserContext->lexer),    \
			beagle_get_column(parserContext->lexer) );  \
		if ((string) != NULL)                           \
			TOP()->text = (const char*)(string);        \
	} while (0)

#define PUSH_NODE(node) \
	beagle_push( parserContext, (node) )

#define PUSH_NULL(string) \
	PUSH_STRING(NID_NULL, string)

#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)

#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wsign-compare"


#line 430 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYLAST   1429

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  311
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  544

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
       0,   388,   388,   393,   398,   400,   404,   406,   411,   412,
     416,   421,   426,   427,   431,   432,   436,   438,   443,   445,
     453,   455,   460,   462,   464,   466,   468,   470,   472,   474,
     476,   478,   483,   488,   489,   493,   495,   499,   501,   505,
     507,   512,   513,   517,   519,   524,   525,   529,   530,   531,
     535,   540,   542,   547,   552,   557,   558,   562,   567,   572,
     574,   579,   580,   583,   585,   590,   592,   600,   601,   605,
     610,   618,   619,   623,   625,   626,   631,   640,   642,   647,
     661,   662,   666,   668,   673,   677,   678,   682,   684,   689,
     690,   694,   698,   706,   710,   711,   715,   717,   722,   726,
     728,   733,   737,   742,   743,   744,   745,   746,   747,   748,
     749,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   766,   771,   775,   776,   777,   778,   779,   780,   781,
     785,   793,   802,   804,   809,   810,   818,   829,   838,   843,
     848,   849,   853,   857,   859,   864,   869,   871,   876,   878,
     886,   892,   897,   898,   902,   903,   907,   908,   912,   917,
     919,   924,   929,   930,   934,   938,   940,   945,   950,   958,
     963,   971,   977,   982,   984,   989,   994,   999,  1000,  1004,
    1006,  1011,  1013,  1023,  1028,  1029,  1033,  1034,  1036,  1037,
    1038,  1039,  1040,  1044,  1049,  1051,  1056,  1090,  1095,  1100,
    1107,  1112,  1119,  1121,  1129,  1141,  1143,  1165,  1167,  1172,
    1173,  1174,  1175,  1179,  1184,  1189,  1190,  1191,  1193,  1195,
    1199,  1204,  1209,  1210,  1212,  1214,  1218,  1238,  1240,  1257,
    1258,  1260,  1262,  1267,  1268,  1270,  1275,  1276,  1278,  1283,
    1284,  1286,  1288,  1290,  1292,  1297,  1298,  1300,  1305,  1306,
    1311,  1312,  1317,  1318,  1323,  1324,  1329,  1330,  1335,  1336,
    1341,  1342,  1346,  1366,  1367,  1368,  1372,  1374,  1376,  1378,
    1380,  1382,  1384,  1386,  1388,  1390,  1392,  1397,  1401,  1405,
    1409,  1413,  1415,  1417,  1419,  1421,  1423,  1428,  1429,  1433,
    1434,  1439,  1440,  1444,  1446,  1448,  1450,  1452,  1454,  1456,
    1458,  1460,  1465,  1467,  1472,  1473,  1477,  1482,  1487,  1494,
    1499,  1500
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
  "TOK_ELIF", "TOK_EXTENDS", "TOK_FINALLY", "TOK_FLOAT", "TOK_FOR",
  "TOK_GOTO", "TOK_IF", "TOK_IMPLEMENTS", "TOK_IMPORT", "TOK_INSTANCEOF",
  "TOK_INTERFACE", "TOK_LONG", "TOK_NATIVE", "TOK_NEW", "TOK_PACKAGE",
  "TOK_PRIVATE", "TOK_PROTECTED", "TOK_PUBLIC", "TOK_RETURN",
  "TOK_SUSPEND", "TOK_STATIC", "TOK_SUPER", "TOK_SWITCH", "TOK_READLOCK",
  "TOK_WRITELOCK", "TOK_THIS", "TOK_THROW", "TOK_VOID", "TOK_VOLATILE",
  "TOK_WHILE", "TOK_NAME", "TOK_QNAME", "TOK_CONTINUE", "TOK_TRY",
  "TOK_NLITERAL", "TOK_BLITERAL", "TOK_ILITERAL", "TOK_CLITERAL",
  "TOK_FLITERAL", "TOK_SLITERAL", "TOK_UINT8", "TOK_UINT16", "TOK_UINT32",
  "TOK_UINT64", "TOK_INT8", "TOK_INT16", "TOK_INT32", "TOK_INT64",
  "TOK_LP", "TOK_RP", "TOK_LC", "TOK_RC", "TOK_LB", "TOK_RB", "TOK_SM",
  "TOK_CM", "TOK_DOT", "TOK_ASN", "TOK_LT", "TOK_GT", "TOK_BANG",
  "TOK_TILDE", "TOK_QUEST", "TOK_COLON", "TOK_EQ", "TOK_NE", "TOK_LE",
  "TOK_GE", "TOK_AND", "TOK_OR", "TOK_INC", "TOK_DEC", "TOK_PLUS",
  "TOK_MINUS", "TOK_MUL", "TOK_DIV", "TOK_BAND", "TOK_BOR", "TOK_CARET",
  "TOK_MOD", "TOK_SHL", "TOK_SHR", "TOK_PLASN", "TOK_MIASN", "TOK_MUASN",
  "TOK_DIASN", "TOK_ANDASN", "TOK_ORASN", "TOK_CARETASN", "TOK_SLASN",
  "TOK_SRASN", "TOK_MODASN", "TOK_BAD_TOKEN", "TOK_EOL", "TOK_AT",
  "TOK_VARARG", "TOK_INDENT", "TOK_DEDENT", "TOK_IN", "TOK_RANGE",
  "TOK_PASS", "TOK_NULLABLE", "$accept", "CompilationUnit",
  "PackageDeclaration", "ImportDeclarationListOpt",
  "ImportDeclarationList", "ImportDeclaration",
  "SingleTypeImportDeclaration", "TypeImportOnDemandDeclaration",
  "TypeDeclaration", "AnnotationDeclarationListOpt",
  "AnnotationDeclarationList", "AnnotationDeclaration", "ModifierList",
  "Modifier", "ClassDeclaration", "ModifierListOpt", "SuperOpt",
  "ImplementsInterfaceListOpt", "ImplementsInterfaceList", "ClassBodyOpt",
  "ClassBodyDeclarationList", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclaratorList",
  "VariableDeclarator", "VariableInitializer", "MethodDeclaration",
  "VoidType", "MethodHeader", "FormalParameterListOpt",
  "FormalParameterList", "FormalParameter", "MethodBodyOpt",
  "StaticInitializer", "ConstructorDeclaration", "ArgumentListOpt",
  "ConstructorBody", "ExplicitConstructorInvocation", "SuperOrThis",
  "InterfaceDeclaration", "ExtendsInterfaceListOpt",
  "ExtendsInterfaceList", "InterfaceBody",
  "InterfaceMemberDeclarationListOpt", "InterfaceMemberDeclarationList",
  "InterfaceMemberDeclaration", "ConstantDeclaration",
  "AbstractMethodDeclaration", "ArrayInitializer",
  "VariableInitializerListOpt", "VariableInitializerList", "Block",
  "BlockStatementList", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "ExpressionStatement", "ModifyingExpression", "IfThenStatement",
  "IfThenInlineStatement", "IfThenElseStatement", "ElifStatementList",
  "ElifStatement", "ElseStatement", "SwitchStatement",
  "SwitchBlockStatementGroupListOpt", "SwitchBlock",
  "SwitchBlockStatementGroupList", "SwitchBlockStatementGroup",
  "SwitchLabelList", "SwitchLabel", "WhileStatement", "DoStatement",
  "ForInitOpt", "ExpressionOpt", "ForUpdateOpt", "ForStatement",
  "ForEachStatement", "Range", "ForInit", "ForUpdate",
  "ModifyingExpressionList", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "LockStatement", "TryStatement",
  "CatchListOpt", "CatchList", "CatchClause", "Finally", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression", "ArgumentList",
  "ArrayCreationExpression", "DimensionList", "DimensionListExpr",
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

#define YYPACT_NINF -450

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-450)))

#define YYTABLE_NINF -305

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    -2,    67,    77,  -450,  -450,   -29,  -450,    -2,    -7,
      77,  -450,  -450,  -450,    -2,  -450,   -18,    -2,  -450,  1254,
      -7,  -450,  -450,  -450,  -450,  -450,    -9,  -450,   -36,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  1254,
    -450,    79,  -450,    11,  1129,  -450,  -450,    -2,    -2,  -450,
    1245,    63,  -450,  -450,  -450,  -450,  -450,  -450,  -450,   937,
    1129,  1129,  1129,  1129,  1129,  1129,    94,   108,  -450,  -450,
     128,  -450,  1312,  -450,  1300,   116,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,    86,   118,   123,     2,   141,    96,   100,
     112,   130,   -40,  -450,  -450,  -450,  1323,  -450,  -450,    64,
     195,   199,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,   163,  -450,  -450,  -450,    44,    -2,
     169,   172,   828,  -450,   174,  -450,    62,  -450,  -450,  -450,
    -450,  -450,   137,    -2,  1129,  1129,  -450,  -450,  1129,  1129,
    1129,  1129,  1129,  1129,  1129,  1245,  1129,  1129,  1129,  1129,
    1129,  1129,  1129,  1129,  1129,  1129,  1129,  1129,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  1129,
    1129,  1129,    -2,   226,    -2,   147,   180,  1129,   185,  1129,
     185,   197,  1299,   202,    93,  1036,   122,  -450,   210,  -450,
     212,  -450,  -450,  -450,    86,    86,   118,   118,   211,  -450,
     222,    55,   123,   123,   123,   123,     2,     2,   141,    96,
     100,   112,   213,   130,  -450,   228,   229,   227,    -2,   224,
     234,   227,   200,    -2,   238,  1129,   244,  1129,  -450,  -450,
    1129,   248,  1299,  1129,  -450,   249,   250,   253,  1129,  -450,
    -450,   227,   204,    -2,  -450,  -450,    83,   227,  -450,   255,
    -450,   260,  -450,  -450,  -450,   261,  -450,  -450,  -450,  -450,
     200,   227,  1254,  -450,   230,   218,    87,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,    -7,  1214,  -450,  -450,  -450,  -450,
    1351,    88,  -450,  -450,  -450,  -450,   231,  -450,  -450,    -2,
      -2,   211,  -450,   200,  1214,  -450,  -450,  -450,   200,   269,
     -19,  -450,   -32,  -450,   695,   272,  -450,  -450,   522,    -2,
    -450,   522,  1065,   -23,   232,  1185,  1129,  1129,   273,   282,
     283,  1129,   286,   -21,   274,  1129,   242,   612,  -450,   245,
    -450,  -450,  -450,  -450,   246,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,    23,
      28,   116,   139,   150,  -450,  -450,  -450,    -2,     7,   522,
    1245,   291,   287,  -450,    -2,  -450,   288,   300,  1065,  -450,
    -450,  -450,   259,  -450,   200,   998,    -2,   293,   264,  -450,
    1129,  1129,  1129,   265,  1129,   267,  -450,   271,   305,  -450,
    -450,  -450,  -450,  -450,   307,  1109,   317,    -2,   304,   522,
    -450,   309,  -450,   322,   313,  -450,   345,  -450,  -450,   324,
    -450,   326,   284,   808,  -450,   336,   337,   338,  -450,   339,
    -450,   200,  -450,   327,  -450,  -450,  -450,  -450,  -450,  1065,
     343,  1129,  1280,   861,   200,   299,   302,   306,   308,   311,
     410,   312,  -450,  1129,   352,  -450,   359,   346,   348,   251,
    -450,   200,   200,   200,   200,   825,   406,    84,  -450,   200,
     364,  1280,  1129,   321,   323,   354,  1129,   251,  -450,  -450,
    -450,   117,  -450,  -450,  -450,   325,   356,   328,  -450,  -450,
    -450,   764,   330,   366,  -450,   326,   373,   200,   200,   340,
     367,  -450,  -450,  1129,   368,   218,   117,  -450,     5,  -450,
     200,   341,   200,    63,   381,   612,   387,   612,  -450,   344,
    1129,  -450,  -450,   200,   350,  -450,   375,   355,  -450,  -450,
    -450,  -450,  -450,   200,  -450,   612,  -450,  1129,  -450,   200,
     396,  -450,   200,   357,  -450,  -450,  -450,   398,  -450,  -450,
    -450,  -450,   358,  -450
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,   309,   310,     0,     1,     0,    15,
       4,     6,     8,     9,     0,     3,     0,     0,     2,    34,
      14,    16,    12,    13,     7,   311,     0,    10,     0,    26,
      31,    27,    24,    23,    22,    25,    28,    29,    30,    33,
      20,     0,    17,     0,    72,    19,    21,     0,     0,    11,
       0,     0,   187,   286,   283,   281,   285,   282,   284,     0,
       0,     0,     0,     0,     0,     0,     0,   209,   184,   189,
      71,   185,   190,   191,   192,   222,   211,   212,   229,   215,
     216,   219,   225,   233,   236,   239,   245,   248,   250,   252,
     254,   256,   258,   260,   277,   261,     0,   194,   186,   210,
      36,    81,   290,   301,   303,   302,   293,   294,   295,   296,
     297,   298,   299,   300,     0,   289,   291,   292,     0,     0,
       0,     0,   210,   190,   192,   224,   210,   223,   220,   221,
     217,   218,     0,     0,     0,     0,   213,   214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,   270,
     271,   267,   268,   274,   276,   275,   272,   273,   269,     0,
      72,     0,     0,    38,     0,     0,    80,     0,   196,    72,
     197,   203,   188,     0,     0,     0,     0,    18,   202,   195,
       0,   230,   231,   232,   234,   235,   237,   238,     0,   244,
     305,   304,   240,   241,   242,   243,   246,   247,   249,   251,
     253,   255,     0,   257,   262,     0,     0,    35,     0,     0,
      37,    82,     0,     0,     0,     0,     0,    72,   227,   198,
       0,     0,     0,    72,   208,     0,     0,     0,     0,   204,
     207,    39,     0,     0,   279,    79,    15,    83,   200,     0,
     193,     0,   226,   199,   228,     0,   306,   308,   307,   259,
      42,    40,    34,    91,     0,     0,    15,    87,    89,    90,
     201,   206,   205,    32,    15,     0,    92,   280,    84,    88,
      34,    15,    43,    45,    47,    48,     0,    49,    58,     0,
       0,   287,   288,    25,     0,    46,    44,    41,    68,     0,
       0,    51,    53,    69,     0,   310,    57,    67,    62,     0,
      50,    62,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
      99,   103,   120,   111,     0,   104,   105,   106,   112,   107,
     113,   108,   109,   114,   115,   116,   118,   117,   119,   129,
     128,     0,   126,   127,   124,   125,   123,     0,   265,    62,
       0,     0,    61,    63,     0,    52,    53,     0,    95,    54,
      56,    55,     0,   168,     0,   153,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,   170,     0,     0,   121,
     100,    98,   101,   122,   102,     0,     0,     0,     0,     0,
      65,     0,    96,     0,    94,   167,     0,   163,   165,     0,
     152,   162,     0,     0,   171,     0,     0,     0,   172,     0,
     169,     0,   188,     0,    66,    60,    64,    59,    93,     0,
       0,   155,     0,     0,     0,     0,     0,     0,     0,     0,
     178,     0,    97,     0,     0,   166,     0,     0,     0,   130,
     131,     0,     0,     0,     0,     0,     0,   175,   179,     0,
       0,   157,     0,     0,     0,     0,     0,   133,   134,   132,
     139,   141,   173,   174,   150,     0,     0,     0,   176,   180,
      70,     0,     0,     0,   156,   164,     0,     0,     0,     0,
       0,   135,   136,     0,     0,     0,   140,   143,     0,   146,
       0,     0,     0,    78,   187,     0,     0,     0,   151,     0,
       0,   160,   159,     0,     0,   278,     0,     0,   142,   144,
     145,   147,   182,     0,   183,     0,    73,    72,    74,     0,
       0,   138,     0,     0,   149,   181,    75,     0,   158,   161,
     137,   148,     0,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -450,  -450,  -450,  -450,  -450,   441,  -450,  -450,  -450,     1,
    -450,   444,  -450,   429,  -450,  -223,  -450,  -450,  -450,  -450,
    -450,   194,  -450,  -236,   120,   170,  -343,  -450,  -450,  -169,
    -282,  -450,  -387,  -450,  -450,  -450,  -162,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,   216,  -450,  -450,  -450,
    -450,  -450,  -244,  -449,  -450,   103,  -313,  -450,  -450,  -450,
    -366,  -450,  -450,  -450,  -450,    16,    17,  -450,  -450,  -450,
    -450,   -11,  -450,   -12,  -450,  -450,  -450,    56,  -450,  -450,
    -450,  -450,  -450,  -450,    27,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,    32,  -450,  -450,  -450,  -258,  -450,  -450,
     370,   376,   409,  -254,   454,  -113,   -70,   -66,   -42,   -14,
      -5,  -177,  -450,   142,   143,    36,   144,   347,   342,   349,
     353,   365,  -450,   258,   329,    29,  -450,  -450,   -53,  -450,
    -219,  -279,  -450,    26,   -35,  -450,  -450,  -450,   360,  -450,
     -13,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    10,    11,    12,    13,    18,   262,
      20,    21,    39,    40,    22,    41,   173,   219,   220,   273,
     281,   282,   283,   263,   300,   301,   369,   285,   289,   264,
     361,   362,   363,   306,   295,   287,    66,   480,   505,   506,
      23,   175,   176,   245,   265,   266,   267,   268,   269,   370,
     403,   404,   303,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   467,   468,   469,   338,   495,   470,
     496,   497,   498,   499,   339,   340,   409,   378,   483,   341,
     342,   447,   410,   484,   411,   343,   344,   345,   346,   347,
     348,   456,   457,   458,   478,    67,    68,    69,    70,    71,
     184,   178,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   169,    97,   516,
     304,   278,    98,   357,   291,   115,   116,   117,   292,   200,
       5,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    25,   297,   246,    28,   228,   120,    16,   215,   408,
      19,   493,   426,    25,   390,   114,   494,   226,   125,   127,
     128,   129,   130,   131,   121,   402,   145,    44,   372,   367,
     385,   311,   507,     1,   100,   101,     4,   156,   284,   275,
     312,   274,    14,     4,   157,   284,   349,   435,   391,   118,
     350,   309,  -304,    26,   307,   254,   525,   294,   122,   126,
     126,   126,   126,   126,   126,   251,   445,     7,   476,   349,
     170,   255,    45,   350,   395,   146,   147,   396,    14,    15,
      43,   189,   190,   148,   149,   373,   442,   386,    47,   310,
      27,   455,  -210,  -210,  -189,   408,   191,   192,   193,  -191,
       8,  -177,    17,   212,    48,   286,   181,   179,  -189,  -189,
     198,   177,   286,  -191,  -191,    14,   244,   349,   216,    49,
     188,   350,   237,   493,   224,   170,    14,   170,   494,   171,
     406,   171,   216,    14,   119,    14,  -265,   126,   126,   126,
     126,   126,   126,   126,   201,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   349,   126,   230,   132,   350,
     231,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,   217,   249,   221,   349,   138,   139,   440,   350,   133,
     140,   126,   202,   203,   204,   205,   232,   152,   252,   231,
     449,   351,    17,   153,   390,   -86,    17,    17,   134,   -85,
     277,   136,   137,   349,   154,   141,   142,   350,   472,   473,
     474,   172,   390,   155,   351,   174,   518,   241,   143,   144,
     150,   151,   247,   349,  -211,  -211,   526,   350,   528,   126,
     177,   126,   471,   182,   352,  -212,  -212,   126,   353,   183,
     481,   135,   261,   511,   512,   187,   536,   349,   218,   349,
     223,   350,   225,   350,   520,   222,   522,   352,   524,   371,
     227,   353,   351,   377,   379,   465,   466,   349,   383,   531,
     229,   350,   388,   233,   201,   280,   299,   302,   235,   535,
     234,   305,   280,   194,   195,   538,   196,   197,   540,   236,
     354,   238,   239,   201,   206,   207,   366,   240,    14,   355,
     351,   290,   242,   358,   243,   352,   248,   201,   250,   353,
     201,   244,   260,   354,   201,   371,   253,   256,   257,   351,
     290,   258,   355,   270,   271,   272,   358,   415,   416,   417,
     277,   419,   308,   356,   364,   359,   380,   364,   276,   298,
     374,   376,   216,   352,   366,   381,   382,   353,   351,   384,
     389,   400,   387,   392,   393,   398,   356,   399,   201,   201,
     312,   354,   352,   412,   401,   537,   353,   405,   351,   422,
     355,   413,   414,   418,   358,   420,   371,   309,   379,   421,
     448,   423,   425,   429,   424,   364,   397,   427,   428,   430,
     460,   352,   351,   431,   351,   353,   432,   433,   201,   354,
     436,   437,   438,   439,   356,   441,   443,   450,   355,   486,
     451,   352,   351,   490,   452,   353,   453,   455,   354,   454,
     459,   461,   462,   477,   463,   364,   464,   355,   482,   487,
     509,   488,   489,   500,   501,   352,   502,   352,   508,   353,
     515,   353,   356,   510,   -77,   514,   517,   354,   513,   523,
     527,    24,   529,   533,   201,   352,   355,   530,   532,   353,
     539,   356,   542,   534,    42,   541,   543,   354,    46,   123,
     123,   123,   123,   123,   123,   296,   355,   394,   407,   365,
     358,   364,   279,   491,   492,   519,   521,   444,   485,   479,
     356,   354,   186,   354,   180,   209,   259,     0,   214,   208,
     355,     0,   355,   210,   358,   199,   358,     0,   211,     0,
     356,   354,     0,     0,   124,   124,   124,   124,   124,   124,
     355,     0,   213,     0,   358,     0,   102,     0,     0,     0,
     103,     0,     0,     0,   356,   104,   356,     0,     0,     0,
     105,     0,     0,     0,     0,     0,     0,   123,   123,   123,
     123,   123,   123,   123,   356,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,     0,   123,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,   112,   113,     0,     0,     0,     0,     0,
       0,   123,   124,   124,   124,   124,   124,   124,   124,     0,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
       0,   124,     0,     0,     0,     0,   102,   313,     0,     0,
     103,     0,     0,     0,   314,   104,     0,     0,     0,     0,
     105,   315,   360,   316,     0,     0,   124,     0,     0,   123,
      50,   123,     0,     0,     0,   317,     0,   123,    51,   318,
     319,   320,    52,   321,     0,     0,   322,     4,     0,   323,
     324,    53,    54,    55,    56,    57,    58,   106,   107,   108,
     109,   110,   111,   112,   113,   325,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,   124,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,    62,    63,   102,
     313,     0,     0,   103,     0,     0,     0,   314,   104,     0,
       0,     0,     0,   105,   315,     0,   316,     0,     0,     0,
       0,     0,     0,    50,   277,     0,     0,   326,   317,     0,
       0,    51,   318,   319,   320,    52,   321,     0,     0,   322,
       4,     0,   323,   324,    53,    54,    55,    56,    57,    58,
     106,   107,   108,   109,   110,   111,   112,   113,   325,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   313,
       0,     0,   103,     0,     0,     0,   314,   104,     0,     0,
      62,    63,   105,   315,     0,   316,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,   317,     0,     0,
     503,   318,   319,   320,   504,   321,     0,     0,   322,     4,
     326,   323,   324,    53,    54,    55,    56,    57,    58,   106,
     107,   108,   109,   110,   111,   112,   113,   325,     0,   102,
       0,     0,     0,   103,     0,     0,    50,     0,   104,     0,
       0,     0,     0,   105,    51,     0,     0,     0,    52,    62,
      63,     0,     0,     4,     0,     0,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       4,   325,     0,     0,     0,     0,     0,     0,     0,   326,
     106,   107,   108,   109,   110,   111,   112,   113,     0,    50,
       0,   170,     0,    62,    63,   185,     0,    51,     0,    14,
    -265,    52,     0,   475,     0,     0,     4,     0,     0,     0,
      53,    54,    55,    56,    57,    58,   434,     0,     0,     0,
       0,     0,     0,     0,    59,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,   360,    60,    61,     0,     0,
       0,   102,     0,     0,     0,   103,    62,    63,    64,    65,
     104,     0,     0,     0,     0,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,    51,     0,   446,     0,    52,     0,     0,
       0,     0,     4,     0,     0,     0,    53,    54,    55,    56,
      57,    58,   106,   107,   108,   109,   110,   111,   112,   113,
      59,     0,   102,     0,     0,     0,   103,     0,     0,     0,
       0,   104,    60,    61,     0,     0,   105,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    50,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,    52,     0,
       0,     0,     0,     4,     0,     0,     0,    53,    54,    55,
      56,    57,    58,   106,   107,   108,   109,   110,   111,   112,
     113,   325,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,    52,     0,     0,     0,
       0,     4,     0,    62,    63,    53,    54,    55,    56,    57,
      58,     0,     0,    50,     0,     0,     0,     0,     0,    59,
       0,    51,     0,     0,   229,    52,     0,     0,     0,     0,
       4,    60,    61,     0,    53,    54,    55,    56,    57,    58,
       0,    62,    63,    64,    65,     0,     0,     0,    59,     0,
     368,     0,     0,     0,     0,     0,     0,    50,     0,     0,
      60,    61,     0,     0,     0,    51,     0,     0,     0,    52,
      62,    63,    64,    65,     4,     0,     0,    50,    53,    54,
      55,    56,    57,    58,     0,    51,     0,     0,     0,    52,
       0,     0,    59,     0,     4,     0,     0,   258,    53,    54,
      55,    56,    57,    58,    60,    61,     0,     0,     0,   102,
       0,     0,    59,   103,    62,    63,    64,    65,   104,     0,
       0,     0,     0,   105,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,   102,     0,
       0,     0,   103,     0,     0,     0,     0,   104,     0,     0,
       4,     0,   105,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   375,   102,
       0,     0,     0,   103,     0,     0,   288,    29,   104,     4,
       0,     0,     0,   105,    30,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,     0,     0,     0,
       0,    31,     0,     0,    32,    33,    34,     0,     0,    35,
       4,     0,    36,    37,     0,     0,     0,    38,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,    50,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
      52,     0,     0,     0,     0,     4,     0,    50,     0,    53,
      54,    55,    56,    57,    58,    51,     0,     0,     0,    52,
       0,     0,     0,   325,     4,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    29,     0,     0,     0,     0,     0,
       0,    30,    59,     0,     0,    62,    63,   135,     0,     0,
       0,     0,  -264,     0,    60,    61,     0,     0,    31,     0,
       0,    32,    33,    34,  -263,     0,   293,     0,     0,    36,
      37,     0,     0,     0,    38,   158,     0,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,     0,     0,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168
};

static const yytype_int16 yycheck[] =
{
       1,    14,   281,   222,    17,   182,    59,     8,   170,   375,
       9,     6,   399,    26,   327,    50,    11,   179,    60,    61,
      62,    63,    64,    65,    59,   368,    24,    63,    51,   311,
      51,    63,   481,    29,    47,    48,    45,    77,   274,   262,
      72,   260,    71,    45,    84,   281,   304,   413,   327,    50,
     304,    70,    45,    71,   298,   232,   505,   280,    59,    60,
      61,    62,    63,    64,    65,   227,   432,     0,   455,   327,
      63,   233,   108,   327,    67,    73,    74,   359,    71,   108,
      89,   134,   135,    81,    82,   108,   429,   108,     9,   108,
     108,     7,    85,    86,    71,   461,   138,   139,   140,    71,
      23,    17,   109,   156,    25,   274,   119,    63,    85,    86,
     145,    67,   281,    85,    86,    71,   111,   375,   171,   108,
     133,   375,    67,     6,   177,    63,    71,    63,    11,    67,
     374,    67,   185,    71,    71,    71,    72,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   413,   157,    64,    64,   413,
      67,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   172,   225,   174,   432,    89,    90,   421,   432,    71,
      94,   182,   146,   147,   148,   149,    64,    91,   230,    67,
     434,   304,   109,    93,   507,   112,   109,   109,    70,   112,
     112,    85,    86,   461,    92,    87,    88,   461,   452,   453,
     454,    16,   525,    83,   327,    16,   495,   218,    95,    96,
      79,    80,   223,   481,    85,    86,   505,   481,   507,   230,
      67,   232,   451,    64,   304,    85,    86,   238,   304,    67,
     459,    67,   243,   487,   488,   108,   525,   505,    22,   507,
      70,   505,    67,   507,   498,   108,   500,   327,   502,   312,
      63,   327,   375,   316,   317,    14,    15,   525,   321,   513,
      68,   525,   325,    63,   275,   274,   289,   290,    67,   523,
      68,   294,   281,   141,   142,   529,   143,   144,   532,    67,
     304,    78,    64,   294,   150,   151,   309,    68,    71,   304,
     413,   275,    78,   304,    70,   375,    68,   308,    64,   375,
     311,   111,   108,   327,   315,   368,    68,    68,    68,   432,
     294,    68,   327,    68,    64,    64,   327,   380,   381,   382,
     112,   384,    63,   304,   308,    63,    63,   311,   108,   108,
     108,   315,   395,   413,   357,    63,    63,   413,   461,    63,
     108,   364,    78,   108,   108,    64,   327,    70,   359,   360,
      72,   375,   432,   376,    64,   527,   432,   108,   481,    64,
     375,    78,   108,   108,   375,   108,   429,    70,   431,   108,
     433,    64,    78,    70,   397,   359,   360,    78,    66,    44,
     443,   461,   505,    69,   507,   461,    70,   113,   399,   413,
      64,    64,    64,    64,   375,    78,    63,   108,   413,   462,
     108,   481,   525,   466,   108,   481,   108,     7,   432,   108,
     108,    69,    63,    17,    78,   399,    78,   432,    64,   108,
      64,   108,    78,   108,    78,   505,   108,   507,   108,   505,
     493,   507,   413,    70,    63,    78,    78,   461,   108,   108,
      63,    10,   108,    78,   455,   525,   461,   510,   108,   525,
      64,   432,    64,   108,    20,   108,   108,   481,    39,    60,
      61,    62,    63,    64,    65,   281,   481,   357,   375,   309,
     481,   455,   266,   467,   467,   496,   498,   431,   461,   457,
     461,   505,   122,   507,   118,   153,   238,    -1,   169,   152,
     505,    -1,   507,   154,   505,   145,   507,    -1,   155,    -1,
     481,   525,    -1,    -1,    60,    61,    62,    63,    64,    65,
     525,    -1,   157,    -1,   525,    -1,     4,    -1,    -1,    -1,
       8,    -1,    -1,    -1,   505,    13,   507,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,   143,   144,   525,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   138,   139,   140,   141,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
       8,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    19,   110,    21,    -1,    -1,   182,    -1,    -1,   230,
      28,   232,    -1,    -1,    -1,    33,    -1,   238,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,    -1,   232,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    85,    86,     4,
       5,    -1,    -1,     8,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,   112,    -1,    -1,   115,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,     8,    -1,    -1,    -1,    12,    13,    -1,    -1,
      85,    86,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,    45,
     115,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,     4,
      -1,    -1,    -1,     8,    -1,    -1,    28,    -1,    13,    -1,
      -1,    -1,    -1,    18,    36,    -1,    -1,    -1,    40,    85,
      86,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    28,
      -1,    63,    -1,    85,    86,    67,    -1,    36,    -1,    71,
      72,    40,    -1,    78,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   110,    75,    76,    -1,    -1,
      -1,     4,    -1,    -1,    -1,     8,    85,    86,    87,    88,
      13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,   114,    -1,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    13,    75,    76,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    45,    -1,    85,    86,    49,    50,    51,    52,    53,
      54,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    36,    -1,    -1,    68,    40,    -1,    -1,    -1,    -1,
      45,    75,    76,    -1,    49,    50,    51,    52,    53,    54,
      -1,    85,    86,    87,    88,    -1,    -1,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      75,    76,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      85,    86,    87,    88,    45,    -1,    -1,    28,    49,    50,
      51,    52,    53,    54,    -1,    36,    -1,    -1,    -1,    40,
      -1,    -1,    63,    -1,    45,    -1,    -1,    68,    49,    50,
      51,    52,    53,    54,    75,    76,    -1,    -1,    -1,     4,
      -1,    -1,    63,     8,    85,    86,    87,    88,    13,    -1,
      -1,    -1,    -1,    18,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,     4,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      45,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     4,
      -1,    -1,    -1,     8,    -1,    -1,    42,     3,    13,    45,
      -1,    -1,    -1,    18,    10,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    31,    32,    -1,    -1,    35,
      45,    -1,    38,    39,    -1,    -1,    -1,    43,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    45,    -1,    28,    -1,    49,
      50,    51,    52,    53,    54,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    63,    45,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    63,    -1,    -1,    85,    86,    67,    -1,    -1,
      -1,    -1,    72,    -1,    75,    76,    -1,    -1,    27,    -1,
      -1,    30,    31,    32,    72,    -1,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    43,    72,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    29,   118,   119,    45,   257,   258,     0,    23,   120,
     121,   122,   123,   124,    71,   108,   258,   109,   125,   126,
     127,   128,   131,   157,   122,   257,    71,   108,   257,     3,
      10,    27,    30,    31,    32,    35,    38,    39,    43,   129,
     130,   132,   128,    89,    63,   108,   130,     9,    25,   108,
      28,    36,    40,    49,    50,    51,    52,    53,    54,    63,
      75,    76,    85,    86,    87,    88,   153,   212,   213,   214,
     215,   216,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   245,   249,   258,
     257,   257,     4,     8,    13,    18,    55,    56,    57,    58,
      59,    60,    61,    62,   251,   252,   253,   254,   258,    71,
     245,   251,   258,   219,   221,   225,   258,   225,   225,   225,
     225,   225,    64,    71,    70,    67,    85,    86,    89,    90,
      94,    87,    88,    95,    96,    24,    73,    74,    81,    82,
      79,    80,    91,    93,    92,    83,    77,    84,    72,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   244,
      63,    67,    16,   133,    16,   158,   159,    67,   218,    63,
     218,   257,    64,    67,   217,    67,   217,   108,   257,   245,
     245,   225,   225,   225,   230,   230,   231,   231,   251,   255,
     256,   258,   232,   232,   232,   232,   233,   233,   234,   235,
     236,   237,   245,   238,   241,   153,   245,   258,    22,   134,
     135,   258,   108,    70,   245,    67,   153,    63,   228,    68,
      64,    67,    64,    63,    68,    67,    67,    67,    78,    64,
      68,   258,    78,    70,   111,   160,   247,   258,    68,   245,
      64,   153,   225,    68,   228,   153,    68,    68,    68,   240,
     108,   258,   126,   140,   146,   161,   162,   163,   164,   165,
      68,    64,    64,   136,   247,   132,   108,   112,   248,   163,
     126,   137,   138,   139,   140,   144,   146,   152,    42,   145,
     250,   251,   255,    35,   132,   151,   138,   248,   108,   257,
     141,   142,   257,   169,   247,   257,   150,   169,    63,    70,
     108,    63,    72,     5,    12,    19,    21,    33,    37,    38,
      39,    41,    44,    47,    48,    63,   115,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   184,   191,
     192,   196,   197,   202,   203,   204,   205,   206,   207,   214,
     220,   222,   223,   224,   226,   227,   242,   250,   258,    63,
     110,   147,   148,   149,   250,   142,   257,   147,    65,   143,
     166,   245,    51,   108,   108,    63,   250,   245,   194,   245,
      63,    63,    63,   245,    63,    51,   108,    78,   245,   108,
     173,   248,   108,   108,   141,    67,   147,   250,    64,    70,
     257,    64,   143,   167,   168,   108,   169,   172,   177,   193,
     199,   201,   257,    78,   108,   245,   245,   245,   108,   245,
     108,   108,    64,    64,   257,    78,   149,    78,    66,    70,
      44,    69,    70,   113,   108,   177,    64,    64,    64,    64,
     169,    78,   143,    63,   194,   177,   114,   198,   245,   169,
     108,   108,   108,   108,   108,     7,   208,   209,   210,   108,
     245,    69,    63,    78,    78,    14,    15,   181,   182,   183,
     186,   247,   169,   169,   169,    78,   149,    17,   211,   210,
     154,   247,    64,   195,   200,   201,   245,   108,   108,    78,
     245,   182,   183,     6,    11,   185,   187,   188,   189,   190,
     108,    78,   108,    36,    40,   155,   156,   170,   108,    64,
      70,   169,   169,   108,    78,   245,   246,    78,   248,   188,
     169,   190,   169,   108,   169,   170,   248,    63,   248,   108,
     245,   169,   108,    78,   108,   169,   248,   153,   169,    64,
     169,   108,    64,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   117,   118,   119,   120,   120,   121,   121,   122,   122,
     123,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     152,   153,   153,   154,   154,   154,   155,   156,   156,   157,
     158,   158,   159,   159,   160,   161,   161,   162,   162,   163,
     163,   164,   165,   166,   167,   167,   168,   168,   169,   170,
     170,   171,   172,   173,   173,   173,   173,   173,   173,   173,
     173,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   175,   176,   177,   177,   177,   177,   177,   177,   177,
     178,   179,   180,   180,   181,   181,   181,   182,   183,   184,
     185,   185,   186,   187,   187,   188,   189,   189,   190,   190,
     191,   192,   193,   193,   194,   194,   195,   195,   196,   197,
     197,   198,   199,   199,   200,   201,   201,   202,   202,   203,
     203,   204,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   212,   212,   213,   213,   213,   213,
     213,   213,   213,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   220,   221,   221,   222,
     222,   222,   222,   223,   224,   225,   225,   225,   225,   225,
     226,   227,   228,   228,   228,   228,   229,   229,   229,   230,
     230,   230,   230,   231,   231,   231,   232,   232,   232,   233,
     233,   233,   233,   233,   233,   234,   234,   234,   235,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   240,   240,
     241,   241,   242,   243,   243,   243,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   245,   246,   247,
     248,   249,   249,   249,   249,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   254,   254,   255,   255,   256,   256,   256,   257,
     258,   258
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     1,     0,     1,     2,     1,     1,
       3,     5,     1,     1,     1,     0,     1,     2,     6,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     9,     1,     0,     2,     0,     1,     0,     2,
       3,     3,     0,     1,     2,     1,     2,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     1,     3,     1,     8,
       8,     1,     0,     1,     3,     2,     3,     1,     0,     2,
       9,     1,     0,     3,     3,     4,     5,     1,     1,     7,
       1,     0,     2,     3,     3,     1,     0,     1,     2,     1,
       1,     1,     2,     3,     1,     0,     1,     3,     3,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     6,     6,     1,     2,     2,     5,     4,     6,
       1,     0,     3,     1,     2,     2,     1,     2,     4,     3,
       6,     8,     1,     0,     1,     0,     1,     0,    10,     8,
       8,     6,     1,     1,     1,     1,     3,     3,     2,     3,
       2,     3,     3,     6,     6,     5,     6,     1,     0,     1,
       2,     5,     4,     3,     1,     1,     1,     1,     3,     1,
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
#line 389 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_UNIT, 3);   }
#line 2161 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 394 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PACKAGE, 1);   }
#line 2167 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 399 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "ImportDeclarationList";   }
#line 2173 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 400 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ImportDeclarationList");   }
#line 2179 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 405 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORTS, 1);   }
#line 2185 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 407 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2191 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 417 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORT, 1);   }
#line 2197 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 422 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORT_ALL, 1);   }
#line 2203 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 432 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("AnnotationDeclarationList");   }
#line 2209 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 437 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATIONS, 1);   }
#line 2215 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 439 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2221 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 444 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATION, 2);   }
#line 2227 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 446 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("ArgumentList");
		COMBINE(NID_ANNOTATION, 2);
	}
#line 2236 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 454 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MODIFIERS, 1);   }
#line 2242 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 456 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2248 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 461 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PUBLIC, (yyvsp[0]. token ));   }
#line 2254 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 463 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PROTECTED, (yyvsp[0]. token ));   }
#line 2260 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 465 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PRIVATE, (yyvsp[0]. token ));   }
#line 2266 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 467 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_STATIC, (yyvsp[0]. token ));   }
#line 2272 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 469 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ABSTRACT, (yyvsp[0]. token ));   }
#line 2278 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 471 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NATIVE, (yyvsp[0]. token ));   }
#line 2284 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 473 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_READLOCK, (yyvsp[0]. token ));   }
#line 2290 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 475 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_WRITELOCK, (yyvsp[0]. token ));   }
#line 2296 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 477 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOLATILE, (yyvsp[0]. token ));   }
#line 2302 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 479 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CONST, (yyvsp[0]. token ));   }
#line 2308 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 484 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CLASS, 6);   }
#line 2314 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 489 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ModifierList");   }
#line 2320 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 494 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "Super";   }
#line 2326 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 495 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("Super");   }
#line 2332 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 500 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "ImplementsInterfaceList";   }
#line 2338 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 501 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ImplementsInterfaceList");   }
#line 2344 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 506 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2350 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 508 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2356 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 513 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_STRING(NID_BODY, "ClassBody");   }
#line 2362 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 518 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2368 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 520 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2374 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 536 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FIELD, 4);   }
#line 2380 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 541 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2386 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 543 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2392 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 548 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("VariableInitializer");
		COMBINE(NID_DECLARATOR, 2);
	}
#line 2401 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 553 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DECLARATOR, 2);   }
#line 2407 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 563 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2413 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 568 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOID, (yyvsp[0]. token ));   }
#line 2419 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 573 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 5);   }
#line 2425 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 575 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 5);   }
#line 2431 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 580 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("FormalParameterList");   }
#line 2437 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 584 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETERS, 1);   }
#line 2443 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 586 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2449 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 591 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETER, 2);   }
#line 2455 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 593 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_PARAMETER, 2);
		++TOP()->counter;
	}
#line 2464 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 601 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_STRING(NID_BLOCK, "MethodBody");   }
#line 2470 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 606 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_STATIC_INIT, 1);   }
#line 2476 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 611 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_CONSTRUCTOR, 5);
		TOP()->add( new Node(NID_NULL), 2 );
	}
#line 2485 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 619 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ArgumentList");   }
#line 2491 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 624 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 1);   }
#line 2497 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 627 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 2);   }
#line 2503 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 632 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *node = POP();
		PUSH_NULL("MethodName");
		PUSH_NODE(node);
		COMBINE(NID_CALL, 3);   }
#line 2513 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 641 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_THIS, NULL);   }
#line 2519 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 643 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SUPER, NULL);   }
#line 2525 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 648 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		// Notice: we need to insert an NID_NULL between 'SimpleName' and 'InterfaceListOpt'
		//         to make NID_INTERFACE similar to NID_CLASS
		beagle::compiler::Node *intfBody = POP();
		beagle::compiler::Node *extends = POP();
		PUSH_NULL(NULL);
		PUSH_NODE(extends);
		PUSH_NODE(intfBody);
		COMBINE(NID_INTERFACE, 6);
	}
#line 2540 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 662 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ExtendsInterfaceList");   }
#line 2546 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 667 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2552 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 669 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2558 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 678 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("InterfaceMemberDeclarationList");   }
#line 2564 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 683 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2570 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 685 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2576 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 699 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("MethodBody" );
		COMBINE(0, 1);
	}
#line 2585 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 711 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("VariableInitializerList"); }
#line 2591 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 716 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARRAY, 1);   }
#line 2597 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 718 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2603 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 727 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 1);   }
#line 2609 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 729 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2615 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 738 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LOCAL, 2);   }
#line 2621 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 767 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PASS, (yyvsp[-1]. token ));   }
#line 2627 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 786 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("Block");
		COMBINE(NID_IF, 3);
	}
#line 2636 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 794 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_BLOCK, 1);
		PUSH_NULL("Block");
		COMBINE(NID_IF, 3);
	}
#line 2646 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 803 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IF, 3);   }
#line 2652 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 805 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IF, 3);   }
#line 2658 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 811 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second;

		first = POP();
		second = TOP();
		(*second)[0][2] = *first;
	}
#line 2670 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 819 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second;

		first = POP();
		second = TOP();
		(*second)[0][2] = *first;
	}
#line 2682 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 830 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("Block");
		COMBINE(NID_IF, 3);
		COMBINE(NID_BLOCK, 1);
	}
#line 2692 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 844 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SWITCH, 2);   }
#line 2698 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 849 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("SwitchBlockStatementGroupList" );   }
#line 2704 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 858 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2710 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 860 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2716 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 865 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GROUP, 2);   }
#line 2722 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 870 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2728 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 872 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2734 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 877 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CASE, 1);   }
#line 2740 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 879 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_DEFAULT, (yyvsp[-2]. token ));
		COMBINE(NID_CASE, 1);
	}
#line 2749 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 150:
#line 887 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_WHILE, 2);   }
#line 2755 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 893 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DO, 2);   }
#line 2761 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 898 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ForInit");   }
#line 2767 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 155:
#line 903 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("Expression");   }
#line 2773 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 157:
#line 908 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ForUpdate");   }
#line 2779 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 158:
#line 913 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR, 4);   }
#line 2785 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 159:
#line 918 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2791 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 160:
#line 920 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2797 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 161:
#line 925 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RANGE, 2);   }
#line 2803 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 165:
#line 939 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2809 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 166:
#line 941 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2815 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 167:
#line 946 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. token ));
		COMBINE(NID_BREAK, 1);
	}
#line 2824 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 168:
#line 951 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_ILITERAL, NULL);
		COMBINE(NID_BREAK, 1);
	}
#line 2833 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 169:
#line 959 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. token ));
		COMBINE(NID_CONTINUE, 1);
	}
#line 2842 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 964 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_ILITERAL, NULL);
		COMBINE(NID_CONTINUE, 1);
	}
#line 2851 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 171:
#line 972 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RETURN, 1);   }
#line 2857 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 172:
#line 978 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROW, 1);   }
#line 2863 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 173:
#line 983 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2869 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 174:
#line 985 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2875 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 990 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("finally");
		COMBINE(NID_TRY, 3);
	}
#line 2884 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 176:
#line 995 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TRY, 3);   }
#line 2890 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 1000 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("CatchList");   }
#line 2896 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 1005 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2902 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 1007 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2908 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 1012 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CATCH, 2);   }
#line 2914 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 1014 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *top = POP();
		PUSH_NULL("FormalParameter");
		PUSH_NODE(top);
		COMBINE(NID_CATCH, 2);
	}
#line 2925 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 1024 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_FINALLY;   }
#line 2931 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 1035 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_THIS, (yyvsp[0]. token ));   }
#line 2937 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1045 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW, 2);   }
#line 2943 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1050 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARGUMENTS, 1);   }
#line 2949 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 1052 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2955 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1057 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
#line 2993 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 1091 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW_ARRAY, 3);   }
#line 2999 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1096 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
#line 3008 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 1101 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3016 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1108 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
#line 3025 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1113 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3033 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1120 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_FIELD, 2);   }
#line 3039 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1122 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_SUPER, (yyvsp[-2]. token ));
		COMBINE(NID_ACCESS_FIELD, 2);
	}
#line 3048 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1130 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH_NULL("Primary");
		PUSH_NODE(second);
		PUSH_NODE(third);

		COMBINE(NID_CALL, 3);
	}
#line 3064 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 1142 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CALL, 3);   }
#line 3070 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1144 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {

		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_SUPER, NULL);
		PUSH_NODE(second);
		PUSH_NODE(third);

		COMBINE(NID_CALL, 3);
	/*
	| Name BeginBlock ArgumentListOpt EndBlock
	| Primary TOK_DOT SimpleName BeginBlock ArgumentListOpt EndBlock
	| TOK_SUPER TOK_DOT TOK_NAME BeginBlock ArgumentListOpt EndBlock
	*/

	}
#line 3093 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 1166 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3099 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1168 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3105 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1180 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3111 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1185 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3117 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1192 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 1);   }
#line 3123 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1194 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 1);   }
#line 3129 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1200 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3135 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1205 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3141 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1211 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TILDE, 1);   }
#line 3147 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1213 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BANG, 1);   }
#line 3153 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 1219 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
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
			second->add(first);
		PUSH_NODE(second);
		PUSH_NODE(third);

		COMBINE(NID_CAST, 2);
	}
#line 3177 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 227:
#line 1239 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CAST, 2);   }
#line 3183 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 228:
#line 1241 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		second->add(first);
		PUSH_NODE(second);
		PUSH_NODE(third);

		COMBINE(NID_CAST, 2);
	}
#line 3201 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 230:
#line 1259 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MUL, 2);   }
#line 3207 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 231:
#line 1261 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DIV, 2);   }
#line 3213 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 232:
#line 1263 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MOD, 2);   }
#line 3219 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 234:
#line 1269 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 2);   }
#line 3225 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 1271 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 2);   }
#line 3231 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1277 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHL, 2);   }
#line 3237 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 238:
#line 1279 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHR, 2);   }
#line 3243 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1285 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LT, 2);   }
#line 3249 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 1287 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GT, 2);   }
#line 3255 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1289 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LE, 2);   }
#line 3261 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1291 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GE, 2);   }
#line 3267 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 244:
#line 1293 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INSTANCEOF, 2);   }
#line 3273 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1299 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_EQ, 2);   }
#line 3279 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1301 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NE, 2);   }
#line 3285 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1307 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BAND, 2);   }
#line 3291 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1313 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CARET, 2);   }
#line 3297 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1319 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BOR, 2);   }
#line 3303 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 255:
#line 1325 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_AND, 2);   }
#line 3309 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 257:
#line 1331 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_OR, 2);   }
#line 3315 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 259:
#line 1337 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_QUEST, 3);   }
#line 3321 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 262:
#line 1347 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {

		/*
		 * Change the expression notation from infixed to prefixed
		 */

		beagle::compiler::Node *left, *right, *oper;

		right = POP();
		oper = POP();
		left = POP();

		oper->add(left);
		oper->add(right);
		PUSH_NODE(oper);
	}
#line 3342 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 266:
#line 1373 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ASN, (yyvsp[0]. token ));   }
#line 3348 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 267:
#line 1375 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MUASN, (yyvsp[0]. token ));   }
#line 3354 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1377 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_DIASN, (yyvsp[0]. token ));   }
#line 3360 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 269:
#line 1379 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MODASN, (yyvsp[0]. token ));   }
#line 3366 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 270:
#line 1381 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PLASN, (yyvsp[0]. token ));   }
#line 3372 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1383 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MIASN, (yyvsp[0]. token ));   }
#line 3378 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 272:
#line 1385 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SLASN, (yyvsp[0]. token ));   }
#line 3384 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1387 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SRASN, (yyvsp[0]. token ));   }
#line 3390 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 274:
#line 1389 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ANDASN, (yyvsp[0]. token ));   }
#line 3396 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 275:
#line 1391 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CARETASN, (yyvsp[0]. token ));   }
#line 3402 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1393 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ORASN, (yyvsp[0]. token ));   }
#line 3408 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 281:
#line 1414 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ILITERAL, (yyvsp[0]. token ));   }
#line 3414 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1416 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FLITERAL, (yyvsp[0]. token ));   }
#line 3420 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 283:
#line 1418 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_BLITERAL, (yyvsp[0]. token ));   }
#line 3426 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 284:
#line 1420 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SLITERAL, (yyvsp[0]. token ));   }
#line 3432 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 285:
#line 1422 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CLITERAL, (yyvsp[0]. token ));   }
#line 3438 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1424 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NLITERAL, (yyvsp[0]. token ));   }
#line 3444 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 290:
#line 1435 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_BOOLEAN, (yyvsp[0]. token ));    }
#line 3450 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 293:
#line 1445 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT8, (yyvsp[0]. token ));    }
#line 3456 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 294:
#line 1447 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT16, (yyvsp[0]. token ));    }
#line 3462 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 295:
#line 1449 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT32, (yyvsp[0]. token ));    }
#line 3468 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 296:
#line 1451 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT64, (yyvsp[0]. token ));    }
#line 3474 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 297:
#line 1453 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT8, (yyvsp[0]. token ));    }
#line 3480 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 298:
#line 1455 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT16, (yyvsp[0]. token ));    }
#line 3486 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 299:
#line 1457 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT32, (yyvsp[0]. token ));    }
#line 3492 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 300:
#line 1459 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT64, (yyvsp[0]. token ));    }
#line 3498 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 301:
#line 1461 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_CHAR, (yyvsp[0]. token ));    }
#line 3504 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 302:
#line 1466 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_FLOAT, (yyvsp[0]. token ));    }
#line 3510 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 303:
#line 1468 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_DOUBLE, (yyvsp[0]. token ));    }
#line 3516 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 306:
#line 1478 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_TYPE_ARRAY, 1);
		TOP()->counter = 1;
	}
#line 3525 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1483 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_TYPE_ARRAY, 1);
		TOP()->counter = 1;
	}
#line 3534 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 308:
#line 1488 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *node = TOP();
		++node->counter;
	}
#line 3543 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 309:
#line 1495 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NAME, (yyvsp[0]. token ));   }
#line 3549 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 311:
#line 1501 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		/*beagle::compiler::Node *current = POP();

		if (TOP()->getChildCount() > 0)
		{
			TOP()->addChild( *current );
		}
		else
		{
			PUSH_NODE(current);
			COMBINE(NID_QNAME, 2);
		}*/
		beagle::compiler::Node *current = POP();
		TOP()->text += '.';
		TOP()->text += current->text;
		delete current;
	}
#line 3571 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3575 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1520 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
	return yytname[YYTRANSLATE(tok)];
}


