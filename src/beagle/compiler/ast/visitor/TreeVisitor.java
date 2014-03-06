package beagle.compiler.ast.visitor;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.BlockComment;
import beagle.compiler.ast.CompilationUnit;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.ImportDeclaration;
import beagle.compiler.ast.LineComment;
import beagle.compiler.ast.PackageDeclaration;
import beagle.compiler.ast.body.AnnotationDeclaration;
import beagle.compiler.ast.body.AnnotationMemberDeclaration;
import beagle.compiler.ast.body.ClassOrInterfaceDeclaration;
import beagle.compiler.ast.body.ConstructorDeclaration;
import beagle.compiler.ast.body.EmptyTypeDeclaration;
import beagle.compiler.ast.body.EnumConstantDeclaration;
import beagle.compiler.ast.body.EnumDeclaration;
import beagle.compiler.ast.body.FieldDeclaration;
import beagle.compiler.ast.body.MethodDeclaration;
import beagle.compiler.ast.body.ModifierDeclaration;
import beagle.compiler.ast.body.Parameter;
import beagle.compiler.ast.body.VariableDeclarator;
import beagle.compiler.ast.expression.ArrayAccessExpr;
import beagle.compiler.ast.expression.ArrayCreationExpr;
import beagle.compiler.ast.expression.ArrayInitializerExpr;
import beagle.compiler.ast.expression.AssignExpr;
import beagle.compiler.ast.expression.BinaryExpr;
import beagle.compiler.ast.expression.BooleanLiteralExpr;
import beagle.compiler.ast.expression.CastExpr;
import beagle.compiler.ast.expression.CharLiteralExpr;
import beagle.compiler.ast.expression.ClassExpr;
import beagle.compiler.ast.expression.ConditionalExpr;
import beagle.compiler.ast.expression.DoubleLiteralExpr;
import beagle.compiler.ast.expression.EnclosedExpr;
import beagle.compiler.ast.expression.FieldAccessExpr;
import beagle.compiler.ast.expression.InstanceOfExpr;
import beagle.compiler.ast.expression.IntegerLiteralExpr;
import beagle.compiler.ast.expression.LongLiteralExpr;
import beagle.compiler.ast.expression.MarkerAnnotationExpr;
import beagle.compiler.ast.expression.MemberValuePair;
import beagle.compiler.ast.expression.MethodCallExpr;
import beagle.compiler.ast.expression.NameExpr;
import beagle.compiler.ast.expression.NormalAnnotationExpr;
import beagle.compiler.ast.expression.NullLiteralExpr;
import beagle.compiler.ast.expression.ObjectCreationExpr;
import beagle.compiler.ast.expression.QualifiedNameExpr;
import beagle.compiler.ast.expression.SingleMemberAnnotationExpr;
import beagle.compiler.ast.expression.StringLiteralExpr;
import beagle.compiler.ast.expression.SuperExpr;
import beagle.compiler.ast.expression.ThisExpr;
import beagle.compiler.ast.expression.UnaryExpr;
import beagle.compiler.ast.expression.VariableDeclarationExpr;
import beagle.compiler.ast.statement.AssertStmt;
import beagle.compiler.ast.statement.BlockStmt;
import beagle.compiler.ast.statement.BreakStmt;
import beagle.compiler.ast.statement.CatchClause;
import beagle.compiler.ast.statement.ContinueStmt;
import beagle.compiler.ast.statement.DoWhileStmt;
import beagle.compiler.ast.statement.EmptyStmt;
import beagle.compiler.ast.statement.ExplicitConstructorInvocationStmt;
import beagle.compiler.ast.statement.ExpressionStmt;
import beagle.compiler.ast.statement.ForStmt;
import beagle.compiler.ast.statement.ForeachStmt;
import beagle.compiler.ast.statement.IfStmt;
import beagle.compiler.ast.statement.ReturnStmt;
import beagle.compiler.ast.statement.SwitchEntryStmt;
import beagle.compiler.ast.statement.SwitchStmt;
import beagle.compiler.ast.statement.SynchronizedStmt;
import beagle.compiler.ast.statement.ThrowStmt;
import beagle.compiler.ast.statement.TryStmt;
import beagle.compiler.ast.statement.TypeDeclarationStmt;
import beagle.compiler.ast.statement.WhileStmt;
import beagle.compiler.ast.type.ClassOrInterfaceType;
import beagle.compiler.ast.type.PrimitiveType;
import beagle.compiler.ast.type.ReferenceType;
import beagle.compiler.ast.type.VoidType;

/**
 * <p>Basic abstrat syntatic tree visitor.</p>
 * 
 * <p>This class was inpired by "VoidVisitor" class from "javaparser" by Júlio Gesser.</p>
 * 
 * @author Bruno Ribeiro
 *
 * @param <A> Type of context object.
 */
public interface TreeVisitor<A>
{

	/*
	 * Nodes that compound the compilation unit.
	 */

	public void visit( CompilationUnit n, A context ) throws CompilerException;

	public void visit( PackageDeclaration n, A context ) throws CompilerException;

	public void visit( ImportDeclaration n, A context ) throws CompilerException;

	public void visit( LineComment n, A context ) throws CompilerException;

	public void visit( BlockComment n, A context ) throws CompilerException;

	/*
	 * Node for type definition.
	 */

	public void visit( ClassOrInterfaceDeclaration n, A context ) throws CompilerException;

	public void visit( EnumDeclaration n, A context ) throws CompilerException;

	public void visit( EmptyTypeDeclaration n, A context ) throws CompilerException;

	public void visit( EnumConstantDeclaration n, A context ) throws CompilerException;

	public void visit( AnnotationDeclaration n, A context ) throws CompilerException;

	public void visit( AnnotationMemberDeclaration n, A context ) throws CompilerException;

	public void visit( FieldDeclaration n, A context ) throws CompilerException;

	public void visit( VariableDeclarator n, A context ) throws CompilerException;

	public void visit( ConstructorDeclaration n, A context ) throws CompilerException;

	public void visit( MethodDeclaration n, A context ) throws CompilerException;

	public void visit( Parameter n, A context ) throws CompilerException;

	public void visit( ModifierDeclaration n, A context ) throws CompilerException;

	public void visit( DocComment n, A context ) throws CompilerException;

	/*
	 * Nodes for type reference.
	 */

	public void visit( ClassOrInterfaceType n, A context ) throws CompilerException;

	public void visit( PrimitiveType n, A context ) throws CompilerException;

	public void visit( ReferenceType n, A context ) throws CompilerException;

	public void visit( VoidType n, A context ) throws CompilerException;

	/*
	 * Nodes for expressions.
	 */

	public void visit( ArrayAccessExpr n, A context ) throws CompilerException;

	public void visit( ArrayCreationExpr n, A context ) throws CompilerException;

	public void visit( ArrayInitializerExpr n, A context ) throws CompilerException;

	public void visit( AssignExpr n, A context ) throws CompilerException;

	public void visit( BinaryExpr n, A context ) throws CompilerException;

	public void visit( CastExpr n, A context ) throws CompilerException;

	public void visit( ClassExpr n, A context ) throws CompilerException;

	public void visit( ConditionalExpr n, A context ) throws CompilerException;

	public void visit( EnclosedExpr n, A context ) throws CompilerException;

	public void visit( FieldAccessExpr n, A context ) throws CompilerException;

	public void visit( InstanceOfExpr n, A context ) throws CompilerException;

	public void visit( StringLiteralExpr n, A context ) throws CompilerException;

	public void visit( LongLiteralExpr n, A context ) throws CompilerException;

	public void visit( IntegerLiteralExpr n, A context ) throws CompilerException;

	public void visit( CharLiteralExpr n, A context ) throws CompilerException;

	public void visit( DoubleLiteralExpr n, A context ) throws CompilerException;

	public void visit( BooleanLiteralExpr n, A context ) throws CompilerException;

	public void visit( NullLiteralExpr n, A context ) throws CompilerException;

	public void visit( MethodCallExpr n, A context ) throws CompilerException;

	public void visit( NameExpr n, A context ) throws CompilerException;

	public void visit( ObjectCreationExpr n, A context ) throws CompilerException;

	public void visit( QualifiedNameExpr n, A context ) throws CompilerException;

	public void visit( ThisExpr n, A context ) throws CompilerException;

	public void visit( SuperExpr n, A context ) throws CompilerException;

	public void visit( UnaryExpr n, A context ) throws CompilerException;

	public void visit( VariableDeclarationExpr n, A context ) throws CompilerException;

	public void visit( MarkerAnnotationExpr n, A context ) throws CompilerException;

	public void visit( SingleMemberAnnotationExpr n, A context ) throws CompilerException;

	public void visit( NormalAnnotationExpr n, A context ) throws CompilerException;

	public void visit( MemberValuePair n, A context ) throws CompilerException;

	/*
	 * Node for language statements.
	 */

	public void visit( ExplicitConstructorInvocationStmt n, A context ) throws CompilerException;

	public void visit( TypeDeclarationStmt n, A context ) throws CompilerException;

	public void visit( AssertStmt n, A context ) throws CompilerException;

	public void visit( BlockStmt n, A context ) throws CompilerException;

	public void visit( EmptyStmt n, A context ) throws CompilerException;

	public void visit( ExpressionStmt n, A context ) throws CompilerException;

	public void visit( SwitchStmt n, A context ) throws CompilerException;

	public void visit( SwitchEntryStmt n, A context ) throws CompilerException;

	public void visit( BreakStmt n, A context ) throws CompilerException;

	public void visit( ReturnStmt n, A context ) throws CompilerException;

	public void visit( IfStmt n, A context ) throws CompilerException;

	public void visit( WhileStmt n, A context ) throws CompilerException;

	public void visit( ContinueStmt n, A context ) throws CompilerException;

	public void visit( DoWhileStmt n, A context ) throws CompilerException;

	public void visit( ForeachStmt n, A context ) throws CompilerException;

	public void visit( ForStmt n, A context ) throws CompilerException;

	public void visit( ThrowStmt n, A context ) throws CompilerException;

	public void visit( SynchronizedStmt n, A context ) throws CompilerException;

	public void visit( TryStmt n, A context ) throws CompilerException;

	public void visit( CatchClause n, A context ) throws CompilerException;

}
