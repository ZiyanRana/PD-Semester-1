#include <iostream>
using namespace std;
main()
{  
   int lbs, cost, area;
   float a, b;
   cout<< "Enter the size of the fertilizer bag in pounds: ";
   cin>> lbs;
   cout<< "Enter the cost of a bag (in $): ";
   cin>> cost;
   cout<< "Enter the area that a bag can cover (in square feet): ";
   cin>> area;
   a=cost/lbs;
   b=cost/area;
   cout<< "Cost of fertilizer per pound: "<< a << "$"<< endl;
   cout<< "Cost of fertilizer per square foot: "<< b <<"$";
}