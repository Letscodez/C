#include <stdio.h>
void pattern(int);
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 7. Write a program using function to print the following pattern (first n lines)
    // *
    // * * *
    // * * * * *
    int pattern_no;
    printf("Enter the number of lines: ");
    scanf("%d", &pattern_no);
    pattern(pattern_no);
    return 0;
}