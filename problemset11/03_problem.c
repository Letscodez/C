#include <stdio.h>
#include <stdlib.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 4. Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
    int *arr = (int *)malloc(5 * sizeof(int));
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