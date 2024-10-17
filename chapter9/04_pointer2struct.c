#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main() 
{
    //! LetsCodez: Scripting The Future 
    //? Pointer to structure
    struct employee e1;
    e1.code = 1;
    struct employee *ptr;
    ptr = &e1;
    printf("The code of employee is: %d\n", (*ptr).code);
    printf("The code of employee is: %d\n", ptr->code); // -> is used to access the structure members when using pointers
    return 0;
}