#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 5. Write a program to sum first ten natural numbers using while loop.
    int i = 1, sum = 0;
    while(i<=10){
        sum += i;
        i++;
    };
    printf("Sum of first 10 natural numbers is: %d",sum);
    return 0;
}