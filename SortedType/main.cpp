//Md. Rashad Tanjim
//ID: 1620952042
//Section: 01
//CSE225
//Assignment - 02

#include <iostream>
using namespace std;



void Sieve_of_Eratosthenes(int n)
{
    int prime[n] = {0};

    for (int i = 2; i < n; i++)
    {
        for (int j = i * i; j < n; j+=i)
        {
            prime[j - 1] = 1;
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i - 1] == 0)
            cout << i << " ";

    }
    if(n%2==1)
            cout<< n;
}

int main()
{
    int n;
    cout<< "Enter any Integer: "<<endl;
    cin>> n;
    Sieve_of_Eratosthenes(n);
    cout<<endl;
    return 0;
}
