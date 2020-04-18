#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

template <class ItemType>
class SortedType
{
    struct nodeType
    {
        ItemType info;
        nodeType *next;
    };


public :
    SortedType();
    ~SortedType();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void insertItem(ItemType);
    void deleteItem(ItemType);
    void retrieveItem(ItemType&, bool&);
    void resetList();
    void getNextItem(ItemType&);

private:
    nodeType *listData;
    int length;
    nodeType *currentPos;
};
#endif // SORTEDTYPE_H_INCLUDED
