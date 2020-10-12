#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

const int MAX_ITEMS = 5;

template <class ItemType>
class Point
{
public :
    Point();
    void Print();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);

private:
    int x, y;
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#endif
