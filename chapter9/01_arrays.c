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
    //? Struct 
    struct employ e1, e2;
    e1.salary = 100.0;
    // e1.name = "Harry"; //* Error: incompatible types when assigning to type 'char[10]' from type 'char *'  
    e2.salary = 200.0;
    strcpy(e1.name, "Harry");
    strcpy(e2.name, "LetsCodez");
    return 0;
}