#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Check if a file exists
    FILE *ptr;
    ptr = fopen("letscodez.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist\n");
    }
    else
    {
        printf("The file exists\n");
    }
    fclose(ptr);
    return 0;
}