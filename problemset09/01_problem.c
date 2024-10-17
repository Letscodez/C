#include <stdio.h>
typedef struct vector
{
    int i;
    int j;
} vec;
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 1. Create a two-dimensional vector using structures in C
    vec v1={2,3};
    vec v2={4,5};
    printf("The value of vector v1 is %d %d\n", v1.i, v1.j);
    printf("The value of vector v2 is %d %d\n", v2.i, v2.j);
    return 0;
}