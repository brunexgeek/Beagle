package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.body.TypeDeclaration;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class TypeDeclarationStmt extends Statement
{

	public TypeDeclaration typeDeclaration;

	public TypeDeclarationStmt()
	{
	}

	public TypeDeclarationStmt( LineInfo linfo, TypeDeclaration typeDeclaration )
	{
		super(linfo);
		this.typeDeclaration = typeDeclaration;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
