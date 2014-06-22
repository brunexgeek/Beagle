package beagle.compiler.pst.type;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.Node;
import beagle.compiler.pst.visitor.TreeVisitor;


public final class Type extends Node
{

	public String type;

	public int arrayLevels = 0;

	public Type()
	{
	}

	public Type( String type, int arrayLevels )
	{
		this.type = type;
		this.arrayLevels = arrayLevels;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
	
	@Override
	public String toString()
	{
		StringBuilder sb = new StringBuilder();
		sb.append(type);
		for (int i = 0; i < arrayLevels; i++)
			sb.append("[");
		return sb.toString();
	}

}
