package beagle.compiler.pst.type;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.visitor.TreeVisitor;


public class ArrayType extends Type
{

	public Type type;
	
	public int arrayLevels;
	
	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
	
	@Override
	public String toString()
	{
		return type.toString();
	}
}
