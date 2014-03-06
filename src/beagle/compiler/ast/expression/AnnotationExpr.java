package beagle.compiler.ast.expression;


import beagle.compiler.ast.LineInfo;


public abstract class AnnotationExpr extends Expression
{

	public NameExpr name;

	public AnnotationExpr()
	{
	}

	public AnnotationExpr( LineInfo linfo, NameExpr name )
	{
		super(linfo);
		this.name = name;
	}


}
