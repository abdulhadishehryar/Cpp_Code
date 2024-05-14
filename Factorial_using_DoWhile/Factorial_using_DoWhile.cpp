#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1; 

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of a negative number is undefined.";
        return 0;
    }

    int i = num;
    do {
        factorial *= i;
        i--;
    } while (i > 0);

    cout << "Factorial of " << num << " = " << factorial << endl;

    return 0;
}
