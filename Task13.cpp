#include <iostream>
using namespace std;
main()
{  int a, sum;
   cout<< "Enter an integer: ";
   cin>> a;
   sum = 0;
   sum+= a;
   cout<< "Enter another integer: ";
   cin>>a;
   sum +=a;
   cout<< "Enter another integer: ";
   cin>>a;
   sum+=a;
   cout<< "Enter another integer: ";
   cin>>a;
   sum+=a;
   cout<< "Enter another integer: ";
   cin>>a;
   sum+=a;
   cout<< "Sum of the five integers is: "<<sum;
}