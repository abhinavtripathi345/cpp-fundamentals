#include<iostream>
using namespace std;

int main() {
    int n, num, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    num = n;

    while (num != 0) {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == n) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not an Armstrong Number";
    }

    return 0;
}