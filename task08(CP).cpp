#include <iostream>
using namespace std;
void pet (int holidays);

main ()
{
   int holidays;
   cout << "Enter the number of holidays: ";
   cin >> holidays;
   pet (holidays);
}

void pet (int holidays)
{
   int workingdays, gametime, difference;
   workingdays = 365 - holidays;
   gametime = ( workingdays*63 ) + ( holidays*127 ) ;
   int hours, minutes;
   if (gametime <= 30000)
   {
       difference = 30000 - gametime;
       minutes = difference % 60;
       hours = (difference - minutes) / 60 ;
       cout << "Tom sleeps well" << endl;
       cout << hours << " hours and " << minutes << " minutes less for play." ;
   }
   else if (gametime > 30000)
   {
       difference = gametime - 30000;
       minutes = difference % 60;
       hours = (difference - minutes) / 60 ;
       cout << "Tom will run away" << endl ;
       cout << hours << " hours and " << minutes << " minutes for play." ;
   }  
}