#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 1. Write a program to print multiplication table of a given number n.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i<=10 ; i++)
        printf("%d x %d = %d\n", n, i, n*i);
    return 0;

}