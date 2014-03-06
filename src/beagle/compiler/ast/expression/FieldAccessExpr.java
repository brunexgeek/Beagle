package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class FieldAccessExpr extends Expression
{

	public Expression scope;

	public String field;

	public FieldAccessExpr()
	{
	}
	public FieldAccessExpr( LineInfo linfo, Expression scope, String field )
	{
		super(linfo);
		this.scope = scope;
		this.field = field;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
