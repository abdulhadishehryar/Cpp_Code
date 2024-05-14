#include <iostream>
using namespace std;

int main() {
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    int binaryNum[32];
    int i = 0;

    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    int j = i - 1;
    while (j >= 0) {
        cout << binaryNum[j];
        j--;
    }
    cout << endl;

    return 0;
}
