#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    // size of char is 1 byte
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    // size of int is 4 bytes
    printf("Size of short: %lu byte(s)\n", sizeof(short));
    // size of short is 2 bytes
    printf("Size of long: %lu byte(s)\n", sizeof(long));
    // size of long is 4 bytes
    printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    // size of long long is 8 bytes
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    // size of float is 4 bytes
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    // size of double is 8 bytes
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));
    // size of long double is 12 bytes
    return 0;
}