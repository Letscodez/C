#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("The address of element %d(value = %d) of the array is %d\n", i, arr[i], &arr[i]);
    }
    return 0;
}