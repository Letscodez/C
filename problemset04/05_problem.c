#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Task 7: Write a program to calculate the sum of the numbers occurring in the multiplication table of 8
    //? (consider 8 x 1 to 8 x 10).

    int sum = 0;
    for (int i = 1; i <= 10; i++)
        sum += i * 8; // Multiply 8 by the current loop index and add to sum

    printf("Sum of the multiplication table of 8: %d\n", sum);
    return 0;
}
