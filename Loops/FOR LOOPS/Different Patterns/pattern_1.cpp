#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    cout<< "Enter how many line you want to generate = ";
    cin >> num; 
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1;  j <= i; j++)
        {
            cout<< j << " ";
        }
        cout<< endl;
    }
    cout << "Press any key to exit the program." << endl;

    cin.ignore();
    cin.get();
    return 0;

}