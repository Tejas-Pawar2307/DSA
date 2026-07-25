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

// Print the count of odd Number
int countOddNum(int n) {
    int i = 1;
    int count = 0;

    while (i<=n) {
        if (i%2!=0) {
            count++;
        }
        i++;
    }

    cout << count << endl;
    return 0;
}

// // Write a Function to print only Multiples in reverse which are divisible by 3.

int multipleInReverse(int n) {
    int i = n;

    while (i >= 1) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
        i--;
    }
    return 0;
}


int main() {
    printEvenNumber(50);
    countOddNum(10);
    multipleInReverse(15);
    return 0;
    
}
