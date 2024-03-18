#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    // Pointer is just a data type which holds the address of other data types
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int *b = &a;
    // In simple words & is an (address of operator) which is use to find address of an variable

    /*
    cout<<"The address of a is " << b<<endl;
    cout<<"The address of a is " << &a<<endl;
    */

    // The  * is an (value at ) or dereferene operator which is use to the  find the varible  (value) which has been assign by the pointer variable in this case b is an pointer variable and * is use to find the value assign to a variable which has been assign to b
    cout << "The value at address b is " << *b << endl;

    int **c = &b; // it is a ointer to pointer variable which is se to hold the address of the other pointer variables 
    cout << "The address of b is " <<*c<< endl;
    cout << "The address of b is " <<c<< endl;
    // in this b is a pointer variable and is holding the address of b whch is already a pointer variable so by using **c we will see the value of (a) which is assign to b 
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;
    return 0;
}