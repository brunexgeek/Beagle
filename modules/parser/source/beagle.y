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

}

%code{

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
%token < node > TOK_INT
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
%token < node > TOK_SYNCHRONIZED
%token < node > TOK_THIS
%token < node > TOK_THROW
%token < node > TOK_THROWS
%token < node > TOK_VOID
%token < node > TOK_VOLATILE
%token < node > TOK_WHILE
%token < node > TOK_IDENT
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
%token < node > TOK_LSRASN
%token < node > TOK_MODASN
%token < node > TOK_BAD_TOKEN
%token < node > TOK_EOL
%token < node > TOK_AT
%token < node > TOK_VARARG
%token < node > TOK_INDENT
%token < node > TOK_DEDENT

%token < node > TOK_TYPE_CLASS
%token < node > TOK_TYPE_ARRAY
%token < node > TOK_INTERFACES
%token < node > TOK_NONE
%token < node > TOK_BODY
%token < node > TOK_FIELD
%token < node > TOK_METHOD
%token < node > TOK_CONSTRUCTOR
%token < node > TOK_LIST
%token < node > TOK_VARIABLE
%token < node > TOK_MODIFIERS
%token < node > TOK_UNIT
%token < node > TOK_TYPE
%token < node > TOK_MEMBER
%token < node > TOK_IMPORT_ALL
%token < node > TOK_STATIC_INIT
%token < node > TOK_PARAMETER

/*
 * each nonterminal is declared.  nonterminals correspond to internal nodes
 */
%type < node > Goal Literal Type PrimitiveType NumericType IntegralType
%type < node > FloatingPointType ReferenceType ClassOrInterfaceType
%type < node > ClassType InterfaceType ArrayType Name SimpleName
%type < node > QualifiedName CompilationUnit ImportDeclarations
%type < node > PackageDeclaration ImportDeclaration
%type < node > SingleTypeImportDeclaration TypeImportOnDemandDeclaration
%type < node > TypeDeclaration Modifiers Modifier ClassDeclaration
%type < node > Super Interfaces InterfaceTypeList ClassBody
%type < node > ClassBodyDeclarations ClassBodyDeclaration
%type < node > ClassMemberDeclaration FieldDeclaration VariableDeclarators
%type < node > VariableDeclarator VariableDeclaratorId VariableInitializer
%type < node > MethodDeclaration MethodHeader
%type < node > FormalParameterList FormalParameter Throws ClassTypeList
%type < node > MethodBody StaticInitializer ConstructorDeclaration
%type < node > ConstructorBody
%type < node > ExplicitConstructorInvocation InterfaceDeclaration
%type < node > ExtendsInterfaces InterfaceBody InterfaceMemberDeclarations
%type < node > InterfaceMemberDeclaration ConstantDeclaration
%type < node > AbstractMethodDeclaration ArrayInitializer
%type < node > VariableInitializers Block BlockStatements BlockStatement
%type < node > LocalVariableDeclarationStatement LocalVariableDeclaration
%type < node > Statement StatementNoShortIf
%type < node > StatementWithoutTrailingSubstatement EmptyStatement
%type < node > ExpressionStatement StatementExpression IfThenStatement
%type < node > IfThenElseStatement IfThenElseStatementNoShortIf
%type < node > SwitchStatement SwitchBlock SwitchBlockStatementGroups
%type < node > SwitchBlockStatementGroup SwitchLabels SwitchLabel
%type < node > WhileStatement WhileStatementNoShortIf DoStatement
%type < node > ForStatement ForStatementNoShortIf ForInit ForUpdate
%type < node > StatementExpressionList BreakStatement ContinueStatement
%type < node > ReturnStatement ThrowStatement SynchronizedStatement
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
%type < node > PackageDeclarationOpt ImportDeclarationsOpt
%type < node > ModifiersOpt SuperOpt InterfacesOpt ClassBodyDeclarationsOpt
%type < node > ThrowsOpt FormalParameterListOpt IDENTOpt CatchesOpt
%type < node > BlockStatementsOpt
%type < node > ArgumentListOpt ExplicitConstructorInvocationOpt DimsOpt
%type < node > ExtendsInterfacesOpt InterfaceMemberDeclarationsOpt
%type < node > VariableInitializersOpt CMOpt SwitchBlockStatementGroupsOpt
%type < node > SwitchLabelsOpt ForInitOpt ExpressionOpt ForUpdateOpt
%type < node > AnnotationDeclarations AnnotationDeclaration
%type < node > BeginBlock EndBlock EndPart AnnotationDeclarationsOpt

/*
 * the start symbol, Goal, may seem to be here for rhetorical purposes,
 * but it is also the ideal spot to insert a semantic action that passes
 * the completed parse tree to a later phase of compilation.
 */
%start Goal

%%


Goal:
    CompilationUnit
    ;

Literal:
    TOK_INTLITERAL
    | TOK_FLOATLITERAL
    | TOK_BOOLLITERAL
    | TOK_STRINGLITERAL
    | TOK_CHARLITERAL
    | TOK_NULLLITERAL
    ;

Type:
    PrimitiveType
    | ReferenceType
    ;

PrimitiveType:
    NumericType
    | TOK_BOOLEAN
    {    PUSH(TOK_BOOLEAN, $1);    }
    ;

NumericType:
    IntegralType
    | FloatingPointType
    ;

IntegralType:
    TOK_UINT8
    {    PUSH(TOK_UINT8, $1);    }
    | TOK_UINT16
    {    PUSH(TOK_UINT16, $1);    }
    | TOK_UINT32
    {    PUSH(TOK_UINT32, $1);    }
    | TOK_UINT64
    {    PUSH(TOK_UINT64, $1);    }
    | TOK_INT8
    {    PUSH(TOK_INT8, $1);    }
    | TOK_INT16
    {    PUSH(TOK_INT16, $1);    }
    | TOK_INT32
    {    PUSH(TOK_INT32, $1);    }
    | TOK_INT64
    {    PUSH(TOK_INT64, $1);    }
    | TOK_INT
    {    PUSH(TOK_INT32, $1);    }
    | TOK_LONG
    {    PUSH(TOK_INT64, $1);    }
    | TOK_CHAR
    {    PUSH(TOK_INT8, $1);    }
    ;

FloatingPointType:
    TOK_FLOAT
    {    PUSH(TOK_FLOAT, $1);    }
    | TOK_DOUBLE
    {    PUSH(TOK_DOUBLE, $1);    }
    ;

ReferenceType:
    ClassOrInterfaceType
    | ArrayType
    ;

ClassOrInterfaceType:
    Name
    {
		PUSH(TOK_NONE, "InterfaceTypeList");
		COMBINE(TOK_TYPE_CLASS, 2);
	}
    | Name TOK_LT InterfaceTypeList TOK_GT
    {   COMBINE(TOK_TYPE_CLASS, 2);   }
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
		COMBINE(TOK_TYPE_ARRAY, 1);
	}
    | Name TOK_LB TOK_RB
    {
		COMBINE(TOK_TYPE_ARRAY, 1);
	}
    | ArrayType TOK_LB TOK_RB
    {
		beagle::Node *node = TOP();
		node->setCounter( node->getCounter() + 1 );
    }
    ;

Name:
    SimpleName
    | QualifiedName
    ;

SimpleName:
    TOK_IDENT
    {   PUSH(TOK_IDENT, $1);    }
    ;

QualifiedName:
    Name TOK_DOT TOK_IDENT
    {
        PUSH(TOK_IDENT, $3);
        COMBINE(0, 1);
    }
    ;

CompilationUnit:
    PackageDeclarationOpt ImportDeclarationsOpt TypeDeclaration
	{   COMBINE(TOK_UNIT, 3);   }
    ;

PackageDeclarationOpt:
	PackageDeclaration
	| {   PUSH(TOK_NONE, "PackageDeclaration");   }
	;

ImportDeclarationsOpt:
	ImportDeclarations
	| {   PUSH(TOK_NONE, "ImportDeclarations");   }
	;


ImportDeclarations:
	ImportDeclaration
	{   COMBINE(TOK_LIST, 1);   }
	| ImportDeclarations ImportDeclaration
	{   COMBINE(0, 1);   }
	;

PackageDeclaration:
	TOK_PACKAGE Name TOK_EOL
	{   COMBINE(TOK_PACKAGE, 1);   }
    ;

ImportDeclaration:
	SingleTypeImportDeclaration
	| TypeImportOnDemandDeclaration
	;

SingleTypeImportDeclaration:
	TOK_IMPORT Name TOK_EOL
	{   COMBINE(TOK_IMPORT, 1);   }
	;

TypeImportOnDemandDeclaration:
	TOK_IMPORT Name TOK_DOT TOK_MUL TOK_EOL
	{
		COMBINE(TOK_IMPORT_ALL, 1);
	}
	;

TypeDeclaration:
    ClassDeclaration
    | InterfaceDeclaration
    ;

AnnotationDeclarationsOpt:
    AnnotationDeclarations
    | {   PUSH(TOK_NONE, "AnnotationDeclarations");   }
    ;

AnnotationDeclarations:
    AnnotationDeclaration
    | AnnotationDeclarations AnnotationDeclaration
    ;

AnnotationDeclaration:
    TOK_AT TOK_IDENT TOK_LP ArgumentListOpt TOK_RP TOK_EOL
    | TOK_AT TOK_IDENT TOK_EOL
    ;

Modifiers:
	Modifier
	{   COMBINE(TOK_MODIFIERS, 1);   }
    | Modifiers Modifier
    {   COMBINE(0, 1);   }
    ;

Modifier:
	TOK_PUBLIC
	{   PUSH(TOK_PUBLIC, $1);   }
	| TOK_PROTECTED
	{   PUSH(TOK_PROTECTED, $1);   }
	| TOK_PRIVATE
	{   PUSH(TOK_PRIVATE, $1);   }
	| TOK_STATIC
	{   PUSH(TOK_STATIC, $1);   }
	| TOK_ABSTRACT
	{   PUSH(TOK_ABSTRACT, $1);   }
	| TOK_FINAL
	{   PUSH(TOK_FINAL, $1);   }
	| TOK_NATIVE
	{   PUSH(TOK_NATIVE, $1);   }
	| TOK_SYNCHRONIZED
	{   PUSH(TOK_SYNCHRONIZED, $1);   }
	| TOK_TRANSIENT
	{   PUSH(TOK_TRANSIENT, $1);   }
	| TOK_VOLATILE
	{   PUSH(TOK_VOLATILE, $1);   }
	;

ClassDeclaration:
    AnnotationDeclarationsOpt ModifiersOpt TOK_CLASS SimpleName SuperOpt InterfacesOpt TOK_EOL ClassBody
    {   COMBINE(TOK_CLASS, 6);   }
    ;

ModifiersOpt:
	Modifiers
	| {   PUSH(TOK_NONE, "ModifiersOpt");   }
	;

SuperOpt:
	Super
	| {   PUSH(TOK_NONE, "Super");   }
	;

InterfacesOpt:
	Interfaces
	| {   PUSH(TOK_NONE, "Intf");   }
	;


Super:
	TOK_EXTENDS ClassType
    ;

Interfaces:
	TOK_IMPLEMENTS InterfaceTypeList
	;

InterfaceTypeList:
	InterfaceType
	{    COMBINE(TOK_LIST, 1);   }
    | InterfaceTypeList TOK_CM InterfaceType
    {    COMBINE(0, 1);    }
    ;

ClassBody:
	BeginBlock ClassBodyDeclarationsOpt EndBlock
	;

ClassBodyDeclarationsOpt:
	ClassBodyDeclarations
	| {   PUSH(TOK_NONE, "ClassBodyDeclarations");   }
	;

ClassBodyDeclarations:
	ClassBodyDeclaration
	{   COMBINE(TOK_BODY, 1);   }
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
	{   COMBINE(TOK_FIELD, 4);   }
	;

VariableDeclarators:
    VariableDeclarator
    {   COMBINE(TOK_LIST, 1);   }
    | VariableDeclarators TOK_CM VariableDeclarator
    {   COMBINE(0, 1);   }
    ;

VariableDeclarator:
	VariableDeclaratorId
	{
		PUSH(TOK_NONE, "VariableInitializer");
		COMBINE(TOK_VARIABLE, 2);
	}
	| VariableDeclaratorId TOK_ASN VariableInitializer
	;

VariableDeclaratorId:
	TOK_IDENT
	{   PUSH(TOK_IDENT, $1);   }
	| VariableDeclaratorId TOK_LB TOK_RB
	;

VariableInitializer:
    Expression
    | ArrayInitializer
    ;

MethodDeclaration:
	MethodHeader TOK_EOL MethodBody
	{
		COMBINE(0, 1);
	}
    ;


VoidType:
	TOK_VOID
	{   PUSH(TOK_VOID, $1);   }
	;


MethodHeader:
	AnnotationDeclarationsOpt ModifiersOpt Type SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt
	{   COMBINE(TOK_METHOD, 6);   }
    |  AnnotationDeclarationsOpt ModifiersOpt VoidType SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt
    {   COMBINE(TOK_METHOD, 6);   }
    ;


ThrowsOpt:
	Throws
	| {   PUSH(TOK_NONE, "Throws");   }
	;


FormalParameterListOpt:
	FormalParameterList
	| {   PUSH(TOK_NONE, "FormalParameterList");   }

FormalParameterList:
	FormalParameter
	{  COMBINE(TOK_LIST, 1);   }
	| FormalParameterList TOK_CM FormalParameter
	{  COMBINE(0, 1);   }
	;

FormalParameter:
    Type VariableDeclaratorId
    {  COMBINE(TOK_PARAMETER, 2);   }
    | TOK_VARARG Type VariableDeclaratorId
    {
		COMBINE(TOK_PARAMETER, 2);
		TOP()->setCounter( TOP()->getCounter() + 1 );
	}
    ;


Throws: TOK_THROWS ClassTypeList
        ;


ClassTypeList: ClassType
        | ClassTypeList TOK_CM ClassType
        ;

MethodBody: Block
        ;

StaticInitializer:
	TOK_STATIC Block
	{   COMBINE(TOK_STATIC_INIT, 1);   }
    ;

ConstructorDeclaration:
    AnnotationDeclarationsOpt ModifiersOpt SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt TOK_EOL ConstructorBody
    {   COMBINE(TOK_CONSTRUCTOR, 6);   }
    ;

ExplicitConstructorInvocationOpt:
	ExplicitConstructorInvocation
	| {   PUSH(TOK_NONE, "ExplicitConstructorInvocation");   }
	;

BlockStatementsOpt:
    BlockStatements
    | {   PUSH(TOK_NONE, "BlockStatements");   }
    ;

ArgumentListOpt:  ArgumentList | { $$ = NULL; } ;

ConstructorBody:
    BeginBlock ExplicitConstructorInvocationOpt EndBlock
    {
    /* BeginBlock ExplicitConstructorInvocationOpt BlockStatementsOpt EndBlock */
    PUSH(TOK_NONE, "ConstructorBody");   }
    ;

ExplicitConstructorInvocation:
    TOK_THIS TOK_LP ArgumentListOpt TOK_RP TOK_EOL
    | TOK_SUPER TOK_LP ArgumentListOpt TOK_RP TOK_EOL
    ;

ExtendsInterfacesOpt:
	ExtendsInterfaces
	| {   PUSH(TOK_NONE, "ExtendsInterfaces");   }
	;

InterfaceDeclaration:
	AnnotationDeclarationsOpt ModifiersOpt TOK_INTERFACE SimpleName ExtendsInterfacesOpt TOK_EOL InterfaceBody
	{   COMBINE(TOK_INTERFACE, 5);   }
	;

ExtendsInterfaces:
	TOK_EXTENDS InterfaceType
	{    COMBINE(TOK_LIST, 1);   }
	| ExtendsInterfaces TOK_CM InterfaceType
	{    COMBINE(0, 1);   }
	;

InterfaceBody:
	BeginBlock InterfaceMemberDeclarationsOpt EndBlock
	;

InterfaceMemberDeclarationsOpt:
	InterfaceMemberDeclarations
	| {   PUSH(TOK_NONE, "InterfaceMemberDeclarations");   }
	;

InterfaceMemberDeclarations:
	InterfaceMemberDeclaration
	{   COMBINE(TOK_BODY, 1);   }
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
		PUSH(TOK_NONE, "MethodBody");
		COMBINE(0, 1);
	}
	;

VariableInitializersOpt: VariableInitializers | { $$ = NULL; } ;

CMOpt:  TOK_CM { $$ = NULL; } | { $$ = NULL; } ;

ArrayInitializer: TOK_LC VariableInitializersOpt CMOpt TOK_RC
        ;

VariableInitializers: VariableInitializer
        | VariableInitializers TOK_CM VariableInitializer
        ;

Block:
    BeginBlock BlockStatementsOpt EndBlock
    ;

BlockStatements:
    BlockStatement
    | BlockStatements BlockStatement
    ;

BlockStatement:   LocalVariableDeclarationStatement
        | Statement
        ;

LocalVariableDeclarationStatement: LocalVariableDeclaration TOK_EOL
        ;

LocalVariableDeclaration: Type VariableDeclarators
        ;

Statement:    StatementWithoutTrailingSubstatement
        | IfThenStatement
        | IfThenElseStatement
        | WhileStatement
        | ForStatement
        ;

StatementNoShortIf: StatementWithoutTrailingSubstatement
        | IfThenElseStatementNoShortIf
        | WhileStatementNoShortIf
        | ForStatementNoShortIf
        ;

StatementWithoutTrailingSubstatement: Block
        | EmptyStatement
        | ExpressionStatement
        | SwitchStatement
        | DoStatement
        | BreakStatement
        | ContinueStatement
        | ReturnStatement
        | SynchronizedStatement
        | ThrowStatement
        | TryStatement
        ;

EmptyStatement:
    TOK_EOL
    ;


ExpressionStatement: StatementExpression TOK_EOL
        ;

StatementExpression: Assignment
        | PreIncrementExpression
        | PreDecrementExpression
        | PostIncrementExpression
        | PostDecrementExpression
        | MethodInvocation
        | ClassInstanceCreationExpression
        ;

IfThenStatement:
    TOK_IF TOK_LP Expression TOK_RP EndPart Statement
    ;

IfThenElseStatement:
    TOK_IF TOK_LP Expression TOK_RP EndPart StatementNoShortIf TOK_ELSE EndPart Statement
    ;

IfThenElseStatementNoShortIf:
    TOK_IF TOK_LP Expression TOK_RP EndPart StatementNoShortIf TOK_ELSE EndPart StatementNoShortIf
    ;

SwitchStatement:
    TOK_SWITCH TOK_LP Expression TOK_RP EndPart SwitchBlock
    ;

SwitchBlockStatementGroupsOpt: SwitchBlockStatementGroups | { $$ = NULL; } ;

SwitchLabelsOpt: SwitchLabels | { $$ = NULL; } ;

SwitchBlock:      BeginBlock SwitchBlockStatementGroupsOpt SwitchLabelsOpt EndBlock
        ;

SwitchBlockStatementGroups: SwitchBlockStatementGroup
        | SwitchBlockStatementGroups SwitchBlockStatementGroup
        ;

SwitchBlockStatementGroup: SwitchLabels BlockStatements
        ;

SwitchLabels:     SwitchLabel
        | SwitchLabels SwitchLabel
        ;

SwitchLabel:      TOK_CASE ConstantExpression TOK_COLON
        | TOK_DEFAULT TOK_COLON
        ;

WhileStatement:   TOK_WHILE TOK_LP Expression TOK_RP Statement
        ;

WhileStatementNoShortIf:  TOK_WHILE TOK_LP Expression TOK_RP StatementNoShortIf
        ;

DoStatement:      TOK_DO Statement TOK_WHILE TOK_LP Expression TOK_RP TOK_EOL
        ;

ForInitOpt: ForInit | { $$ = NULL; } ;

ExpressionOpt: Expression | { $$ = NULL; } ;

ForUpdateOpt: ForUpdate | { $$ = NULL; } ;

ForStatement:     TOK_FOR TOK_LP ForInitOpt TOK_SM ExpressionOpt TOK_SM ForUpdateOpt TOK_RP
            Statement
        ;

ForStatementNoShortIf:    TOK_FOR TOK_LP ForInitOpt TOK_SM ExpressionOpt TOK_SM ForUpdateOpt TOK_RP
            StatementNoShortIf
        ;


ForInit:      StatementExpressionList
        | LocalVariableDeclaration
        ;

ForUpdate:    StatementExpressionList
        ;

StatementExpressionList: StatementExpression
        | StatementExpressionList TOK_CM StatementExpression
        ;

IDENTOpt: TOK_IDENT | { $$ = NULL; } ;

BreakStatement:   TOK_BREAK IDENTOpt TOK_EOL
        ;

ContinueStatement: TOK_CONTINUE IDENTOpt TOK_EOL
        ;

ReturnStatement:  TOK_RETURN ExpressionOpt TOK_EOL
        | TOK_SUSPEND ExpressionOpt TOK_EOL
        ;


ThrowStatement:  TOK_THROW Expression TOK_EOL
        ;

SynchronizedStatement:  TOK_SYNCHRONIZED TOK_LP Expression TOK_RP Block
        ;

CatchesOpt: Catches | { $$ = NULL; } ;

TryStatement:     TOK_TRY Block Catches
        | TOK_TRY Block CatchesOpt Finally
        ;
Catches:      CatchClause
        | Catches CatchClause
        ;

CatchClause:      TOK_CATCH TOK_LP FormalParameter TOK_RP Block

        ;

Finally:      TOK_FINALLY Block
        ;

Primary:      PrimaryNoNewArray
        | ArrayCreationExpression
        ;

PrimaryNoNewArray: Literal
        | TOK_THIS
        | TOK_LP Expression TOK_RP
        | ClassInstanceCreationExpression
        | FieldAccess
        | MethodInvocation
        | ArrayAccess
        ;

ClassInstanceCreationExpression: TOK_NEW ClassType TOK_LP ArgumentListOpt TOK_RP
        ;

ArgumentList:     Expression
        | ArgumentList TOK_CM Expression
        ;

DimsOpt: Dims | { $$ = NULL; } ;

ArrayCreationExpression: TOK_NEW PrimitiveType DimExprs DimsOpt
        | TOK_NEW ClassOrInterfaceType DimExprs DimsOpt
        ;

DimExprs:     DimExpr
        | DimExprs DimExpr
        ;

DimExpr:      TOK_LB Expression TOK_RB
        ;

Dims:         TOK_LB TOK_RB
        | Dims TOK_LB TOK_RB
        ;

FieldAccess:      Primary TOK_DOT TOK_IDENT
        | TOK_SUPER TOK_DOT TOK_IDENT
        ;

MethodInvocation: Name TOK_LP ArgumentListOpt TOK_RP
        | Primary TOK_DOT TOK_IDENT TOK_LP ArgumentListOpt TOK_RP
        | TOK_SUPER TOK_DOT TOK_IDENT TOK_LP ArgumentListOpt TOK_RP
        | Name BeginBlock ArgumentListOpt EndBlock
        | Primary TOK_DOT TOK_IDENT BeginBlock ArgumentListOpt EndBlock
        | TOK_SUPER TOK_DOT TOK_IDENT BeginBlock ArgumentListOpt EndBlock
        ;

ArrayAccess:      Name TOK_LB Expression TOK_RB
        | PrimaryNoNewArray TOK_LB Expression TOK_RB
        ;

PostFixExpression: Primary
        | Name
        | PostIncrementExpression
        | PostDecrementExpression
        ;

PostIncrementExpression: PostFixExpression TOK_INC
        ;

PostDecrementExpression: PostFixExpression TOK_DEC
        ;

UnaryExpression:  PreIncrementExpression
        | PreDecrementExpression
        | TOK_PLUS UnaryExpression
        | TOK_MINUS UnaryExpression
        | UnaryExpressionNotPlusMinus
        ;

PreIncrementExpression: TOK_INC UnaryExpression
        ;

PreDecrementExpression: TOK_DEC UnaryExpression
        ;

UnaryExpressionNotPlusMinus: PostFixExpression
        | TOK_TILDE UnaryExpression
        | TOK_BANG UnaryExpression
        | CastExpression
        ;

CastExpression:   TOK_LP PrimitiveType DimsOpt TOK_RP UnaryExpression
        | TOK_LP Expression TOK_RP UnaryExpressionNotPlusMinus
        | TOK_LP Name Dims TOK_RP UnaryExpressionNotPlusMinus
        ;

MultiplicativeExpression: UnaryExpression
        | MultiplicativeExpression TOK_MUL UnaryExpression
        | MultiplicativeExpression TOK_DIV UnaryExpression
        | MultiplicativeExpression TOK_MOD UnaryExpression
        ;

AdditiveExpression: MultiplicativeExpression
        | AdditiveExpression TOK_PLUS MultiplicativeExpression
        | AdditiveExpression TOK_MINUS MultiplicativeExpression
        ;

ShiftExpression:  AdditiveExpression
        | ShiftExpression TOK_SHL AdditiveExpression
        | ShiftExpression TOK_SHR AdditiveExpression
        ;

RelationalExpression: ShiftExpression
        | RelationalExpression TOK_LT ShiftExpression
        | RelationalExpression TOK_GT ShiftExpression
        | RelationalExpression TOK_LE ShiftExpression
        | RelationalExpression TOK_GE ShiftExpression
        | RelationalExpression TOK_INSTANCEOF ReferenceType
        ;

EqualityExpression: RelationalExpression
        | EqualityExpression TOK_EQ RelationalExpression
        | EqualityExpression TOK_NE RelationalExpression
        ;

AndExpression: EqualityExpression
        | AndExpression TOK_AND EqualityExpression
        ;

ExclusiveOrExpression: AndExpression
        | ExclusiveOrExpression TOK_CARET AndExpression
        ;

InclusiveOrExpression: ExclusiveOrExpression
        | InclusiveOrExpression TOK_OR ExclusiveOrExpression
        ;

ConditionalAndExpression: InclusiveOrExpression
        | ConditionalAndExpression TOK_ANDAND InclusiveOrExpression
        ;

ConditionalOrExpression: ConditionalAndExpression
        | ConditionalOrExpression TOK_OROR ConditionalAndExpression
        ;

ConditionalExpression: ConditionalOrExpression
        | ConditionalOrExpression TOK_QUEST Expression
            TOK_COLON ConditionalExpression
        ;

AssignmentExpression: ConditionalExpression
        | Assignment
        ;

Assignment:   LeftHandSide AssignmentOperator AssignmentExpression
        ;

LeftHandSide:     Name
        | FieldAccess
        | ArrayAccess
        ;

AssignmentOperator: TOK_ASN
        | TOK_MUASN
        | TOK_DIASN
        | TOK_MODASN
        | TOK_PLASN
        | TOK_MIASN
        | TOK_SLASN
        | TOK_SRASN
        | TOK_LSRASN
        | TOK_ANDASN
        | TOK_CARETASN
        | TOK_ORASN
        ;

Expression:   AssignmentExpression
        ;

ConstantExpression: Expression
        ;

BeginBlock:
    TOK_INDENT
    ;

EndBlock:
    TOK_DEDENT
    ;

EndPart:
    TOK_EOL
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


