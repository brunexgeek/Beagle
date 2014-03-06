package beagle.compiler.parser;

import java.util.ArrayList;
import java.util.List;

import beagle.compiler.ast.expression.AnnotationExpr;


public class AbstractParser
{

	public static int addModifier( int current, int modifier, Token tok )
	{
		return (current |= modifier);
	}

	public static List<AnnotationExpr> addAnnotation( List<AnnotationExpr> list, AnnotationExpr ann )
	{
		if (list == null)
			list = new ArrayList<AnnotationExpr>();
		list.add(ann);
		return list;
	}
	
}
