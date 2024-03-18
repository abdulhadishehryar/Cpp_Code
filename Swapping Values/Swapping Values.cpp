#include <iostream>

using namespace std;

int main() {
    // Declare and initialize two variables

    int a, b;
    cout << "Enter the value of a = ";
    cin >>  a;
    cout << "Enter the value of b = ";
    cin >> b;

    // Print values before swapping
    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Swap the values using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Print values after swapping
    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
