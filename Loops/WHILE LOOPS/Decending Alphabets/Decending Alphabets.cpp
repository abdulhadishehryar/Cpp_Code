#include <iostream>
using namespace std;
int main() {
    char ch = 'Z';
    while (ch >= 'A') {
        cout << ch << " ";
        ch--;
    }
    cout << endl;
    cin.ignore();
    cin.get();
    return 0;
}
