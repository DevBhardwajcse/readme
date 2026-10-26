#include <iostream>
using namespace std;

void pass(int a)  // function definition
{
    a = 20;
    cout << a << endl;  // prints 20
}

int main()
{
    int a = 10;

    pass(a);      // function call
    cout << a;    // prints 10

    return 0;
}