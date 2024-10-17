#include <stdio.h>
#include <stdlib.h>
int main() 
{
    //! LetsCodez: Scripting The Future
    //? Quick Quiz: Write a program to create an array of size n using calloc where n is an integer entered by the user.
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int* array = calloc(n, sizeof(int));
    printf("%d\n", sizeof(array));
    printf("\n");
    return 0;
}