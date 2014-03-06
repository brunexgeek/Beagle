package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ArrayAccessExpr extends Expression
{

	public Expression name;

	public Expression index;

	public ArrayAccessExpr()
	{
	}

	public ArrayAccessExpr( LineInfo linfo, Expression name, Expression index )
	{
		super(linfo);
		this.name = name;
		this.index = index;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
