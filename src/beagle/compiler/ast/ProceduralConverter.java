package beagle.compiler.ast;


/*
 * Note: do not import any class from PST package (use qualified name instead)
 */
import beagle.compiler.CompilerException;
import beagle.compiler.ast.BlockComment;
import beagle.compiler.ast.CompilationUnit;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.ImportDeclaration;
import beagle.compiler.ast.LineComment;
import beagle.compiler.ast.PackageDeclaration;
import beagle.compiler.ast.body.AnnotationDeclaration;
import beagle.compiler.ast.body.AnnotationMemberDeclaration;
import beagle.compiler.ast.body.BodyDeclaration;
import beagle.compiler.ast.body.ClassOrInterfaceDeclaration;
import beagle.compiler.ast.body.ConstructorDeclaration;
import beagle.compiler.ast.body.EmptyTypeDeclaration;
import beagle.compiler.ast.body.EnumConstantDeclaration;
import beagle.compiler.ast.body.EnumDeclaration;
import beagle.compiler.ast.body.FieldDeclaration;
import beagle.compiler.ast.body.MethodDeclaration;
import beagle.compiler.ast.body.ModifierDeclaration;
import beagle.compiler.ast.body.ModifierSet;
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
import beagle.compiler.ast.type.ArrayType;
import beagle.compiler.ast.type.ClassOrInterfaceType;
import beagle.compiler.ast.type.PrimitiveType;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.type.VoidType;
import beagle.compiler.ast.visitor.VisitorContext;
import beagle.compiler.ast.body.TypeDeclaration;


/**
 * Converts an abstract syntax tree to a procedural syntax tree.
 * 
 * @author Bruno Ribeiro
 */
public class ProceduralConverter
{

	private beagle.compiler.pst.CompilationGroup generated = null;
	
	private beagle.compiler.pst.body.TypeDeclaration typeDecl = null;

	public ProceduralConverter()
	{
		generated = new beagle.compiler.pst.CompilationGroup();
	}

	public beagle.compiler.pst.CompilationGroup getCompilationGroup()
	{
		return generated;
	}

	/**
	 * Fill a StringBuffer with the string representation of a ClassOrInterfaceType. If "n" have a
	 * scope, each part of the qualified name will be separated by dots.
	 * 
	 * @param n
	 * @return
	 */
	private void getScope( StringBuilder sb, ClassOrInterfaceType type )
	{
		if (type == null) return;

		if (type.scope != null)
		{
			getScope(sb, type.scope);
			sb.append('.');
			sb.append(type.name);
		}
		else
			sb.append(type.name);
	}

	/**
	 * Fill a StringBuffer with the string representation of a NameExpr or QualifiedNameExpr. If "n"
	 * is a QualifiedNameExpr, each part of the qualified name will be separated by dots.
	 * 
	 * @param n
	 * @return
	 */
	private void getScope( StringBuilder sb, NameExpr name )
	{
		if (name == null) return;

		if (name instanceof QualifiedNameExpr && ((QualifiedNameExpr) name).scope != null)
		{
			getScope(sb, ((QualifiedNameExpr) name).scope);
			sb.append('.');
			sb.append(name.name);
		}
		else
			sb.append(name.name);
	}

	private void processBodyDeclaration( BodyDeclaration n )
		throws CompilerException
	{
		if (n instanceof FieldDeclaration)
			processBodyDeclaration((FieldDeclaration) n);
		else
			if (n instanceof MethodDeclaration)
				processBodyDeclaration((MethodDeclaration) n);
	}

	private void processBodyDeclaration( FieldDeclaration n )
		throws CompilerException
	{
		beagle.compiler.pst.type.Type type = resolveType(n.type);

		for (VariableDeclarator decl : n.variables)
		{
			// create the field (only one declarator per field)
			beagle.compiler.pst.body.FieldDeclaration field = new beagle.compiler.pst.body.FieldDeclaration();
			field.modifiers = n.modifiers.modifiers;
			field.name = decl.name;
			field.type = type;
			// add to the respective list
			if (n.modifiers.hasModifier(ModifierSet.STATIC))
				typeDecl.staticFields.add(field);
			else
				typeDecl.dynamicFields.add(field);
		}
	}

	/**
	 * Peek: beagle.compiler.pst.body.TypeDeclaration
	 */

	private void processBodyDeclaration( MethodDeclaration n )
		throws CompilerException
	{
		beagle.compiler.pst.body.ProcedureDeclaration proc = new beagle.compiler.pst.body.ProcedureDeclaration();
		proc.modifiers = n.modifiers.modifiers;
		proc.name = typeDecl.packageName + '.' + n.name;
		proc.result = resolveType(n.type);

		// dynamic methods must have the "self" parameter
		if (!n.modifiers.hasModifier(ModifierSet.STATIC))
		{
			beagle.compiler.pst.type.ClassOrInterfaceType type = new beagle.compiler.pst.type.ClassOrInterfaceType();
			type.name = typeDecl.name;
			type.scope = typeDecl.packageName;

			beagle.compiler.pst.body.Parameter param = new beagle.compiler.pst.body.Parameter();
			param.name = "__self_";
			param.type = type;
			proc.parameters.add(param);
		}
		// add each method parameter
		for (Parameter entry : n.parameters)
		{
			beagle.compiler.pst.body.Parameter param = new beagle.compiler.pst.body.Parameter();
			param.name = entry.name;
			param.modifiers = entry.modifiers.modifiers;

			if (entry.isVarArgs)
			{
				// 'vararg' parameters became arrays
				beagle.compiler.pst.type.ArrayType type = new beagle.compiler.pst.type.ArrayType();
				type.arrayLevels = 1;
				type.type = resolveType(entry.type);
				param.type = type;
			}
			else
				param.type = resolveType(entry.type);

			proc.parameters.add(param);
		}

		// process the method body
		// n.body.accept(this, proc);

		typeDecl.procedures.add(proc);
	}

	public void processCompilationUnit( CompilationUnit n ) throws CompilerException
	{
		// initialize the procedural type declaration
		typeDecl = new beagle.compiler.pst.body.TypeDeclaration();
		typeDecl.fileName = n.fileName;
		generated.definitions.add(typeDecl);

		// process the package declaration
		processPackageDeclaration(n.pkg);

		// process each import declaration
		for (ImportDeclaration entry : n.imports)
			processImportDeclaration(entry);

		// process the type declaration
		processTypeDeclaration(n.type);
		
		typeDecl = null;
	}

	private void processImportDeclaration( ImportDeclaration n )
		throws CompilerException
	{
		StringBuilder sb = new StringBuilder();

		// retrieve the class or interface scope
		if (n.name instanceof QualifiedNameExpr && ((QualifiedNameExpr) n.name).scope != null)
			getScope(sb, ((QualifiedNameExpr) n.name).scope);
		else
			sb.append(n.name);
		// add to the import list
		if (typeDecl.importTable.containsKey(n.name.name))
			throw new CompilerException("Duplicated import for type '" + n.name.name + "'", n);
		typeDecl.importTable.put(n.name.name, sb.toString());
	}

	private void processPackageDeclaration( PackageDeclaration n )
		throws CompilerException
	{
		StringBuilder sb = new StringBuilder();
		getScope(sb, n.name);
		typeDecl.packageName = sb.toString();
	}

	private void processTypeDeclaration( TypeDeclaration n ) throws CompilerException
	{
		if (n instanceof ClassOrInterfaceDeclaration)
			processClassOrInterfaceDeclaration((ClassOrInterfaceDeclaration) n);
	}

	private void processClassOrInterfaceDeclaration( ClassOrInterfaceDeclaration n )
		throws CompilerException
	{
		typeDecl.name = n.name;
		typeDecl.modifiers = n.modifiers.modifiers;

		// include the current type in the import table
		typeDecl.importTable.put(typeDecl.name, typeDecl.packageName);

		for (BodyDeclaration entry : n.members)
			processBodyDeclaration(entry);
	}

	private beagle.compiler.pst.type.Type resolveType( ArrayType type )
		throws CompilerException
	{
		beagle.compiler.pst.type.ArrayType result = new beagle.compiler.pst.type.ArrayType();
		result.type = resolveType(((ArrayType) type).type);
		result.arrayLevels = ((ArrayType) type).arrayLevels;
		return result;
	}

	private beagle.compiler.pst.type.Type resolveType( ClassOrInterfaceType type )
		throws CompilerException
	{
		beagle.compiler.pst.type.ClassOrInterfaceType result = new beagle.compiler.pst.type.ClassOrInterfaceType();

		// retrieve the scope from the qualified name or the import table
		if (type.scope != null)
		{
			StringBuilder sb = new StringBuilder();
			getScope(sb, type.scope);
			result.scope = sb.toString();
		}
		else
			result.scope = typeDecl.importTable.get(type.name);
		// ensure we have a scope
		if (result.scope == null)
			throw new CompilerException("Unknown type '" + type.name + "'", type);

		result.name = type.name;
		return result;
	}

	private beagle.compiler.pst.type.Type resolveType( PrimitiveType type )
		throws CompilerException
	{
		beagle.compiler.pst.type.PrimitiveType result = new beagle.compiler.pst.type.PrimitiveType();
		result.type = ((PrimitiveType) type).type;
		return result;
	}

	private beagle.compiler.pst.type.Type resolveType( Type type ) throws CompilerException
	{
		if (type instanceof ClassOrInterfaceType)
			return resolveType((ClassOrInterfaceType) type);
		
		if (type instanceof PrimitiveType) 
			return resolveType((PrimitiveType) type);
		
		if (type instanceof VoidType) 
			return new beagle.compiler.pst.type.VoidType();
		
		if (type instanceof ArrayType) 
			return resolveType((ArrayType) type);
		
		return null;
	}

	public void visit( AnnotationDeclaration n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( AnnotationMemberDeclaration n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ArrayAccessExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ArrayCreationExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ArrayInitializerExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ArrayType n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( AssertStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( AssignExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( BinaryExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( BlockComment n, VisitorContext<Object> context ) throws CompilerException
	{
		// nothing to do

	}

	public void visit( BlockStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( BooleanLiteralExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( BreakStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( CastExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( CatchClause n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( CharLiteralExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ClassExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ClassOrInterfaceType n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ConditionalExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ConstructorDeclaration n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ContinueStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( DocComment n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( DoubleLiteralExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( DoWhileStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( EmptyStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( EmptyTypeDeclaration n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( EnclosedExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( EnumConstantDeclaration n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( EnumDeclaration n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ExplicitConstructorInvocationStmt n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ExpressionStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( FieldAccessExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ForeachStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ForStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( IfStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( InstanceOfExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( IntegerLiteralExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( LineComment n, VisitorContext<Object> context ) throws CompilerException
	{
		// nothing to do
	}

	public void visit( LongLiteralExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( MarkerAnnotationExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( MemberValuePair n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( MethodCallExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ModifierDeclaration n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( NameExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		System.out.print(n.name);
	}

	public void visit( NormalAnnotationExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( NullLiteralExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ObjectCreationExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( Parameter n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( PrimitiveType n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( QualifiedNameExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// nothing to do
	}

	public void visit( ReturnStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( SingleMemberAnnotationExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( StringLiteralExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( SuperExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( SwitchEntryStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( SwitchStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( SynchronizedStmt n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ThisExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( ThrowStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( TryStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( TypeDeclarationStmt n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( UnaryExpr n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( VariableDeclarationExpr n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( VariableDeclarator n, VisitorContext<Object> context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( VoidType n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	public void visit( WhileStmt n, VisitorContext<Object> context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

}
