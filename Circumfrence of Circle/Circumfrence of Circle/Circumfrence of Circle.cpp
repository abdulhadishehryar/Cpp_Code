#include<iostream>
#include<cmath>
using namespace std;
int main() {
    // The formula of Circumference of circle is (C = 2*pi*r) Where pi is constant and r is  radius of circle
    float pi = 3.14;
    float radius ;

     cout << "Enter the radius of circle to find its Circumference: ";
    cin >> radius;

    if (radius <= 0) {
        cout << "Please enter a valid radius." << endl;
    }
    else {

        float circum = 2 * pi * radius;
        cout << "The circumference of circle with radius " << radius << " is " << circum << endl;

    }
    cout << "Enter any key to terminate the program: ";

    cin.ignore();
    cin.get();
    return 0;
}
