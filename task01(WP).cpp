#include <iostream>
#include windows.h;
using namespace std;

void gotoxyv(int x, int y)
{
  COORD coorinates;
  coordinates.X= x;
  coordinates.Y= y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates;
}

int main()
{
   system ("cls");
   cout<< "Test";

   gotoxy(15,15);
   cout<< "My Name is Muhammad Ziyan.";

   return 0;
}
