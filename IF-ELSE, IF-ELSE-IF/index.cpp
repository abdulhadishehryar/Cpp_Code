
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "You are not allowed ";
    }
    else
    {
        cout << "You are allowed ";
    }

    return 0;
}
