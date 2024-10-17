#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    // Problem 3: Write a program that takes the celsius temperature and prints its fahrenheit equivalent.
    float celsius;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("The temperature in fahrenheit is %f\n", fahrenheit);
    return 0;
}