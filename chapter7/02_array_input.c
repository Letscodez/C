#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Taking input in an array
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of element %d of the array:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of element %d of the array is %d\n", i, arr[i]);
    }
    return 0;
}