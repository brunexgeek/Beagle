package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public class StringLiteralExpr extends LiteralExpr
{

	public String value;

	public StringLiteralExpr()
	{
	}

	public StringLiteralExpr( LineInfo linfo, String value )
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
