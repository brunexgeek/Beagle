package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.statement.BlockStmt;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ConstructorDeclaration extends BodyDeclaration
{

	public ModifierDeclaration modifiers;

	public String name;

	public List<Parameter> parameters;

	public BlockStmt block;

	public ConstructorDeclaration( LineInfo linfo, DocComment doc,
		List<AnnotationExpr> annotations, ModifierDeclaration modifiers, String name, List<Parameter> parameters,
		BlockStmt block )
	{
		super(linfo, annotations, doc);
		this.modifiers = modifiers;
		this.name = name;
		this.parameters = parameters;
		this.block = block;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}
