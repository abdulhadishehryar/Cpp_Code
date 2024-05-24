#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}

int main() {
    char inputType;
    cout << "D-Double and I-Integer" << endl;
    cout << "Enter Type of Input: ";
    cin >> inputType;

    if (inputType == 'I' || inputType == 'i') {
        int total = 0, num, n;
        cout << "Enter Number of Inputs: ";
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cout << "Input Number " << i + 1 << ": ";
            cin >> num;
            total = sum(total, num);
        }
        cout << "SUM of Numbers: " << total << endl;
    }
    else if (inputType == 'D' || inputType == 'd') {
        float total = 0.0, num;
        int n;
        cout << "Enter Number of Inputs: ";
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cout << "Input Number " << i + 1 << ": ";
            cin >> num;
            total = sum(total, num);
        }
        cout << "SUM of Numbers: " << total << endl;
    }
    else {
        cout << "Invalid Input Type!" << endl;
    }

    return 0;
}
