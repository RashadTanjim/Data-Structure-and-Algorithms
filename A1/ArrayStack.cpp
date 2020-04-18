#include "ArrayStack.h"

template <class ItemType>
ArrayStack<ItemType>::ArrayStack()
{
    top = -1;
}
template <class ItemType>
void ArrayStack<ItemType>::Push(ItemType item){
    stack[++top] = item;
}
template <class ItemType>
void ArrayStack<ItemType>::Pop(){
    top--;
}
template <class ItemType>
ItemType ArrayStack<ItemType>::Top(){
    return stack[top];
}
template <class ItemType>
int ArrayStack<ItemType>::getTop(){
    return top;
}
template <class ItemType>
ArrayStack<ItemType>::~ArrayStack(){
    top = -1;
}
