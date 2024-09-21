#include <iostream>
using namespace std;
 main()
{
  cout<<"Enter the number of minutes:"; 
  int minutes;
  cin>> minutes;
  cout<< "Enter the Frames per Second: ";
  int frames;
  cin>> frames;
  int a;
  a= minutes*60*frames;
  cout<<"Total number of Frames: "<<a;
}