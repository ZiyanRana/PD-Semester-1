#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);

main()
{
   system ("cls");
   gotoxy(60,20);
   cout<< "M. ZIYAN RANA";
   gotoxy(0,40);
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates. X= x;
    coordinates. Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);   
}