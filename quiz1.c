
#include <stdio.h>

int main(void)
{
    /*setup variables*/
    double a, b, a2, b2;
    double x, y, z;
    /*asking and collecting data*/
    printf("\n----  Finding unknown triple (x,y and z)   ----\n");
    printf("Enter values of a and b, separated by space>\n");
    scanf("%lf %lf", &a, &b);
    printf("The unknown triple set is:\n");
    /*finding a2 and b2*/
    a2 = a * a;
    b2 = b * b;
    /*finding and printing x*/
    x = a2 - b2;
    printf("x=%.2lf\n", x);
    /*finding and printing y*/
    y = 2 * a * b;
    printf("y=%.2lf\n", y);
    /*finding and printing z*/
    z = a2 + b2;
    printf("z=%.2lf\n", z);


    return 0;
}

