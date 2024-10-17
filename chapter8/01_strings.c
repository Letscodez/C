#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? STRINGS
    char my_name[] = {'L', 'e', 't', 's', 'C', 'o', 'd', 'e', 'z', '\0'};
    char my_name2[] = "LetsCodez"; //? This is the same as the above line
    //* \0 is the null character, which is used to terminate strings in C
    for (int i = 0; sizeof(my_name); i++)
    {
        printf("%c", my_name[i]);
    }
    printf("\n"); 
    printf("%s\n", my_name2); //? %s is used to print strings it will print until it finds a null character
    return 0;
}