#include <iostream>
using namespace std;

int main() {
    int*ptr = nullptr;  // pointer is initialized with null value
    cout << ptr;  // pointer doese not have any position it will give garbage values 
    return 0; 
}

int main() {
    int a=10;
    int*ptr = NULL;
    cout << *ptr;  // pointer will give the address of null not possiable error 
    return 0; 
}