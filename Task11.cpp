#include <iostream>
using namespace std;
main()
{  
   int age, move, answer;
   cout<< "Enter the person's age: ";
   cin>> age;
   cout<< "Enter the number of times they've moved: ";
   cin>> move;
   answer= age/ (move+1) ;
   cout<< "Average number of years lived in a house: "<<answer<< " years";
}