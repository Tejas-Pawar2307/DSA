#include <iostream>
using namespace std;

int main() {
    // Loops [While Loop]
    int i = 1;

    while (i <= 10) {
        cout << i << " ";
        i ++;
    }

    cout << endl;

    // Loop [for loop]
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    int n; 
    cout << "Enter Your Number";
    cin >> n;

    int oddSum = 0;
    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            oddSum += i;
        }
    }

    cout << "Odd sum = " << oddSum << endl;


    return 0;
}
