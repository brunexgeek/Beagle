package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class SuperExpr extends Expression
{

	public Expression expression;

	public SuperExpr()
	{
	}

	public SuperExpr( LineInfo linfo, Expression expression )
	{
		super(linfo);
		this.expression = expression;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
