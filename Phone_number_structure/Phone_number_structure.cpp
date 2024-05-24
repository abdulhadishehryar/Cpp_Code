#include <iostream>

using namespace std;

struct Phone {
    int areaCode;
    int exchange;
    int number;
};

int main() {
    Phone myNumber = { 212, 767, 8900 };
    Phone yourNumber;

    cout << "Enter your area code, exchange, and number: ";
    cin >> yourNumber.areaCode >> yourNumber.exchange >> yourNumber.number;

    cout << "My number is (" << myNumber.areaCode << ") " << myNumber.exchange << "-" << myNumber.number << endl;
    cout << "Your number is (" << yourNumber.areaCode << ") " << yourNumber.exchange << "-" << yourNumber.number << endl;

    return 0;
}
