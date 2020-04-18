#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include <iostream>
class FullQueue{};
class EmptyQueue{};

template<class ItemType>
class QueType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
    public:
        QueType();
        ~QueType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void Enqueue(ItemType);
        void Dequeue(ItemType&);
        int length();

    private:
        NodeType *front, *rear;

};


#endif // QUETYPE_H_INCLUDED
