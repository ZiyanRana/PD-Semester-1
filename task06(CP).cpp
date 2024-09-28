#include <iostream>
using namespace std;
void longestTime (int hours, int mins);

main()
{
   int hours, mins;
   cout << "Enter the number of hours: ";
   cin >> hours;
   cout << "Enter the number of minutes: ";
   cin >> mins;
   longestTime( hours, mins );
}


void longestTime (int hours, int mins)
{
   float h;
   h= hours*60 ;
   if (h > mins)
   {
       cout << "Longest time is: "<< hours ;
   }
   else if (mins > h)
   {
       cout << "Longest time is: "<< mins ;
   }
   else
   { 
       cout << "Equal time or error." ;
   } 
}