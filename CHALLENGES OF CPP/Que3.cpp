//favorite tea input write a program that takes the user favorite tea as input
//using getline and also ask how many cups of tea they want using cin and display the output.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string fav_tea;
    cout<<"ENTER UR FAV TEA=";
    getline(cin, fav_tea); //using getline to take input of favorite tea including spaces
    
    int cups;
    cout<<"HOW MANY CUPS OF TEA U WANT=";
    cin>>cups;

    cout<<"YOUR FAV TEA IS "<<fav_tea<<endl;
    cout<<"YOU WANT "<<cups<<" CUPS OF TEA"<<endl;




}
