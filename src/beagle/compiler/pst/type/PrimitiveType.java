package beagle.compiler.pst.type;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.type.Primitive;
import beagle.compiler.pst.visitor.TreeVisitor;


public class PrimitiveType extends Type
{

	public Primitive type;

	public PrimitiveType()
	{
		// nothing to do
	}
	
	public PrimitiveType( Primitive type )
	{
		this.type = type;
	}
	
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
