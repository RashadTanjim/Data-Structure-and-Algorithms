#include "Point.h"
#include "Point.cpp"
#include <iostream>

using namespace std;

int main()
{
    Point<int>list;

    cout<< "Enter 4 Values: "<<endl;
    int x;
    for(int i=0; i<4; i++)
    {
        cin>>x ;
        list.InsertItem(x);
    }
    cout<< endl;
    cout<< endl;

    return 0;
}
