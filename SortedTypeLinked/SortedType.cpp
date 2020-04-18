#include "SortedType.h"
#include<iostream>
using namespace std;

template <class ItemType>
SortedType<ItemType>::SortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}
template <class ItemType>
void SortedType<ItemType>::makeEmpty()
{
    nodeType *tempPtr;
    while(listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}
template <class ItemType>
bool SortedType<ItemType>::isFull()
{
    nodeType *location;
    try
    {
        location = new nodeType;
        delete location;
        return false;
    }catch(bad_alloc& exception)
    {
        return false;
    }
}
template <class ItemType>
int SortedType<ItemType>::lengthIs()
{
    return length;
}
template <class ItemType>
void SortedType<ItemType>::resetList()
{
    currentPos = NULL;
}
template <class ItemType>
void
SortedType<ItemType>::getNextItem(ItemType&
                                  item)
{
    if(currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}
template <class ItemType>
void SortedType<ItemType>::insertItem(ItemType
                                      item)
{
    nodeType *newNode;
    nodeType * predLoc;
    nodeType *location;
    bool moreToSearch;
    location = listData;
    predLoc = NULL;

    moreToSearch = (location !=NULL);
    while (moreToSearch)
    {
        if(location->info <item)
        {
            predLoc= location;
            location = location->next;
            moreToSearch =(location != NULL);
        }
        else moreToSearch = false;
    }
    newNode = new nodeType;
    newNode->info = item;
    if(predLoc == NULL)
    {
        newNode->next= listData;
        listData= newNode;
    }else
        {
            newNode->next= location;
            predLoc->next= newNode;
        }
    length++;
}
template <class ItemType>
void SortedType<ItemType>::deleteItem(ItemType
                                      item)
{
    nodeType *location = listData;
    nodeType *tempLocation;
    if(item== listData->info)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while(!(item == (location->next)->info))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}
template <class ItemType>
void SortedType<ItemType>::retrieveItem(ItemType&
                                        item, bool& found)
{
    nodeType *location = listData;
    bool moreToSearch =(location != NULL);
    found = false;
    while(moreToSearch && !found)
    {
        if (item == location->info)
            found = true;
        else if (item > location->info)
        {
            location = location->next;
            moreToSearch = (location !=NULL);
        }else
            moreToSearch = false;
    }
}

template<class ItemType>
SortedType<ItemType>::~SortedType()
{
    makeEmpty();
}
