#include <stdio.h>
char slice(char *string, int x, int y)
{
    int where = x;
    for (int i = 0; i<= y-x; i++){
        string[i]=string[where];
        where++;
    }
    string[y-x+1] = '\0';
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 4. Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.
    char string[] = "Letscodez";
    puts(string);
    slice(string, 1,10);
    puts(string);
    return 0;
}