#include<iostream>
using namespace std;

int main()
{
    int No;

    cout << "\nEnter number: ";
    cin >> No;

    if(No % 2 == 0)
    {
       cout << "\n" << No << " is even number.";
    }
    else
    {
       cout << "\n" << No << " is odd number.";
    }
    

    return 0;
}