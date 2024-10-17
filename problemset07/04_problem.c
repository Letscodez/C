#include <stdio.h>
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int reverseArray(int a[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 5. Write a program containing a function which reverses the array passed to it.
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11};
    printArray(arr, 11);
    reverseArray(arr, 11);
    printArray(arr, 11);
    return 0;
}