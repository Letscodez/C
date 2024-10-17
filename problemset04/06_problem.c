#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Task 8: Write a program to calculate the factorial of a given number using a for loop.

    int a, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (; a > 0; a--){
        sum *= a; // Multiply 'sum' by 'a' and store the result in 'sum'
    };
    printf("Factorial: %d\n", sum);
    return 0;
}
