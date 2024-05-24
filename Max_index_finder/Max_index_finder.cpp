#include <iostream>
using namespace std;


int maxint(int arr[], int size) {
    int maxIndex = 0; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i; }
    }
    return maxIndex;
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = maxint(arr, n);

    cout << "The largest element is " << arr[maxIndex] << " at index " << maxIndex << endl;

    delete[] arr; 
    return 0;
}
