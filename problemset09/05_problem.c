#include <stdio.h>
typedef struct complex
{
    int real;
    int imag;
} comp;
void display(comp c)
{
    printf("The complex number is %d + %di\n", c.real, c.imag);
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 5.6. Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user.
    comp c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of complex number %d: ", i + 1);
        scanf("%d", &c[i].real);
        printf("Enter the imaginary part of complex number %d: ", i + 1);
        scanf("%d", &c[i].imag);
        display(c[i]);
    }
    return 0;
}