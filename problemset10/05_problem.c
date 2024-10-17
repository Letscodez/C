#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 5. Write a program to modify a file containing an integer to double its value.
    FILE *file;
    file = fopen("int.txt", "r");
    int num;
    fscanf(file, "%d", &num);
    fclose(file);
    file = fopen("int.txt", "w");
    fprintf(file, "%d", num * 2);
    fclose(file);
    return 0;
}