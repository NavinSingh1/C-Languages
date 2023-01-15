//Below is a program to find roots of a Quadratic equation.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c, determinat,r1,r2,real,imaginary;
    printf("\nEnter coefficient a, b and c: \n\n");
    scanf("%f%f%f", &a,&b,&c);

    determinat == b*b - 4*a*c;

    if (determinat > 0)
    {
        r1 = (-b + sqrt(determinat))/2*a;
        r2 = (-b - sqrt(determinat))/2*a;
        printf("\nRoot are: %.2f and %.2f", r1, r2);
    }
    else if (determinat == 0)
    {
        r1 = r2 = -b/(2*a);
        printf("\nRoots are: %.2f and %.2f", r1, r2);
    }
    else
    {
        real = -b/(2*a);
        imaginary = sqrt(-determinat)/(2*a);
        printf("\n\nRoots are %.2f + i%.2f and %.2f - i%.2f", real, imaginary, real, imaginary);
    }
    return 0;
}