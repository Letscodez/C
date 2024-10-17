#include <stdio.h>
#include <string.h>
struct employ
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    //! LetsCodez: Scripting The Future
    //? Quick Quiz: Write a program to store the details of 3 employees from user defined data. Use the structure declared above.
    struct employ e1, e2, e3;
    printf("Enter the code of employee 1: ");
    scanf("%d", &e1.code);
    printf("Enter the salary of employee 1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name of employee 1: ");
    scanf("%s", e1.name);
    printf("Enter the code of employee 2: ");
    scanf("%d", &e2.code);
    printf("Enter the salary of employee 2: ");
    scanf("%f", &e2.salary);
    printf("Enter the name of employee 2: ");
    scanf("%s", e2.name);
    printf("Enter the code of employee 3: ");
    scanf("%d", &e3.code);
    printf("Enter the salary of employee 3: ");
    scanf("%f", &e3.salary);
    printf("Enter the name of employee 3: ");
    scanf("%s", e3.name);

    printf("Employee 1\nCode: %d\nSalary: %f\nName: %s\n", e1.code, e1.salary, e1.name);
    printf("Employee 2\nCode: %d\nSalary: %f\nName: %s\n", e2.code, e2.salary, e2.name);
    printf("Employee 3\nCode: %d\nSalary: %f\nName: %s\n", e3.code, e3.salary, e3.name);
    return 0;
}