#include <stdio.h>
void address(int*);
void address(int *i) //* Here we are passing the address of i to the function
{
    printf("The address of i is %p\n", i);
}
int main()
{
    //! LetsCodez: Scripting The Future
    //?2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable toa function and print its address. Are these addresses same? Why?
    int i = 10;
    printf("The address of i is %p\n", &i);
    address(&i);
    //* Yes, the addresses are same because we are passing the address of i to the function which is the same as the address of i 
    return 0;
}