#include"LinkedList.h"
#include <iostream>
#include<cstddef>
using namespace std;

template<class ItemType>
LinkedList<ItemType>::LinkedList()
{
    length = 0;
    head = NULL;
}

template<class ItemType>
void LinkedList<ItemType>::addItemAtFirst(ItemType value)
{
    if(head == NULL)
    {
        head = new Node();
        head->data = value;
        head->next = NULL;
    }
    else
    {
        Node *temp = new Node();
        temp->data = value;
        temp->next = head;
        head = temp;

    }
    length++;
}
template<class ItemType>
void LinkedList<ItemType>::printList()
{
    if(getLength() == 0)
    {
        cout << "There are no data in the list" << endl;
        return;
    }
    cout <<"There are " << (getLength()+1) <<" items in the list and they are ";
    Node *temp = head;
    while(temp->next!= NULL)
    {
        cout << temp->data << " ,";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

template<class ItemType>
int LinkedList<ItemType>::getLength()
{
    return length;
}
template<class ItemType>
void LinkedList<ItemType>::addItemAtLast(ItemType value)
{
    if(head == NULL)
        addItemAtFirst(value);
    else
    {
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *temp2 = new Node();
        temp2->data =value;
        temp2->next = NULL;
        temp->next = temp2;
    }
}
