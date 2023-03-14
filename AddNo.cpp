#include <iostream>
using namespace std;

int main() 
{

  int first_num, second_num, sum;
    
  cout << "Enter two integers: ";
  cin >> first_num >> second_num;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_num + second_num;

  // prints sum 
  cout << first_num<< " + " <<  second_num << " = " << sum;     

  return 0;
}