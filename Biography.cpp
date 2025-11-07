// Biography.cpp
// Author: Your Name
// Description: Displays personal information entered by the user.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, hobby;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter your favorite hobby: ";
    getline(cin, hobby);

    cout << "\n--- Biography ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Nice to meet you, " << name << "! Keep enjoying " << hobby << "!" << endl;
    return 0;
}
