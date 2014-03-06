package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class SingleMemberAnnotationExpr extends AnnotationExpr
{

	public Expression memberValue;

	public SingleMemberAnnotationExpr()
	{
	}

	public SingleMemberAnnotationExpr( LineInfo linfo, NameExpr name, Expression memberValue )
	{
		super(linfo, name);
		this.memberValue = memberValue;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
