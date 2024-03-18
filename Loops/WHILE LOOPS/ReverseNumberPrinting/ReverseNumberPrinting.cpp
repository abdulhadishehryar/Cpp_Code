#include<iostream>
#include<cmath>
using namespace std;

int main(){
     int upLimit;
    cout << "Write a number from where you want to print reverse numbers till zero: ";
    cin >> upLimit;
    
    while (upLimit >= 0) {
        cout << upLimit << " ";
        upLimit--;
    }
    cout<<endl << "Enter any key to exit thr program";
    cin.ignore();
    cin.get();
}