#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int upperLimit;
    cout<<"Enter the number where you want to go: ";
    cin >> upperLimit;
    int skipNumber;
    cout << "Enter number you want to skip: ";
    cin >> skipNumber;

    for (int i = 0; i <= upperLimit; i++)
    {
        if (i % skipNumber == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    cout << "Enter any key to exit...";
    cin.ignore();
    cin.get();
}