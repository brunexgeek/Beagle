package beagle.compiler.pst;

import java.util.ArrayList;
import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.type.TypeDefinition;
import beagle.compiler.pst.visitor.TreeVisitor;


public class CompilationGroup extends Node
{
	
	public List<TypeDefinition> definitions = new ArrayList<TypeDefinition>();
		
	public CompilationGroup()
	{
		super();
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
