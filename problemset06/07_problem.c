#include <stdio.h>
void ten_times(int);
void ten_times(int i) //* Here we are passing the address of i to the function
{
    i = i * 10;
}
int main()
{
    //! LetsCodez: Scripting The Future
    //?3. Write a program to change the value of a variable to ten times of its current value
    int i = 10;
    printf("The value of i is %d\n", i); //* The value of i is 10
    ten_times(i); 
    printf("The value of i is %d\n", i); //* The value of i is still 10
    //* The value of i is still 10 because we are passing the copy of value to the function.
    return 0;
}