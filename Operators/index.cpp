#include <iostream>

using namespace std;
int main()
{
    /*
    // Airthmetic Operators in C++
    int a, b; // declare variables 'a' and 'b'
              // Prompt the user to enter the first integer
    cout << "Enter the first integer: ";
    cin >> a; // take input for 'a'

    // Prompt the user to enter the second integer
    cout << "Enter the second integer: ";
    cin >> b; // take input for 'b'
    cout << "a + b = " << a + b << endl; // Adition
    cout << "a - b = " << a - b << endl; // Subtract
    cout << "a * b = " << a * b << endl; // Multiply
    cout << "a / b = " << a / b << endl; //
    cout << "a % b = " << a % b << endl; // modulud
    cout << "a ++ = " << a++ << endl;    // increment
    cout << "a -- = " << a-- << endl;    // decrement
    cout << "++ a = " << ++a << endl;    // pre incremented
    cout << "-- a = " << --a << endl;    // pre decremented
    cout << endl;

*/
    // Assignment operators in c++ are use to assign values

    // int a = 1, b = 44;
    // char c = 'b';

    cout << endl;
    /*
    // Following are the comaprison operators in C++ Comarison operators are use to compare two values

    cout << "The value of a==b is: " << (a == b) << endl;
    cout << "The value of a<=b is: " << (a <= b) << endl;
    cout << "The value of a>=b is: " << (a >= b) << endl;
    cout << "The value of a!=b is: " << (a != b) << endl;
    cout << "The value of a<b is: " << (a < b) << endl;
    cout << "The value of a>b is: " << (a > b) << endl;
    cout << endl;
*/
    // Logical operatos in c++
    int x = 10, y = 11;
    cout << "The value of ((x != y) && (x < y)) is: " << ((x != y) && (x < y)) << endl;   // And operator prints true if both statements are true
    cout << "The value of ((x == y) || (x < y)) is: " << ((x == y) || (x < y)) << endl; // or operator prints true if a single statements is  true
    cout << "The value of !((x == y)  is: " << !(x == y)  << endl; // not operator oppose the result 
    return 0;
}