package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.statement.BlockStmt;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class MethodDeclaration extends BodyDeclaration
{

	public ModifierDeclaration modifiers;

	public Type type;

	public String name;

	public List<Parameter> parameters;

	public BlockStmt body;

	public MethodDeclaration( LineInfo linfo, DocComment javaDoc, List<AnnotationExpr> annotations,
		ModifierDeclaration modifiers, Type type, String name, List<Parameter> parameters,
		BlockStmt block )
	{
		super(linfo, annotations, javaDoc);
		this.modifiers = modifiers;
		this.type = type;
		this.name = name;
		this.parameters = parameters;
		this.body = block;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
