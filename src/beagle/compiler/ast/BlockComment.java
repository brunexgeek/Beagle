package beagle.compiler.ast;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class BlockComment extends Comment
{

	public BlockComment()
	{
	}

	public BlockComment( LineInfo linfo, String content )
	{
		super(linfo, content);
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}
