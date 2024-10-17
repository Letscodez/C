#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? 1. Write a program to read three integers from a file
    FILE *ptr;
    ptr = fopen("example.txt", "r");
    int read1, read2, read3;
    fscanf(ptr, "%d %d %d", &read1, &read2, &read3);
    printf("%d, %d, %d\n", read1, read2, read3);
    fclose(ptr);
    return 0;
}