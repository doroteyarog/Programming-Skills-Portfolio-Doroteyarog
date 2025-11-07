// PrimitiveQuiz.cpp
// Author: Your Name
// Description: Simple quiz that uses primitive data types.

#include <iostream>
using namespace std;

int main() {
    int year;
    float piGuess;
    char answer;

    cout << "What year is it? ";
    cin >> year;
    cout << "Your guess for Pi (approximate)? ";
    cin >> piGuess;
    cout << "Is programming fun? (y/n): ";
    cin >> answer;

    cout << "\n--- Your Answers ---" << endl;
    cout << "Year: " << year << endl;
    cout << "Pi guess: " << piGuess << endl;
    cout << "Programming fun: " << ((answer == 'y' || answer == 'Y') ? "Yes!" : "No?") << endl;
    return 0;
}
