#include <iostream>
using namespace std;

int main() {
    // Print upper triangle
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Print lower triangle
    for (int i = 5; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
