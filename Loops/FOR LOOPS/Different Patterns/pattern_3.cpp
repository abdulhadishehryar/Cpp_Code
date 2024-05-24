#include <iostream>
using namespace std;

int main() {
    // int rows = 5   cin.ignore();
    cin.get();;

    for (int i = 1, number = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << number++ << " ";
        }
        cout << endl;
    }
    cout << "Press any key to exit the program." << endl;
    cin.ignore();
    cin.get();
    return 0;
}
