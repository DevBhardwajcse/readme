#include <iostream>
using namespace std;
int main() {
    int a=10;
    int*ptr= &a;
    cout << *ptr;  // dereferencing the pointer to get the value *ptr just reverce and give the value of varuable a 
    *ptr=20;  // dereferencing the pointer to change the value of a
    cout << a;  // prints the value of a after changing it through pointer
    return 0;
}