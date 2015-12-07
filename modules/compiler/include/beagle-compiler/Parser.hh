#ifndef BEAGLE_PARSER_HH
#define BEAGLE_PARSER_HH


#include <iostream>
#include <beagle-compiler/Node.hh>


namespace beagle {
namespace compiler {


	class Parser
	{
		public:
			Parser();

			virtual ~Parser();

			static const char *name( int tok );

			Node *process(
                std::istream &in,
                const std::string &fileName  );

		private:
			void *getScanString(
                void *scanner,
                std::istream &in );

            void expandFields( Node &root );

            void expandVariable( Node &varDecl );
	};


} // namespace compiler
} // namespace beagle



#endif // BEAGLE_PARSER_HH