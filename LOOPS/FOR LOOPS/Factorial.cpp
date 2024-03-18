#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    long long factorial = 1;
    cin >> num;
    cout << "Enter a number to find its factorial: ";

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
        cout <<  factorial << endl;
    }

    return 0;
}