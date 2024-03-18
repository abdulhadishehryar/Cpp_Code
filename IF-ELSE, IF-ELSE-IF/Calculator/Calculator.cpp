#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    int num1, num2, result;
    char op;
    cout << "Enter number 1 for operation :";
    cin >> num1;
    cout << "Enter number 2 for operation : ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /) :";
    cin >> op;
    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout << "Divison by zero is not supported";
        }
    }
    else
    {
        cout << result << endl;
    }
    cout << "Result :" << result << endl;
    // Add a prompt to press Enter before exiting
    cout << "Press Enter to exit...";
    cin.ignore(); // Ignore any remaining newline characters in the input buffer
    cin.get();    // Wait for the user to press Enter
    return 0;
}