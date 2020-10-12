#include "Point.h"
#include "Point.cpp"
#include <iostream>

using namespace std;


int main()
{
    Point<int> list;
    cout<< "The length is: "<<list.lengthIs() <<endl;

    cout<< "Enter 5 Values: "<<endl;
    int x;
    for(int i=0; i<5; i++)
    {
        cin>>x ;
        list.insertItem(x);
    }
    cout<< endl;

    int y;
    list.resetList();
    cout<< "Print all Item: " <<endl;

    for(int i=0; i<list.lengthIs(); i++)
    {
        list.getNextItem(y);
        cout<< y <<" ";
    }
    cout<< endl;
    cout<< endl;

    int b = 6;
    bool flag = true;
    list.retrieveItem(b, flag);
    if(flag == false)
    {
        cout<< "Item is not found!" <<endl;
    }
    else
    {
        cout<< "Item is Found!"<< endl;
    }

    cout<< endl;

    int b1 = 5;
    bool flag2 = true;
    list.retrieveItem(b1, flag2);
    if(flag2 == false)
    {
        cout<< "Item is not found!" <<endl;
    }
    else
    {
        cout<< "Item is Found!"<< endl;
    }

    cout<< endl;


    if(list.isFull()== true)
    if(list.isFull()== true)
    {
        cout<< "List is Full" <<endl;
    }
    else
    {
        cout<< "List is not Full" <<endl;
    }
    cout<< endl;


    list.deleteItem(1);


    int p;
    list.resetList();
    cout<< "Print all Item: " <<endl;

    for(int i=0; i<list.lengthIs(); i++)
    {
        list.getNextItem(p);
        cout<< p <<" ";
    }
    cout<< endl;



    if(list.isFull()== true)
    {
        cout<< "List is Full" <<endl;
    }
    else
    {
        cout<< "List is not Full" <<endl;
    }
    cout<< endl;

    cout<< "The length is: "<<list.lengthIs() <<endl;


    return 0;
}
