#include <iostream>
using namespace std;

int main() {
    string user, pass;

    cout << "Enter username: ";
    cin >> user;

    cout << "Enter password: ";
    cin >> pass;

    if (user == "admin" && pass == "123") {
        cout << "Login successful";
    } else {
        cout << "Login failed";
    }

    return 0;
}
