#include <stdio.h>
#include <stdlib.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Realloc() in C
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
    // Reallocating the memory
    ptr = realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of element %d is %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}