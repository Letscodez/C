#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Declaring a different types of pointer variable
    //////////////////////////////
    //* Declaring Variables
    char x = 'A';
    float y = 23.96;
    double z = 23.96;
    int a = 10;
    //* Declaring Pointers
    char *ptr1 = &x;
    float *ptr2 = &y;
    double *ptr3 = &z;
    int *ptr4 = &a;
    //* Printing the values and addresses
    printf("1.Value of x = %c, and address of it is %u\n It occupies %d bytes on ram\n", *ptr1, ptr1, sizeof(x));
    printf("2.Value of y = %f, and address of it is %u\n It occupies %d bytes on ram\n", *ptr2, ptr2, sizeof(y));
    printf("3.Value of z = %lf, and address of it is %u\n It occupies %d bytes on ram\n", *ptr3, ptr3, sizeof(z));
    printf("4.Value of a = %d, and address of it is %u\n It occupies %d bytes on ram\n", *ptr4, ptr4), sizeof(a);
    return 0;
}