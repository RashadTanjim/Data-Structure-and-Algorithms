#include "binarysearchtree.cpp"
#include <iostream>

using namespace std;

int main() {

    TreeType<int> myTree;
    cout<<"An empty Tree has Been Created"<<endl;

    if(myTree.IsEmpty())
        cout<< "The Tree is empty!"<<endl;
    else
        cout<<"The Tree is not empty"<<endl;

    int p;
    cout<<"Enter 10 items: "<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>p;
        myTree.InsertItem(p);
    }
    cout<<endl;

    if(myTree.IsEmpty())
        cout<< "The Tree is empty!"<<endl;
    else
        cout<<"The Tree is not empty"<<endl;


    cout<< "The length of the tree is: "<< myTree.LengthIs()<<endl;

    int b1 = 9;
    bool flag2 = true;
    myTree.RetrieveItem(b1, flag2);
    if(flag2 == false)
    {
        cout<< "Item is not found!" <<endl;
    }
    else
    {
        cout<< "Item is Found!"<< endl;
    }
    cout<< endl;

    int b2 = 13;
    bool flag3 = true;
    myTree.RetrieveItem(b2, flag2);
    if(flag3 == false)
    {
        cout<< "Item is not found!" <<endl;
    }
    else
    {
        cout<< "Item is not Found!"<< endl;
    }
    cout<< endl;

    int x;
    OrderType order = IN_ORDER;
    bool finished1 = false;
    myTree.ResetTree(order);
    cout<< "In order: ";
    while(!finished1)
    {
        myTree.GetNextItem(x,order,finished1);
        cout<< x << " ";
    }
    cout<< endl;

    int z;
    OrderType order3 = POST_ORDER;
    bool finished3 = false;
    myTree.ResetTree(order);
    cout<< "Post order: ";
    while(!finished3)
    {
        myTree.GetNextItem(z,order,finished3);
        cout<< z << " ";
    }
    cout<< endl;

    int y;
    OrderType order2 = PRE_ORDER;
    myTree.ResetTree(order);
    bool finished2 = false;
    cout<< "Pre order: ";
    while(!finished2)
    {
        myTree.GetNextItem(y,order2,finished2);
        cout<< y << " ";
    }
    cout<< endl;



    myTree.MakeEmpty();

    myTree.InsertItem(8);
    myTree.InsertItem(13);
    myTree.InsertItem(1);
    myTree.InsertItem(6);
    myTree.InsertItem(4);
    myTree.InsertItem(7);
    myTree.InsertItem(10);
    myTree.InsertItem(14);
    myTree.InsertItem(1);

    cout<<"The minimum item in the tree is: "<< myTree.findMin()<<endl;

    cout<<"The leaves in the tree is: "<< myTree.numLeaves()<<endl;



    return 0;

}
