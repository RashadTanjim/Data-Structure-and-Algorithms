#include "unsortedtype.cpp"
#include <iostream>

using namespace std;

int main()
{
    unsortedtype<int>list;

    cout<< "Enter 4 Values: "<<endl;
    int x;
    for(int i=0; i<4; i++)
    {
        cin>>x ;
        list.InsertItem(x);
    }
    cout<< endl;
    int y;
    cout<< "Print all Item: " <<endl;
    list.resetList();
    for(int i=0; i<list.lengthIs(); i++)
    {
        list.getNextItem(y);
        cout<<y <<endl;
    }
    cout<< endl;

    int b = 4;
    bool flag = true;
    list.retrieveItem(b, flag);
    if(flag == false)
    {
        cout<< "Not found!" <<endl;
    }
    else
    {
        cout<< "Found!"<< endl;
    }

    cout<< endl;
    int bb = 5;
    bool flag1 = true;
    list.retrieveItem(bb, flag1);
    if(flag1 == false)
    {
        cout<< "Not found!" <<endl;
    }
    else
    {
        cout<< "Found!"<< endl;
    }
    cout<< endl;

    int bbb = 9;
    bool flag3 = true;
    list.retrieveItem(bbb, flag3);
    if(flag3 == false)
    {
        cout<< "Not found!" <<endl;
    }
    else
    {
        cout<< "Found!"<< endl;
    }
    cout<< endl;


    int bbbb = 10;
    bool f = true;
    list.retrieveItem(bbbb, f);
    if(f == false)
    {
        cout<< "Not found!" <<endl;
    }
    else
    {
        cout<< "Found!"<< endl;
    }

    cout<< endl;
    cout<<"\n Length is: ";
    cout<< list.lengthIs() <<endl;
    cout<< endl;
    int z;
    cout<< "Insert One Item: "<<endl;
    cin>>z ;
    list.InsertItem(z);
    cout<< endl;

    int yy;
    list.resetList();
    cout<< "Print all Item: " <<endl;
    for(int i=0; i<list.lengthIs(); i++)
    {
        list.getNextItem(yy);
        cout<<yy <<endl;
    }

    cout<< endl;

    if(list.isFull()== true)
    {
        cout<< "List is Full" <<endl;
    }
    else
    {
        cout<< "Not Full" <<endl;
    }
    cout<< endl;
    list.deleteItem(5);

    if(list.isFull()== true)
    {
        cout<< "List is Full" <<endl;
    }
    else
    {
        cout<< "Not Full" <<endl;
    }
    cout<< endl;
    list.deleteItem(1);

    int yyy;
    list.resetList();
    cout<< "Print all Item: " <<endl;
    for(int i=0; i<list.lengthIs(); i++)
    {
        list.getNextItem(yyy);
        cout<<yyy <<endl;
    }
    cout<< endl;
     list.deleteItem(6);

    int yyyy;
    list.resetList();
    cout<< "Print all Item: " <<endl;
    for(int i=0; i<list.lengthIs(); i++)
    {
        list.getNextItem(yyyy);
        cout<<yyyy <<endl;
    }
    cout<< endl;
    return 0;
}
