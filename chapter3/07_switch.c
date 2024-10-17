#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    int x;
    printf("Enter 1,2,3 or 4: ");
    scanf("%d", &x);
    switch (x){
    case 1:
        printf("You entered 1.\n");
        break; // break is used to exit the switch statement
    case 2:
        printf("You entered 2.\n");
        break;//otherwise it will execute all the cases after the matching case
    case 3:
        printf("You entered 3.\n");
        break;//if you don't use break, it will execute all the cases after the matching case
    case 4:
        printf("You entered 4.\n");
        break;
    default:
        printf("You entered something else.\n");
        break;
    }
    return 0;
}