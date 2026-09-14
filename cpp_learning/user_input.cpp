#include <iostream>
#include <string>

using namespace std;
int main() {
    string myString;
    cout << "Enter a string: ";
    //getline(cin, myString);
    cin >> myString; // This will read input until the first whitespace
    cout << "You entered: " << myString << endl;
    return 0;
}