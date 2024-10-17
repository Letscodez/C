#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Arrays
    //* An array is a collection of similar elements. Array allows a single variable to store multiple values.
    int example[5]; //? Declaration of an array
    //* example[5] means that the array can store 5 elements
    // int example2[500]; // This array can store upto 500 elements
    /////////////////
    example[0] = 10; //? Assigning value to the first element of the array
    example[1] = 20; //? Assigning value to the second element of the array
    /////////////////
    printf("The value of the first element of the array is %d\n", example[0]);
    printf("The value of the second element of the array is %d\n", example[1]);
    return 0;
}