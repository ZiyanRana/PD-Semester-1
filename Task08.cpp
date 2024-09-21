#include <iostream>
using namespace std;
main()
{
  int vegp, fruitp, veg, fruit, earning;
  cout<<"Enter vegetable price per kilogram (in coins): ";
  cin>> vegp;
  cout<<"Enter fruit price per kilogram (in coins): ";
  cin>> fruitp;
  cout<< "Enter total kilograms of vegetable: ";
  cin>> veg;
  cout<<"Enter total kilograms of fruits: ";
  cin>> fruit;
  earning= (vegp*veg) + (fruitp* fruit);
  cout<< "Total earnings (in rupees): "<<earning;
}