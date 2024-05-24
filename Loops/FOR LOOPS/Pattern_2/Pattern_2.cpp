#include <iostream>
using namespace std;
int main()
{
	int rowNum;
	cout << "Enter number of level of pattern = ";
	cin >> rowNum ;
	for (int i = rowNum; i >= 1; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
		
}
