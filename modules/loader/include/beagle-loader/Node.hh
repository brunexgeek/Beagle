#ifndef BEAGLE_NODE_HH
#define BEAGLE_NODE_HH


#include <vector>
#include <string>
#include <iostream>
#include <stdint.h>


namespace beagle {
namespace compiler {


class Node
{
    public:
        std::string text;
        int type;
        int counter;
        uint32_t line;
        uint32_t column;
        Node *parent;

        Node(
            int type,
            const char *text = NULL);
        /*Node(
            int type,
            const char *value,
            Node *parent,
            int childNo,
            ... );*/

        Node(
            const Node &obj );

        virtual ~Node();

        void setChild(
            int index,
            Node &value );

        void removeChild(
            int index = -1 );

        void addChild(
            Node &value,
            int position = -1 );

        Node &addChild(
            int type,
            const char *text );

		int getChildCount() const;

		Node &operator[](
            int index );

        const Node &operator[](
            int index ) const;

        void print(
            std::ostream &out,
            const char *(getTokenName)(int) = NULL,
            int level = 0,
            bool recursive = true );

        bool hasChild(
            int modifier );

		operator std::string();

    private:
        std::vector<Node*> children;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_NODE_HH
