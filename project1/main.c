#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? PROJECT 1: NUMBER GUESSING GAME
    //*1. We will write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please”. Similarly, if the user’s guess is too low, the program prints “Higher number please”.
    //*2. When the user guesses the correct number, the program displays the number of
    //*3. guesses the player used to arrive at the number.
    //? Hint: Use loop & use a random number generator.
    ///////////////////////////////
    // Initialize random number generator
    srand(time(0)); // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1; // rand() generates a random number between 0 and RAND_MAX. To get a number between 1 and 100, we use rand() % 100 + 1
    int guesses = 0;
    int userGuess;
    printf("Guess the number between 1 and 100\n");
    while (userGuess != randomNumber) {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        guesses++;
        if (userGuess > randomNumber)
            printf("Lower number please!\n");
        else if (userGuess < randomNumber)
            printf("Higher number please!\n");
    };
    printf("Congrats! You did it!\nYou guessed it in %d attempts\n", guesses);
    return 0;
}