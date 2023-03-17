#include <iostream>
using namespace std;

int main()
{
    bool vowel_Low, vowel_Upp;
    char c;

    cout << "Enter Character: ";
    cin >> c;

    vowel_Low = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    vowel_Upp = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
    {
        printf("Error! Non-alphabetic character.");
    }
    else if (vowel_Low || vowel_Upp)
    {
        cout << c << " is vowel.";
    }
    else
    {
        cout << c << " is consonant.";
    }
}
