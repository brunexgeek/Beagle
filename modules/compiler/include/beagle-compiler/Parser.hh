#ifndef BEAGLE_PARSER_HH
#define BEAGLE_PARSER_HH


#include <iostream>
#include <beagle-loader/Node.hh>


namespace beagle {
namespace compiler {

using namespace beagle::loader;


	class Parser
	{
		public:
			Parser();

			virtual ~Parser();

			Node *process(
                std::istream &in,
                const std::string &fileName  );

void tokens(
    std::istream &in,
    const std::string &fileName );

		private:
			void *getScanString(
                void *scanner,
                std::istream &in );

            void expandFields(
                Node &root );

            void expandVariables(
                Node &root );
	};


} // namespace compiler
} // namespace beagle



#endif // BEAGLE_PARSER_HH
