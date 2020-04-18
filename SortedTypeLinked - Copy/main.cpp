#include "SortedType.cpp"
#include <iostream>
#include<cstddef>

using namespace std;

int main()
{
    SortedType<int> list;
    cout<< "The length is: "<<list.LengthIs() <<endl;

    cout<< "Enter 5 Values: "<<endl;
    int x;
    for(int i=0; i<5; i++)
    {
        cin>>x ;
        list.InsertItem(x);
    }
    cout<< endl;

    int y;
    list.ResetList();
    cout<< "Print all Item: " <<endl;

    for(int i=0; i<list.LengthIs(); i++)
    {
        list.GetNextItem(y);
        cout<< y <<" ";
    }
    cout<< endl;
    cout<< endl;

    int b = 6;
    bool flag = true;
    list.RetrieveItem(b, flag);
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
    list.RetrieveItem(b1, flag2);
    if(flag2 == false)
    {
        cout<< "Item is not found!" <<endl;
    }
    else
    {
        cout<< "Item is Found!"<< endl;
    }

    cout<< endl;


    if(list.IsFull()== true)
    {
        cout<< "List is Full" <<endl;
    }
    else
    {
        cout<< "List is not Full" <<endl;
    }
    cout<< endl;


    list.DeleteItem(1);


    int p;
    list.ResetList();
    cout<< "Print all Item: " <<endl;

    for(int i=0; i<list.LengthIs(); i++)
    {
        list.GetNextItem(p);
        cout<< p <<" ";
    }
    cout<< endl;



    if(list.IsFull()== true)
    {
        cout<< "List is Full" <<endl;
    }
    else
    {
        cout<< "List is not Full" <<endl;
    }
    cout<< endl;

    cout<< "The length is: "<<list.LengthIs() <<endl;


    return 0;
}
