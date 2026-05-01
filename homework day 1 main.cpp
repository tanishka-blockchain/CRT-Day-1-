// Program 1 -- Login Credential Program
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

// Program 2-- Alphabet case checker
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a letter: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase";
    else
        cout << "Lowercase";

    return 0;
}
