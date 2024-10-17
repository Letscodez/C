#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Open a file for writing
    FILE *ptr;
    ptr = fopen("letscodez.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    fscanf(ptr, "%d", &num);
    printf("%d", num);
}