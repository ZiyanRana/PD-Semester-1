#include <iostream>
using namespace std;
void reverse(string x);

main()
{
   string x;
   cout << "Enter 'true' or 'false': ";
   cin>> x;
   reverse (x);
}

void reverse (string x)
{
   if (x=="true")
   {
      cout << "false.";
   }
   else if (x=="false")
   { 
      cout << "true.";
   }
   else
   { 
      cout << "Invalid Input, enter 'true' or 'false' only.";
   }
}