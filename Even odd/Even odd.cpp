#include <iostream>
using namespace std;

int main() {
    int number;
    int evenCount = 0, oddCount = 0;

    cout << "Enter a 5-digit number: ";
    cin >> number;

    if (number < 10000 || number > 99999) {
        cout << "Invalid input. Please enter a 5-digit number." << endl;
        return 1;
    }

    // Loop through each digit of the number
    while (number != 0) {
        int digit = number % 10; // Extract the last digit
        if (digit % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
        number /= 10; 
    }
    
    cout << "Number of even digits: " << evenCount << endl;
    cout << "Number of odd digits: " << oddCount << endl;

    return 0;
}
