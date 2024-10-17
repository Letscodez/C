#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    int i = 10;
    // Print i first and then decrement
    printf("--i = %d\n", --i);
    // Decrement i first and then print
    printf("i-- = %d\n", i--);
    // Compound assignment operator
    i+=5; //Is same as i = i + 5
    i*=5; //Is same as i = i * 5
    i/=5; //Is same as i = i / 5
    i-=5; //Is same as i = i - 5
    i%=5; //Is same as i = i % 5
    return 0;
}