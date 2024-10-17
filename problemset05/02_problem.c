#include <stdio.h>
// Function prototype
float fahrenheit(float celsius);
// Function definition
float fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 2. Write a function to convert Celsius temperature into Fahrenheit
    printf("Enter the temperature in Celsius: ");
    float celsius;
    scanf("%f", &celsius);
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit(celsius));
    return 0;
}