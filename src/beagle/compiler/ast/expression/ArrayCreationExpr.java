package beagle.compiler.ast.expression;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ArrayCreationExpr extends Expression
{

	public Type type;

	public int arrayLevels;

	public ArrayInitializerExpr initializer;

	public List<Expression> dimensions;

	public ArrayCreationExpr()
	{
	}

	public ArrayCreationExpr( LineInfo linfo, Type type, int arrayCount,
		ArrayInitializerExpr initializer )
	{
		super(linfo);
		this.type = type;
		this.arrayLevels = arrayCount;
		this.initializer = initializer;
		this.dimensions = null;
	}

	public ArrayCreationExpr( LineInfo linfo, Type type, List<Expression> dimensions,
		int arrayLevels )
	{
		super(linfo);
		this.type = type;
		this.arrayLevels = arrayLevels;
		this.dimensions = dimensions;
		this.initializer = null;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
