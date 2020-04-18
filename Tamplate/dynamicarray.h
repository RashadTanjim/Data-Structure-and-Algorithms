#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED

template < class ItemType>
class DynamicArray
{

private:
    ItemType* data;
public:
    DynamicArray(int);
    ~DynamicArray();
    void insertItem(int, ItemType);
    ItemType getItem(int);
};

#endif // DYNAMICARRAY_H_INCLUDED
