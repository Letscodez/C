#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future!
    int a=1,b=2;
    printf("a and b is %d\n", a && b);
    printf("a or b is %d\n", a || b);
    printf("not a is %d\n", !a); // not turns value of a to opposite
    // 0 to 1, 1 to 0

    if (a && b)
    {
        printf("a and b is true.\n");
    }
    if (a || b)
    {
        printf("a or b is true.\n");
    }
    if (!a)
    {
        printf("not a is true.\n");
    }
    return 0;
}