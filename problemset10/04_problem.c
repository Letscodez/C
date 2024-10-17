#include <stdio.h>
typedef struct emp
{
    char name[20];
    int salary;
} employee;
int main()
{
    //! LetsCodez: Scripting The Future
    //? 4. Take name and salary of two employees as input from the user and write them toa text file in the following format: i. Name1, 3300 ii. Name2, 7700
    employee emp1, emp2;
    FILE *file;
    file = fopen("employee.txt", "a");
    printf("Enter the name of the first employee: ");
    scanf("%s", emp1.name);
    printf("Enter the salary of the first employee: ");
    scanf("%d", &emp1.salary);
    printf("Enter the name of the second employee: ");
    scanf("%s", emp2.name);
    printf("Enter the salary of the second employee: ");
    scanf("%d", &emp2.salary);
    fprintf(file, "Name: %s, Salary: %d\n", emp1.name, emp1.salary);
    fprintf(file, "Name: %s, Salary: %d\n", emp2.name, emp2.salary);
    fclose(file);
    return 0;
}