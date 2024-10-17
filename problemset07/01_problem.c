#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //?1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
    int arr[10] = {2,3,4,5,6,7,8,9,10,11};
    int *ptr = arr;
    printf("The value of *(ptr+2) is %d\n", *(ptr+2));
    printf("The value of third element of array is %d\n", arr[2]); //! [2] is the third element of the array
    return 0;
}