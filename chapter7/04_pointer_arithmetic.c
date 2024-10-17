#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    int i = 32;
    int *prt = &i;
    printf("The address of i is %u\n", prt);
    prt++; //? This will increment the address by 4 bytes (int = 4 bytes)
    printf("The address of i is %u\n", prt);
    //* Other data types have different sizes according to which the address will be incremented
    char c = '3';
    char *ptr = &c;
    printf("The address of c is %u\n", ptr);
    ptr++; //* This will increment the address by 1 byte (char = 1 byte)
    printf("The address of c is %u\n", ptr);
    double d = 3.4;
    double *ptr2 = &d;
    printf("The address of d is %u\n", ptr2);
    ptr2++; //* This will increment the address by 8 bytes (double = 8 bytes)
    printf("The address of d is %u\n", ptr2);
    return 0;
}