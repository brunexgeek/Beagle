package beagle.compiler.ast.expression;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.type.ClassOrInterfaceType;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ObjectCreationExpr extends Expression
{

	public Expression scope;

	public ClassOrInterfaceType type;

	public List<Expression> arguments;

	public ObjectCreationExpr()
	{
	}

	public ObjectCreationExpr( LineInfo linfo, Expression scope, ClassOrInterfaceType type,
		List<Expression> arguments )
	{
		super(linfo);
		this.scope = scope;
		this.type = type;
		this.arguments = arguments;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
