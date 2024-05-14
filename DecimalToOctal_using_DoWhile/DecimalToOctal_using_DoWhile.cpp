#include <iostream>
using namespace std;

int main() {
    int decimalNum, remainder;
    long long octalNum = 0;
    int position = 1;

    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    do {
        remainder = decimalNum % 8;
        octalNum += remainder * position;
        position *= 10;
        decimalNum /= 8;
    } while (decimalNum > 0);

    cout << "Octal number: " << octalNum << endl;

    return 0;
}
