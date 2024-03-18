#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a 5-digit number: ";
    cin >> number;
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 5; ++i) {
        int digit = number % 10;
        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;
        number /= 10;
    }
    cout << "Count of even digits: " << evenCount << endl;
    cout << "Count of odd digits: " << oddCount << endl;
    return 0;
}

