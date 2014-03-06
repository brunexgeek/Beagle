package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;
import beagle.compiler.ast.expression.AnnotationExpr;


public abstract class BodyDeclaration extends Node
{

	public DocComment doc;

	public List<AnnotationExpr> annotations;

	public BodyDeclaration()
	{
	}

	public BodyDeclaration( LineInfo linfo, List<AnnotationExpr> annotations, DocComment doc )
	{
		super(linfo);
		this.doc = doc;
		this.annotations = annotations;
	}

}
