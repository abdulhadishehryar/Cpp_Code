#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Divide: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;
    cout << endl;
    int x = 5, y = 10;
    cout << "Before Incremented x: " << x << endl;
    cout << "Before Decremented y: " << y << endl;
    cout << "After Incremented x: " << ++x << endl;
    cout << "After Decremented y: " << --y << endl;
    cin.ignore();
    cin.get();

    return 0;
}
