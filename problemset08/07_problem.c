#include <stdio.h>
#include <string.h>
char *decrypted(char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        string[i] = string[i] - 1;
    }
    return string;
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 6. Write a program to encrypt a string by adding 1 to the ascii value of its characters
    char name[] = "MfuDpef{";
    printf("%s", decrypted(name));
    return 0;
}