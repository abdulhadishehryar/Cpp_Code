#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    long long factorial = 1; // Using long long to handle larger factorial values

    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    int i = 1;
    while (i <= num)
    {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << num << " is " << factorial << endl;

    // Display message before exiting the program
    cout << endl << "Enter any key to exit the program" << endl;
    cin.ignore();
    cin.get();

    return 0;
}
