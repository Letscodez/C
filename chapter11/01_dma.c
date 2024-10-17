#include <stdio.h>
#include <stdlib.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Using malloc() to allocate memory
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // arr[n]; // This is not allowed in C
    int *arr = (int *)malloc(n * sizeof(int));
    return 0;
}