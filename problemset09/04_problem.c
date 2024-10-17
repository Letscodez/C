#include <stdio.h>
typedef struct complex
{
    int real;
    int imag;
} comp;
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 5. Write a program with a structure representing a complex number.
    comp c1 = {2, 3};
    comp c2 = {4, 5};
    printf("The sum of complex numbers c1 and c2 is %d + %di\n", c1.real + c2.real, c1.imag + c2.imag);
    return 0;
}