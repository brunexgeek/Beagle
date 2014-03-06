package beagle.compiler.ast.type;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class PrimitiveType extends Type
{

	public Primitive type = null;

	public PrimitiveType()
	{
	}

	public PrimitiveType( LineInfo linfo, Primitive type )
	{
		super(linfo);
		this.type = type;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
