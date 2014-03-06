package beagle.compiler.ast.type;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ReferenceType extends Type
{

	public Type type;

	public int arrayLevels = 0;

	public ReferenceType()
	{
	}

	public ReferenceType( LineInfo linfo, Type type, int arrayLevels )
	{
		super(linfo);
		this.type = type;
		this.arrayLevels = arrayLevels;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
