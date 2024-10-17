#include <stdio.h>
typedef struct vector
{
    int i;
    int j;
} vec;
vec sumVector(vec v1, vec v2)
{
    vec result;
    result.i = v1.i + v2.i;
    result.j = v1.j + v2.j;
    return result;
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional.
    vec v1 = {2, 3};
    vec v2 = {4, 5};
    printf("The sum of vectors v1 and v2 is %di + %dk\n", sumVector(v1, v2).i, sumVector(v1, v2).j);
    return 0;
}