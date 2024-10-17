#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //?1. Write a program to print the address of a variable. Use this address to get the value of the variable.
    //Declare a variable
    int a = 3;
    //Declare a pointer variable
    int *ptr = &a;
    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", &a); //? %p is used to print the address of a variable
    printf("The value of a is %d\n", *ptr); //? *ptr is used to get the value of the variable
    return 0;
}