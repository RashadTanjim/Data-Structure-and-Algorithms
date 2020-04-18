#include "MaxMin.cpp"
#include <iostream>

using namespace std;

int main()
{
    double list[]= {29.75,-23.01,-23.001,29.757,-1.032};
    MaxMin<double>m;
    m.initializeMaxMin(list, 5);

    cout<< "Maximum: ";
    cout<< m.getMax() <<endl;

    cout<< "Minimum: ";
    cout<< m.getMin() <<endl;

    return 0;
}
