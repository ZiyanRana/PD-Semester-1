#include<iostream>
using namespace std;
void airline(string name, int price);

main()
{  string country;
   int ticket;
   cout<< "Enter the country's name: ";
   cin>> country;
   cout<< "Enter the ticket price in dollars: $";
   cin>> ticket;
   airline( country, ticket);
}
 
void airline(string name, int price)
{   
   int finalprice;
   if (name== "Pakistan")
   {  
       finalprice = price-(price*5/100);  
       cout<< "Final ticket price after discount: $"<< finalprice;
   }
   else if (name== "Ireland")
   {
       finalprice = price-(price*10/100);
       cout<< "Final ticket price after discount: $"<< finalprice;
   }
   else if (name== "India")
   {
      finalprice = price - (price*20/100);
      cout<< "Final ticket price after discount: $"<< finalprice;
   }
   else if (name== "England")
   {
      finalprice = price - (price*30/100);
      cout<< "Final ticket price after discount: $"<< finalprice;
   }
   else if (name== "Canada")
   {
      finalprice = price - (price*45/100);
      cout<< "Final ticket price after discount: $"<< finalprice;
   }
} 