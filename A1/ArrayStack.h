#ifndef ARRAYSTACK_H_INCLUDED
#define ARRAYSTACK_H_INCLUDED

class IsFull{
    IsFull();
};
class IsEmpty{
    IsEmpty();
};

template <class ItemType>
class ArrayStack
{
    public:
        ArrayStack();
        ~ArrayStack();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        int getTop();
    private:
        ItemType stack[5];
        int top;
};

#endif // ARRAYSTACK_H_INCLUDED
