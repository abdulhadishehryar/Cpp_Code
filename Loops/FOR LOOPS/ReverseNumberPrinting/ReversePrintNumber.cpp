#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Reverse number printing from 100 to 1
    int upperLimit;
    cout << "Enter a number from where u want to print reverse numbers: ";
    cin >> upperLimit;
    for (int i = upperLimit; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << "Press Enter to exit...";
    cin. ignore();
    cin. get();
}