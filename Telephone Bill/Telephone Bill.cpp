#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int call_num;
	cout << "Enter the number of calls = ";
	cin >> call_num;
	if (call_num <= 100) {
		double  c = call_num * 0.80 + 250;
		cout << "Your monthly telephone bill with " << call_num << " calls is " << c;
	}
	else if (call_num > 100 && call_num <= 250) {
		int c = call_num * 1 + 350;
		cout << "Your monthly telephone bill with " << call_num << " calls is " << c;
	}
	else {
		double  c = call_num * 1.25 + 500;
		cout << "Your monthly telephone bill with " << call_num << " calls is " << c;
	}
	return 0;
}
