#include <stdio.h>
// Function prototype
float average(int, int, int);
// Function definition
float average(int a, int b, int c)
{
    return (a + b + c) / 3.0; // We use 3.0 to get the floating point result
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 1. Write a program using function to find average of three numbers
    printf("Enter three numbers: \n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of %d, %d, %d is %.2f\n", a, b, c, average(a, b, c));
    return 0;
}