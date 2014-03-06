package beagle.compiler.ast.expression;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class MethodCallExpr extends Expression
{

	public Expression scope;

	public String name;

	public List<Expression> arguments;

	public MethodCallExpr()
	{
	}

	public MethodCallExpr( LineInfo linfo, Expression scope,  String name,
		List<Expression> arguments )
	{
		super(linfo);
		this.scope = scope;
		this.name = name;
		this.arguments = arguments;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
