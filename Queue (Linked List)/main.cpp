#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> a;
    QueType<int> t;


    if(a.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    cout<<endl;

    int p;
    cout<<"Enter four items: "<<endl;
    for(int i=0; i<4; i++)
    {
        cin>>p;
        a.Enqueue(p);
    }
    cout<<endl;

    if(a.IsEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }
    cout<<endl;

    if(a.IsFull())
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        cout<<"Queue is not Full"<<endl;
    }
    cout<<endl;

    cout<<"Enter another item: "<<endl;
    cin>>p;
    a.Enqueue(p);
    cout<<endl;

    cout<<"The values in the queue are: "<<endl;
    while(!a.IsEmpty())
    {
        a.Dequeue(p);
        t.Enqueue(p);
        cout<<p<<" ";
    }
    while(!t.IsEmpty())
    {
        t.Dequeue(p);
        a.Enqueue(p);
    }
    cout<<endl;

    cout<<"Enter another item: "<<endl;
    cin>>p;
    a.Enqueue(p);
    cout<<endl;



    cout<<"The length of the queue is: "<<a.length()<<endl;

    cout<<endl;


    a.Dequeue(p);
    a.Dequeue(p);
    a.Dequeue(p);

    cout<<"After dequeuing, the values in the queue are: "<<endl;
    while(!a.IsEmpty())
    {
        a.Dequeue(p);
        t.Enqueue(p);
        cout<<p<<" ";
    }
    while(!t.IsEmpty())
    {
        t.Dequeue(p);
        a.Enqueue(p);

    }
    cout<<endl;

    cout<<"Dequeuing three more items: "<<endl;
    a.Dequeue(p);
    a.Dequeue(p);
    a.Dequeue(p);
    cout<<endl;
    while(!a.IsEmpty())
    {
        a.Dequeue(p);
        t.Enqueue(p);
        cout<<p<<" ";
    }
    while(!t.IsEmpty())
    {
        t.Dequeue(p);
        a.Enqueue(p);

    }
    cout<<endl;

    if(a.IsEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }
    cout<<endl;

    try
    {
        a.Dequeue(p);
    }
    catch(...)
    {
        cout<<"Queue underflow"<<endl;
    }
    cout<<endl;



    QueType<char> c;
    QueType<char> e;
    char d;
    cout<<"Enter 5 characters: "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>d;
        c.Enqueue(d);
    }
    cout<<endl;
    cout<<"The characters in the queue are: "<<endl;
    while(!c.IsEmpty())
    {
        c.Dequeue(d);
        e.Enqueue(d);
        cout<<d<<" ";
    }
    while(!e.IsEmpty())
    {
        e.Dequeue(d);
        c.Enqueue(d);

    }
    cout<<endl;

    cout<<"The length of the queue is: "<<c.length()<<endl;

    return 0;
}
