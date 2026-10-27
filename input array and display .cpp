#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) { // input values in arry till n nmber 
        cin >> arr[i];
    }

    cout << "Array values are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // display different values of array till n number 
    }

    cout << endl;
    return 0;
}
