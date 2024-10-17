#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main() 
{
    //! LetsCodez: Scripting The Future
    //? Structure arrays
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.0;
    strcpy(facebook[0].name, "Mark");
    facebook[1].code = 101;
    facebook[1].salary = 101.0;
    strcpy(facebook[1].name, "Bill");
    struct employee harry= {102, 102.0, "Harry"};
    printf("Code: %d\n", harry.code);
    printf("Salary: %f\n", harry.salary);
    printf("Name: %s\n", harry.name);

    return 0;
}