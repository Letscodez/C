#include <stdio.h>
int sum(int, int);
float average(int, int);
int sum(int a, int b)
{
    return a + b;
}
float average(int a, int b)
{
    return (a + b) / 2.0;
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 5. Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
    int a = 10;
    int b = 11;
    printf("The sum of a and b is %d\n", sum(a, b));
    printf("The average of a and b is %2.f\n", average(a, b));
    return 0;
}