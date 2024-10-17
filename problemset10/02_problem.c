#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 2. Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.
    FILE *file = fopen("output.txt", "a");
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    fprintf(file, "Multiplication Table of %d\n", num);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(file, "%d x %d = %d\n", num, i, num * i);
    }
    fclose(file);
    return 0;
}