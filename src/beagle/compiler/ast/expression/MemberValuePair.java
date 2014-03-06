package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class MemberValuePair extends Node
{

	public String name;

	public Expression value;

	public MemberValuePair()
	{
	}

	public MemberValuePair( LineInfo linfo, String name, Expression value )
	{
		super(linfo);
		this.name = name;
		this.value = value;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
