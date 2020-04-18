#include "StackType.cpp"
#include <iostream>

using namespace std;

int sumOdd(StackType<int> s)
{
    int sum = 0;
    for(int i = 0; i<MAX_ITEMS; i++)
    {
        if(s.Top()%2 != 0)
        {
            sum = sum + s.Top();
        }
        s.Pop();
    }
    cout<<"Sum of odd number is: " << sum <<endl;
};

int main()
{
    StackType<int>s;
    StackType<int>sbc;
    if(s.IsEmpty())
        cout<< "The Stack is Empty" <<endl;
    else
        cout<<" The Stack is Not Empty" <<endl;

    cout << "Input 5 Values: "<<endl;

    int x;
    for(int i = 0; i<MAX_ITEMS-1; i++)
    {
        cin>>x;
        s.Push(x);
    }


    if(s.IsEmpty())
        cout<< "The Stack is Empty" <<endl;
    else
        cout<<" The Stack is Not Empty" <<endl;

    if(s.IsFull())
        cout<< "The Stack is Full" <<endl;
    else
        cout<<" The Stack is Not Full" <<endl;


    StackType<int>tempStack;
    int a;
    while(!s.IsEmpty())
    {
        a = s.Top();
        cout<< a<< " ";
        tempStack.Push(a);
        s.Pop();
    }
    while(!tempStack.IsEmpty())
    {
        s.Push(tempStack.Top());
        tempStack.Pop();

    }

    cout << endl;
    int z;
    cin>>z;
    s.Push(z);


    int b;
    while(!s.IsEmpty())
    {
        b = s.Top();
        cout<< b<< " ";
        tempStack.Push(b);
        s.Pop();
    }
    while(!tempStack.IsEmpty())
    {
        s.Push(tempStack.Top());
        tempStack.Pop();

    }
    cout<< endl;

    if(s.IsFull())
        cout<< "The Stack is Full" <<endl;
    else
        cout<<" The Stack is Not Full" <<endl;

    s.Pop();
    s.Pop();
    s.Pop();

    cout<< "The Top Item Is: "<< s.Top()<< endl;



    int xc;
    for(int i = 0; i<MAX_ITEMS; i++)
    {
        cin>>xc;
        sbc.Push(xc);
    }

    sumOdd(sbc);


    return 0;
}
