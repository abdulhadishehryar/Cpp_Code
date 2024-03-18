#include <iostream>
#include <cmath>
using namespace std;

int main()
{ // For even number
    int upperLimit;
    cout <<  "Enter upper limit to whichyou to print even number : ";
    cin >> upperLimit;

        for (int i = 0; i <= upperLimit; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << " " ;
        }
    }
     cout << "Press Enter to exit...";
    cin. ignore();
    cin. get();
}
