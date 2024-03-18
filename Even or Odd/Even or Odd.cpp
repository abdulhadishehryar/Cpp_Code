#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num;
	cout << "Enter a number to find weather it's even or odd = ";
	cin >> num;
	if (num % 2 == 0) {
		cout << "The entered number is even";
	}

	else {
		cout << "The entered number is odd";
	}

	return 0;
}
