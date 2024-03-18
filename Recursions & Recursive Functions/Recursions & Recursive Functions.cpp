#include<iostream>
#include<cmath>
using namespace std;


// Recursion in C++ is the process where a function calls itself directly or indirectly. It's a powerful concept that allows functions to solve complex problems by breaking them down into smaller, more manageable sub-problems. 


int factorial(long long n) {

	if (n <= 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

//factorial 4 = 4* factorial (4-1 = 3)
//factorial 4 = 4* 3 * factorial (3-1 = 2)
//factorial 4 = 4* 3 * 2 * factorial (2-1 = 1)
//factorial 4 = 4* 3 * 2 * 1
int main() {
	int a;
	cout << "Enter a number to find its factorial = ";
	cin >> a;
	cout << "The factorial of " << a << " is " << factorial(a);
}
