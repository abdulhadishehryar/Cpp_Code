#include <iostream>
using namespace std;

int main() {
    int a1[5];
    int even = 0, odd = 0;

    cout << "Enter 5 numbers to find how many are even and how many are odd:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> a1[i];
    }

    for (int i = 0; i < 5; i++) {
        if (a1[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Total even numbers: " << even << endl;
    cout << "Total odd numbers: " << odd << endl;

    return 0;
}
