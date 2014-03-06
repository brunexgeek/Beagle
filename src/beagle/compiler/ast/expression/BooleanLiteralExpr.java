package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class BooleanLiteralExpr extends LiteralExpr
{

	public boolean value;

	public BooleanLiteralExpr()
	{
	}

	public BooleanLiteralExpr( LineInfo linfo, boolean value )
	{
		super(linfo);
		this.value = value;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
