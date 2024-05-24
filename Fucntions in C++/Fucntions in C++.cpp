#include<iostream>
#include<cmath>
using namespace std;

// int sum(int, int, int);
// void g();

int sum(int a, int b, int c) {
	int result = a + b + c;
		return result;		
}

int main() {
	int num1 = 10 , num2 = 12 , num3 = 22;
	// cout << "Enter 1st number : ";
	// cin >> num1;
	// cout << "Enter 2nd number : ";
	// cin >> num2;
	cout << "The sum of two sumbers = " << sum(num1,num2,num3) << endl;
	int num4=2, num5= 4, num6=7 ;
	cout<<	"the sum of to nuumbers = " << sum(num4,num5,num6)<<endl;
	return 0;
	// g();

}


// int sum(int a, int b, int c) { 
// 	int result = a + b + c;
// 		return result;		
// }

// Some function does'nt take argument and dose not return something such as

// void g() {
// 	cout << "Hello how are you";
// }