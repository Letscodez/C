#include <stdio.h>
float force(float);
float force(float m)
{
    return m * 9.80665;
}
int main()
{
    //! LetsCodez: Scripting The Future
    //? 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.
    printf("Enter the mass of the body in kg: ");
    float m;
    scanf("%f", &m);
    printf("The force of attraction on the body is %.2f N\n", force(m));
    return 0;
}