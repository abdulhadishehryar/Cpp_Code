#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter number  to test weather it is positive or not :";
    cin >> num;
    if (num < 0)
    {
        cout << "The number is negative " << endl;
    }
    else
    {
        cout << "The number is positive" << endl;
    }

    return 0;
}