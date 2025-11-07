// SimpleSearch.cpp
// Author: Your Name
// Description: Searches for a value in a small predefined array.

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {3, 7, 12, 19, 21};
    int search;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (numbers[i] == search) {
            found = true;
            break;
        }
    }

    if (found)
        cout << search << " was found in the list." << endl;
    else
        cout << search << " was not found." << endl;

    return 0;
}
