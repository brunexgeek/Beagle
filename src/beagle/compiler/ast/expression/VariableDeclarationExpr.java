package beagle.compiler.ast.expression;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.body.ModifierDeclaration;
import beagle.compiler.ast.body.VariableDeclarator;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class VariableDeclarationExpr extends Expression
{

	public ModifierDeclaration modifiers;

	public List<AnnotationExpr> annotations;

	public Type type;

	public List<VariableDeclarator> variables;

	public VariableDeclarationExpr()
	{
	}

	public VariableDeclarationExpr( LineInfo linfo,
		List<AnnotationExpr> annotations, ModifierDeclaration modifiers, Type type, List<VariableDeclarator> variables )
	{
		super(linfo);
		this.modifiers = modifiers;
		this.annotations = annotations;
		this.type = type;
		this.variables = variables;
	}


	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
