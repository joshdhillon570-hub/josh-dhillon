// modife tea prices create a program where user inputs a base price for tea.
//use type casting to increase the price by 10% and display the new price.
#include <iostream>
using namespace std;
int main(){

    float first_price;
    cout << "enter the first price of tea = ";
    cin>> first_price;
    cout << "the first price is = " << first_price << endl;

    float new_price = static_cast<float>(first_price * 1.1);// this will increase the price by 10% and type cast it to float
    cout << "the new price of tea after increased by 10% is = " << new_price << endl;
    return 0;
}