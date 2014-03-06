package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class InstanceOfExpr extends Expression
{

	public Expression expression;

	public Type type;

	public InstanceOfExpr()
	{
	}

	public InstanceOfExpr( LineInfo linfo, Expression expression, Type type )
	{
		super(linfo);
		this.expression = expression;
		this.type = type;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
