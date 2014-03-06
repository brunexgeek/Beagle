package beagle.compiler.ast.statement;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ExplicitConstructorInvocationStmt extends Statement
{

	public boolean isThis;

	public Expression expression;

	public List<Expression> arguments;

	public ExplicitConstructorInvocationStmt()
	{
	}

	public ExplicitConstructorInvocationStmt( LineInfo linfo, boolean isThis,
		Expression expression, List<Expression> arguments )
	{
		super(linfo);
		this.isThis = isThis;
		this.expression = expression;
		this.arguments = arguments;
	}


	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
