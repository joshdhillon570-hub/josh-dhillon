//Write a program that calculates the price of tea packs. A user enters the number of tea packs they want,
// and the price per pack. Apply a 10% tax to the total price and display the final cost.
#include <iostream>
using namespace std;
int main(){
    int cups;
    float price;

    cout<<"enter numer of cups u want= ";
     cin>>cups;

    cout<<"enter price of one cup= ";
     cin>>price;
  
    float total_price = cups * price;

    cout << "final price after adding 10% tax is: " << total_price + (total_price * .10) << endl;

  return 0;


}