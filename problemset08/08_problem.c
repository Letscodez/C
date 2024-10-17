#include <stdio.h>
#include <string.h>
int occur(char* string,char letter){
    int count = 0;
    for(int i =0; i< strlen(string); i++){
        if(string[i]==letter){
            count++;
        }
    }
    return count;
}
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 8. Write a program to count the occurrence of a given character in a string.
    char string[]= "Hello Hi welcome";
    printf("%d\n",occur(string,'e'));
    return 0;
}