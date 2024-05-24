#include <iostream>
using namespace std;

char uppercase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    else {
        return ch;
    }
}

int main() {
    char ch;
    cout << "Enter a lowercase letter: ";
    cin >> ch;

    char upperCh = uppercase(ch);
    cout << "The uppercase letter is: " << upperCh << endl;

    return 0;
}
