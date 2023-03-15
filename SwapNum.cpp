#include<iostream>
using namespace std;

int main()
{
 int first,second,temp;
 
 cout <<"\nEnter first number: ";
 cin >>first;
 
 cout <<"\nEnter second number: ";
 cin >>second;
 
 temp = first;

 first = second;

 second = temp;
 
 cout <<"\nNumber after swaping : " << first << " " << second;
 
 return 0;
} 