#include <stdio.h>
void reference(int);
void reference(int a){
    a = 10; }
int main()
{
    //! LetsCodez: Scripting The Future
    //? 4. Write a function and pass the value by reference.
    // Declare a variable
    int a = 3;
    printf("The value of a is %d\n", a);
    // Calling the function
    reference(a);
    printf("The value of a is %d\n", a);
    //* The value of a is 3 because we are passing the copy of value to the function.
    // *Which does not change the value of the original variable.
    return 0;
}