#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Write in a file
    FILE *ptr;
    ptr = fopen("letscodez.txt", "w");
    fprintf(ptr, "This is a file created by me\n");
    fclose(ptr);
    return 0;
}