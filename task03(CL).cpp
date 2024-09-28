#include <iostream>
#include <windows.h>
using namespace std;

void maze();
void gotoxy (int x, int y);
void moveplayer (int x, int y);

int main()
{
   int x=4, y=4;
   system ("cls");
   maze();
   moveplayer(x, y);
}

void moveplayer(int x, int y)
{
   gotoxy(x,y);
   cout<< "P" ;
   Sleep (500);
   gotoxy(x,y);
   cout<< " ";
}

void maze()
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

void gotoxy (int x, int y)
{
  COORD coordinates;
  coordinates.X= x;
  coordinates.Y= y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}