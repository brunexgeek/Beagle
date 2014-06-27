package beagle.compiler.ast.visitor;


/*
 * Note: do not import any class from PST package (use qualified name instead)
 */
import beagle.compiler.CompilerException;
import beagle.compiler.ast.*;
import beagle.compiler.ast.body.*;
import beagle.compiler.ast.expression.*;
import beagle.compiler.ast.statement.*;
import beagle.compiler.ast.type.*;
import beagle.compiler.pst.type.ArrayType;


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
		
		// we don't need worry about imports because the AST pre-processing already
		// expanded class names to their full qualified form
		
		n.type.accept(this, typeDef);
	}

	@Override
	public void visit( PackageDeclaration n, Object context ) throws CompilerException
	{
		((beagle.compiler.pst.type.TypeDeclaration)context).packageName = getName(n.name);
	}

	@Override
	public void visit( ImportDeclaration n, Object context ) throws CompilerException
	{
		// nothing to do
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
		beagle.compiler.pst.type.TypeDeclaration typeDef;
		typeDef = (beagle.compiler.pst.type.TypeDeclaration)context;
		
		typeDef.name = n.name;
		typeDef.modifiers = n.modifiers.modifiers;
		
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
		if (type.scope != null)
			return getScope(type.scope) + "." + type.name;
		else
			return type.name;
		
	}
	
	private beagle.compiler.pst.type.Type getType( Type type )
	{
		
		if (type instanceof ClassOrInterfaceType)
		{
			beagle.compiler.pst.type.ClassOrInterfaceType result = new beagle.compiler.pst.type.ClassOrInterfaceType();
			result.scope = getScope( ((ClassOrInterfaceType)type).scope );
			result.type = ((ClassOrInterfaceType)type).name;
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
					if (type instanceof ReferenceType)
					{
						beagle.compiler.pst.type.ArrayType result = new ArrayType();
						result.type = getType( ((ReferenceType)type).type );
						result.arrayLevels = ((ReferenceType) type).arrayLevels;
						return result;
					}
		
		return null;
	}
	
	@Override
	public void visit( FieldDeclaration n, Object context ) throws CompilerException
	{
		beagle.compiler.pst.type.TypeDeclaration typeDef;
		typeDef = (beagle.compiler.pst.type.TypeDeclaration)context;
		
		beagle.compiler.pst.type.Type type = getType(n.type);
		
		for (VariableDeclarator decl : n.variables)
		{
			// create the field (only one declarator per field)
			beagle.compiler.pst.body.FieldDeclaration field = new beagle.compiler.pst.body.FieldDeclaration();
			field.modifiers = n.modifiers.modifiers;
			field.name = decl.name;
			field.type = type;
			// add to the respective list
			if (n.modifiers.hasModifier(ModifierSet.STATIC))
				typeDef.staticFields.add(field);
			else
				typeDef.dynamicFields.add(field);
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
		beagle.compiler.pst.type.TypeDeclaration typeDef;
		typeDef = (beagle.compiler.pst.type.TypeDeclaration)context;
		
		beagle.compiler.pst.body.ProcedureDeclaration proc = new beagle.compiler.pst.body.ProcedureDeclaration();
		proc.modifiers = n.modifiers.modifiers;
		// TODO: must be full qualified (package name + method name)
		proc.name = n.name;
		proc.result = getType(n.type);
		
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
			param.type = getType(entry.type);
			param.isPointer = entry.isVarArgs;
			param.modifiers = entry.modifiers.modifiers;
			proc.parameters.add(param);
			// if the parameter is a 'vararg', we need an additional parameter for the
			// 'vararg' array length
			if (entry.isVarArgs)
			{
				param = new beagle.compiler.pst.body.Parameter();
				param.name = entry.name + "Count";
				param.type = new beagle.compiler.pst.type.VoidType();//("int", 0);
				param.isPointer = false;
				proc.parameters.add(param);
			}
		}
		
		
		typeDef.procedures.add(proc);
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
	public void visit( ReferenceType n, Object context ) throws CompilerException
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