#include<iostream>

using namespace std;
main()
{
	float PI=3.14159;
	float radius,area;

	cin>>radius;
	area=PI*radius*radius;

	cout<<"A=";
    cout<< setprecision(4) <<area<< endl;

	return 0;
}
