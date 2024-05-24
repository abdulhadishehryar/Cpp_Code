#include <iostream>
#include <cmath>

using namespace std;

double power(double n, int p = 2) {
    return pow(n, p);
}

int main() {
    double n;
    int p;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the power (default is 2): ";
    cin >> p;
    cout << "The result is: " << power(n, p) << endl;
    return 0;
}
