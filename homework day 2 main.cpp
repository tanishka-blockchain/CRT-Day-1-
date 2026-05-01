Program 1 -- Grade Calculator
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}

Program 2 -- Leap Year Check
#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0)
        cout << "Leap Year";
    else
        cout << "Not Leap Year";

    return 0;
}

 Program 3 -- Even or Odd
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}

Program 4 -- ATM withdraw Validator
#include <iostream>
using namespace std;

int main() {
    int balance = 5000;
    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    if (amount <= balance)
        cout << "Withdraw Allowed";
    else
        cout << "Not Enough Balance";

    return 0;
}
