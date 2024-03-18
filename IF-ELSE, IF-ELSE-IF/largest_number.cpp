#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 >num2 && num1 <num3 )
    {
        cout << num1 <<" Is the largest";
    }
    else if (num2 >num3 && num2 <num1 )
    {
        cout << num2 <<" Is the largest";
    }
    else if (num3 > num1 && num3 > num2) {
        cout << num3 << " is the largest." << endl;
    } else {
        cout << "There are two or more numbers with the same largest value." << endl;
    }
    
    return 0;
}
