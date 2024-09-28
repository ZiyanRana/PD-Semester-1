#include <iostream>
using namespace std;
void printMenu();
void calculateAggregate (string name, int matricMarks, int interMarks, int ecatMarks);
void compareMarks (string name1, int ecatMarks1, string name2, int ecatMarks2);

main()
{   
    system ("cls");

    printMenu();

    cout << "1. Aggregate Calculation:-" << endl ;
    string name;
    int matricMarks, interMarks, ecatMarks;
    cout << "Enter the marks obtained in Matric: ";
    cin >> matricMarks;
    cout  << "Enter the marks obtained in Inter: ";
    cin >> interMarks;
    cout << "Enter the marks obtained in Ecat: ";
    cin >> ecatMarks;
    calculateAggregate ( name, matricMarks, interMarks, ecatMarks );

    cout << "2. Marks Comparison:-" << endl ;
    string name1, name2;
    int ecatMarks1, ecatMarks2;
    cout << "Enter first student's name: ";
    cin >> name1;
    cout << "Enter first student's marks in ecat: ";
    cin >> ecatMarks1;
    cout << "Enter second student's name: ";
    cin >> name2;
    cout << "Enter second student's marks in ecat: ";
    cin >> ecatMarks2; 
    compareMarks ( name1, ecatMarks1, name2, ecatMarks2 );
}

void printMenu()
{   
    cout << endl;
    cout << " ** UNIVERSITY OF ENGINEERING AND TECHNOLOGY ** " << endl ;
    cout << "    'University Admission Management System'    " << endl ;
    cout << "        Welcome to the main menu of UAMS        " << endl << endl ;
    cout << "Functions:" << endl << "1. Aggregate Calculator " << endl << "2. Ecat Marks Comparison" << endl << endl; 
}

void calculateAggregate (string name, int matricMarks, int interMarks, int ecatMarks)
{
    float aggregate;
    aggregate = (matricMarks*30/1100)+(interMarks*30/550)+(ecatMarks*40/400);
    cout << "Aggregate = " << aggregate << endl << endl ;
}


void compareMarks ( string name1, int ecatMarks1, string name2, int ecatMarks2 )
{   
    if (ecatMarks1 > ecatMarks2)
    {
        cout << name1 << " will have first roll number, when compared to " << name2 << "." << endl;
    }
    else if (ecatMarks2 > ecatMarks1)
    {
        cout << name2 << " will have first roll number, when compared to " << name1 << "." << endl;
    }
}