#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << i * i * i << " ";
    }
        cin.get();
    cin.ignore();
    cout << "Enter any key to exit: ";
    return 0;
}
