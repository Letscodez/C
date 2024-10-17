#include <stdio.h>
char* slice(char *string, int x, int y)
{
    char* ptr1 = &string[x];
    char* ptr2 = &string[y];
    string = ptr1;
    string[y]='\0';
    return string;
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 4. better slice().
    char string[]="Letscodez";
    // puts(string);
    printf("%s",slice(string, 1,3));
    return 0;
}