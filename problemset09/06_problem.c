#include <stdio.h>
typedef struct bankAccount
{
    int accountNumber;
    char accountHolderName[50];
    float balance;
} bank;
int main() 
{
    //! LetsCodez: Scripting The Future
    //? 8. Create a structure representing a bank account of a customer. What fields did you use and why?
    bank b1 = {123456789, "John Doe", 1000.0};
    printf("The account number of %s is %d and the balance is %f\n", b1.accountHolderName, b1.accountNumber, b1.balance);
    return 0;
}