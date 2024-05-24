#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char op;
    
    cout << "Enter first number, operator, and second number: ";
    cin >> num1 >> op >> num2;
    
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Addition = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Subtraction = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Multiplication = " << result << endl;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero.";
                return 0;
            }
            cout << "Division = " << result << endl;
            break;
        default:
            cout << "Invalid operator!";
            return 0;
    }
    
    return 0;
}
