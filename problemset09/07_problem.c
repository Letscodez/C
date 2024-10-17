#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;
int compareDates(date d1, date d2)
{
    if (d1.year > d2.year)
        return 1;
    else if (d1.year < d2.year)
        return -1;
    else
    {
        if (d1.month > d2.month)
            return 1;
        else if (d1.month < d2.month)
            return -1;
        else
        {
            if (d1.day > d2.day)
                return 1;
            else if (d1.day < d2.day)
                return -1;
            else
                return 0;
        }
    }
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 9. Write a structure capable of storing date. Write a function to compare those dates
    date d1 = {17, 11, 2022};
    date d2 = {19, 4, 2019};
    printf("%d", compareDates(d1, d2));
    return 0;
}