#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i = 0;
    int m1[] = {0, 1, 2, 3, 4, 5, 6, 7};
    do
    {
        cout << "Marks of students are " << m1[i] << endl;
        i++;
    } while (i <= m1[6]);
    cin.ignore();
    cin.get();
    return 0;
}