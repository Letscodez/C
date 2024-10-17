#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? A pointer is a variable which stores the address of another variable.

    // &a shows the address of a
    int a = 10;
    int *j = &a;                            // j is a pointer which stores the address of a
    printf("The address of a is %p\n", &a); // %p is used to print the address of a variable(hexadecimal), use %u for integer
    printf("The address stored in j is %p\n", j);
    //* *j is used to get the value stored at the address stored in j
    printf("The value of stored at the address inside j is %d\n", *j);
    return 0;
}