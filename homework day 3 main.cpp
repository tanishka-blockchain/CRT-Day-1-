// Program 1 -- Multiplication Table
#include <iostream>
using namespace std;

int main() {
    int num, i;

    cout << "Enter number: ";
    cin >> num;

    i = 1;

    while(i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}

// Program 2 -- Countdown timer
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter starting number: ";
    cin >> n;

    while(n >= 1) {
        cout << n << endl;
        n = n - 1;
    }

    cout << "Time's up!" << endl;

    return 0;
}

// Program 3 -- Glass Water Filler
#include <iostream>
using namespace std;

int main() {
    int level = 0;

    while(level < 5) {
        cout << "Filling water..." << endl;
        level = level + 1;
    }

    cout << "Glass is full!" << endl;

    return 0;
}

// Program 4 -- ATM Pin Retry System
#include <iostream>
using namespace std;

int main() {
    int pin;
    int correctPin = 1234;

    cout << "Enter PIN: ";
    cin >> pin;

    if(pin == correctPin) {
        cout << "Access Granted" << endl;
    } else {
        cout << "Wrong PIN" << endl;

        cout << "Enter PIN again: ";
        cin >> pin;

        if(pin == correctPin) {
            cout << "Access Granted" << endl;
        } else {
            cout << "Wrong PIN" << endl;

            cout << "Enter PIN again: ";
            cin >> pin;

            if(pin == correctPin) {
                cout << "Access Granted" << endl;
            } else {
                cout << "Account Blocked" << endl;
            }
        }
    }

    return 0;
}
