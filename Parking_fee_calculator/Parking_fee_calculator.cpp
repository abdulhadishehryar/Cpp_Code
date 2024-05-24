#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharge(double hours) {
    double charge = 2.0; if (hours > 3) {
        charge += 0.5 * (hours - 3); 
    }
    if (charge > 10.0) {
        charge = 10.0; }
    return charge;
}

int main() {
    double hours1, hours2, hours3;

    cout << "Enter the hours parked for customer 1: ";
    cin >> hours1;
    cout << "Enter the hours parked for customer 2: ";
    cin >> hours2;
    cout << "Enter the hours parked for customer 3: ";
    cin >> hours3;

    double charge1 = calculateCharge(hours1);
    double charge2 = calculateCharge(hours2);
    double charge3 = calculateCharge(hours3);

    double totalHours = hours1 + hours2 + hours3;
    double totalCharges = charge1 + charge2 + charge3;

    cout << fixed << setprecision(2);
    cout << "Car\tHours\tCharges" << endl;
    cout << "1\t" << hours1 << "\t" << charge1 << endl;
    cout << "2\t" << hours2 << "\t" << charge2 << endl;
    cout << "3\t" << hours3 << "\t" << charge3 << endl;
    cout << "Total\t" << totalHours << "\t" << totalCharges << endl;

    return 0;
}
