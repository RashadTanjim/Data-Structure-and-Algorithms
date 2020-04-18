#ifndef INFIXTOPOSTFIX_H
#define INFIXTOPOSTFIX_H

const int MAX_ITEMS = 5;

class FullStack{};
class EmptyStack{};

template<class ItemType>
class InfixToPostfix
{
    public:
        InfixToPostfix();
        bool IsEmpty();
        bool IsFull();
        void push(ItemType);
        void pop();
        ItemType Top();
         int top;


    private:

        ItemType items[MAX_ITEMS];
};

#endif // STACKTYPE_H
