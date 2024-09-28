#include <iostream>
using namespace std;
void possibleBonus (int a, int b);

main ()
{
   int a, b;
   cout << "Enter your position: ";
   cin >> a;
   cout << "Enter your friend's postion: ";
   cin >> b;
   possibleBonus (a, b);
}

void possibleBonus (int a, int b)
{
   if ( (b-a) > 6)
   {
       cout << "False.";
   }
   else if ( (b-a) <= 6 )
   {
       cout << "True.";
   } 
}