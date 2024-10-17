#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future
    //? 5. What will the following line produce in a C program:
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    //* In print is there is a repeating variable, the output is is calculated right to left.
    //* first a++ is calculated, then ++a is calculated and then a is calculated.
    //a++ = 4 
    //then the value of a is incremented by 1
    //due to ++a the value of a is incremented by 1
    //++a = 6
    //a = 6
    //Output: 6 6 4
    return 0;
}