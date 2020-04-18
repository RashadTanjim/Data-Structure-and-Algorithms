
#include "stacktype.cpp"
#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    stacktype<int>s;
    stacktype<int>tempstack;
    stacktype<int>tempstack2;


    if(s.IsEmpty())
        cout<< "Stack Is Empty!" <<endl;
    else
        cout << "Stack Is not Empty!"<<endl;

    int x;
    cout<< "Enter 4 Items: " <<endl;
    for(int i = 0; i<4; i++)
    {
        cin >>x;
        s.Push(x);
        count++;
    }

    if(s.IsEmpty())
        cout<< "Stack Is Empty!" <<endl;
    else
        cout << "Stack Is not Empty!"<<endl;


    if(s.IsFull())
        cout<< "Stack Is Full!" <<endl;
    else
        cout << "Stack Is not Full!"<<endl;

    cout<<endl;

    int a;
    while(!s.IsEmpty())
    {
        a = s.Top();
        cout<< a<< " ";
        tempstack.Push(a);
        s.Pop();
    }
    while(!tempstack.IsEmpty())
    {
        s.Push(tempstack.Top());
        tempstack.Pop();

    }

    cout << endl;
    int z;
    cin>>z;
    s.Push(z);
    cout<<endl;


    int b;
    while(!s.IsEmpty())
    {
        b = s.Top();
        cout<< b<< " ";
        tempstack.Push(b);
        s.Pop();
    }
    while(!tempstack.IsEmpty())
    {
        s.Push(tempstack.Top());
        tempstack.Pop();

    }
    cout<<endl;


    if(s.IsFull())
        cout<< "Stack Is Full!" <<endl;
    else
        cout << "Stack Is not Full!"<<endl;


    s.Pop();
    s.Pop();

    cout<<"Top Item is: " << s.Top()<< endl;
    cout<< endl;

    int old, newI;
    cout<< "Enter the old item: " <<endl;
    cin >> old;
    cout<< "Enter the new item: " <<endl;
    cin >> newI;

    s.ReplaceItem(old, newI);



    int ab;
    while(!s.IsEmpty())
    {
        ab = s.Top();
        tempstack2.Push(ab);
        s.Pop();
        cout<< ab<< " ";
    }
    while(!tempstack2.IsEmpty())
    {
        s.Push(tempstack2.Top());
        tempstack2.Pop();

    }



    return 0;
}
