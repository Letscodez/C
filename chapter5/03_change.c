#include <stdio.h>
// Function prototype
int change(int a); // Function declaration
// Function definition
int change(int a)
{
    //! This function "pretends" to change the value of 'a'
    //? But the change only affects the local copy of 'a'
    a = 77;
    return 0;
}

int main()
{
    //! LetsCodez: Scripting The Future
    //* 1. In C, arguments are passed by value, meaning a copy of the variable is passed to the function.
    //* 2. Any changes made inside the function will NOT affect the original variable in the calling function.

    int b = 22;

    //* This function sends a copy of 'b' to the function not original b
    change(b);
    //* b is still 22 because the function only worked on a copy of 'b'
    printf("b is %d\n", b); //* Output: "b is 22"

    return 0;
}
