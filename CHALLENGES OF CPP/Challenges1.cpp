//Create a program that calculates the total price of tea cups.
//The user inputs the number of cups they want and the price per cup.The program should calculate 
// the total price, apply a 5% discount if the total is above a certain amount,and show the final price.
#include <iostream>
using namespace std;
int main(){
    
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "enter the number of tea cups =";
    cin >> cups;

    cout << "enter the price per cup =";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    
    // apply 5% diascount if total is more than 700

    if(totalPrice > 700){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "total price after discount = " << discountedPrice;
    }

    else{
        cout << "total price = " << totalPrice;
    }
    return 0;
}