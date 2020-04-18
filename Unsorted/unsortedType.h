#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

template<class ItemType>
class unsortedType
{
struct NodeType
{
    ItemType info;
    NodeType *next;
};
    public:
        unsortedType();
        ~unsortedType();
        bool isFull();
        int LengthIs();
        void MakeEmpty();
        void RetrieveItem(ItemType&, bool&);
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void ResetList();
        void GetNextItem(ItemType&);

    private:
        NodeType *listData;
        int length;
        NodeType *currentPos;
};

#endif // UNSORTEDTYPE_H
