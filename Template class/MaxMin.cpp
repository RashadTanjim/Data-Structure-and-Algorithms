#include "MaxMin.h"

template <class ItemType>
MaxMin<ItemType>::MaxMin()
{
    maxElement = -1;
    minElement = -1;
}
template<class ItemType>
void MaxMin<ItemType>::initializeMaxMin(ItemType* numbers, int size)
{
    maxElement = numbers[0];
    minElement = numbers[0];
    for(int i= 1; i<size; i++)
    {
        if(numbers[i]<minElement)
            minElement = numbers[i];
        if(numbers[i]>maxElement)
            maxElement= numbers[i];
    }
}
template <class ItemType>
ItemType MaxMin<ItemType>::getMax()
{
    return maxElement;
}
template <class ItemType>
ItemType MaxMin<ItemType>::getMin()
{
    return minElement;
}

