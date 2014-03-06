package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ClassExpr extends Expression
{

	public Type type;

	public ClassExpr()
	{
	}

	public ClassExpr( LineInfo linfo, Type type )
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
