#include <iostream>
using namespace std;

int main()
{

    // What is a pointer? -----> data type which holds the address of other data types

    int a = 3;
    int *b = &a;

    // & ---->(Address of) operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;
    cout << endl;

    // * ----> (value at) Dereference operator
    cout << "The value at address b is "<< *b << endl;


    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value (address(c)) is " << **c << endl;
    cout << endl;

    int ***d = &c;
    cout << "The address of c " << d << endl;
    cout << "The address of c " << &c << endl;
    cout << "The address of b " << *d << endl;
    cout << "The address of a " << **d << endl;
    cout << "The value of a "   << ***d <<endl;
    cout << endl;

    // * value
    // & address 


    // a -------> 3
    // b ---------> &a 
    // &a --------> address(a)
    // *b --------> a

    // c -------> &b
    // &b -------> address(b)
    // *c -----> &b
    // **c -------> *b

    // d --------> &c
    // &c -------> address(c)
    // *d -------> c -------> &b
    // **d -----------> *c --------> b ---------> &a
    // ***d -----------> **c -------> *b ------> a


    return 0;
}