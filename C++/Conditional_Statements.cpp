#include <iostream>
using namespace std;

int main() {
    // Conditional Statements   [if-else]
    int n = 45;

    if (n >= 0) {
        cout << "n is positive\n";
    } else {
        cout << "n is negative\n";
    }

    int age;
    cout << "enter your age";
    cin >> age;

    if (age >= 18) {
        cout << "You can vote\n";
    } else {
        cout << "You can not vote\n";
    }

    int number;
    cout << "Enter your number";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Your Number is Even\n";

    } else {
        cout << "Your Number is Odd\n";
    }

    // Conditonal Statements [if-else if-else]

    int marks;
    cout << "Enter Your Marks";
    cin >> marks;

    if (marks >= 90) {
        cout << "A";
    } else if (marks>= 80 && marks < 90) {
        cout << "B\n";
    } else {
        cout << "C\n";
    }

    char ch;
    cout << "Enter your character";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Character is in Lowercase";
    } else {
        cout << "Uppercase";
    }

    return 0;
}
