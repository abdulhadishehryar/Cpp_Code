#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cout << 2 * i + 1 << " ";
    }
    cin.get();
    cin.ignore();
    cout << "Enter any key to exit: ";
    return 0;
}
