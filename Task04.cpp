#include <iostream>
using namespace std;
main()
{ 
  int i , p, c;
  cout<< " \nEnter the number of Imposters per game: ";
  cin>> i;
  cout<< "Enter the number of Players per game: ";
  cin>> p;
  c= 100* i/p;
  cout<< " \nChances of being an Imposter per game: "<< c <<"% \n ";
}