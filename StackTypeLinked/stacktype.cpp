#include "stacktype.h"
#include<iostream>
using namespace std;

template<class ItemType>
stacktype<ItemType>::stacktype()
{
    topPtr = NULL;
}

template<class ItemType>
bool stacktype<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}

template<class ItemType>
ItemType stacktype<ItemType>::Top()
{
    if(IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}

template<class ItemType>
bool stacktype<ItemType>::IsFull()
{
    NodeType *location;
    try
    {
        location = new NodeType;
        delete location;
        return false;

    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template<class ItemType>
void stacktype<ItemType>::Push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
    else
    {
        NodeType *location;
        location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}

template<class ItemType>
void stacktype<ItemType>::Pop()
{
    if(IsEmpty())
        throw EmptyStack();
    else
    {
        NodeType *tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}
template<class ItemType>
void stacktype<ItemType>::ReplaceItem(int oldItem, int newItem)
{
    if(IsEmpty())
        throw EmptyStack();
    else
    {
        NodeType *location = topPtr;

        while(location != NULL)
        {
            if(location->info == oldItem)
            {
                location->info = newItem;
            }
            location = location->next;
        }
    }
}


template<class ItemType>
stacktype<ItemType>::~stacktype()
{
    NodeType *tempPtr;
    while(topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr= topPtr->next;
        delete tempPtr;
    }
}
