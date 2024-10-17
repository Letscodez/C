#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Read a file character by character
    FILE *ptr;
    ptr = fopen("letscodez.txt", "r");
    char c;
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}