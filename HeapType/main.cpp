#include <iostream>
#include "pqtype.cpp"

using namespace std;

int main()
{
    PQType<int> pq(10);

    if(pq.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    cout<<endl;

    int p;
    cout<<"Enter 10 items: "<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>p;
        pq.Enqueue(p);
    }
    cout<<endl;

    if(pq.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    cout<<endl;


    pq.PrintQueue();

    int q;
    pq.Dequeue(q);
    cout<< q<<endl;

    pq.Dequeue(q);
    cout<<q <<endl;
    cout<< endl;


    pq.PrintQueue();
    cout<< endl;

    pq.Dequeue(q);
    pq.Dequeue(q);
    pq.Dequeue(q);

    pq.PrintQueue();















    return 0;
}
