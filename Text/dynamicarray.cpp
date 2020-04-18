#include "dynamicarray.h"

DynamicArray::DynamicArray(int size)
{
    data = new int[size];

}
void DynamicArray::insertItem(int index, int item)
{
    data[index] = item;
}
int DynamicArray::getItem(int index)
{
    return data[index];
}
DynamicArray::~DynamicArray()
{
    delete[]data;
}
