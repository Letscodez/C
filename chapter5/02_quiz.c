#include <stdio.h>
// Function prototype
void goodMorning();
void goodAfternoon();
void goodNight();
// Function definition
void goodMorning()
{
    printf("Good Morning!\n");
}
void goodAfternoon()
{
    printf("Good Afternoon!\n");
}
void goodNight()
{
    printf("Good Night!\n");
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? Quick Quiz: Write a program with three functions
    //* 1. Good morning function which prints “good morning”.
    //* 2. Good afternoon function which prints “good afternoon”.
    //* 3. Good night function which prints “good night”.
    goodMorning();
    goodAfternoon();
    goodNight();
    //* • Execution of a C program starts from main().
    //* • Every function gets called directly or indirectly from main().
    return 0;
}