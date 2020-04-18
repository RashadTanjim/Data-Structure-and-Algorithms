#include "LinkedList.cpp"
#include <iostream>

using namespace std;

int main()
{
    LinkedList<int> l;
    while(1){
    cout << "What do you want to do, now? (Enter Option)" << endl;
    cout << "1. InsertAtFront\n2. InsertAtBack \n3. InsertAtAnyplace \n4. DeleteFromFront \n5. DeleteFromBack \n6. DeleteFromAnyplace \n7. SearchItem \n8. GetLength \n9. PrintList \n0. End" << endl;
    cout << ">";
    int b,c;
    cin >> b;
        switch(b){
        case 1: cout << "Enter item: ";
                cin >> c;
                cout << endl;
                l.InsertAtFront(c);
                break;
        case 2: cout << "Enter item: ";
                cin >> c;
                cout << endl;
                l.InsertAtBack(c);
                break;
        case 3: cout << "Enter item: ";
                cin >> c;
                cout << "Enter position: ";
                int d;
                cin >> d;
                cout << endl;
                l.InsertAtAnyplace(d,c);
                break;
        case 4: l.DeleteFromFront();
                cout << endl;
                break;
        case 5: l.DeleteFromBack();
                cout << endl;
                break;
        case 6: cout << "Enter position: ";
                int e;
                cin >> e;
                cout << endl;
                l.DeleteFromAnyplace(e);
                break;
        case 7: cout << "Enter Item: ";
                cin >> c;
                cout << endl;
                l.SearchItem(c);
                cout << endl;
                break;
        case 8: cout << endl;
                l.GetLength();
                cout << endl;
                break;
        case 9: cout << endl;
                l.PrintList();
                cout << endl;
                break;
        case 0: goto z;
                break;
        default: cout << "Enter a valid number this time." << endl;
        }
    }
    z:
    return 0;
}
