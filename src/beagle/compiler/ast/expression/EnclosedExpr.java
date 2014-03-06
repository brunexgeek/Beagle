package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class EnclosedExpr extends Expression
{

	public Expression inner;

	public EnclosedExpr()
	{
	}

	public EnclosedExpr( LineInfo linfo, Expression inner )
	{
		super(linfo);
		this.inner = inner;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
