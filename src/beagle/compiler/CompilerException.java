package beagle.compiler;

import beagle.compiler.ast.Node;


public class CompilerException extends Exception
{

	private static final long serialVersionUID = 432813624005354429L;

	private Node node = null;
	
	public CompilerException( String message, Node n )
	{
		super(message);
		node = n;
	}
	
	@Override
	public String getMessage()
	{
		if (node != null)
		{
			StringBuilder sb = new StringBuilder();
			sb.append(super.getMessage());
			sb.append(" at line ");
			sb.append(node.lineInfo.getBeginLine());
			sb.append(", column ");
			sb.append(node.lineInfo.getBeginColumn());
			return sb.toString();
		}
		else
			return super.getMessage();
	}
	
}
