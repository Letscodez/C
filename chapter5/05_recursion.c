#include <stdio.h>
int factorial(int);
int factorial(int n)
{
    if (n == 1 || n == 0) //? "Base Condition" is important for recursion function.
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    //! LetsCodez: Scripting The Future
    printf("%d", factorial(5));
    return 0;
}