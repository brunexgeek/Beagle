package beagle.compiler.ast;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.visitor.TreeVisitor;


public abstract class Node
{

	public LineInfo lineInfo;

	public String fileName;

	public Node()
	{
	}
	
	public Node( String fileName )
	{
		this(fileName, null);
	}
	
	public Node( LineInfo lineInfo )
	{
		this(null, lineInfo);
	}

	public Node( String fileName, LineInfo lineInfo )
	{
		if (fileName == null) fileName = "";
		if (lineInfo == null) lineInfo = new LineInfo();
		this.lineInfo = lineInfo;
		this.fileName = fileName;
	}

	public abstract <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException;
	
}
