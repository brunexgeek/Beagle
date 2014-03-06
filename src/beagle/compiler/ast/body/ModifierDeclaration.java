package beagle.compiler.ast.body;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;
import beagle.compiler.ast.visitor.TreeVisitor;


public class ModifierDeclaration extends Node
{

	public int modifiers = 0;
	
	public ModifierDeclaration()
	{
	}

	public ModifierDeclaration( LineInfo linfo, int modifiers )
	{
		super(linfo);
		this.modifiers = modifiers;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);	
	}

	public boolean hasModifier( ModifierSet modifier )
	{
		return (modifiers & modifier.getValue()) != 0;
	}
	
	public int setModifier( ModifierSet modifier )
	{
		return modifiers | modifier.getValue();
	}

	public int unsetModifier( ModifierSet modifier )
	{
		return modifiers & ~modifier.getValue();
	}
	
}
