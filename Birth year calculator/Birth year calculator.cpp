#include <iostream>
using namespace std;

int main() {
    // Step 1: Prompt the user for their birth year
    int birth_year, currentYear;
    cout << "Enter your birth year: ";
    cin >> birth_year;
    cout<<" Enter the current year";
    cin >> currentYear;
    int age = currentYear - birth_year;
    
    cout << "Your age is: " << age << endl;

    return 0;
}
