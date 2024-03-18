#include <iostream>
#include <cmath>
using namespace std;

int sum(int a, int b, int c = 2) {

	return a * b * c;

}
int main()
{
	int a, b, c;
	cout << "Enter the value of a = ";
	cin >> a;
	cout << "Enter the value of b = ";
	cin >> b;
	cout << "Enter the value of c = ";
	cin >> c;
	//cout << "The product is = " <<  sum(a,b); //  in this i have not given the value f c theirfore it will take the default value of c
	cout << "The product is = " << sum(a, b, c); //  in this i have given the value f c theirfore it will take the default value of c
	cin.ignore();
	cin.get();
	return 0;
}