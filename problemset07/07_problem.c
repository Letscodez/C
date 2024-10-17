#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? 8. Repeat problem 7 for a custom input given by the user.

    int tables[3][10];
    int multiplier[3];
    printf("Enter 3 numbers to generate tables: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &multiplier[i]);
    }
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