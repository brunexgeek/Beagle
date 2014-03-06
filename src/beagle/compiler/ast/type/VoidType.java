package beagle.compiler.ast.type;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class VoidType extends Type
{

	public VoidType()
	{
	}

	public VoidType( LineInfo linfo )
	{
		super(linfo);
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
