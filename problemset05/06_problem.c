#include <stdio.h>
int sum(int);
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is %d\n", n, sum(n));
    return 0;
}