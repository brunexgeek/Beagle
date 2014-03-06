package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.type.ClassOrInterfaceType;
import beagle.compiler.ast.visitor.TreeVisitor;



public final class ClassOrInterfaceDeclaration extends TypeDeclaration 
{

	public boolean isInterface;

	public List<ClassOrInterfaceType> extendsList;

	public List<ClassOrInterfaceType> implementsList;

	public ClassOrInterfaceDeclaration()
	{
	}

	public ClassOrInterfaceDeclaration( LineInfo linfo,
		DocComment doc, List<AnnotationExpr> annotations, ModifierDeclaration modifiers,
		boolean isInterface, String name,
		List<ClassOrInterfaceType> extendsList, List<ClassOrInterfaceType> implementsList,
		List<BodyDeclaration> members )
	{
		super(linfo, annotations, doc, modifiers, name,
			members);
		this.isInterface = isInterface;
		this.extendsList = extendsList;
		this.implementsList = implementsList;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}
