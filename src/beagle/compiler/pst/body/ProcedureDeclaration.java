package beagle.compiler.pst.body;

import java.util.ArrayList;
import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.type.Type;
import beagle.compiler.pst.visitor.TreeVisitor;


public class ProcedureDeclaration extends BodyDeclaration
{

	public int modifiers;
	
	public String name;
	
	public Type result;

	public List<Parameter> parameters = new ArrayList<Parameter>();

	public ProcedureDeclaration()
	{
		super();
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
