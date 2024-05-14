#include <iostream>
using namespace std;

int main() {
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    int binaryNum[32]; 
    int i = 0;

    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2; 
        decimalNum = decimalNum / 2;       
        i++;                           
    }

    
    // Print the binary representation using a while loop
    int j = i - 1;
    while (j >= 0) {
        cout << binaryNum[j];
        j--;
    }
    cout << endl;

    return 0;
}
