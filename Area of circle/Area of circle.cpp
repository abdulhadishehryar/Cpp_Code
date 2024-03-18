#include<iostream> 
#include<cmath> 
using namespace std;

int main() {

	// The formula for finding the area of a circle is (Area = π × r²) 
	const float pi = 3.14159265358;
	float radius;
	cout << "Enter the radius of the circle to find its area: ";
	cin >> radius;
	if (radius <= 0) {
		cout << "Please enter a number greater than 0 ";
	}
	else {
		float area = pi * (radius * radius);
		cout << "The area of the circle with radius " << radius << " is " << area << endl;
	}
	cout << "Enter any key to termiinate the program ";
	cin.ignore();
	cin.get();
	return 0;
}
