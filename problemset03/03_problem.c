#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    //? 3. Calculate income tax paid by an employee to the government as per the slabs mentioned below:
    //? Income Slab Tax
    //? 2.5 – 5.0L 5%
    //? 5.0L - 10.0L 20%
    //? Above 10.0L 30%
    //? Note that there is no tax below 2.5L. Take income amount as an input from the user.
    int income;
    float tax = 0;
    printf("Enter your income: ");
    scanf("%d", &income);
    if (income >= 1000000)
    {
        tax = 0.30 * (income - 1000000) + 0.20 * 500000 + 0.05 * 250000;
        printf("30%% tax will be deducted over 10 lacs of income.\n");
        printf("Amount of tax to be deducted: %.2f\n", tax);
    }
    else if (income >= 500000)
    {
        tax = 0.20 * (income - 500000) + 0.05 * 250000;
        printf("20%% tax will be deducted between 5-10 lacs of income.\n");
        printf("Amount of tax to be deducted: %.2f\n", tax);
    }
    else if (income >= 250000)
    {
        tax = 0.05 * (income - 250000);
        printf("5%% tax will be deducted between 2.5-5 lacs of income.\n");
        printf("Amount of tax to be deducted: %.2f\n", tax);
    }
    else
    {
        tax = 0;
        printf("No tax will be deducted below 2.5 lacs of income.\n");
    }
    return 0;
}