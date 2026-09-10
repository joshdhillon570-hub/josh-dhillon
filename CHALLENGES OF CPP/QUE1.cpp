//TEA INFORMATION DISPLAY, WRITE A PROGRAM THAT DECLARES VARIABLES
// TO SRORE THE TYPE OF TEA,ITS PRICE PER KILOGRAM(FLOAT),AND ITS RATEING(CHAR)
//USE DATA TYPE EFFECTIVELY AND PRINT THEM IN FORMATTED OUTPUT USING ESCAPE SEQUENCY
#include <iostream>
using namespace std;
int main() {
    // DECLAREING VARIABLES
      string Tea_Type = "WHITE TEA";
      float Pricee_per_KG = 67.67;
      char Rateing = 'A';

    // PRINTING VARIABLES IN FORMATTED OUTPUT
    cout << "TEA INFO" << endl;
    //or
    cout << "\n TEA INFO \n";

    cout << "TEA TYPE: " << Tea_Type << endl;
    cout << "PRICE PER KG: " << Pricee_per_KG << endl;
    cout << "RATING: " << Rateing << endl;

    return 0;

}