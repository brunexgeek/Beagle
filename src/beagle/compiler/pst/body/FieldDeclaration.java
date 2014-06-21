package beagle.compiler.pst.body;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.visitor.TreeVisitor;
import beagle.compiler.pst.type.Type;


public class FieldDeclaration extends BodyDeclaration
{

	public int modifiers;

	public Type type;

	public String name;

	public FieldDeclaration(  )
	{
		super();
	}
	
	public FieldDeclaration( int modifiers, Type type, String name )
	{
		this.modifiers = modifiers;
		this.type = type;
		this.name = name;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
	
}