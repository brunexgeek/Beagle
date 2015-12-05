#include <iostream>
#include <fstream>
#include <beagle-parser/Parser.hh>
#include <beagle-parser/Node.hh>
#include <beagle-parser/CodeGenerator.hh>


int main( int argc, char **argv )
{
	std::istream *in = &std::cin;

	if (argc >= 2)
	{
		in = new std::ifstream(argv[1]);
	}

	beagle::Parser parser(in, &std::cout, argv[1]);
	if (argc == 2)
	{
		// parse the source code
		beagle::Node *root = parser.parse();
		if (root == NULL)
		{
			std::cout << "Where's the root?" << std::endl;
			return 1;
		}
		// print the AST
		root->print(std::cout, &parser);
		// generate the C source code and write it into the output file
		/*beagle::CodeGenerator codegen(*root, 5);
		codegen.visit();
		std::ofstream out("output.c");
		out << codegen.getStream().str();
		out.close();*/
	}
	else
	{
		parser.tokens();
	}

	if (in != std::cin)
	{
		dynamic_cast<std::ifstream*>(in)->close();
		delete in;
	}
}
