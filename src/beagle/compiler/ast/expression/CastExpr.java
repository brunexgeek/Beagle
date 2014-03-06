package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class CastExpr extends Expression
{

	public Type type;

	public Expression expression;

	public CastExpr()
	{
	}

	public CastExpr( LineInfo linfo, Type type, Expression expression )
	{
		super(linfo);
		this.type = type;
		this.expression = expression;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
