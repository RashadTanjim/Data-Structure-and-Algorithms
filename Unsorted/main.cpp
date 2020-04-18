#include "unsortedtype.cpp"
#include <iostream>

using namespace std;

int main()
{
    unsortedType<int>list;

    cout<< "Enter 4 Values: "<<endl;
    int x;
    for(int i=0; i<4; i++)
    {
        cin>>x ;
        list.InsertItem(x);
    }
    cout<< endl;
    cout<< endl;

    int p3;
    list.ResetList();
    cout<< "Print all Item: " <<endl;

    int list1[list.LengthIs()];

    for(int i=0; i<list.LengthIs(); i++)
    {
        list.GetNextItem(p3);
        list1[i]= p3;

    }

    for(int i =(list.LengthIs()-1); i>=0; i--)
    {
        cout<< list1[i] <<" ";
    }
    cout<< endl;
    cout<< endl;

    int y;
    cout<< "Print The Length: " <<endl;
    cout<< list.LengthIs() <<endl;
    cout<< endl;
    cout<< endl;

    int z;
    cout<< "\nInsert One Item: "<<endl;
    cin>>z ;
    list.InsertItem(z);
    cout<< endl;
    cout<< endl;

    int p4;
    list.ResetList();
    cout<< "Print all Item: " <<endl;

    for(int i=0; i<list.LengthIs(); i++)
    {
        list.GetNextItem(p4);
        list1[i]= p4;

    }

    for(int i =(list.LengthIs()-1); i>=0; i--)
    {
         cout<< list1[i] <<" ";
    }

    cout<< endl;
    cout<< endl;

    int b = 4;
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
    int bb = 5;
    bool flag1 = true;
    list.RetrieveItem(bb, flag1);
    if(flag1 == false)
    {
        cout<< "Item is not found!"<<endl;
    }
    else
    {
        cout<< "Item is Found!"<< endl;
    }
    cout<< endl;

    int bbb = 9;
    bool flag3 = true;
    list.RetrieveItem(bbb, flag3);
    if(flag3 == false)
    {
        cout<< "Item is not found!" <<endl;
    }
    else
    {
        cout<< "Item is Found!"<< endl;
    }
    cout<< endl;


    int bbbb = 10;
    bool f = true;
    list.RetrieveItem(bbbb, f);
    if(f == false)
    {
        cout<< "Item is not found!" <<endl;
    }
    else
    {
        cout<< "Item is Found!"<< endl;
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

    list.DeleteItem(5);

    if(list.isFull()== true)
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
        list1[i]= p;
    }

    for(int i =(list.LengthIs()-1); i>=0; i--)
    {
         cout<< list1[i] <<" ";
    }
    cout<< endl;

    list.DeleteItem(6);
    int p2;
    list.ResetList();
    cout<< "Print all Item: " <<endl;

    for(int i=0; i<list.LengthIs(); i++)
    {
        list.GetNextItem(p2);
        list1[i]= p2;

    }

    for(int i =(list.LengthIs()-1); i>=0; i--)
    {
        cout<< list1[i]<<" ";
    }

    cout<< endl;
    return 0;
}
