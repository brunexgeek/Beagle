package beagle.compiler.ast.visitor;

import java.util.Stack;


public class VisitorContext<T>
{

	private Stack<T> stack;
	
	public VisitorContext()
	{
		stack = new Stack<T>();
	}

	public void push( T n )
	{
		stack.push(n);
	}
	
	public T pop( )
	{
		if (stack.isEmpty())
			return null;
		else
			return stack.pop();
	}
	
	public T peek( )
	{
		if (stack.isEmpty())
			return null;
		else
			return stack.peek();
	}
	
}
