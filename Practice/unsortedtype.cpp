#include "unsortedtype.h"
#include <iostream>
#include<cstddef>
using namespace std;

template<class T>
unsortedtype<T>::unsortedtype()
{
    length = 0;
    head = NULL;
    currentPos = NULL;
}

template<class T>
void unsortedtype<T>::addinfornt(T item)
{
    if(head == NULL)
    {
        head = new Node();
        head->data = item;
        head->next = NULL;
    }
    else
    {
        Node *temp = new Node();
        temp->data = item;
        temp->next = head;
        head = temp;
    }
    length++;
}
template<class T>
void unsortedtype<T>::addinback(T item)
{
    if(head == NULL)
        addinfornt(item);
    else
    {
        Node *temp = head;
        while(temp->next  != NULL)
        {
            temp = temp->next;
        }
        Node *temp2 = new Node();
        temp2->data = item;
        temp2->next = NULL;
        temp->next = temp2;
    }
    length++;
}

template<class T>
void unsortedtype<T>::addinanyplace(int position, T item)
{
    if(head == NULL)
        addinfornt(item);
    else if(position > getLength())
    {
        addinback(item);
    }
    Node *temp = head;
    int pos = 2;
    while(pos < position)
    {
        temp = temp->next;
        pos++;
    }
    Node *temp2 = new Node();
    temp2->data = item;
    temp2->next = temp->next;
    temp->next = temp2;
    length++;
}

template<class T>
int unsortedtype<T>::getLength()
{
    return length;
}

template<class T>
bool unsortedtype<T>::isFull()
{
    Node *temp;
    try
    {
        temp = new Node();
        delete temp;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
template<class T>
void unsortedtype<T>::printList()
{
    if(getLength()== 0)
    {
        cout<< "There are no data in the list" <<endl;
        return ;
    }
    cout<< "There are " << getLength() <<" items in the list & they are: ";
    Node *temp = head;
    while(temp->next != NULL)
    {
        cout<< temp->data<<", ";
        temp = temp->next;
    }
    cout<< temp->data <<endl;

}

template<class T>
void unsortedtype<T>::SearchFor(T item)
{
    Node *temp = head;
    bool flag = false;
    do
    {
        if(temp->data==item)
        {
            flag = true;
            cout<< "Item is Found!"<<endl;
            break;
        }
        temp = temp->next;
    }
    while(temp != NULL);
    if(flag ==false)
    {
        cout<< "Item is not Found!"<<endl;
    }
}

template<class T>
void unsortedtype<T>::getNextItem(T& item)
{
    if(currentPos == NULL)
    {
        currentPos = head;
    }
    else
    {
        currentPos= currentPos->next;
    }
    item = currentPos->data;
}

template<class T>
void unsortedtype<T>::ResetList()
{
    currentPos = NULL;
}

template<class T>
void unsortedtype<T>::makeEmpty()
{
    Node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    length = 0;
}

template<class T>
void unsortedtype<T>::deleteinfornt()
{
    if(head == NULL)
    {
        cout<< "Nothing to delete." <<endl;
    }
    else
    {
        Node *temp = head->next;
        delete head;
        head = temp;
    }
    length--;
}

template<class T>
void unsortedtype<T>::deleteinback()
{
    if(head == NULL)
    {
        cout<< "Nothing to delete." <<endl;
    }
    else
    {
        Node *temp = head;
        Node *temp2;
        if(temp->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            do
            {
                if(temp->next->next == NULL)
                {
                    delete temp->next->next;
                    temp->next = NULL;
                    break;
                }
                temp = temp->next;
            }
            while(temp->next != NULL);
        }
    }
    length--;
}

template<class T>
void unsortedtype<T>::deleteinanyplace(int position,T item)
{
    Node *temp = head;
    int p = 0;
    Node *temp2;
    if(head== NULL)
    {
        cout<< "Nothing to delete."<<endl;
        return;
    }
    else if(position >getLength())
    {
        cout<<"Invalid position!"<<endl;
        return;
    }
    else
    {
        do
        {
            if(position == 1)
            {
                deleteinfornt();
                break;
            }
            p++;
            if(p==position-1)
            {
                temp2 = temp->next->next;
                delete temp->next;
                temp->next = temp2;
                break;
            }
            temp = temp->next;
        }
        while(p!=position);

    }
}

template<class T>
unsortedtype<T>::~unsortedtype()
{
    makeEmpty();
}

//end of the program!






