#include <stdio.h>

int main() 
{
    //! LetsCodez: Scripting The Future!
    // condition ? expression-if-true : expression-if-false
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf("You are an adult.\n") : printf("You are not an adult.\n");
    return 0;
}