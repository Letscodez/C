#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Read character from a file
    FILE *ptr;
    ptr = fopen("letscodez.txt", "r");
    char c;
    c = fgetc(ptr);
    printf("%c\n", c);
    fclose(ptr);
    return 0;
}