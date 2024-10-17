#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Arrays using pointers
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // It is equivalent to int *ptr = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("The address of element %d of the array is %d\n", i, ptr );\
        printf("The value is %d\n", *ptr);
        ptr++;
    }
    return 0;
}