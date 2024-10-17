#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order.
    int i;
    printf("Enter the value of n: ");
    scanf("%d", &i);
    for(i; i; i--)
        printf("%d\n", i);
    return 0;
}