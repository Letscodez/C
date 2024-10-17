#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? Break and Continue
    //* The ‘break’ statement is used to exit the loop irrespective of whether the condition is true or false.
    //* Whenever a “break” is encountered inside the loop, the control is sent outside the loop
    //////////////////////////////////////
    //* The ‘continue’ statement is used to immediately move to the next iteration of the loop.
    //* The control is taken to the next iteration thus skipping everything below “continue” inside the loop for that iteration.
    for (int i = 0; i < 1000; i++)
    {
        if (i == 2)
            continue; // skip the code below and continue with the next iteration
        printf("Value of i is %d\n", i);
        if (i == 5)
            break; // break means exit the loop now!
    }
    return 0;
}