#include <iostream>
using namespace std;

int main()
{

    int year;
    cout << "Enter a year: ";
    cin >> year;

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        cout << year << " is a leap year.";
    }
    // not a leap year if divisible by 100
    else if (year % 100 == 0) // but if not divisible by 400 this step runs
    {
        cout << year << " is not a leap year.";
    }
    // runs this step if not divisible by 100
    else if (year % 4 == 0) // but leap year divisible by 4
    {
        cout << year << " is a leap year.";
    }
    // all other years are not leap years
    else
    {
        cout << year << " is not a leap year.";
    }

    return 0;
}