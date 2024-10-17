#include <stdio.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;

int main() 
{
    //! LetsCodez: Scripting The Future
    //? 4. Write a program to illustrate the use of arrow operator → in C
    emp e1;
    e1.code = 1;
    emp *ptr;
    ptr = &e1;
    printf("The code of employee is: %d\n", ptr->code); // Same as (*ptr).code
    return 0;
}