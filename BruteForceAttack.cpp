#include <iostream>
#include <string>
using namespace std;

int main() {
    const string correctPassword = "12345";
    const int maxAttempts = 5;
    int attempts = 0;
    string attempt;

    cout << "Secure Safe - enter the password." << endl;

    while (attempts < maxAttempts) {
        cout << "Attempt " << (attempts + 1) << " of " << maxAttempts << " - Password: ";
        if (!getline(cin, attempt)) return 0; // handle EOF / input error

        attempts++;

        if (attempt == correctPassword) {
            cout << "Welcome to the Secure Area" << endl;
            return 0;
        } else {
            int remaining = maxAttempts - attempts;
            if (remaining > 0) {
                cout << "Incorrect. " << remaining << " attempt"
                     << (remaining == 1 ? "" : "s")
                     << " remaining." << endl;
            } else {
                cout << "Incorrect. No attempts remaining." << endl;
            }
        }
    }

    cout << "Maximum attempts reached. Authorities have been alerted!" << endl;
    return 0;
}
