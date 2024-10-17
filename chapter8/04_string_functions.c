#include <stdio.h>
#include <string.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? String Functions
    char str1[] = "Hello";
    printf("%d \n", sizeof(str1)); //* sizeof() function returns the size of the string including the null character.
    printf("%d \n", strlen(str1)); //* strlen() function returns the length of the string excluding the null character.
    /////////////////////////
    //?StrCpy
    char str2[20];
    strcpy(str2, str1); //* strcpy() function is used to copy the content of one string to another.
    puts(str2);
    ///////////////////////////
    //?Strcat
    char str3[20] = "World";
    strcat(str1, str3); //* strcat() function is used to concatenate two strings.
    puts(str1);
    return 0;
}