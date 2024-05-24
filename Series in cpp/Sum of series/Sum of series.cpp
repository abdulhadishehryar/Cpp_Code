#include <iostream>

using namespace std;

int main() {
    double sum = 0;
    int i = 1;

    while (i <= 45) {
        sum += 1 / i;
        i++;
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}
