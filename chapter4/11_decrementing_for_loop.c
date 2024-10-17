#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? A CASE OF DECREMENTING FOR LOOP
    for (int i = 5; i; i--)
        printf("%d\n", i);
    //* This for loop will keep on running until i become 0.
    // The loop runs in following steps:
    // 1. ‘i’ is initialized to 5.
    // 2. The condition “i” (0 or none) is tested.
    // 3. The code is executed.
    // 4. ‘i’ is decremented.
    // 5. Condition ‘i’ is checked & code is executed if it’s not 0.
    // 6. And so on until ‘i’ is non 0.
    return 0;
}