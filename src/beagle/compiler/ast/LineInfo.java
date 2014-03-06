package beagle.compiler.ast;

import beagle.compiler.parser.Token;


public class LineInfo
{

	private int beginLine = -1;

	private int beginColumn = -1;

	private int endLine = -1;

	private int endColumn = -1;

	public LineInfo()
	{
		// nothing to do
	}

	public LineInfo( int beginLine, int beginColumn, int endLine, int endColumn )
	{
		update(beginLine, beginColumn, endLine, endColumn);
	}

	public LineInfo( Token token )
	{
		update(token);
	}
	
	public LineInfo( Node node )
	{
		update(node);
	}
	
	public LineInfo( Object begin, Object end )
	{
		if (begin instanceof Node)
			updateBegin((Node)begin);
		else
			if (begin instanceof Token)
				updateBegin((Token)begin);
		
		if (end instanceof Node)
			updateEnd((Node)end);
		else
			if (end instanceof Token)
				updateEnd((Token)end);	
	}
	
	public LineInfo update( int beginLine, int beginColumn, int endLine, int endColumn )
	{
		updateBegin(beginLine, beginColumn);
		updateEnd(endLine, endColumn);
		return this;
	}

	public LineInfo updateBegin( int beginLine, int beginColumn )
	{
		if (this.beginLine == -1 && beginLine >= 0) 
			this.beginLine = beginLine;
		if (this.beginColumn == -1 && beginColumn >= 0) 
			this.beginColumn = beginColumn;
		return this;
	}
	
	public LineInfo updateEnd( int endLine, int endColumn )
	{
		if (this.endLine == -1 && endLine >= 0) 
			this.endLine = endLine;
		if (this.endColumn == -1 && endColumn >= 0) 
			this.endColumn = endColumn;
		return this;
	}
	
	public LineInfo update( Token tok )
	{
		update(tok.beginLine, tok.beginColumn, tok.endLine, tok.endColumn);
		return this;
	}

	public LineInfo updateBegin( Token tok )
	{
		updateBegin(tok.beginLine, tok.beginColumn);
		return this;
	}
	
	public LineInfo updateEnd( Token tok )
	{
		updateEnd(tok.endLine, tok.endColumn);
		return this;
	}
	
	public LineInfo update( LineInfo info )
	{
		update(info.beginLine, info.beginColumn, info.endLine, info.endColumn);
		return this;
	}

	public LineInfo updateBegin( LineInfo info )
	{
		updateBegin(info.beginLine, info.beginColumn);
		return this;
	}
	
	public LineInfo updateEnd( LineInfo info )
	{
		updateEnd(info.endLine, info.endColumn);
		return this;
	}
	
	public LineInfo update( Node node )
	{
		update(node.lineInfo);
		return this;
	}

	public LineInfo updateBegin( Node node )
	{
		updateBegin(node.lineInfo);
		return this;
	}
	
	public LineInfo updateEnd( Node node )
	{
		updateEnd(node.lineInfo);
		return this;
	}
	
	public int getBeginLine()
	{
		return beginLine;
	}

	public void setBeginLine( int beginLine )
	{
		this.beginLine = beginLine;
	}

	public int getBeginColumn()
	{
		return beginColumn;
	}

	public void setBeginColumn( int beginColumn )
	{
		this.beginColumn = beginColumn;
	}

	public int getEndLine()
	{
		return endLine;
	}

	public void setEndLine( int endLine )
	{
		this.endLine = endLine;
	}

	public int getEndColumn()
	{
		return endColumn;
	}

	public void setEndColumn( int endColumn )
	{
		this.endColumn = endColumn;
	}

}
