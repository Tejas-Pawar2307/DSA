#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number:";
    cin >> n;

    int i = n;
    while (i >= 1) {
        cout << i << endl;
        i--;
    }

    

    return 0;

}

// Print the sum.

int main() {
    int num;
    cout << "Enter Your Number:";
    cin >> num;

    int i = 1;
    int sum = 0;
    while (i <= num) {
        sum += i;
        i++;
    }

    cout << "Your Sum is =" << sum << endl;

    int sum = 0;
    for (int i=1; i<=num; i++) {
        sum += i;
    }
    cout << "Your Sum is =" << sum << endl;
    return 0;
}
