#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 4. Repeat problem 3 for a general input provided by the user using scanf.
    int arr[10], num;
    printf("Enter the number for which you want to print the multiplication table: ");
    scanf("%d", &num);
    for (int i = 1 ; i <= 10; i++){
        arr[i-1] = num*i;
    }
    for (int i = 0; i < 10; i++){
        printf("%d x %d = %d\n", num, i+1, arr[i]);
    }
    return 0;
}