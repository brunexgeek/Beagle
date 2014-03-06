package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class QualifiedNameExpr extends NameExpr
{

	public NameExpr scope;

	public QualifiedNameExpr()
	{
	}

	public QualifiedNameExpr( LineInfo linfo, NameExpr scope, String name )
	{
		super(linfo, name);
		this.scope = scope;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
