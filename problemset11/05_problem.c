#include <stdio.h>
#include <stdlib.h>
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 6. Attempt problem 4 using calloc().
    int *arr = (int *)calloc(5 , sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    arr = (int *)realloc(arr, 10 * sizeof(int));
    for (int i = 5; i < 10; i++)
    {
        arr[i] = i;
    }
    free(arr);
    return 0;
}