#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int &ref = a;  // ref is a reference to a
    cout << a << " " << ref;  // both will give the same value
    return 0; // changes in ref will result in cangees in a cause a and same variable is used in both the cases
}

