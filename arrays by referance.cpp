// while passing array as argument give two agrument first is arry and second is its size 
    // without size itwill act as pointer pointing to fiay 

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is: ";
    printArray(arr, n);

    // Pointer representation of array elements
    cout << "First element using pointer: " << *arr << endl; // arr is a pointer to the first element of the array
    cout << "Second element using pointer: " << *(arr + 1) << endl; // arr + 1 points to the second element of the array

    return 0;
}
