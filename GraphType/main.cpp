#include <iostream>
#include "GraphType.cpp"
using namespace std;

int main()
{
    int maxV = 8;
    GraphType<char> graph(maxV);

    cout<< "Add all vertex alphabetically"<<endl;

    char ver;
    for(int i = 0; i<maxV; i++)
    {
        cin>>ver;
        graph.AddVertex(ver);
    }

    cout<< "Add Edges: "<<endl;
    int cost = 1;
    char ver1 , ver2;
    for(int i = 0; i<maxV; i++)
    {
        cin>>ver1;
        cin>>ver2;
        graph.AddEdge(ver1, ver2, cost);
    }


    cout<< graph.OutDegree('B')<<endl;

    cout<<"Enter the edges to be found: "<<endl;
    char f1, f2;
    cin >> f1;
    cin >> f2;
    cout<< "graph.FoundEdge(f1, f2)"<<endl;

    cout<< graph.OutDegree('D')<<endl;


    if(graph.FoundEdge('A','D') == true)
        cout<<"There is an edge."<<endl;
    else
        cout<< "There is no edge."<<endl;

        if(graph.FoundEdge('B','D') == true)
        cout<<"There is an edge."<<endl;
    else
        cout<< "There is no edge."<<endl;

    graph.DepthFirstSearch('B', 'E');




    cout << "Finished!" << endl;
    return 0;
}
