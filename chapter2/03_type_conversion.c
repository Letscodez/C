#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    // • int and int → int
    // • int and float → float
    // • float and float → float
    int a = 3.5; // In this case 3.5 (float) will be demoted to 3 (int)because a is not able to store floats.
    float b = 8; // a will store 8.0 | 8 -> 8.0 (promotion to float)
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    return 0;
}