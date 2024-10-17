#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    int a = 3, b = 6, c = 9;
    printf("The value of a is %d\n", a*b/c%2 + 1); // *,/,% have same precedence and they are left associative
    // +,- have lower precedence than *,/,% and they are left associative
    printf("The value is a is %d",3*b/2*c + 7 *a);
    // 3*b/2*c + 7 *a
    // 3*6/2*9 + 7 *3
    // 18/2*9 + 21
    // 9*9 + 21
    // 81 + 21
    // 102
    return 0;
}