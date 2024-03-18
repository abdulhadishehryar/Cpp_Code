#include<iostream>
#include<cmath>
using namespace std;
//We are writng  the funtion on top of the main  function what if we have to write it after main it will not wor until we  use function prototypes

int sum(int, int, int);
void g();

//int sum(int a, int b, int c) {
//	int result = a + b + c;
//		return result;		
//}

// Actual parameters are those which are use outside the function in this case num1 num2
int main() {
	int num1, num2;
	cout << "Enter 1st number : ";
	cin >> num1;
	cout << "Enter 2nd number : ";
	cin >> num2;
	cout << "The sum of two sumbers = " << sum(num1,num2,0) << endl;
	g();
	return 0;

}


// Formal parameters are those which are used inside a function in this case a, b, c
int sum(int a, int b, int c) { 
	int result = a + b + c;
		return result;		
}

// Some function does'nt take argument and dose not return something such as

void g() {
	cout << "Hello how are you";
}