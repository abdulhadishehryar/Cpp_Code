#include<iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Numbers before swapping: number 1 is " << num1 << " and number 2 is " << num2 << endl;

    swap(num1, num2); 

    cout << "Numbers after swapping: number 1 is " << num1 << " and number 2 is " << num2 << endl;

    return 0;
}
