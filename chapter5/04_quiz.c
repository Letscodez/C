#include <stdio.h>
#include <math.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Quick Quiz: Use the library function to calculate the area of a square with side a.
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The area of square of side %d is %.2f\n", a, pow(a, 2));
    //%f is used to print floating point numbers
    // As pow() returns a double value, we use %f
}