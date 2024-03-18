#include <iostream>

using namespace std;
int main()
{
    //Airtmetic Operators

    int a, b; 
    cout << "Enter the first integer: ";
    cin >> a; 
    cout << "Enter the second integer: ";
    cin >> b; 
    cout << "a + b = " << a + b << endl; // Adition
    cout << "a - b = " << a - b << endl; // Subtract
    cout << "a * b = " << a * b << endl; // Multiply
    cout << "a / b = " << a / b << endl; //
    cout << "a % b = " << a % b << endl; // modulus
    cout << "a ++ = " << a++ << endl;    // increment
    cout << "a -- = " << a-- << endl;    // decrement
    cout << "++ a = " << ++a << endl;    // pre incremented
    cout << "-- a = " << --a << endl;    // pre decremented
    cout << endl;


    cout << endl;
    cout << "The value of a==b is: " << (a == b) << endl;
    cout << "The value of a<=b is: " << (a <= b) << endl;
    cout << "The value of a>=b is: " << (a >= b) << endl;
    cout << "The value of a!=b is: " << (a != b) << endl;
    cout << "The value of a<b is: " << (a < b) << endl;
    cout << "The value of a>b is: " << (a > b) << endl;
    cout << endl;



// Logical operatos in c++
    int x = 10, y = 11;
    cout << "The value of ((x != y) && (x < y)) is: " << ((x != y) && (x < y)) << endl;   
    cout << "The value of ((x == y) || (x < y)) is: " << ((x == y) || (x < y)) << endl; 
    cout << "The value of !((x == y)  is: " << !(x == y) << endl; 

    cin.ignore();
    cin.get();
    return 0;
}