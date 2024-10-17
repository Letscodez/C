#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future!
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 90)
    {
        printf("You got A grade.\n");
    }
    else if (percentage >= 80)
    {
        printf("You got B grade.\n");
    }
    else if (percentage >= 70)
    {
        printf("You got C grade.\n");
    }
    else if (percentage >= 60)
    {
        printf("You got D grade.\n");
    }
    else if (percentage >= 50)
    {
        printf("You got E grade.\n");
    }
    else
    {
        printf("You got F grade.\n");
    }
    return 0;
}