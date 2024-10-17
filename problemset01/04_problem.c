#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    // Problem 4: Write a program to calculate simple interest
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);
    float simple_interest = (principal * rate * time) / 100;
    printf("The simple interest is %f, and total amount is %f\n", simple_interest, principal + simple_interest);
    return 0;
}