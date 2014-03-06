package beagle.compiler.test;

import java.io.FileInputStream;
import java.io.FileNotFoundException;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.visitor.XmlDumpVisitor;
import beagle.compiler.parser.BeagleParser;
import beagle.compiler.parser.BeagleParserConstants;
import beagle.compiler.parser.ParseException;
import beagle.compiler.parser.Token;


public class BeagleTest
{
	
	private static void printTokens( BeagleParser parser )
	{
		Token token = null;
		while (true)
		{
			token = parser.getNextToken();
			if (token == null || token.kind == BeagleParserConstants.EOF) break;
			System.out.print(token.image);
			System.out.print(" ");
			if (token.kind == BeagleParserConstants.NEWLINE)
				System.out.print("\n");
		}
	}

	private static void printXmlTree( BeagleParser parser ) throws CompilerException, ParseException
	{
		XmlDumpVisitor vis = new XmlDumpVisitor();
		parser.CompilationUnit().accept(vis, null);
		System.out.println(vis.getSource());
	}
	
	public static void main( String[] args ) throws FileNotFoundException, ParseException, CompilerException
	{
		String fileName;
		if (args.length == 0)
			fileName = "test/beagle/compiler/test/sample.bgl"; 
		else
			fileName = args[0];
		FileInputStream in = new FileInputStream(fileName);
		BeagleParser parser = new BeagleParser(in);
		printXmlTree(parser);
	}

}
