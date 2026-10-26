#include <iostream>
using namespace std;
int main() {
    int a=10;
    cout << &a;
    int *var = &a;
    int **ptr = &var; // pointer of pointer
    cout << ptr << " " << var << " " << &a; // prints address of var, address of a, value of a
    return 0;
}