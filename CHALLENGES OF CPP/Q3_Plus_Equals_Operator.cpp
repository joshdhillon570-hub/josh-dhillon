//Create a program where the user inputs the number of tea bags they have. If the number is less than 20,
// give them 10 extra bags using the += assignment operator. Display the updated total.
 #include <iostream>
 using namespace std;
 int main(){
  int tea_bags;
  cout << "enter the number of tea bags you have: ";
    cin >> tea_bags;

  if(tea_bags <= 20){
    tea_bags += 10;
     cout << "updated total after adding 10 bags: " << tea_bags  ;
  }
  else{
    cout << "you have enough tea bags: " << tea_bags << endl;
  }
    
     return 0;
 }