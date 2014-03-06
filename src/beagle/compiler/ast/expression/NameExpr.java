package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public class NameExpr extends Expression
{

	public String name;

	public NameExpr()
	{
	}

	public NameExpr( LineInfo linfo, String name )
	{
		super(linfo);
		this.name = name;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
