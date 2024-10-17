#include <stdio.h>
int fibonacci(int);
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 4. Write a program using recursion to calculate nth element of Fibonacci series.
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth element of Fibonacci series is %d\n", n, fibonacci(n));
    return 0;
}