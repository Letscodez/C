#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? 3. Write a program to create an array of 10 integers and store multiplication table of 5 in it.
    int arr[10];
    for (int i = 1 ; i <= 10; i++){
        arr[i-1] = 5*i;
    }
    for (int i = 0; i < 10; i++){
        printf("5 x %d = %d\n", i+1, arr[i]);
    }
    
    return 0;
}