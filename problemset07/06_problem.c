#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively
    int tables[3][10];
    int multiplier[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tables[i][j] = multiplier[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tables[i][j]);
        }
        printf("\n");
    }
    return 0;
}