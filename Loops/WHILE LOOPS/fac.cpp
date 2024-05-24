#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    int i=1;
    int fact=1;
    while(i<=5)
    {
    fact*=i ;
    i++;
    }
    cout<<fact<<endl;
    return 0;
}