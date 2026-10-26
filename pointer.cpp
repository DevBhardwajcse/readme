#include <iostream>
using namespace std;
int main() {
    int a=10;  // &a will give the address of a and a will give the value of a
    int * var = &a;   // integer data type pointer can not store integer value
    cout << &a << " " << var;  // interger data type pointer stroes address of integer data type valu
    cout << sizeof(var) << " " << sizeof(&a);  // both will give same size as both are pointer
    cout << sizeof(a);  // get smaller value as compare to pointers 
    return 0;
}