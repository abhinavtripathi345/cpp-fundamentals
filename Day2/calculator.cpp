#include <iostream>
using namespace std;

int main() {
    int n;
    double num, result;
    char op;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "How many numbers do you want to calculate? ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input!";
        return 0;
    }

    cout << "Enter the numbers:" << endl;
    cin >> result;  
    for (int i = 1; i < n; i++) {
        cin >> num;

        switch (op) {
            case '+':
                result+= num;
                break;

            case '-':
                result -=num;
                break;

            case '*':
                result *= num;
                break;

            case '/':
                if (num == 0) {
                    cout << "Division by zero is not possible";
                    return 0;
                }
                else{
                result /= num;
                }
                break;
                

            default:
                cout << "Invalid operator!";
                return 0;
       
       
        }
    
    }

    cout <<"Result=" <<result<< endl;
    return 0;
}