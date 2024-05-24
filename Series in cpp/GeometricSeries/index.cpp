#include <iostream>
using namespace std;

int main() {
    int N;
    float a, r;
    cout << "Enter the number of terms: ";
    cin >> N;
    cout << "Enter the first term: ";
    cin >> a;
    cout << "Enter the common ratio: ";
    cin >> r;

    float term = a;
    for (int i = 0; i < N; ++i) {
        cout << term << " ";
        term *= r;
    }
        cin.get();
    cin.ignore();
    cout << "Enter any key to exit: ";
    return 0;
}
