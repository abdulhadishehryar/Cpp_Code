#include <iostream>
#include <cmath>
using namespace std;
struct employee
{
    int salary;
    int age;
    string name;

};

int main() {
    employee ali;
    ali.name = "ali";
    ali.salary = 120900;
    ali.age = 29;
    cout<<ali.name<<endl;
    return 0;
}