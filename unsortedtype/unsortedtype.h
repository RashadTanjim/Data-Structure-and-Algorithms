#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

const int MAX_ITEMS = 5;
template<class ItemType>
class unsortedtype
{
    public:
        unsortedtype();
        void makeEmpty();
        bool isFull();
        int lengthIs();
        void InsertItem(ItemType);
        void deleteItem(ItemType);
        void retrieveItem(ItemType&, bool& );
        void resetList();
        void getNextItem(ItemType&);


    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;

};

#endif // UNSORTEDTYPE_H
