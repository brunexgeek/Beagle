package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class MarkerAnnotationExpr extends AnnotationExpr
{

	public MarkerAnnotationExpr()
	{
	}

	public MarkerAnnotationExpr( LineInfo linfo, NameExpr name )
	{
		super(linfo, name);
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
