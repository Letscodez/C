#include <stdio.h>
#include <string.h>
void isthere(char *string, char letter)
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == letter)
        {
            printf("Yes the character %c is in this string.", letter);
            break;
        }
        else if (i == strlen(string)-1)
        {
            printf("No the character %c isn't in this string.", letter);
        }
    }
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 9. Write a program to check whether a given character is present in a string or not.
    char string[] = "Hello Hi welcome";
    isthere(string, 'y');
    return 0;
}