
#include "stacktype.cpp"
#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    stacktype<int>s1;
    stacktype<int>s2;
    stacktype<int>s3;

    int x;
    cout<< "Enter 2 values of 1st array" <<endl;
    for(int i = 0; i<2; i++) //initializing array size of 2
    {
        cin>>x; // filling those with user input
        s1.Push(x); //pushing to stack
    }
    cout<< "Enter 3 values of 2nd array" <<endl;
    for(int i = 0; i<3; i++) //initializing array size of 3
    {
        cin>>x; // filling those with user input
        s2.Push(x);
    }
    cout<< "Enter 4 values of 3rd array" <<endl;
    for(int i = 0; i<4; i++) //initializing array size of 4
    {
        cin>>x; // filling those with user input
        s3.Push(x);
    }

    int ab;
    cout<< "1st Stack values:" <<endl;
    while(!s1.IsEmpty()) //printing stack
    {
        ab = s1.Top();
        s1.Pop();
        cout<< ab<< " ";
    }
    cout<<endl;
    cout<< "2nd Stack values:" <<endl;
    while(!s2.IsEmpty()) //printing stack
    {
        ab = s2.Top();
        s2.Pop();
        cout<< ab<< " ";
    }
    cout<<endl;
    cout<< "3rd Stack values:" <<endl;
    while(!s3.IsEmpty()) //printing stack
    {
        ab = s3.Top();
        s3.Pop();
        cout<< ab<< " ";
    }

    return 0;
}
