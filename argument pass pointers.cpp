#include <iostream>
using namespace std;

void pa( int*ptr)  // function definition take pointer as argument
{
    *ptr = 20;  // dereferencing the pointer to change the value of a
    cout << *ptr << endl;  // prints 20
}

int main()
{
    int a = 10;

    pa(&a);      // function call passing address of a
    cout << a;    // prints 20

    return 0;
}