package beagle.compiler.ast.expression;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ArrayInitializerExpr extends Expression
{

	public List<Expression> values;

	public ArrayInitializerExpr()
	{
	}

	public ArrayInitializerExpr( LineInfo linfo, List<Expression> values )
	{
		super(linfo);
		this.values = values;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
