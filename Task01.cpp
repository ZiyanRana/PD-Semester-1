#include <iostream>
using namespace std;
main()
{
  int a, b ;
  cout<<"Enter the number of sides of the polygon: ";
  cin>> a;
  b= (a-2)*180 ;
  cout<< "The sum of the internal angles of the polygon is: "<<b;
}