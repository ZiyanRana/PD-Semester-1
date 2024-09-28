#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void moveplayer (int x, int y);
void printmaze();

main()
{  
    system("cls");
    int a=0 , b=0 ;
    gotoxy ( a , b );
    printmaze();
    int x=14 , y=1 ;
    gotoxy( x , y );
    while (y < 13)
    {    moveplayer(x,y);
         y= y+1 ;
         if (y == 13)
         {
             while(y>1)
             {
                  y= y-1 ;
                  moveplayer(x,y);
             }
         }
    }
}

void printmaze()
{   
    cout<< "####################################" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "#                                  #" << endl;
    cout<< "####################################" << endl;
}

void moveplayer(int x, int y)
{
    gotoxy(x,y);
    cout<< "Patrol" ;
    Sleep (500);
    gotoxy(x,y);
    cout<< "      ";   
}

void gotoxy (int x, int y)
{
    COORD coordinates;
    coordinates.X= x;
    coordinates.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 