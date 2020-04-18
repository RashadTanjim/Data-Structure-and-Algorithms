#ifndef STACKTYPE_H
#define STACKTYPE_H

class FullStack {};
class EmptyStack {};

template<class ItemType>
class stacktype
{
    struct NodeType
    {
        ItemType info;
        NodeType *next;

    };
public:
    stacktype();
    ~stacktype();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
    void ReplaceItem(int , int);


private:
    NodeType *topPtr;
};

#endif // STACKTYPE_H
