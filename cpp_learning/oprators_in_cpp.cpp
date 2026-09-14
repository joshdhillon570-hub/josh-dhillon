//  
#include <iostream>
using namespace std;
int main(){
    // ARTHAMATIC OPERATORS
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "enter the number of tea cups =";
    cin >> cups;

    cout << "enter the price per cup =";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // a%b give reamder

    // apply 5% diascount if total is more than 700

    if(totalPrice > 700){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "total price after discount = " << discountedPrice;
    }

    else{
        cout << "total price = " << totalPrice;
    }


    // oprators in c++ are used to perform operations on variables and values. 
    //C++ language provides a rich set of built-in operators. 
    //Operators are special symbols that perform specific operations on one, two, or three operands,
    // and then return a result.
return 0;
    
}

