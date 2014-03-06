package beagle.compiler.ast.body;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class Parameter extends Node
{

	public ModifierDeclaration modifiers;

	public Type type;

	public boolean isVarArgs;

	public String name;

	public Parameter( LineInfo linfo, ModifierDeclaration modifiers, Type type,
		boolean isVarArgs, String name )
	{
		super(linfo);
		this.modifiers = modifiers;
		this.type = type;
		this.isVarArgs = isVarArgs;
		this.name = name;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}


}
