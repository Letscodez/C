#include <stdio.h>
int len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void string_copy(char *target, char *source)
{
    for (int i = 0; i < len(source); i++)
    {
        target[i] = source[i];
    }
    target[len(source)] = '\0';
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 5. Write your own version of strcpy function from <string.h>
    char string[] = "LetsCodez";
    char copy[30];
    string_copy(copy, string);
    printf("%s", copy);
    return 0;
}