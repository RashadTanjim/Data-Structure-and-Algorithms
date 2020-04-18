#include "LinkedList.h"
#include <iostream>
#include <cstddef>
using namespace std;

template<class ItemType>
LinkedList<ItemType>::LinkedList(){
    length = 0;
    head = NULL;
}

template <class ItemType>
void LinkedList<ItemType>::InsertAtFront(ItemType item){
    if(head == NULL){
        head = new Node;
        head->data = item;
        head->next = NULL;
    }else{
        Node *temp = new Node;
        temp->data = item;
        temp->next = head;
        head = temp;
    }
}
template <class ItemType>
void LinkedList<ItemType>::InsertAtBack(ItemType item){
    if(head == NULL){
        head = new Node;
        head->data = item;
        head->next = NULL;
    }else{
        Node *temp1, *temp2;
        temp1 = new Node;
        temp2 = head;
        temp1->data = item;
        temp1->next = NULL;

        do{
            if(temp2->next == NULL){
                temp2->next = temp1;
                break;
            }
            temp2 = temp2->next;
        }while(head->next != NULL);
    }
}
template <class ItemType>
void LinkedList<ItemType>::InsertAtAnyplace(int position, ItemType item){
    int p = 0;
    if(head == NULL && position == 1){
        head = new Node;
        head->data = item;
        head->next = NULL;
    }else{
        Node *temp1 = new Node;
        Node *temp2 = head;
        temp1->data = item;
        if(position == 1){
            temp1->next = head;
            head = temp1;
        }else{
            while(p != position){
                ++p;
                if(p == position-1){
                    temp1->next = temp2->next;
                    temp2->next = temp1;
                    break;
                }
                temp2 = temp2->next;
            }
        }
    }
}
template <class ItemType>
void LinkedList<ItemType>::DeleteFromFront(){
    if(head == NULL){
        cout << "Nothing to delete." << endl;
    }else{
        Node *temp = head->next;
        delete head;
        head = temp;
    }
}
template <class ItemType>
void LinkedList<ItemType>::DeleteFromBack(){
    if(head == NULL){
        cout << "Nothing to delete." << endl;
    }else{
        Node *temp1 = head;
        if(temp1->next == NULL){
            delete head;
            head = NULL;
        }else{
            do{
                if(temp1->next->next == NULL){
                    delete temp1->next->next;
                    temp1->next = NULL;
                    break;
                }
                temp1 = temp1->next;
            }while(temp1->next != NULL);
        }
    }
}
template <class ItemType>
void LinkedList<ItemType>::DeleteFromAnyplace(int position){
    int p = 0;
    if(head == NULL){
        cout << "Nothing to delete." << endl;
    }else{
        Node *temp1 = head;
        Node *temp2;
        if(temp1->next == NULL){
            if(position == 1){
                delete head;
                head = NULL;
            }else{
                cout << "Item don't exist." << endl;
            }
        }else{
            do{
                if(position == 1){
                DeleteFromFront();
                break;
                }
                p++;
                if(p==position-1){
                    temp2 = temp1->next->next;
                    delete temp1->next;
                    temp1->next = temp2;
                    break;
                }
                temp1 = temp1->next;
            }while(p!=position);
        }
    }
}
template <class ItemType>
void LinkedList<ItemType>::SearchItem(ItemType item){
    Node *temp = head;
    bool flag = false;
    do{
        if(temp->data == item){
            flag = true;
            cout << "Item found!!!" << endl;
            break;
        }
        temp = temp->next;
    }while(temp != NULL);
    if(flag == false){
        cout << "Item not found!!!" << endl;
    }
}
template <class ItemType>
void LinkedList<ItemType>::GetLength(){
    int len = 0;
    Node *temp = head;
    do{
        temp = temp->next;
        len++;
    }while(temp != NULL);
    cout << "Length of the list is " << len << endl;
}
template <class ItemType>
void LinkedList<ItemType>::PrintList(){
    Node *temp = head;
    do{
        if(head == NULL){
            cout << "Nothing to print." <<endl;
            break;
        }
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != NULL);
    cout << endl;
}
