#include <stdio.h>
void ten_times(int *);
void ten_times(int *i) //* Here we are passing the address of i to the function
{
    *i = *i * 10;
}
int main()
{
    //! LetsCodez: Scripting The Future
    //?3. Write a program to change the value of a variable to ten times of its current value
    int i = 10;
    printf("The value of i is %d\n", i); //* The value of i is 10
    ten_times(&i); //* Passing the address of i to the function so that the value of i can be changed
    printf("The value of i is %d\n", i); //* The value of i is 100
    return 0;
}