#include <stdio.h>
//function prototype
//? Sum function should change the value of a and b
int sum(int* ,int*); //* Accepting the address of a and b
int sum(int* a, int* b)
{
    *a = 100; //* Changing the value of a by changing the value at address
    return *a + *b;
}

int main() 
{
    //! LetsCodez: Scripting The Future
    //? CALL BY REFERENCE
    //////////////////////////////
    int a = 10, b = 20;
    printf("The value of a is %d\n", a);
    //? Passing the address of a and b
    printf("The sum of %d and %d is %d\n", a, b, sum(&a,&b));
    //* The value of a and b will change
    printf("The value of a is %d\n", a);
    return 0;
}