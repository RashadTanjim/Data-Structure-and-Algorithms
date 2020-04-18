#include "unsortedType.h"
#include <iostream>
using namespace std;

template<class ItemType>
unsortedType<ItemType>::unsortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;

}
template <class ItemType>
int unsortedType<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
bool unsortedType<ItemType>::isFull()
{
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class ItemType>
void unsortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType* location;
    location = new NodeType;
    location ->info= item;
    location-> next= listData;
    listData= location;
    length++;
}

template <class ItemType>
void unsortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation;
    if(item == listData->info)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else{
        while(!(item==(location->next)->info))
            location = location->next;
        tempLocation = location->next;
        location ->next = (location ->next)->next;
    }
    delete tempLocation;
    length--;
}

template <class ItemType>
void unsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    NodeType* location = listData;
    bool moreToSearch = (listData!= NULL);
    found = false;
    while (moreToSearch && !found)
    {
        if(item== location-> info)
            found = true;


    else{
        location = location-> next;
        moreToSearch= (location !=NULL);
    }
}
}

template <class ItemType>
void unsortedType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while(listData !=NULL)
    {
        tempPtr = listData;
        listData = listData-> next;
        delete tempPtr;
    }
    length = 0;

}
template <class ItemType>
unsortedType<ItemType>::~unsortedType()
{
    MakeEmpty();
}

template <class ItemType>
void unsortedType<ItemType>::ResetList()
{
    currentPos = NULL;
}
template <class ItemType>
void unsortedType<ItemType>::GetNextItem(ItemType& item)
{
    if(currentPos == NULL)
        currentPos= listData;
    else
        currentPos = currentPos->next;
    item = currentPos-> info;
}


