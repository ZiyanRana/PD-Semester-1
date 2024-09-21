#include <iostream>
using namespace std;
main()
{  cout<< "Enter the number of square meters you can paint: ";
   int sq;
   cin>> sq;
   cout<< "Enter the width of a wall (in meters): ";
   int width;
   cin>> width;
   cout<< "Enter the height of a wall (in meters): ";
   int h, area;
   cin>> h;
   area= h*width;
   int n;
   n= sq/area;
   cout<<"Number of walls you can paint: "<<n;
}
   