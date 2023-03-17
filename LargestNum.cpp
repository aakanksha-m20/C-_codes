#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter value for a,b,c : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is largest number.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is largest number.";
    }
    else if (c > a && b > a)
    {
        cout << c << " is largest number.";
    }

    return 0;
}