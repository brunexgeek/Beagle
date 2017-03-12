#include <beagle-compiler/Compiler.hh>
#include <beagle-compiler/Parser.hh>
#include "CodeGenerator.hh"
#include "Semantic.hh"
#include <fstream>
#include <cstdlib>
#include <linux/limits.h>


/**
 * @brief Returns the token name given it constant.
 *
 * This function is defined in the Bison generated parser.
 */
const char *beagle_getTokenName( int tok );


namespace beagle {
namespace compiler {


using namespace beagle::loader;


CompilerListener::CompilerListener()
{
    // nothing to do
}


CompilerListener::~CompilerListener()
{
    // nothing to do
}


Compiler::Compiler(
    const CompilerListener &listener ) : listener(listener)
{
    // nothing to do
}


Compiler::~Compiler()
{
    // nothing to do
}


bool Compiler::addCompilationUnit(
    const string &fileName )
{
    char path[PATH_MAX+1];

    if (realpath(fileName.c_str(), path) == NULL) return false;

    map<string, CompilationUnit>::iterator it = units.find(path);
    if (it == units.end())
    {
        CompilationUnit unit;
        unit.fileName = fileName;
        units.insert( std::pair<string,CompilationUnit>(path, unit) );
    }

    return true;
}


const CompilerListener &Compiler::getListener() const
{
    return listener;
}


bool Compiler::compile()
{
    // perform syntax analisis
    if (!syntaxAnalisis()) return false;
    // perform type resolution
    if (!resolveTypes()) return false;
    // perform semantic analisis
    if (!semanticAnalisis()) return false;

    return generateCode();
}


bool Compiler::semanticAnalisis()
{
    bool success = true;

    // iterate the compilation unit list
    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        SemanticContext context(listener);
        Semantic semantic(context);
        semantic.visit( *(*it).second.root );
    }

    return success;
}


bool Compiler::generateCode()
{
    NameGenerator namegen;
    CodeGenerator codegen(namegen);
    codegen.writeHeader();

    // iterate the compilation unit list
    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
        codegen.visit( *(*it).second.root );
    codegen.writeFooter(units);

    this->code = codegen.getStream().str();

    return true;
}


void Compiler::expandTypeName(
    Node &package,
    Node &type )
{
    assert(type.type == NID_CLASS ||
        type.type == NID_INTERFACE);

    string name = package.text + '.' + type[2].text;
    type[2].text = name;
}


bool Compiler::printTokens()
{
    Parser parser;
    bool hasError = false;

    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        // parse the current file
        ifstream in((*it).first.c_str());
        parser.tokens(in, (*it).first);
    }
}


bool Compiler::syntaxAnalisis()
{
    Parser parser;
    bool hasError = false;

    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        // parse the current file
        ifstream in((*it).first.c_str());
        (*it).second.root = parser.process(in, (*it).first);

        if ((*it).second.root != NULL)
        {
            // expand the type name to a fully qualified form
            expandTypeName( (*(*it).second.root)[0],
                (*(*it).second.root)[2] );
            // extract import names
            SymbolTable *imports = new SymbolTable();
            imports->extractImports( *(*it).second.root );
            (*it).second.imports = imports;
            // add the new unit as recognized type
            symbols.addType( *(*it).second.root );
        }
        else
            hasError = true;
    }

    return !hasError;
}


Node *Compiler::getTree(
    const string &fileName )
{
    map<string, CompilationUnit>::iterator it = units.find(fileName);
    if (it == units.end()) return NULL;
    return (*it).second.root;
}


Node *Compiler::getTree(
    size_t index )
{
    if (index >= units.size()) return NULL;
    map<string, CompilationUnit>::iterator it = units.begin();
    while (index-- > 0) ++it;
    return (*it).second.root;
}


bool Compiler::resolveTypes()
{
    bool success = true;

    // iterate the compilation unit list resolving imports
    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        if ((*it).second.root == NULL) continue;
        (*it).second.imports->resolveImports(symbols);
    }

    // iterate the compilation unit list resolving type references
    it = units.begin();
    for (; it != units.end(); ++it)
    {
        if ((*it).second.root == NULL) continue;
        success |= resolveTypes((*it).second.fileName, *(*it).second.root, *(*it).second.imports);
    }

    return success;
}


bool Compiler::resolveTypes(
    const string &fileName,
    Node &root,
    SymbolTable &imports )
{
    const string *resolved = NULL;
    bool success = true;

    // iterate the children recursively resolving types
    for (int i = 0, n = root.getChildCount(); i < n; ++i)
    {
        Node &item = root[i];

        switch (item.type)
        {
            case NID_TYPE_CLASS:
                if (item[0].type == NID_NAME)
                {
                    resolved = imports.resolveType(item[0].text);
                    if (resolved != NULL)
                        item[0].text = *resolved;
                    else
                    {
                        listener.onError(fileName, item[0].line, item[0].column, "Unresolved type " + item[0].text);
                        success = false;
                    }
                }
                break;
            default:
                if (item.getChildCount() > 0)
                    success |= resolveTypes(fileName, item, imports);
        }
    }

    return success;
}


const string &Compiler::getCode() const
{
    return code;
}


Node *Compiler::makeTree(
	const Type &type )
{
	// create the compilation unit
	Node *root = new Node(NID_UNIT, NULL);
	root->addChild(NID_QNAME, type.info->packageName);
	root->addChild(NID_NULL, NULL);
	Node &clazz = root->addChild(NID_CLASS, NULL);
	// create the type
	clazz.addChild(NID_NULL, NULL);
	clazz.addChild(NID_NULL, NULL);
	clazz.addChild(NID_QNAME, type.info->qualifiedName);
	clazz.addChild(NID_NULL, NULL);
	clazz.addChild(NID_NULL, NULL);
	Node &body = clazz.addChild(NID_BODY, NULL);

	// create the fields
	map<string, const struct __field_metainfo*>::const_iterator fieldCur = type.fields.begin();
	map<string, const struct __field_metainfo*>::const_iterator fieldEnd = type.fields.end();
	for (; fieldCur != fieldEnd; ++fieldCur)
	{
		Node &field = body.addChild(NID_FIELD, NULL);
		field.addChild(NID_NULL, NULL);  // annotations
		field.addChild(NID_NULL, NULL);  // modifiers
		field.addChild(NID_NULL, NULL);  // type
		field.addChild(NID_NAME, (*fieldCur).second->name);  // name
		field.addChild(NID_NULL, NULL);  // initializer
	}

	// create the methods
	map<string, const struct __method_metainfo*>::const_iterator methodCur = type.methods.begin();
	map<string, const struct __method_metainfo*>::const_iterator methodEnd = type.methods.end();
	for (; methodCur != methodEnd; ++methodCur)
	{
		Node &method = body.addChild(NID_METHOD, NULL);
		method.addChild(NID_NULL, NULL);  // annotations
		method.addChild(NID_NULL, NULL);  // modifiers
		method.addChild(NID_NULL, NULL);  // type
		method.addChild(NID_NAME, (*methodCur).second->name);  // name
		method.addChild(NID_NULL, NULL);  // parameters
		method.addChild(NID_NULL, NULL);  // ?
		method.addChild(NID_NULL, NULL);  // block
	}

	root->print(std::cout, Node::name);

	return root;
}


void Compiler::import(
	const Module &module )
{
	map<string, Type*>::const_iterator typeCur = module.types.begin();
	map<string, Type*>::const_iterator typeEnd = module.types.end();
	for (; typeCur != typeEnd; ++typeCur)
	{
		makeTree(*(*typeCur).second);
	}

}


void Compiler::import(
	const ModuleLoader &loader )
{
	map<string, Module*>::const_iterator moduleCur = loader.modules.begin();
	map<string, Module*>::const_iterator moduleEnd = loader.modules.end();
	for (; moduleCur != moduleEnd; ++moduleCur)
	{
		import(*(*moduleCur).second);
	}
}


} // namespace compiler
} // namespace beagle
