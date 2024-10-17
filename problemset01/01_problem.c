#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    // Problem 1: Write a program that takes the length and breadth of a rectangle and prints its area.
    int length, breadth; // Declaring both variables at the same time.
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    printf("The area of the rectangle is %d\n", length * breadth);
    return 0;
}