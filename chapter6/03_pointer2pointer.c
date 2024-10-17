#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? POINTER TO A POINTER
    //////////////////////////////
    int i = 10;
    //* Find the mistake:-
    //* int j = &i; // We have to use * to declare a pointer variable
    int* j = &i;
    int** k = &j;
    //* Printing the values and addresses
    printf("The value of i is = %d\n", i);
    printf("The value of i is = %d\n", *(&i));// Dereferencing the address of i
    printf("The value of i is = %d\n", *j); // Dereferencing the pointer
    printf("The value of i is = %d\n", **(&j)); // Dereferencing the address of pointer
    printf("The value of i is = %d\n", **k); // Dereferencing the pointer to pointer
    return 0;
}