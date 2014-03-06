package beagle.compiler.ast.body;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class EmptyTypeDeclaration extends TypeDeclaration
{

	public EmptyTypeDeclaration()
	{
	}

	public EmptyTypeDeclaration( LineInfo linfo, DocComment doc )
	{
		super(linfo, null, doc, null, null, null);
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}
