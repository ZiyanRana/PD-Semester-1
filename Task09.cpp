#include <iostream>
using namespace std;
main()
{
  int sum, number, a, b, c,d;
  cout<< "Enter a four-digit number: ";
  cin>> number;
  sum=0;
  a= number%10;
  sum+= a;
  number= number/10;
  b= number%10;
  sum+= b;
  number= number/10;
  c= number%10;
  sum+= c;
  number=number/10;
  d= number%10;
  sum= sum+d;
  cout<< "The sum of the individual digits of the entered number is: "<<sum;
}