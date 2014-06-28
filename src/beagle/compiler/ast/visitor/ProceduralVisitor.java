package beagle.compiler.ast.visitor;


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
import beagle.compiler.ast.body.TypeDeclaration;
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
import beagle.compiler.ast.type.Primitive;
import beagle.compiler.ast.type.PrimitiveType;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.type.VoidType;
import beagle.compiler.ast.type.ArrayType;
import beagle.compiler.parser.ParseException;


/**
 * Converts an abstract syntax tree to a procedural syntax tree.
 *  
 * @author Bruno Ribeiro
 */
public class ProceduralVisitor implements TreeVisitor<Object>
{

	/**
	 * Returns a StringBuffer containing the string representation of
	 * a NameExpr or QualifiedNameExpr. If "n" is a QualifiedNameExpr,
	 * each part of the qualified name will be separated by dots.
	 * 
	 * @param n
	 * @return
	 */
	private StringBuffer extractName( NameExpr n )
	{
		StringBuffer buffer;
		
		if (n instanceof QualifiedNameExpr)
		{
			buffer = extractName( ((QualifiedNameExpr)n).scope );
			buffer.append(".");
		}
		else
			buffer = new StringBuffer();
		buffer.append(n.name);
		return buffer;
	}
	
	/**
	 * Returns the string representation of
	 * a NameExpr or QualifiedNameExpr. If "n" is a QualifiedNameExpr,
	 * each part of the qualified name will be separated by dots.
	 * 
	 * @param n
	 * @return
	 */
	private String getName( NameExpr n )
	{
		return extractName(n).toString();
	}
	
	private beagle.compiler.pst.CompilationGroup generated = null;
	
	public beagle.compiler.pst.CompilationGroup getCompilationGroup()
	{
		return generated;
	}
	
	@Override
	public void visit( CompilationUnit n, Object context ) throws CompilerException
	{
		// create the procedural compilation unit and it type definition
		generated = new beagle.compiler.pst.CompilationGroup();
		beagle.compiler.pst.type.TypeDeclaration typeDef = new beagle.compiler.pst.type.TypeDeclaration();
		generated.definitions.add(typeDef);
		
		typeDef.fileName = n.fileName;
		n.pkg.accept(this, typeDef);
		for (ImportDeclaration entry : n.imports)
			entry.accept(this, typeDef);
		
		// we don't need worry about imports because the AST pre-processing already
		// expanded class names to their full qualified form
		
		n.type.accept(this, typeDef);
	}

	@Override
	public void visit( PackageDeclaration n, Object context ) throws CompilerException
	{
		beagle.compiler.pst.type.TypeDeclaration typeDecl;
		typeDecl = (beagle.compiler.pst.type.TypeDeclaration)context;
		
		typeDecl.packageName = getName(n.name);
	}

	private void getImportScope( StringBuilder sb, NameExpr name )
	{
		if (name == null) return;
		
		if (name instanceof QualifiedNameExpr && ((QualifiedNameExpr)name).scope != null)
		{
			getImportScope(sb, ((QualifiedNameExpr)name).scope);
			sb.append('.');
			sb.append(name.name);
		}
		else
			sb.append(name.name);
	}
	
	public beagle.compiler.pst.type.Type resolveType( beagle.compiler.pst.type.TypeDeclaration typeDecl, Type type ) throws CompilerException
	{
		if (type instanceof ClassOrInterfaceType)
		{
			beagle.compiler.pst.type.ClassOrInterfaceType result = new beagle.compiler.pst.type.ClassOrInterfaceType();
			
			// retrieve the scope from the qualified name or the import table 
			if (((ClassOrInterfaceType)type).scope != null)
				result.scope = getScope( ((ClassOrInterfaceType)type).scope );
			else
				result.scope = typeDecl.importTable.get( ((ClassOrInterfaceType)type).name );
			// ensure we have a scope
			if (result.scope == null)
				throw new CompilerException("Unknown type '" + ((ClassOrInterfaceType)type).name + "'", type);
			
			result.name = ((ClassOrInterfaceType)type).name;
			return result;
		}
		else
			if (type instanceof PrimitiveType)
			{
				beagle.compiler.pst.type.PrimitiveType result = new beagle.compiler.pst.type.PrimitiveType();
				result.type = ((PrimitiveType) type).type;
				return result;
			}
			else
				if (type instanceof VoidType)
				{
					return new beagle.compiler.pst.type.VoidType();					
				}
				else
					if (type instanceof ArrayType)
					{
						beagle.compiler.pst.type.ArrayType result = new beagle.compiler.pst.type.ArrayType();
						result.type = resolveType( typeDecl, ((ArrayType)type).type );
						result.arrayLevels = ((ArrayType) type).arrayLevels;
						return result;
					}
		
		return null;
	}
	
	@Override
	public void visit( ImportDeclaration n, Object context ) throws CompilerException
	{
		beagle.compiler.pst.type.TypeDeclaration typeDecl;
		typeDecl = (beagle.compiler.pst.type.TypeDeclaration)context;
		StringBuilder sb = new StringBuilder();
		
		// retrieve the class or interface scope
		if (n.name instanceof QualifiedNameExpr && ((QualifiedNameExpr)n.name).scope != null)
			getImportScope(sb, ((QualifiedNameExpr)n.name).scope);
		else
			sb.append(n.name);
		// add to the import list
		if (typeDecl.importTable.containsKey(n.name.name))
			throw new CompilerException("Duplicated import for type '" + n.name.name + "'", n);
		typeDecl.importTable.put(n.name.name, sb.toString());
	}

	@Override
	public void visit( LineComment n, Object context ) throws CompilerException
	{
		// nothing to do
	}

	@Override
	public void visit( BlockComment n, Object context ) throws CompilerException
	{
		// nothing to do

	}

	@Override
	public void visit( ClassOrInterfaceDeclaration n, Object context ) throws CompilerException
	{
		beagle.compiler.pst.type.TypeDeclaration typeDecl;
		typeDecl = (beagle.compiler.pst.type.TypeDeclaration)context;
		
		typeDecl.name = n.name;
		typeDecl.modifiers = n.modifiers.modifiers;
		
		// include the current type in the import table
		typeDecl.importTable.put(typeDecl.name, typeDecl.packageName);
		
		for (BodyDeclaration entry : n.members)
			entry.accept(this, context);
	}

	@Override
	public void visit( EnumDeclaration n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( EmptyTypeDeclaration n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( EnumConstantDeclaration n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( AnnotationDeclaration n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( AnnotationMemberDeclaration n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	private String getScope( ClassOrInterfaceType type )
	{
		if (type == null) return null; 
		if (type.scope != null)
			return getScope(type.scope) + "." + type.name;
		else
			return type.name;
	}
	
	@Override
	public void visit( FieldDeclaration n, Object context ) throws CompilerException
	{
		beagle.compiler.pst.type.TypeDeclaration typeDecl;
		typeDecl = (beagle.compiler.pst.type.TypeDeclaration)context;
		
		beagle.compiler.pst.type.Type type = resolveType(typeDecl, n.type);
		
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

	@Override
	public void visit( VariableDeclarator n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ConstructorDeclaration n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( MethodDeclaration n, Object context ) throws CompilerException
	{
		beagle.compiler.pst.type.TypeDeclaration typeDecl;
		typeDecl = (beagle.compiler.pst.type.TypeDeclaration)context;
		
		beagle.compiler.pst.body.ProcedureDeclaration proc = new beagle.compiler.pst.body.ProcedureDeclaration();
		proc.modifiers = n.modifiers.modifiers;
		// TODO: must be full qualified (package name + method name)
		proc.name = n.name;
		proc.result = resolveType(typeDecl, n.type);
		
		// dynamic methods must have the "self" parameter
		if (!n.modifiers.hasModifier(ModifierSet.STATIC))
		{
			beagle.compiler.pst.body.Parameter param = new beagle.compiler.pst.body.Parameter();
			param.name = "__self_";
			param.type = new beagle.compiler.pst.type.VoidType();
			/*param.type.arrayLevels = 0;
			param.type.type = typeDef.name;*/
			param.isPointer = true;
			proc.parameters.add(param);
		}
		// add each method parameter
		for (Parameter entry : n.parameters)
		{
			beagle.compiler.pst.body.Parameter param = new beagle.compiler.pst.body.Parameter();
			param.name = entry.name;
			param.type = resolveType(typeDecl, entry.type);
			param.isPointer = entry.isVarArgs;
			param.modifiers = entry.modifiers.modifiers;
			proc.parameters.add(param);
			// if the parameter is a 'vararg', we need an additional parameter for the
			// 'vararg' array length
			if (entry.isVarArgs)
			{
				param = new beagle.compiler.pst.body.Parameter();
				param.name = entry.name + "Count";
				param.type = new beagle.compiler.pst.type.PrimitiveType(Primitive.Int);
				param.isPointer = false;
				proc.parameters.add(param);
			}
		}
		
		
		typeDecl.procedures.add(proc);
	}

	@Override
	public void visit( Parameter n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ModifierDeclaration n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( DocComment n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ClassOrInterfaceType n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( PrimitiveType n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ArrayType n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( VoidType n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ArrayAccessExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ArrayCreationExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ArrayInitializerExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( AssignExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( BinaryExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( CastExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ClassExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ConditionalExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( EnclosedExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( FieldAccessExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( InstanceOfExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( StringLiteralExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( LongLiteralExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( IntegerLiteralExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( CharLiteralExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( DoubleLiteralExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( BooleanLiteralExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( NullLiteralExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( MethodCallExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( NameExpr n, Object context ) throws CompilerException
	{
		System.out.print(n.name);
	}

	@Override
	public void visit( ObjectCreationExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( QualifiedNameExpr n, Object context ) throws CompilerException
	{
		System.out.print( getName(n) );
	}

	@Override
	public void visit( ThisExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( SuperExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( UnaryExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( VariableDeclarationExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( MarkerAnnotationExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( SingleMemberAnnotationExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( NormalAnnotationExpr n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( MemberValuePair n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ExplicitConstructorInvocationStmt n, Object context )
		throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( TypeDeclarationStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( AssertStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( BlockStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( EmptyStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ExpressionStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( SwitchStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( SwitchEntryStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( BreakStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ReturnStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( IfStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( WhileStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ContinueStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( DoWhileStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ForeachStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ForStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( ThrowStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( SynchronizedStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( TryStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

	@Override
	public void visit( CatchClause n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub

	}

}
