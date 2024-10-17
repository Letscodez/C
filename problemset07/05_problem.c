#include <stdio.h>
int countPositive(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] > 0 ? count++ : count; // Using ternary operator to check if the number is positive
    }
    return count;
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 6. Write a program containing functions which counts the number of positive integers in an array
    int arr[] = {1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    printf("Number of positive integers in the array: %d\n", countPositive(arr, 10));
    return 0;
}