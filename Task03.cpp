#include <iostream>
using namespace std;
main()
{
  int vi , a, t, vf ;
  cout<< "Enter the value of initial velocity (m/s): ";
  cin>> vi;
  cout<< "Enter the value of acceleration (m/s^2): ";
  cin>> a;
  cout<< "Enter time (s): ";
  cin>> t;
  vf= a*t+vi;
  cout<< "Final Velocity (m/s): "<<vf;
}