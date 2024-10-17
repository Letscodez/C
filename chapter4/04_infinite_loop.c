#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    int i = 0;
    while (i < 10)
    {
        printf("the value of i is %d\n", i);
        // i is not incrementing
        // so the loop will run infinitely
        // as the condition will always be true
    }
    return 0;
}