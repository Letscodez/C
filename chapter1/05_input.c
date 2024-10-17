#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    int a;
    printf("Enter a number: "); // ask the user to enter a number
    scanf("%d", &a);            // scan is function to read the number entered by the user
    //&a is the address of the variable a
    // where the number entered by the user will be stored
    printf("You entered: %d", a);
    return 0;
}