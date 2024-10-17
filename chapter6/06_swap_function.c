#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x; //? temp is variable to store the value of x as we are going to change the value of x
    *x = *y;
    *y = temp;
}
int main()
{
    //! LetsCodez: Scripting The Future
    int a = 3;
    int b = 4; // a is 3 and b is 4
    swap(&a, &b);
    return 0; // now a is 4 and b is 3

    return 0;
}