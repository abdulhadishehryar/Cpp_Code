#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

Distance largerDistance(Distance d1, Distance d2) {
    float totalInches1 = d1.feet * 12 ;
    float totalInches2 = d2.feet * 12 ;

    if (totalInches1 >= totalInches2) {
        return d1;
    }
    else {
        return d2;
    }
}

int main() {
    Distance d1, d2, larger;

    cout << "Enter first distance:" << endl;
    cout << "Feet: ";
    cin >> d1.feet;
    cout << "Inches: ";
    cin >> d1.inches;

    cout << "Enter second distance:" << endl;
    cout << "Feet: ";
    cin >> d2.feet;
    cout << "Inches: ";
    cin >> d2.inches;

    larger = largerDistance(d1, d2);

    cout << "The larger distance is: " << larger.feet << " feet, " << larger.inches << " inches." << endl;

    return 0;
}
