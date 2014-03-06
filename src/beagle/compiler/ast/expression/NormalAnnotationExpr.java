package beagle.compiler.ast.expression;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class NormalAnnotationExpr extends AnnotationExpr
{

	public List<MemberValuePair> pairs;

	public NormalAnnotationExpr()
	{
	}

	public NormalAnnotationExpr( LineInfo linfo, NameExpr name, List<MemberValuePair> pairs )
	{
		super(linfo, name);
		this.pairs = pairs;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
