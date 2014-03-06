package beagle.compiler.ast.type;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;



public final class ClassOrInterfaceType extends Type
{

	public ClassOrInterfaceType scope;

	public String name;

	public ClassOrInterfaceType()
	{
	}

	public ClassOrInterfaceType( LineInfo linfo,
		ClassOrInterfaceType scope, String name )
	{
		super(linfo);
		this.scope = scope;
		this.name = name;
	}


	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
