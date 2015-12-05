#ifndef BEAGLE_PARSER_HH
#define BEAGLE_PARSER_HH


#include <iostream>


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

			bool readFile( );

            Node *expandFields( Node *root );

            Node *expandVariable( Node *varDecl );
	};

}; // namespace beagle



#endif // BEAGLE_PARSER_HH
