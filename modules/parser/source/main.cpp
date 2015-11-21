#include <iostream>
#include "parser.hh"



int main( int argc, char **argv )
{
	std::istream *in = &std::cin;

	if (argc == 2)
	{
		in = new std::ifstream(argv[1]);
	}

	beagle::Parser parser(in, &std::cout);
	parser.parse();
	if (in != std::cin)
	{
		dynamic_cast<std::ifstream*>(in)->close();
		delete in;
	}
}
