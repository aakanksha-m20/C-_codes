#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, discriminant, root1, root2;

    cout << "Enter coefficients of a,b,c :";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "root1 = " << root1 << endl;
        cout << "root2 = " << root2 << endl;
    }
    // condition for real and equal roots
    else if (discriminant == 0)
    {
        cout << "Roots are real and same." << endl;
        root1 = -b / (2 * a);
        cout << "root1 = root2 =" << root1 << endl;
    }
    // if roots are not real
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "root1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "root2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}