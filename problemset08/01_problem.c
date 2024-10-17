#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 2. Write a program to take string as an input from the user using %c and %s confirm that the strings are equal
    char str1[10], str2[10];
    printf("Enter a string: \n");
    scanf("%s", str1);
    puts(str1);
    printf("Enter another string: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &str2[i]);
    }
    puts(str2);
    return 0;
}