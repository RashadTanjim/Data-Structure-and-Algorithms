#include "point.h"

template <class ItemType>
Point<ItemType>::Point()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void Point<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool Point<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType>
int Point<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
void Point<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void Point<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info [currentPos];
}
template <class ItemType>
void Point<ItemType>::InsertItem(ItemType item)
{
    int location = 0;
    bool moreToSearch = (location < length);

    while (moreToSearch)
    {
        if(item > info[location])
        {
            location++;
            moreToSearch = (location < length);
        }
        else if(item < info[location])
            moreToSearch = false;
    }
    for (int index = length; index > location; index--)
        info[index] = info[index - 1];
    info[location] = item;
    length++;
}
template <class ItemType>
void Point<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;

    while (item != info[location])
        location++;
    for (int index = location + 1; index < length; index++)
        info[index - 1] = info[index];
    length--;
}
template <class ItemType>
void Point<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    int midPoint, first = 0, last = length - 1;
    bool moreToSearch = (first <= last);
    found = false;
    while (moreToSearch && !found)
    {
        midPoint = (first + last) / 2;
        if(item < info[midPoint])
        {
            last = midPoint - 1;
            moreToSearch = (first <= last);
        }
        else if(item > info[midPoint])
        {
            first = midPoint + 1;
            moreToSearch = (first <= last);
        }
        else
        {
            found = true;
            item = info[midPoint];
        }
    }
}

