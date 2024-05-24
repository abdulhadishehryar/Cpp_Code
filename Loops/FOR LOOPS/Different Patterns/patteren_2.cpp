#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // int num;
    // cout<< "Enter how many line you want to generate = ";
    // cin >> num;
    int num = 6;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << "Press any key to exit the program." << endl;

    cin.ignore();
    cin.get();
    return 0;
}