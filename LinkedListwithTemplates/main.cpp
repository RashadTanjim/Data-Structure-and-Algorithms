#include"LinkedList.cpp"
#include <iostream>

using namespace std;

int main()
{
    LinkedList<int> l;
    l.addItemAtFirst(2);
    l.addItemAtFirst(5);
    l.addItemAtLast(7);
    l.printList();
}
