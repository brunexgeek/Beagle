#ifndef BEAGLE_SEMANTIC_HH
#define BEAGLE_SEMANTIC_HH


#include <stdint.h>
#include "TreeVisitor.hh"
#include <list>


namespace beagle {
namespace compiler {


class CompilerListener;


class SemanticItem
{
    public:
        Node *node;
        int scope;

        SemanticItem();
        ~SemanticItem();
};


class SemanticContext
{
    public:
        std::list<SemanticItem*> variables;
        int variableScope;
        const CompilerListener &listener;
        //std::list<SemanticItem> method;
        //int methodScope;

        SemanticContext(
            const CompilerListener &listener  );

        SemanticItem &pushVariable(
            Node &variable,
            int scope = -1 );
};


class Semantic : public TreeVisitor
{
	public:
		Semantic(
            SemanticContext &context );

		virtual ~Semantic();

        void visitField(
            Node &type,
            Node &field );

    protected:
        SemanticContext &context;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_SEMANTIC_HH
