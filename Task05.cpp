#include <iostream>
using namespace std;
main()
{
  int t, d;
  string n;
  cout<< "Enter the name of the person: ";
  cin>> n;
  cout<< "Enter the target weight loss (kgs): ";
  cin>> t;
  d= 15*t;
  cout<< n<< " will need " << d << " days to lose " <<t<< " kilograms of weight by following the doctors suggestions.";

}