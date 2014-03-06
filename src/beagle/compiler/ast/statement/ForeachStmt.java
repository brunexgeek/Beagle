package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.expression.VariableDeclarationExpr;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ForeachStmt extends Statement
{

	public VariableDeclarationExpr variable;

	public Expression iterable;

	public Statement block;

	public ForeachStmt()
	{
	}

	public ForeachStmt( LineInfo linfo, VariableDeclarationExpr variable, Expression iterable,
		Statement block )
	{
		super(linfo);
		this.variable = variable;
		this.iterable = iterable;
		this.block = block;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
