#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num;
	long long factorial = 1;
	cout << "Enter a number to find its factorial: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		factorial *= i;
	}
	cout << "The factorial of " << num << " is " << factorial << endl;

	return 0;
}