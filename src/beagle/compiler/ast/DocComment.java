package beagle.compiler.ast;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class DocComment extends Comment
{

	public DocComment()
	{
	}

	public DocComment( LineInfo linfo, String comment )
	{
		super(linfo, comment);
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
	
}
