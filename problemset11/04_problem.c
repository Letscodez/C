#include <stdio.h>
#include <stdlib.h>
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).
    int *table = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        table[i] = 7 * (i + 1);
    }
    table = (int *)realloc(table, 15 * sizeof(int));
    for (int i = 10; i < 15; i++)
    {
        table[i] = 7 * (i + 1);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("7 x %d = %d\n", i + 1, table[i]);
    }
    free(table);

    return 0;
}