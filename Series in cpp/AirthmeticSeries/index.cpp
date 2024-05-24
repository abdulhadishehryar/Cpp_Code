#include <iostream>
using namespace std;

int main() {
    int N;
    float a, d;
    cout << "Enter the number of terms: ";
    cin >> N;
    cout << "Enter the first term: ";
    cin >> a;
    cout << "Enter the common difference: ";
    cin >> d;

    float term = a;
    for (int i = 0; i < N; ++i) {
        cout << term << " ";
        term += d;
    }
        cin.get();
    cin.ignore();
    cout << "Enter any key to exit: ";
    return 0;
}
