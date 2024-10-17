#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    //? 4. Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}