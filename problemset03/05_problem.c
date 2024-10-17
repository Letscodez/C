#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future!
    //? 4. Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user
    char inp;
    printf("Enter a character: ");
    scanf("%c", &inp);
    printf("The ascii value of %c is %d\n", inp, inp);
    if(inp >= 65 && inp <= 90)
    {
        printf("The character is an uppercase letter.\n");
    }
    // 65-90 are ascii values of A-Z
    else if(inp >= 97 && inp <= 122)
    {
        printf("The character is a lowercase letter.\n");
    }
    // 97-122 are ascii values of a-z
    else if(inp >= 48 && inp <= 57)
    {
        printf("The character is a digit.\n");
    }
    // 48-57 are ascii values of 0-9
    else{
        printf("The character is a special character.\n");
    }
    // 0-47, 58-64, 91-96, 123-127 are special characters
    return 0;
}