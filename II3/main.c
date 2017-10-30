#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float x1;
    float x2;
    float D;

    printf("Enter the coefficients a, b and c: ");

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    D = b*b - 4*a*c;

    if(D>0)
    {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);

        printf("The roots of the equation are %f and %f", x1,x2);
    }
    else if (D==0)
    {
        x1 = (-b + sqrt(D))/(2*a);

        printf("The root of the equation is %f", x1);
    }
    else
    {
        puts("The roots of the equation are complex.");
    }

}

