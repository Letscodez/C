#include <stdio.h>
// Function prototype
int sum(int, int);
// Function definition
int sum(int a, int b)
{
    printf("The sum is %d\n", a + b);
    return a + b; // Return statement
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? FUNCTION
    //*1. A function is a block of code which performs a particular task.
    //*2. A function can be reused by the programmer in a given program any number of times.
    //* • Execution of a C program starts from main().
    sum(2, 3); // Function call
    int x = sum(5, 7); // Storing the return value of the function in a variable
    return 0;
}