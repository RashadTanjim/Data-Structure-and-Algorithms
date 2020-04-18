#include "unsortedtype.cpp"
#include <iostream>

using namespace std;


int main()
{
    unsortedtype<int>list;
    list.addinfornt(1);
    list.addinfornt(2);
    list.addinfornt(3);
    list.addinback(4);
    list.addinback(5);
    list.addinback(6);
    list.printList();

    list.SearchFor(4);
    list.ResetList();
    list.getLength();
    //list.getNextItem();
    list.addinanyplace(3, 22);
    list.isFull();
    list.printList();
    //list.deleteinfornt();
    //list.deleteinback();
    list.deleteinanyplace(4,77);
    list.printList();
    return 0;
}
