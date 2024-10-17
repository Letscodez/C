#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Task 8: Write a program to calculate the factorial of a given number using a for loop.

    int a, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    while (a) {
        sum *= a;
        a--;
    }
    printf("Factorial: %d\n", sum);
    return 0;
}
