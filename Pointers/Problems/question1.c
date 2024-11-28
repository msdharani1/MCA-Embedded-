/*
Problem: Pointer Operations

Write a C program that:

    Declares an integer variable x and assigns it the value 10.
    Declares a pointer p that points to x.
    Prints the following:
        The value of x using the pointer p.
        The address of x using the pointer p.
    Declares another integer variable y and assigns it the value 20.
    Changes the pointer p to point to y and prints:
        The value of y using the pointer p.
        The address of y using the pointer p.


    Sample output:

        Value of x: 10
        Address of x: 0x7ffee7b29e0c
        Value of y: 20
        Address of y: 0x7ffee7b29e10
*/


#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    p = &x;
    printf("Value of X: %d \n", *p);
    printf("Address of X: %p \n", p);
    int y = 20;
    p = &y;~
    printf("Value of Y: %d \n", *p);
    printf("Address of Y: %p \n", p);
    return 0;
}


/*
    Output:

    Value of x: 10
    Address of x: 0x7ffee7b29e0c
    Value of y: 20
    Address of y: 0x7ffee7b29e10

*/