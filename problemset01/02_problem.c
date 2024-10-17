#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    // Problem 2: Write a program that takes the radius of a circle and prints its area.
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("The area of the circle is %f\n", 3.14 * radius * radius);
    // area of cylinder
    int height;
    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);
    printf("The volume of the cylinder is %f\n", 3.14 * radius * radius * height);
    return 0;
}