#include "InfixToPostfix.h"
#include<iostream>
using namespace std;


template<class ItemType>
InfixToPostfix<ItemType>::InfixToPostfix()
{
    top = -1;
}

template<class ItemType>
bool InfixToPostfix<ItemType>::IsEmpty()
{
    return (top == -1);
}
template<class ItemType>
bool InfixToPostfix<ItemType>:: IsFull()
{
    return (top == MAX_ITEMS-1);
}
template<class ItemType>
void InfixToPostfix<ItemType>::push(ItemType newItem)
{
    if(IsFull()) throw FullStack();
    top++;
    items[top] = newItem;
}
template<class ItemType>
void InfixToPostfix<ItemType>::pop()
{
    if(IsEmpty()) throw EmptyStack();
    top--;
}
template<class ItemType>
ItemType InfixToPostfix<ItemType>::Top()
{
    if(IsEmpty()) throw EmptyStack();
        return items[top];
}

