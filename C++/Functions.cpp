#include <iostream>
using namespace std;

int printNumber(int n) {
    int i = 1;
    while (i<=n) {
        cout << i << endl;
        i++;
    }
}

// Print the even numbers

int printEvenNumber(int n) {
    int i = 1;
    while (i<=n) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}

// Sum of Even Number

int sumofEvenNumber(int n) {
    int i = 1;
    int sum = 0;

    while (i <= n) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}




int main() {
    printNumber(100);
    printEvenNumber(50);
    sumofEvenNumber(250);
    return 0;
    
}
