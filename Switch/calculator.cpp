#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num1, num2, result;
    char op;
    cout << "Enter number 1 for operation: ";
    cin >> num1;
    cout << "Enter number 2 for operation: ";
    cin >> num2;
    cout << "Enter an operator  ";
    cin >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
            
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    cout << "Result: " << result << endl;
    
    return 0;
}