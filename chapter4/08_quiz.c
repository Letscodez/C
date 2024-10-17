#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Write a program to print first ‘n’ natural number using do-while loop
    int i = 1, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    return 0;
}