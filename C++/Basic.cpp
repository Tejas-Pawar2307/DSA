#include <iostream>
using namespace std;



int main() {

    // First Program.
    cout << "Hello World....!" << endl;

    // Declaration of Variable
    int age = 19;
    cout << "Your Age is:" << age << endl;

    char grade = 'A';
    cout << grade << endl;

    float PI = 3.14f;
    cout << PI << endl;

    bool issafe = false;
    cout << issafe << endl;

    // Type Casting

    char grade = 'a';

    int value = grade;
    cout << value << endl;

    double price = 101.25;

    int value = int(price);
    cout << value << endl;

    // INPUT

    int age;
    cout << "Enter Your age :";
    cin >> age;

    cout << "Your age is :" << age << "Years old" <<endl;

    // Arithematic Oprators 

    int a = 5 , b = 10;

    cout << "sum = " << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "Product = " << (a*b) << endl;
    cout << "Division = " << (a/b) << endl;
    cout << "modulo = " << (a%b) << endl;

    return 0;
}
