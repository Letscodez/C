#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Snake, water, gun or rock, paper, scissors is a game most of us have played during
    //? school time. (I sometimes play it even now).
    //? Write a C program capable of playing this game with you.
    //? Your program should be able to print the result after you choose snake/water or gun.
    int player1, computer;
    printf("Enter 0 for Snake, 1 for Water, 2 for Gun\n");
    scanf("%d", &player1);
    srand(time(0));
    computer = rand() % 3;
    if (player1 == computer)
    {
        printf("Game Draw!\n");
    }
    else if (player1 == 0 && computer == 1)
    {
        printf("You Win! Snake drinks Water\n");
    }
    else if (player1 == 1 && computer == 2)
    {
        printf("You Win! Water drowns Gun\n");
    }
    else if (player1 == 2 && computer == 0)
    {
        printf("You Win! Gun shoots Snake\n");
    }
    else if (player1 == 1 && computer == 0)
    {
        printf("You Lose! Snake drinks Water\n");
    }
    else if (player1 == 2 && computer == 1)
    {
        printf("You Lose! Water drowns Gun\n");
    }
    else if (player1 == 0 && computer == 2)
    {
        printf("You Lose! Gun shoots Snake\n");
    }
    else
    {
        printf("Invalid Input!\n");
    }
    
    return 0;
}