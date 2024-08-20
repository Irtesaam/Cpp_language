#include <iostream>
using namespace std;

int main()
{

    // Learn from strivers

    int *ptr; // declares the pointer
    int a = 13;
    ptr = &a;             // stores the address of var a in the ptr pointer
    cout << ptr << endl;  // prints address of var a
    cout << *ptr << endl; // * is used for derefrencing the pointer which then prints the value stored in it
    cout << &a;           // prints address of var a
    return 0;
}
