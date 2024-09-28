#include <iostream>
using namespace std;
void flowerShop (int redRose, int whiteRose , int tulip);

main()
{
    int redrose, whiterose, tulip;
    cout << "Enter the number of red roses: ";
    cin >> redrose;
    cout << "Enter the number of white roses: ";
    cin >> whiterose;
    cout << "Enter the number of tulips: ";
    cin >> tulip;
    flowerShop ( redrose, whiterose , tulip);
}

void flowerShop (int redRose, int whiteRose , int tulip)
{
    float price, discountedPrice;
    price = (redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
    cout << "Original price of the flowers: "<< price << "$" << endl ;
    if ( price>200 )
    {    
        discountedPrice = price - ( price*0.2 );
        cout << "Price after discount: "<< discountedPrice << "$";
    }
}
    
