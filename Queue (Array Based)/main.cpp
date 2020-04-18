#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> a(5);
    QueType<int> t(5);

    if(a.IsEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }
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
    cout<<endl;
    while(!t.IsEmpty())
    {
        t.Dequeue(p);
        a.Enqueue(p);

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

    cout<<"Enqueue another item: "<<endl;
    try
    {
        cin>>p;
        a.Enqueue(p);
    }
    catch(...)
    {
        cout<<"Queue overflow"<<endl;
    }
    cout<<endl;
    cout<<"Dequeuing two items: "<<endl;
    a.Dequeue(p);
    a.Dequeue(p);

    while(!a.IsEmpty())
    {
        a.Dequeue(p);
        t.Enqueue(p);
        cout<<p<<" ";
    }
    cout<<endl;
    while(!t.IsEmpty())
    {
        t.Dequeue(p);
        a.Enqueue(p);

    }


    cout<<"Dequeuing three items: "<<endl;
    a.Dequeue(p);
    a.Dequeue(p);
    a.Dequeue(p);
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

    return 0;
}
