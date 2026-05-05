#include <iostream>
using namespace std;

int main() {
    string correctPassword = "1234";  // stored password
    string enteredPassword;

    cout << "Enter password: ";
    cin >> enteredPassword;

    if (enteredPassword == correctPassword) {
        cout << "Login successful" << endl;
    } else {
        cout << "Cannot login" << endl;
    }

    return 0;
}