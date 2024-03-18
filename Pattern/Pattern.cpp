#include <iostream>
using namespace std;
int main()
{
	int rowNum;
	cout << "Enter number of level of pattern = ";
	cin >> rowNum;
	for (int i = 1 ; i<=rowNum ; i++)
	{
		for (int j= 1 ; j<= i ; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}