#include "Semantic.hh"
#include <iostream>
#include "beagle.y.hh"


namespace beagle {
namespace compiler {


using namespace std;


SemanticItem::SemanticItem() : node(NULL), scope(0)
{
    // nothing to do
}


SemanticItem::~SemanticItem()
{
    // nothing to do
}


SemanticContext::SemanticContext(
    const CompilerListener &listener  ) : variableScope(0), listener(listener)
{

}


SemanticItem &SemanticContext::pushVariable(
    Node &variable,
    int scope )
{
    if (scope < 0)
    {
        scope = 0;
        if (variables.size() > 0)
            scope = (*variables.begin())->scope;
    }

    SemanticItem *item = new SemanticItem();
    item->node = &variable;
    item->scope = scope;
    variables.push_front(item);

    return *item;
}


std::ostream& operator<<(std::ostream& os, const SemanticItem& obj)
{
    Node &variable = *obj.node;
    Node &type = *variable.parent->parent;

    assert(type.type == TOK_CLASS ||
        type.type == TOK_INTERFACE);

    if (variable.type == TOK_FIELD)
        os << type[2].text << '.' << variable[3].text << endl;
    return os;
}


Semantic::Semantic(
    SemanticContext &context ) : context(context)
{

}


Semantic::~Semantic()
{

}


void Semantic::visitField(
    Node &type,
    Node &field )
{
    SemanticItem &item = context.pushVariable(field);
    cout << "Found field " << item << endl;
}


} // namespace compiler
} // namespace beagle
