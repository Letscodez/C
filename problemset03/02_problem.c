#include <stdio.h>

int main()
{
    //! LetsCodez: Scripting The Future!
    //? 2. Write a program to determine whether a student has passed or failed. To pass, a
    //? student requires a total of 40% and at least 33% in each subject. Assume there
    //? are three subjects and take the marks as input from the user.
    int physics, chemistry, maths;
    printf("Enter your physics marks: ");
    scanf("%d", &physics);
    printf("Enter your chemistry marks: ");
    scanf("%d", &chemistry);
    printf("Enter your maths marks: ");
    scanf("%d", &maths);
    if (physics >= 33)
        printf("You passed physics.\n");
    else
        printf("You failed physics.\n");
    if (chemistry >= 33)
        printf("You passed chemistry.\n");
    else
        printf("You failed chemistry.\n");
    if (maths >= 33)
        printf("You passed maths.\n");
    else
        printf("You failed maths.\n");
    float total = (physics + chemistry + maths) / 3;
    if (total >= 40)
        printf("You passed the exam.\n");
    else
        printf("You failed the exam.\n");
    return 0;
}