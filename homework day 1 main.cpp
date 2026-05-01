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

// Program 2 -- Alphabet Case Checker
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

Program 3 -- Age Group Classifier
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age < 18)
        cout << "Minor";
    else
        cout << "Adult";

    return 0;
}

Program 4 -- Area of Shapes
#include <iostream>
using namespace std;

int main() {
    int length, breadth, area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area = " << area;

    return 0;
}

Program 5 -- Sum and Average of Three Numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    cout << "Sum = " << a + b + c << endl;
    cout << "Average = " << (a + b + c) / 3;

    return 0;
}
