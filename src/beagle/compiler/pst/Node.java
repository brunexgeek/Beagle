package beagle.compiler.pst;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.visitor.TreeVisitor;


public abstract class Node
{

	public Node()
	{
	}

	public abstract <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException;
	
}
