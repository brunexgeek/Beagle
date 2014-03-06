package beagle.compiler.ast.body;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class VariableDeclarator extends Node
{

	public String name;

	public Expression init;
	
	public VariableDeclarator( LineInfo linfo, String name, Expression init )
	{
		super(linfo);
		this.name = name;
		this.init = init;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
