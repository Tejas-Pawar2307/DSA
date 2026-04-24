// Check which number is greater.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Greatest Number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Greatest Number is: " << b << endl;
    } else {
        cout << "Greatest Number is: " << c << endl;
    }

    return 0;
}

// Check which is leap year on conditions

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter Your Year";
    cin >> year;

    if (year%400==0) {
        cout << "Leap Year" << endl;
    } else if (year%100==0) {
        cout << "Not Leap Year" << endl;
    } else if (year%4==0) {
        cout << "Leap Year" << endl;
    } else {
        cout << "Not Leap Year" << endl;
    }
    return 0;
}

// Check If a number is positive and negative and also check even or odd.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter Your Number :";
    cin >> num;

    if (num>0) {
        if (num%2==0) {
            cout << "Positive Even" << endl;
        } else {
            cout << "Positive Odd" << endl;
        }
    } else if (num<0) {
        if (num%2==0) {
            cout << "Negative Even" << endl;
        } else {
            cout << "Negative Odd" << endl;
        }
    } else {
        cout << "Number is Zero" << endl;
    }
    return 0;
}

