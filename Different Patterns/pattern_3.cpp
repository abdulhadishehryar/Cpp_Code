#include <iostream>
using namespace std;

int main() {
    // int rows = 5;

    for (int i = 1, number = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << number++ << " ";
        }
        cout << endl;
    }

    return 0;
}
