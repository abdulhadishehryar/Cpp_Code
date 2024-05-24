#include <iostream>
#include <cmath>
using namespace std;

int areasquare(int side) {
    return side * side;
}

float arearectangle(float length, float breadth) {
    return length * breadth;
}

float areacircle(float radius) {
    return 3.1417 * radius * radius; 
}

int main() {
    int choice;
    cout << "Press 1 for area of square." << endl;
    cout << "Press 2 for area of rectangle." << endl;
    cout << "Press 3 for area of circle." << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        int side;
        cout << "Enter the side of square: ";
        cin >> side;
        int area = areasquare(side);
        cout << "Area of square is: " << area << endl;
        break;
    }
    case 2: {
        float length, breadth;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
        float area = arearectangle(length, breadth);
        cout << "Area of rectangle is: " << area << endl;
        break;
    }
    case 3: {
        float radius;
        cout << "Enter the radius: ";
        cin >> radius;
        float area = areacircle(radius);
        cout << "Area of circle is: " << area << endl;
        break;
    }
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}
