#include <iostream>
using namespace std;
void tpChecker (int people, int tp);
 
main()
{
    int people, rolls;
    cout<< "Enter the number of people living in the house: ";
    cin>> people;
    cout<< "Enter the number of tissue rolls: ";
    cin >> rolls;
    tpChecker (people, rolls);
}

void tpChecker (int people, int tp)
{
    float SheetsPerDay, totalsheets, onesheet;
    int days;
    SheetsPerDay = people * 57;
    onesheet= ( 1/SheetsPerDay ) ;
    totalsheets = tp*500;
    days = onesheet * totalsheets;
    
    if (days >= 14)
    {
         cout << "Your TP will last "<< days << " days, no need to panic."; 
    }
    else if (days < 14)
    {
         cout << "Your TP will only last "<< days << " days, buy more! ";
    }
    
}