#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    p++;
    cout << p << endl;

    p--;
    cout << p << endl;

    return 0;
}
// ptr + 3 = 3 x sizeof(data type) leaves much space
// ptr1 + ptr2 not possiable but ptr1 - ptr2 is possible and it will give the number of elements between them but data type must be same 