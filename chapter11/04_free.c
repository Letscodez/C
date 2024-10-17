#include <stdio.h>
#include <stdlib.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Free()
    int *ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of element %d is %d\n", i, ptr[i]);
    }
    //////////////////////////////
    // Releasing the memory
    free(ptr);
    // Trying to print the values of ptr after free()
    for (int i = 0; i < 6; i++)
    {
        printf("The value of element %d is %d\n", i, ptr[i]);
    }
    return 0;
}