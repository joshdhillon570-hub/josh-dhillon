#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int userChoice, computerChoice;

    cout << "===== ROCK PAPER SCISSORS =====\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

    cout << "\nEnter your choice (1-3): ";
    cin >> userChoice;

    // Generate computer choice
    srand(time(0));
    computerChoice = (rand() % 3) + 1;

    // Display choices
    cout << "\nYour choice: ";
    if (userChoice == 1)
        cout << "Rock";
    else if (userChoice == 2)
        cout << "Paper";
    else if (userChoice == 3)
        cout << "Scissors";
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "\nComputer choice: ";
    if (computerChoice == 1)
        cout << "Rock";
    else if (computerChoice == 2)
        cout << "Paper";
    else
        cout << "Scissors";

    // Decide winner
    cout << "\n\nResult: ";

    if (userChoice == computerChoice) {
        cout << "It's a Draw!";
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
        cout << "You Win!";
    }
    else {
        cout << "Computer Wins!";
    }

    return 0;
}