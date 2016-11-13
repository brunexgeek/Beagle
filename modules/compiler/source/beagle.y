/*
 * Godiva Grammar: godgram.y
 *
 * Based on Java grammar in Gosling/Joy/Steele, Chapter 19
 */


/* Require bison 2.3 or later */
%require "2.3"
%define api.pure full
%lex-param   { yyscan_t scanner }
%parse-param { parser_context_t *parserContext }


%code requires {


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

}

%code{

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

}

/* namespace to enclose parser in */
%name-prefix "beagle_"


/* keep track of the current position within the input
%locations
%initial-action
{
    // initialize the initial location object
    //@$.begin.filename = @$.end.filename = &driver.streamname;
};*/


/* verbose error messages */
%error-verbose

/*
 * %union declares of what kinds of values appear on the value stack
 */
%union {
    char* node;
}

/*
 * each token is declared.  tokens store leaf values on the value stack
 *
 * Back in javalex.l, we put things on the stack by assigning to yylval

 "abstract"           { yylval.node = alcnode(ABSTRACT, 0); return ABSTRACT; }

 *
 */
%token < node > TOK_ABSTRACT
%token < node > TOK_BOOLEAN
%token < node > TOK_BREAK
%token < node > TOK_CASE
%token < node > TOK_CATCH
%token < node > TOK_CHAR
%token < node > TOK_CLASS
%token < node > TOK_CONST
%token < node > TOK_DEFAULT
%token < node > TOK_DO
%token < node > TOK_DOUBLE
%token < node > TOK_ELSE
%token < node > TOK_EXTENDS
%token < node > TOK_FINAL
%token < node > TOK_FINALLY
%token < node > TOK_FLOAT
%token < node > TOK_FOR
%token < node > TOK_GOTO
%token < node > TOK_IF
%token < node > TOK_IMPLEMENTS
%token < node > TOK_IMPORT
%token < node > TOK_INSTANCEOF
%token < node > TOK_INTERFACE
%token < node > TOK_LONG
%token < node > TOK_NATIVE
%token < node > TOK_NEW
%token < node > TOK_PACKAGE
%token < node > TOK_PRIVATE
%token < node > TOK_PROTECTED
%token < node > TOK_PUBLIC
%token < node > TOK_RETURN
%token < node > TOK_SUSPEND
%token < node > TOK_STATIC
%token < node > TOK_SUPER
%token < node > TOK_SWITCH
%token < node > TOK_READLOCK
%token < node > TOK_WRITELOCK
%token < node > TOK_THIS
%token < node > TOK_THROW
%token < node > TOK_THROWS
%token < node > TOK_VOID
%token < node > TOK_VOLATILE
%token < node > TOK_WHILE
%token < node > TOK_NAME
%token < node > TOK_QNAME
%token < node > TOK_CONTINUE
%token < node > TOK_TRANSIENT
%token < node > TOK_TRY
%token < node > TOK_NULLLITERAL
%token < node > TOK_BOOLLITERAL
%token < node > TOK_INTLITERAL
%token < node > TOK_CHARLITERAL
%token < node > TOK_FLOATLITERAL
%token < node > TOK_STRINGLITERAL
%token < node > TOK_UINT8
%token < node > TOK_UINT16
%token < node > TOK_UINT32
%token < node > TOK_UINT64
%token < node > TOK_INT8
%token < node > TOK_INT16
%token < node > TOK_INT32
%token < node > TOK_INT64
%token < node > TOK_LP
%token < node > TOK_RP
%token < node > TOK_LC
%token < node > TOK_RC
%token < node > TOK_LB
%token < node > TOK_RB
%token < node > TOK_SM
%token < node > TOK_CM
%token < node > TOK_DOT
%token < node > TOK_ASN
%token < node > TOK_LT
%token < node > TOK_GT
%token < node > TOK_BANG
%token < node > TOK_TILDE
%token < node > TOK_QUEST
%token < node > TOK_COLON
%token < node > TOK_EQ
%token < node > TOK_NE
%token < node > TOK_LE
%token < node > TOK_GE
%token < node > TOK_ANDAND
%token < node > TOK_OROR
%token < node > TOK_INC
%token < node > TOK_DEC
%token < node > TOK_PLUS
%token < node > TOK_MINUS
%token < node > TOK_MUL
%token < node > TOK_DIV
%token < node > TOK_AND
%token < node > TOK_OR
%token < node > TOK_CARET
%token < node > TOK_MOD
%token < node > TOK_SHL
%token < node > TOK_SHR
%token < node > TOK_PLASN
%token < node > TOK_MIASN
%token < node > TOK_MUASN
%token < node > TOK_DIASN
%token < node > TOK_ANDASN
%token < node > TOK_ORASN
%token < node > TOK_CARETASN
%token < node > TOK_SLASN
%token < node > TOK_SRASN
%token < node > TOK_MODASN
%token < node > TOK_BAD_TOKEN
%token < node > TOK_EOL
%token < node > TOK_AT
%token < node > TOK_VARARG
%token < node > TOK_INDENT
%token < node > TOK_DEDENT
%token < node > TOK_IN
%token < node > TOK_RANGE
%token < node > TOK_PASS


/*
 * each nonterminal is declared.  nonterminals correspond to internal nodes
 */
%type < node > Literal Type PrimitiveType NumericType IntegralType
%type < node > FloatingPointType ReferenceType ClassOrInterfaceType
%type < node > ClassType InterfaceType ArrayType Name SimpleName
%type < node > QualifiedName CompilationUnit ImportDeclarations
%type < node > PackageDeclaration ImportDeclaration
%type < node > SingleTypeImportDeclaration TypeImportOnDemandDeclaration
%type < node > TypeDeclaration Modifiers Modifier ClassDeclaration
%type < node > Super Interfaces InterfaceTypeList ClassBody
%type < node > ClassBodyDeclarations ClassBodyDeclaration
%type < node > ClassMemberDeclaration FieldDeclaration VariableDeclarators
%type < node > VariableDeclarator VariableInitializer
%type < node > MethodDeclaration MethodHeader Range
%type < node > FormalParameterList FormalParameter Throws ClassTypeList
%type < node > MethodBody StaticInitializer ConstructorDeclaration
%type < node > ConstructorBody ForEachStatement
%type < node > ExplicitConstructorInvocation InterfaceDeclaration
%type < node > ExtendsInterfaces InterfaceBody InterfaceMemberDeclarations
%type < node > InterfaceMemberDeclaration ConstantDeclaration
%type < node > AbstractMethodDeclaration ArrayInitializer
%type < node > VariableInitializers Block BlockStatements BlockStatement
%type < node > LocalVariableDeclarationStatement LocalVariableDeclaration
%type < node > Statement EmptyStatement
%type < node > StatementWithoutTrailingSubstatement
%type < node > ExpressionStatement StatementExpression IfThenStatement
%type < node > IfThenElseStatement IfThenInlineStatement
%type < node > SwitchStatement SwitchBlock SwitchBlockStatementGroups
%type < node > SwitchBlockStatementGroup SwitchLabels SwitchLabel
%type < node > WhileStatement DoStatement
%type < node > ForStatement ForInit ForUpdate
%type < node > StatementExpressionList BreakStatement ContinueStatement
%type < node > ReturnStatement ThrowStatement LockStatement
%type < node > TryStatement Catches CatchClause Finally Primary
%type < node > PrimaryNoNewArray ClassInstanceCreationExpression
%type < node > ArgumentList ArrayCreationExpression DimExprs DimExpr Dims
%type < node > FieldAccess MethodInvocation ArrayAccess PostFixExpression
%type < node > PostIncrementExpression PostDecrementExpression
%type < node > UnaryExpression PreIncrementExpression PreDecrementExpression
%type < node > UnaryExpressionNotPlusMinus CastExpression
%type < node > MultiplicativeExpression AdditiveExpression ShiftExpression
%type < node > RelationalExpression EqualityExpression AndExpression
%type < node > ExclusiveOrExpression InclusiveOrExpression
%type < node > ConditionalAndExpression ConditionalOrExpression
%type < node > ConditionalExpression AssignmentExpression Assignment
%type < node > LeftHandSide AssignmentOperator Expression ConstantExpression
%type < node > ImportDeclarationsOpt
%type < node > ModifiersOpt SuperOpt InterfacesOpt ClassBodyDeclarationsOpt
%type < node > ThrowsOpt FormalParameterListOpt CatchesOpt
%type < node > BlockStatementsOpt
%type < node > ArgumentListOpt ExplicitConstructorInvocationOpt DimsOpt
%type < node > ExtendsInterfacesOpt InterfaceMemberDeclarationsOpt
%type < node > VariableInitializersOpt SwitchBlockStatementGroupsOpt
%type < node > ForInitOpt ExpressionOpt ForUpdateOpt
%type < node > AnnotationDeclarations AnnotationDeclaration
%type < node > BeginBlock EndBlock AnnotationDeclarationsOpt


%start CompilationUnit

%%


CompilationUnit:
    PackageDeclaration ImportDeclarationsOpt TypeDeclaration
    {   COMBINE(NID_UNIT, 3);   }
    ;

Literal:
    TOK_INTLITERAL
    {   PUSH(NID_INTLITERAL, $1);   }
    | TOK_FLOATLITERAL
    {   PUSH(NID_FLOATLITERAL, $1);   }
    | TOK_BOOLLITERAL
    {   PUSH(NID_BOOLLITERAL, $1);   }
    | TOK_STRINGLITERAL
    {   PUSH(NID_STRINGLITERAL, $1);   }
    | TOK_CHARLITERAL
    {   PUSH(NID_CHARLITERAL, $1);   }
    | TOK_NULLLITERAL
    {   PUSH(NID_NULLLITERAL, $1);   }
    ;

Type:
    PrimitiveType
    | ReferenceType
    ;

PrimitiveType:
    NumericType
    | TOK_BOOLEAN
    {    PUSH(NID_BOOLEAN, $1);    }
    ;

NumericType:
    IntegralType
    | FloatingPointType
    ;

IntegralType:
    TOK_UINT8
    {    PUSH(NID_UINT8, $1);    }
    | TOK_UINT16
    {    PUSH(NID_UINT16, $1);    }
    | TOK_UINT32
    {    PUSH(NID_UINT32, $1);    }
    | TOK_UINT64
    {    PUSH(NID_UINT64, $1);    }
    | TOK_INT8
    {    PUSH(NID_INT8, $1);    }
    | TOK_INT16
    {    PUSH(NID_INT16, $1);    }
    | TOK_INT32
    {    PUSH(NID_INT32, $1);    }
    | TOK_INT64
    {    PUSH(NID_INT64, $1);    }
    | TOK_CHAR
    {    PUSH(NID_CHAR, $1);    }
    ;

FloatingPointType:
    TOK_FLOAT
    {    PUSH(NID_FLOAT, $1);    }
    | TOK_DOUBLE
    {    PUSH(NID_DOUBLE, $1);    }
    ;

ReferenceType:
    ClassOrInterfaceType
    | ArrayType
    ;

ClassOrInterfaceType:
    Name
    {
        PUSH(NID_NULL, NULL /* "InterfaceTypeList" */ );
        COMBINE(NID_TYPE_CLASS, 2);
    }
    ;

ClassType:
    ClassOrInterfaceType
    ;

InterfaceType:
    ClassOrInterfaceType
    ;

ArrayType:
    PrimitiveType TOK_LB TOK_RB
    {
        COMBINE(NID_TYPE_ARRAY, 1);
        TOP()->counter = 1;
    }
    | ClassOrInterfaceType TOK_LB TOK_RB
    {
        COMBINE(NID_TYPE_ARRAY, 1);
        TOP()->counter = 1;
    }
    | ArrayType TOK_LB TOK_RB
    {
        beagle::compiler::Node *node = TOP();
        ++node->counter;
    }
    ;

Name:
    SimpleName
    | QualifiedName
    ;

SimpleName:
    TOK_NAME
    {   PUSH(NID_NAME, $1);    }
    ;

QualifiedName:
    Name TOK_DOT TOK_NAME
    {
        //PUSH(NID_NAME, $3);
        //COMBINE(0, 1);
        beagle::compiler::Node *name = TOP();
        name->text += '.';
        name->text += $3;
        name->type = NID_QNAME;
    }
    ;

 /*
PackageDeclarationOpt:
    PackageDeclaration
    | {   PUSH(NID_NULL, "PackageDeclaration" );   }
    ;
 */

ImportDeclarationsOpt:
    ImportDeclarations
    | {   PUSH(NID_NULL, NULL /* "ImportDeclarations" */ );   }
    ;


ImportDeclarations:
    ImportDeclaration
    {   COMBINE(NID_IMPORTS, 1);   }
    | ImportDeclarations ImportDeclaration
    {   COMBINE(0, 1);   }
    ;

PackageDeclaration:
    TOK_PACKAGE Name TOK_EOL
    ;

ImportDeclaration:
    SingleTypeImportDeclaration
    | TypeImportOnDemandDeclaration
    ;

SingleTypeImportDeclaration:
    TOK_IMPORT Name TOK_EOL
    {   COMBINE(NID_IMPORT, 1);   }
    ;

TypeImportOnDemandDeclaration:
    TOK_IMPORT Name TOK_DOT TOK_MUL TOK_EOL
    {
        COMBINE(NID_IMPORT_ALL, 1);
    }
    ;

TypeDeclaration:
    ClassDeclaration
    | InterfaceDeclaration
    ;

AnnotationDeclarationsOpt:
    AnnotationDeclarations
    | {   PUSH(NID_NULL, NULL /* "AnnotationDeclarations" */ );   }
    ;

AnnotationDeclarations:
    AnnotationDeclaration
    {   COMBINE(NID_ANNOTATIONS, 1);   }
    | AnnotationDeclarations AnnotationDeclaration
    {   COMBINE(0, 1);   }
    ;

AnnotationDeclaration:
    TOK_AT SimpleName TOK_LP ArgumentListOpt TOK_RP TOK_EOL
    {   COMBINE(NID_ANNOTATION, 2);   }
    | TOK_AT SimpleName TOK_EOL
    {
		PUSH(NID_NULL, NULL /* "ArgumentList" */ );
		COMBINE(NID_ANNOTATION, 2);
	}
    ;

Modifiers:
    Modifier
    {   COMBINE(NID_MODIFIERS, 1);   }
    | Modifiers Modifier
    {   COMBINE(0, 1);   }
    ;

Modifier:
    TOK_PUBLIC
    {   PUSH(NID_PUBLIC, $1);   }
    | TOK_PROTECTED
    {   PUSH(NID_PROTECTED, $1);   }
    | TOK_PRIVATE
    {   PUSH(NID_PRIVATE, $1);   }
    | TOK_STATIC
    {   PUSH(NID_STATIC, $1);   }
    | TOK_ABSTRACT
    {   PUSH(NID_ABSTRACT, $1);   }
    | TOK_FINAL
    {   PUSH(NID_FINAL, $1);   }
    | TOK_NATIVE
    {   PUSH(NID_NATIVE, $1);   }
    | TOK_READLOCK
    {   PUSH(NID_READLOCK, $1);   }
	| TOK_WRITELOCK
    {   PUSH(NID_WRITELOCK, $1);   }
    | TOK_TRANSIENT
    {   PUSH(NID_TRANSIENT, $1);   }
    | TOK_VOLATILE
    {   PUSH(NID_VOLATILE, $1);   }
    ;

ClassDeclaration:
    AnnotationDeclarationsOpt ModifiersOpt TOK_CLASS SimpleName SuperOpt InterfacesOpt TOK_EOL ClassBody
    {   COMBINE(NID_CLASS, 6);   }
    ;

ModifiersOpt:
    Modifiers
    | {   PUSH(NID_NULL, NULL /* "Modifiers" */ );   }
    ;

SuperOpt:
    Super
    | {   PUSH(NID_NULL, NULL /* "Super" */ );   }
    ;

InterfacesOpt:
    Interfaces
    | {   PUSH(NID_NULL, NULL /* "Interfaces" */ );   }
    ;


Super:
    TOK_EXTENDS ClassType
    ;

Interfaces:
    TOK_IMPLEMENTS InterfaceTypeList
    ;

InterfaceTypeList:
    InterfaceType
    {    COMBINE(NID_TYPES, 1);   }
    | InterfaceTypeList TOK_CM InterfaceType
    {    COMBINE(0, 1);    }
    ;

ClassBody:
    BeginBlock ClassBodyDeclarationsOpt EndBlock
    ;

ClassBodyDeclarationsOpt:
    ClassBodyDeclarations
    | {   PUSH(NID_NULL, NULL /* "ClassBodyDeclarations" */ );   }
    ;

ClassBodyDeclarations:
    ClassBodyDeclaration
    {   COMBINE(NID_BODY, 1);   }
    | ClassBodyDeclarations ClassBodyDeclaration
    {   COMBINE(0, 1);   }
    ;

ClassBodyDeclaration:
    ClassMemberDeclaration
    | AnnotationDeclarationsOpt StaticInitializer
    | ConstructorDeclaration
    ;

ClassMemberDeclaration:
    FieldDeclaration
    | MethodDeclaration
    | AbstractMethodDeclaration
    ;

FieldDeclaration:
    AnnotationDeclarationsOpt ModifiersOpt Type VariableDeclarators TOK_EOL
    {   COMBINE(NID_FIELD, 4);   }
    ;

VariableDeclarators:
    VariableDeclarator
    {   COMBINE(NID_LIST, 1);   }
    | VariableDeclarators TOK_CM VariableDeclarator
    {   COMBINE(0, 1);   }
    ;


VariableDeclarator:
    SimpleName
    {
        PUSH(NID_NULL, NULL /* "VariableInitializer" */ );
        COMBINE(NID_DECLARATOR, 2);
    }
    | SimpleName TOK_ASN VariableInitializer
    {   COMBINE(NID_DECLARATOR, 2);   }
    ;


VariableInitializer:
    Expression
    | ArrayInitializer
    ;

MethodDeclaration:
    MethodHeader TOK_EOL MethodBody
    {   COMBINE(0, 1);   }
    ;


VoidType:
    TOK_VOID
    {   PUSH(NID_VOID, $1);   }
    ;


MethodHeader:
    AnnotationDeclarationsOpt ModifiersOpt Type SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt
    {   COMBINE(NID_METHOD, 6);   }
    | AnnotationDeclarationsOpt ModifiersOpt VoidType SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt
    {   COMBINE(NID_METHOD, 6);   }
    ;


ThrowsOpt:
    Throws
    | {   PUSH(NID_NULL, NULL /* "Throws" */ );   }
    ;


FormalParameterListOpt:
    FormalParameterList
    | {   PUSH(NID_NULL, NULL /* "FormalParameterList" */ );   }

FormalParameterList:
    FormalParameter
    {  COMBINE(NID_PARAMETERS, 1);   }
    | FormalParameterList TOK_CM FormalParameter
    {  COMBINE(0, 1);   }
    ;

FormalParameter:
    Type SimpleName
    {  COMBINE(NID_PARAMETER, 2);   }
    | TOK_VARARG Type SimpleName
    {
        COMBINE(NID_PARAMETER, 2);
        ++TOP()->counter;
    }
    ;


Throws:
	TOK_THROWS ClassTypeList
    ;


ClassTypeList:
	ClassType
	{   COMBINE(NID_THROWS, 1);   }
    | ClassTypeList TOK_CM ClassType
    {   COMBINE(0, 1);   }
    ;

MethodBody:
    Block
    ;

StaticInitializer:
    TOK_STATIC Block
    {   COMBINE(NID_STATIC_INIT, 1);   }
    ;

ConstructorDeclaration:
    AnnotationDeclarationsOpt ModifiersOpt SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt TOK_EOL ConstructorBody
    {   COMBINE(NID_CONSTRUCTOR, 6);   }
    ;

ExplicitConstructorInvocationOpt:
    ExplicitConstructorInvocation
    | {   PUSH(NID_NULL, NULL /* "ExplicitConstructorInvocation" */ );   }
    ;

BlockStatementsOpt:
    BlockStatements
    | {   PUSH(NID_NULL, NULL /* "BlockStatements" */ );   }
    ;

ArgumentListOpt:
    ArgumentList
    | {   PUSH(NID_NULL, NULL /* "ArgumentList" */ );   }
    ;

ConstructorBody:
    BeginBlock ExplicitConstructorInvocationOpt BlockStatementsOpt EndBlock
    {   COMBINE(NID_BODY, 2);   }
    ;

ExplicitConstructorInvocation:
    TOK_THIS TOK_LP ArgumentListOpt TOK_RP TOK_EOL
    {   TOP()->type = NID_THIS;   }
    | TOK_SUPER TOK_LP ArgumentListOpt TOK_RP TOK_EOL
    {   TOP()->type = NID_SUPER;   }
    ;

ExtendsInterfacesOpt:
    ExtendsInterfaces
    | {   PUSH(NID_NULL, NULL /* "ExtendsInterfaces" */ );   }
    ;

InterfaceDeclaration:
    AnnotationDeclarationsOpt ModifiersOpt TOK_INTERFACE SimpleName ExtendsInterfacesOpt TOK_EOL InterfaceBody
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
    ;

ExtendsInterfaces:
    TOK_EXTENDS InterfaceType
    {    COMBINE(NID_TYPES, 1);   }
    | ExtendsInterfaces TOK_CM InterfaceType
    {    COMBINE(0, 1);   }
    ;

InterfaceBody:
    BeginBlock InterfaceMemberDeclarationsOpt EndBlock
    ;

InterfaceMemberDeclarationsOpt:
    InterfaceMemberDeclarations
    | {   PUSH(NID_NULL, NULL /* "InterfaceMemberDeclarations" */ );   }
    ;

InterfaceMemberDeclarations:
    InterfaceMemberDeclaration
    {   COMBINE(NID_BODY, 1);   }
    | InterfaceMemberDeclarations InterfaceMemberDeclaration
    {   COMBINE(0, 1);   }
    ;

InterfaceMemberDeclaration:
    ConstantDeclaration
    | AbstractMethodDeclaration
    ;

ConstantDeclaration:
    FieldDeclaration
    ;

AbstractMethodDeclaration:
    MethodHeader TOK_EOL
    {
        PUSH(NID_NULL, NULL /* "MethodBody" */ );
        COMBINE(0, 1);
    }
    ;

ArrayInitializer:
	TOK_LC VariableInitializersOpt TOK_RC
    ;

VariableInitializersOpt:
	VariableInitializers
	| {   PUSH(NID_NULL, NULL /* "VariableInitializers" */ ); }
	;

VariableInitializers:
	VariableInitializer
	{   COMBINE(NID_ARRAY, 1);   }
    | VariableInitializers TOK_CM VariableInitializer
    {   COMBINE(0, 1);   }
    ;

Block:
    BeginBlock BlockStatementsOpt EndBlock
    ;

BlockStatements:
    BlockStatement
    {   COMBINE(NID_BLOCK, 1);   }
    | BlockStatements BlockStatement
    {   COMBINE(0, 1);   }
    ;

BlockStatement:
    LocalVariableDeclarationStatement
    | Statement
    ;

LocalVariableDeclarationStatement:
    LocalVariableDeclaration TOK_EOL
    ;

LocalVariableDeclaration:
    Type VariableDeclarators
    {   COMBINE(NID_LOCAL, 2);   }
    ;

Statement:
	StatementWithoutTrailingSubstatement
	| IfThenStatement
	| IfThenInlineStatement
	| IfThenElseStatement
	| WhileStatement
	| ForStatement
	| ForEachStatement
	;

StatementWithoutTrailingSubstatement:
	ExpressionStatement
	| SwitchStatement
	| DoStatement
	| BreakStatement
	| ContinueStatement
	| ReturnStatement
	| LockStatement
	| ThrowStatement
	| TryStatement
	| EmptyStatement
	;

EmptyStatement:
	TOK_PASS TOK_EOL
	{   PUSH(NID_PASS, $1);   }
	;

ExpressionStatement:
    StatementExpression TOK_EOL
    ;

StatementExpression:
    Assignment
    | PreIncrementExpression
    | PreDecrementExpression
    | PostIncrementExpression
    | PostDecrementExpression
    | MethodInvocation
    | ClassInstanceCreationExpression
    ;

IfThenStatement:
    TOK_IF TOK_LP Expression TOK_RP TOK_EOL Block
    {
		PUSH(NID_NULL, NULL /* "Block" */ );
		COMBINE(NID_IF, 3);
	}
    ;

IfThenInlineStatement:
    TOK_IF TOK_LP Expression TOK_RP StatementExpression TOK_EOL
    {
		COMBINE(NID_BLOCK, 1);
		PUSH(NID_NULL, NULL /* "Block" */ );
		COMBINE(NID_IF, 3);
	}
    ;

IfThenElseStatement:
    TOK_IF TOK_LP Expression TOK_RP TOK_EOL Block TOK_ELSE TOK_EOL Block
    {   COMBINE(NID_IF, 3);   }
    ;

SwitchStatement:
    TOK_SWITCH TOK_LP Expression TOK_RP TOK_EOL SwitchBlock
    {   COMBINE(NID_SWITCH, 2);   }
    ;

SwitchBlockStatementGroupsOpt:
	SwitchBlockStatementGroups
	| {   PUSH(NID_NULL, NULL /* "SwitchBlockStatementGroups" */ );   }
	;

SwitchBlock:
	BeginBlock SwitchBlockStatementGroupsOpt EndBlock
    ;

SwitchBlockStatementGroups:
	SwitchBlockStatementGroup
	{   COMBINE(NID_LIST, 1);   }
    | SwitchBlockStatementGroups SwitchBlockStatementGroup
    {   COMBINE(0, 1);   }
    ;

SwitchBlockStatementGroup:
	SwitchLabels Block
	{   COMBINE(NID_GROUP, 2);   }
	;

SwitchLabels:
	SwitchLabel
	{   COMBINE(NID_LIST, 1);   }
    | SwitchLabels SwitchLabel
    {   COMBINE(0, 1);   }
    ;

SwitchLabel:
	TOK_CASE ConstantExpression TOK_COLON TOK_EOL
	{   COMBINE(NID_CASE, 1);   }
    | TOK_DEFAULT TOK_COLON TOK_EOL
    {
		PUSH(NID_DEFAULT, $1);
		COMBINE(NID_CASE, 1);
	}
    ;

WhileStatement:
	TOK_WHILE TOK_LP Expression TOK_RP TOK_EOL Block
	{   COMBINE(NID_WHILE, 2);   }
    ;


DoStatement:
	TOK_DO TOK_EOL Block TOK_WHILE TOK_LP Expression TOK_RP TOK_EOL
	{   COMBINE(NID_DO, 2);   }
    ;

ForInitOpt:
	ForInit
	| {   PUSH(NID_NULL, NULL /* "ForInit" */ );   }
	;

ExpressionOpt:
	Expression
	| {   PUSH(NID_NULL, NULL /* "Expression" */ );   }
	;

ForUpdateOpt:
	ForUpdate
	| {   PUSH(NID_NULL, NULL /* "ForUpdate" */ );   }
	;

ForStatement:
	TOK_FOR TOK_LP ForInitOpt TOK_SM ExpressionOpt TOK_SM ForUpdateOpt TOK_RP TOK_EOL Block
	{   COMBINE(NID_FOR, 4);   }
	;

ForEachStatement:
	TOK_FOR TOK_LP Type SimpleName TOK_IN Expression TOK_RP TOK_EOL Block
	{   COMBINE(NID_FOR_EACH, 4);   }
	| TOK_FOR TOK_LP Type SimpleName TOK_IN Range TOK_RP TOK_EOL Block
	{   COMBINE(NID_FOR_EACH, 4);   }
	;

Range:
	TOK_RANGE TOK_LP Expression TOK_CM Expression TOK_RP
	{   COMBINE(NID_RANGE, 2);   }
	;

ForInit:
	StatementExpressionList
	| LocalVariableDeclaration
	;

ForUpdate:
	StatementExpressionList
	;

StatementExpressionList:
	StatementExpression
	{   COMBINE(NID_LIST, 1);   }
    | StatementExpressionList TOK_CM StatementExpression
    {   COMBINE(0, 1);   }
    ;

BreakStatement:
	TOK_BREAK TOK_INTLITERAL TOK_EOL
	{
		PUSH(NID_BREAK, $2);
		COMBINE(NID_BREAK, 1);
	}
	| TOK_BREAK TOK_EOL
	{
		PUSH(NID_INTLITERAL, "1");
		COMBINE(NID_BREAK, 1);
	}
    ;

ContinueStatement:
	TOK_CONTINUE TOK_INTLITERAL TOK_EOL
	{
		PUSH(NID_BREAK, $2);
		COMBINE(NID_CONTINUE, 1);
	}
	| TOK_CONTINUE TOK_EOL
	{
		PUSH(NID_INTLITERAL, "1");
		COMBINE(NID_CONTINUE, 1);
	}
    ;

ReturnStatement:
	TOK_RETURN ExpressionOpt TOK_EOL
	{   COMBINE(NID_RETURN, 1);   }
	;


ThrowStatement:
	TOK_THROW Expression TOK_EOL
	{   COMBINE(NID_THROW, 1);   }
	;

LockStatement:
	TOK_READLOCK TOK_LP Expression TOK_RP TOK_EOL Block
	{   COMBINE(NID_READLOCK, 2);   }
	| TOK_WRITELOCK TOK_LP Expression TOK_RP TOK_EOL Block
	{   COMBINE(NID_READLOCK, 2);   }
	;

CatchesOpt:
	Catches
	| {   PUSH(NID_NULL, NULL /* "Catches" */ );   }
	;

TryStatement:
	TOK_TRY TOK_EOL Block Catches
	{
		PUSH(NID_NULL, NULL /* "finally" */ );
		COMBINE(NID_TRY, 3);
	}
    | TOK_TRY TOK_EOL Block CatchesOpt Finally
    {   COMBINE(NID_TRY, 3);   }
    ;

Catches:
	CatchClause
	{   COMBINE(NID_LIST, 1);   }
    | Catches CatchClause
    {   COMBINE(0, 1);   }
    ;

CatchClause:
	TOK_CATCH TOK_LP FormalParameter TOK_RP TOK_EOL Block
	{   COMBINE(NID_CATCH, 2);   }
    ;

Finally:
	TOK_FINALLY TOK_EOL Block
	{   TOP()->type = NID_FINALLY;   }
    ;

Primary:
	PrimaryNoNewArray
    | ArrayCreationExpression
    ;

PrimaryNoNewArray:
	Literal
	| TOK_THIS
	{   PUSH(NID_THIS, $1);   }
	| TOK_LP Expression TOK_RP
	| ClassInstanceCreationExpression
	| FieldAccess
	| MethodInvocation
	| ArrayAccess
	;

ClassInstanceCreationExpression:
	TOK_NEW ClassType TOK_LP ArgumentListOpt TOK_RP
	{   COMBINE(NID_NEW, 2);   }
    ;

ArgumentList:
    Expression
    {   COMBINE(NID_ARGUMENTS, 1);   }
    | ArgumentList TOK_CM Expression
    {   COMBINE(0, 1);   }
    ;

DimsOpt:
	Dims
	| {   PUSH(NID_NULL, NULL /* "Dims" */ );   }
	;

ArrayCreationExpression:
    TOK_NEW PrimitiveType DimExprs
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
    | TOK_NEW ClassOrInterfaceType DimExprs DimsOpt
    {   COMBINE(NID_NEW_ARRAY, 3);   }
    ;

DimExprs:
    DimExpr
    {   COMBINE(NID_LIST, 1);   }
    | DimExprs DimExpr
    {   COMBINE(0, 1);   }
    ;

DimExpr:
	TOK_LB Expression TOK_RB
	;


Dims:
	TOK_LB TOK_RB
	{
		PUSH(NID_TYPE_ARRAY, "");
		TOP()->counter = 1;
	}
    | Dims TOK_LB TOK_RB
    {
		++TOP()->counter;
	}

FieldAccess:
	Primary TOK_DOT SimpleName
	{   COMBINE(NID_ACCESS_FIELD, 2);   }
    | TOK_SUPER TOK_DOT SimpleName
    {
		PUSH(NID_SUPER, $1);
		COMBINE(NID_ACCESS_FIELD, 2);
	}
    ;

MethodInvocation:
	Name TOK_LP ArgumentListOpt TOK_RP
	{
		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_NULL, NULL /* "Primary" */ );
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CALL, 3);
	}
	| Primary TOK_DOT SimpleName TOK_LP ArgumentListOpt TOK_RP
	{   COMBINE(NID_CALL, 3);   }
	| TOK_SUPER TOK_DOT SimpleName TOK_LP ArgumentListOpt TOK_RP
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
	;

ArrayAccess:
	Name TOK_LB Expression TOK_RB
	{   COMBINE(NID_ACCESS_ARRAY, 2);   }
	| PrimaryNoNewArray TOK_LB Expression TOK_RB
	{   COMBINE(NID_ACCESS_ARRAY, 2);   }
	;

PostFixExpression:
	Primary
	| Name
	| PostIncrementExpression
	| PostDecrementExpression
	;

PostIncrementExpression:
	PostFixExpression TOK_INC
	{   COMBINE(NID_INC, 1);   }
    ;

PostDecrementExpression:
	PostFixExpression TOK_DEC
	{   COMBINE(NID_DEC, 1);   }
    ;

UnaryExpression:
    PreIncrementExpression
    | PreDecrementExpression
    | TOK_PLUS UnaryExpression
    {   COMBINE(NID_PLUS, 1);   }
    | TOK_MINUS UnaryExpression
    {   COMBINE(NID_MINUS, 1);   }
    | UnaryExpressionNotPlusMinus
    ;

PreIncrementExpression:
    TOK_INC UnaryExpression
    {   COMBINE(NID_INC, 1);   }
    ;

PreDecrementExpression:
    TOK_DEC UnaryExpression
    {   COMBINE(NID_DEC, 1);   }
    ;

UnaryExpressionNotPlusMinus:
	PostFixExpression
    | TOK_TILDE UnaryExpression
    {   COMBINE(NID_TILDE, 1);   }
    | TOK_BANG UnaryExpression
    {   COMBINE(NID_BANG, 1);   }
    | CastExpression
    ;


CastExpression:
	TOK_LP PrimitiveType DimsOpt TOK_RP UnaryExpression
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
	| TOK_LP Expression TOK_RP UnaryExpressionNotPlusMinus
	{   COMBINE(NID_CAST, 2);   }
	| TOK_LP Name Dims TOK_RP UnaryExpressionNotPlusMinus
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
	;

MultiplicativeExpression:
	UnaryExpression
	| MultiplicativeExpression TOK_MUL UnaryExpression
	{   COMBINE(NID_MUL, 2);   }
	| MultiplicativeExpression TOK_DIV UnaryExpression
	{   COMBINE(NID_DIV, 2);   }
	| MultiplicativeExpression TOK_MOD UnaryExpression
	{   COMBINE(NID_MOD, 2);   }
	;

AdditiveExpression:
	MultiplicativeExpression
	| AdditiveExpression TOK_PLUS MultiplicativeExpression
	{   COMBINE(NID_PLUS, 2);   }
	| AdditiveExpression TOK_MINUS MultiplicativeExpression
	{   COMBINE(NID_MINUS, 2);   }
	;

ShiftExpression:
	AdditiveExpression
    | ShiftExpression TOK_SHL AdditiveExpression
    {   COMBINE(NID_SHL, 2);   }
	| ShiftExpression TOK_SHR AdditiveExpression
	{   COMBINE(NID_SHR, 2);   }
	;

RelationalExpression:
	ShiftExpression
	| RelationalExpression TOK_LT ShiftExpression
	{   COMBINE(NID_LT, 2);   }
	| RelationalExpression TOK_GT ShiftExpression
	{   COMBINE(NID_GT, 2);   }
	| RelationalExpression TOK_LE ShiftExpression
	{   COMBINE(NID_LE, 2);   }
	| RelationalExpression TOK_GE ShiftExpression
	{   COMBINE(NID_GE, 2);   }
	| RelationalExpression TOK_INSTANCEOF ReferenceType
	{   COMBINE(NID_INSTANCEOF, 2);   }
	;

EqualityExpression:
	RelationalExpression
	| EqualityExpression TOK_EQ RelationalExpression
	{   COMBINE(NID_EQ, 2);   }
	| EqualityExpression TOK_NE RelationalExpression
	{   COMBINE(NID_NE, 2);   }
	;

AndExpression:
	EqualityExpression
	| AndExpression TOK_AND EqualityExpression
	{   COMBINE(NID_AND, 2);   }
	;

ExclusiveOrExpression:
	AndExpression
	| ExclusiveOrExpression TOK_CARET AndExpression
	{   COMBINE(NID_CARET, 2);   }
	;

InclusiveOrExpression:
	ExclusiveOrExpression
	| InclusiveOrExpression TOK_OR ExclusiveOrExpression
	{   COMBINE(NID_OR, 2);   }
	;

ConditionalAndExpression:
	InclusiveOrExpression
	| ConditionalAndExpression TOK_ANDAND InclusiveOrExpression
	{   COMBINE(NID_ANDAND, 2);   }
	;

ConditionalOrExpression:
	ConditionalAndExpression
	| ConditionalOrExpression TOK_OROR ConditionalAndExpression
	{   COMBINE(NID_OROR, 2);   }
	;

ConditionalExpression:
	ConditionalOrExpression
	| ConditionalOrExpression TOK_QUEST Expression TOK_COLON ConditionalExpression
	{   COMBINE(NID_QUEST, 2);   }
	;

AssignmentExpression:
    ConditionalExpression
    | Assignment
    ;

Assignment:
    LeftHandSide AssignmentOperator AssignmentExpression
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
    ;

LeftHandSide:
    Name
    | FieldAccess
    | ArrayAccess
    ;

AssignmentOperator:
    TOK_ASN
    {   PUSH(NID_ASN, $1);   }
    | TOK_MUASN
    {   PUSH(NID_MUASN, $1);   }
    | TOK_DIASN
    {   PUSH(NID_DIASN, $1);   }
    | TOK_MODASN
    {   PUSH(NID_MODASN, $1);   }
    | TOK_PLASN
    {   PUSH(NID_PLASN, $1);   }
    | TOK_MIASN
    {   PUSH(NID_MIASN, $1);   }
    | TOK_SLASN
    {   PUSH(NID_SLASN, $1);   }
    | TOK_SRASN
    {   PUSH(NID_SRASN, $1);   }
    | TOK_ANDASN
    {   PUSH(NID_ANDASN, $1);   }
    | TOK_CARETASN
    {   PUSH(NID_CARETASN, $1);   }
    | TOK_ORASN
    {   PUSH(NID_ORASN, $1);   }
    ;

Expression:
    AssignmentExpression
    ;

ConstantExpression:
	Expression
    ;

BeginBlock:
    TOK_INDENT
    ;

EndBlock:
    TOK_DEDENT
    ;


%%


#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


