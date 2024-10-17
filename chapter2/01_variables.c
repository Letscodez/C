#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    int i = 10;
    int j = i; // j contains the value of i (10)
    // multiple variables can be declared in a single line
    int a = 4, b = 8, c = 12, d = 16;
    //%d is for integer
    //%f is for float
    //%c is for character
    //%d is a format specifier for integers
    printf("The value of i is %d \nAnd value of j is %d\n", i, j);
    printf("The value of a is %d \nAnd value of b is %d\n", a, b);
    printf("The value of c is %d \nAnd value of d is %d\n", c, d);
    // Invalid: 'a' is used before declaration
    // float b = a + 3;

    // float a = 1.1;
    a = b = c = d = 30; // a, b, c, d all equal to 30

    return 0;
}