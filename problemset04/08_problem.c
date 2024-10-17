#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Task 10: Check whether a given number is prime or not using loops.

    int number, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 2) {
        printf("This is not a prime number.\n");
        return 0;
    }
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {            
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("It's a prime number.\n");
    else
        printf("This number is not a prime number.\n");
    return 0;
}
