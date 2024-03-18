#include <iostream>
using namespace std;

int main()
{
    int num;
    long long factorial = 1;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    int i = 1;

    do
    {
        factorial *= i; //   This line multiplies the current value of factorial by the value of i and assigns the result back to factorial. This is where the factorial is calculated incrementally.
        i++;
    } while (i <= num);
    cout << "The factorial of " << num << " is " << factorial << endl;

    cout << "Enter any key to terminate the program. ";
    cin.ignore();
    cin.get();
    return 0;
}
