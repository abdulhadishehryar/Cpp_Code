#include <iostream>

using namespace std;

int main() {
    int m;

    cout << "Enter the value of m: ";
    cin >> m;
    int n;
        if (m > 0) {
        n = 1;
    }
    else if (m == 0) {
        n = 0;
    }
    else  {
        n = -1;
    }
    cout << "The value of n is " << n ;
    cin.get();
    cin.ignore();    
    return 0;
}
