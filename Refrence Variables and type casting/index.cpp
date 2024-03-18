#include <iostream>
using namespace std;
int c = 110;
int main()
{
    /*
        int a, b, c;
        cout << "Enter Value of a: ";
        cin >> a;
        cout << "Enter Value of b: ";
        cin >> b;
        c = a + b;
        cout << "The sum is " << c;
        cout << "This is the value of global variable c which i've created outside the maiin(): " <<::c ; // :: it is a scope resolution operator whoch allows us to access the global variable value outside the scope
        */

       /*
       ************** Builtin Datatypes **************
    float d = 11.92;
    long double e = 11.92;
    cout << "The size of d is " <<sizeof(d);
    cout << endl;
    cout << "The size of e is " <<sizeof(e);
    */
    //    ************** Refrence Variables **************
    // int num = 110;
    // int & number = num; //  In this case num is the orignal variable and i've refrenced number with num so weather i call num or number 110 will be printed
    // cout << endl;
    // cout<< number;

    //    ************** Type Casting************** it basically means to convert one data tyoe to another

    float f = 12.33;
    cout<< f << (int)f;



    return 0;
}
