#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter the total number of elements: ";
    cin >>  number; 

    double sum = 0;
    int num;
    int i = 0;

    while (i <  number) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        sum += num;
        i++;
    }
    cout << "Sum is = " << sum << endl;
    if (number != 0) {
        double average = sum / number;
        cout << "Average of the " << number << " numbers is: " << average << endl;
    }
    
    return 0;
}
