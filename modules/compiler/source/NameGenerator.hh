#ifndef BEAGLE_NAMEGENERATOR_HH
#define BEAGLE_NAMEGENERATOR_HH


#include <map>
#include <string>
#include <iostream>
#include <beagle-loader/Node.hh>


namespace beagle {
namespace compiler {


class NameGenerator
{
    public:
        static const std::string DYNAMIC_TYPE_PREFIX;
        static const std::string STATIC_TYPE_PREFIX;
        static const std::string OBJECT_REFERENCE;

        NameGenerator();
        ~NameGenerator();


        /**
         * Write the native name from the given node.
         *
         * This function will return a valid native name from the text of the given node.
         * Every occurrence of dot will be replace by underlines.
         *
         * Accepted node are: TOK_CLASS, TOK_INTERFACE, TOK_NAME and TOK_QNAME.
         */
		void getNativeName(
			std::stringstream &ss,
			Node &ident );

        /**
         * Returns a string containing the native name from the given node.
         *
         * This function will return a valid native name from the text of the given node.
         * Every occurrence of dot will be replace by underlines.
         *
         * Accepted node are: TOK_CLASS, TOK_INTERFACE, TOK_NAME and TOK_QNAME.
         */
		std::string getNativeName(
			Node &ident );

        /**
         * Create a native type name from a class/interface or name node.
         *
         * The returned string have the following format:
         *
         *    struct <prefix>__<type name>
         *
         * Prefix is chosen between DYNAMIC_TYPE_PREFIX and STATIC_TYPE_PREFIX given the value
         * for the argument 'isStatic'.
         *
         * Accepted node are: TOK_CLASS, TOK_INTERFACE, TOK_NAME and TOK_QNAME.
         */
        std::string getNativeTypeName(
            Node &node,
            bool isStatic = false);

		std::string getMethodNativeName(
			Node &type,
			Node &method );

        /*std::string getTypeName(
            Node &package,
            Node &type );*/

		/*std::string getNativeTypeName(
			const std::string &prefix,
			Node &package,
			Node &type,
            char separator = '_');*/

        std::string getNativeType(
            Node &type );

        std::string getNativeType(
            int type );

};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_NAMEGENERATOR_HH
