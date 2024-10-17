#include <stdio.h>
//function prototype
int sum(int,int);
int sum(int a, int b)
{
    return a+b;
}

int main() 
{
    //! LetsCodez: Scripting The Future
    //? CALL BY VALUE
    //////////////////////////////
    int a = 10, b = 20;
    printf("The sum of %d and %d is %d\n", a, b, sum(a,b));
    //* The value of a and b will not change
    return 0;
}