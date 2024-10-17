#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? 2D Arrays
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}}; //? Declaration of a 2D array which has 2 rows and 3 columns
    int arr2[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of element %d of the array:", arr[i][j]);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d , %d", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}