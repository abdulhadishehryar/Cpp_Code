#include <iostream>
#include <cmath>
using namespace std;

int main(){
     int num;
    cout << "Enter a number  of which you want to print multiplication table: ";
    cin >> num;
    for (int i = 1; i <= 10; i++) 
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    cout<< "Enter any key to exit";
    cin.ignore();
    cin.get();
}