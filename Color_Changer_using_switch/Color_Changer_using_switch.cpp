#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << "MAIN MENU" << endl;
    cout << "R. for Red color" << endl;
    cout << "W. for White color" << endl;
    cout << "B. for Blue color" << endl;
    cout << "Y. for Yellow color" << endl;
    cout << "Please enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 'R':
    case 'r':
        cout << "Color is Red" << endl;
        break;
    case 'W':
    case 'w':
        cout << "Color is White" << endl;
        break;
    case 'B':
    case 'b':
        cout << "Color is Blue" << endl;
        break;
    case 'Y':
    case 'y':
        cout << "Color is Yellow" << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
