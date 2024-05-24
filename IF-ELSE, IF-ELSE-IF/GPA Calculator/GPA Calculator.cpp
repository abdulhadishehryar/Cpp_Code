#include <iostream>
using namespace std;

int main() {
    
    int marks;
    cout << "Enter your marks= ";
    cin >> marks ;
    if (marks >= 90) {
        cout<< " Your GPA iis 4.0 ";
    }
    else if (marks >= 80 && marks <=89) {
        cout << "Your GPA iis 3.5 ";
    }  
    else if (marks >= 70 && marks <= 79) {
        cout << "Your GPA iis 3.0 ";
    }
    else {
        cout << "Your GPA is 0.0 ";
    }
    return 0;
}
