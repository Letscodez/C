#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future!
    //? 6. Write a program to find the greatest of four numbers entered by the user.
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest number.\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest number.\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the greatest number.\n", c);
    }
    else
    {
        printf("%d is the greatest number.\n", d);
    }
    return 0;
}