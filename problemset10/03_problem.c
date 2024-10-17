#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //?3. Write a program to read a text file character by character and write its content twice in separate file.

    FILE *ptr, *ptr2;
    ptr = fopen("example.txt", "r");
    ptr2 = fopen("output.txt", "w");
    char c;
    c = fgetc(ptr);
    while (c != EOF)
    {
        fprintf(ptr2, "%c", c);
        fprintf(ptr2, "%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}