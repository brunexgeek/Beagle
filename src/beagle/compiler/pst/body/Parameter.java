package beagle.compiler.pst.body;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.type.Type;
import beagle.compiler.pst.Node;
import beagle.compiler.pst.visitor.TreeVisitor;


public class Parameter extends Node
{

	public int modifiers;

	public Type type;

	public boolean isVarArgs;

	public String name;

	public Parameter()
	{
		
	}
	
	/*public Parameter( int modifiers, Type type,
		boolean isVarArgs, String name )
	{
		this.modifiers = modifiers;
		this.type = type;
		this.isVarArgs = isVarArgs;
		this.name = name;
	}*/

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}


}
