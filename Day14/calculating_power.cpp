#include <iostream>
using namespace std;

int power(int base, int n) {
    if (n == 0) {
        return 1;
    }

    return base * power(base, n - 1);
}

int main() {
    int base, n;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> n;

    cout << base << " raised to the power " << power
         << " is " << power(base, n) << endl;

    return 0;
}