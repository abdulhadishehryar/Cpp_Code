#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int marks;
	cout << "Enter your marks to find your grade = ";
	cin >> marks;
	if (marks >= 90) {
		cout << "You got A grade";
	}
	else if (marks >= 80 && marks <= 90) {
		cout << "You got B grade ";
	}
	else if (marks >= 70 && marks <= 80) {
		cout << "You got C grade ";
	}
	else if (marks >= 60 && marks <= 70) {
		cout << "You got D grade ";
	}
	else {
		cout << "You got F grade ";

	}

	return 0;
}
