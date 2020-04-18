#include "dynamicarray.h"

template <class ItemType>
DynamicArray<ItemType>::DynamicArray(int size)
{
    data = new ItemType[size];
}
template <class ItemType>
void DynamicArray<ItemType>::insertItem(int index, ItemType item)
{
    data[index]= item;
}
template <class ItemType>
ItemType DynamicArray<ItemType>::getItem(int index)
{
    return data[index];
}
template <class ItemType>
DynamicArray<ItemType>::~DynamicArray()
{
    delete[] data;
}
