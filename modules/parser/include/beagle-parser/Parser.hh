#ifndef BEAGLE_PARSER_HH
#define BEAGLE_PARSER_HH


#include <iostream>
#include <beagle-parser/SymbolTable.hh>


namespace beagle
{


    class Node;


	class Parser
	{
		public:
			Parser(
				std::istream* in = NULL,
				std::ostream* out = NULL,
                const char *fileName = NULL );

			virtual ~Parser();

			static const char *name( int tok );

			Node *parse();

            void tokens();

		private:
			std::istream *in;
			std::ostream *out;
			void* scanner;
			void* buffer;
            const char *fileName;

			void readFile( );

            void expandFields( Node &root );

            void expandVariable( Node &varDecl );

            void expandNames(
                Node &root,
                SymbolTable &symbols );
	};

}; // namespace beagle



#endif // BEAGLE_PARSER_HH
