#include <stdio.h>
#include <stdlib.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float* array = malloc(n*sizeof(float));
    for( int i = 0 ; i < n ; i++){
        array[i]=i*1.0;
    }
    for (int i = 0 ; i < sizeof(array)+1; i++){
        printf("%f\n", array[i]);
    }
    return 0;
}