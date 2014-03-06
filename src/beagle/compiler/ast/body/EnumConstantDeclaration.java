package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;



public final class EnumConstantDeclaration extends BodyDeclaration
{

	public String name;

	public List<Expression> arguments;

	public EnumConstantDeclaration( LineInfo linfo, DocComment doc,
		List<AnnotationExpr> annotations, String name, List<Expression> args )
	{
		super(linfo, annotations, doc);
		this.name = name;
		this.arguments = args;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}
