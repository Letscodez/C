#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Task: Write a program to implement sum of first 10 natural numbers using ‘for’ and ‘do-while’ loops.

    //* Using 'for' loop to calculate sum
    int sum = 0;
    for (int i = 1; i <= 10; i++) // Loop from 1 to 10
    {
        sum += i;
    }
    printf("Sum using for loop: %d\n", sum);
    // Reset sum for the next calculation
    sum = 0;
    //* Using 'do-while' loop to calculate sum
    int n = 1;
    do
    {
        sum += n;
        n++;
    } while (n <= 10); // Continue until n is greater than 10
    printf("Sum using do-while loop: %d\n", sum);
    return 0;
}
