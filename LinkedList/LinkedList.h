#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class ItemType>
class LinkedList{
    struct Node{
    int data;
    Node *next;
};
public:
    LinkedList();
    void InsertAtFront(ItemType);
    void InsertAtBack(ItemType);
    void InsertAtAnyplace(int, ItemType);
    void DeleteFromFront();
    void DeleteFromBack();
    void DeleteFromAnyplace(int);
    void SearchItem(ItemType);
    void GetLength();
    void PrintList();
private:
    Node *head;
    int length;

};

#endif // LINKEDLIST_Hzx
