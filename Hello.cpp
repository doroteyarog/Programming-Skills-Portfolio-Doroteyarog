// Hello.cpp
// Author: Your Name
// Description: Greets the user by name and counts characters in their name.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;
    cout << "Your name has " << name.length() << " characters." << endl;
    return 0;
}
