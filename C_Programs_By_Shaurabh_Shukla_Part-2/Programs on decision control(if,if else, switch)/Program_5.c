//Program to find roots of quadratic equation

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float x, y;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d < 0)
        printf("Both roots are imaginary\n");
    if (d == 0)
    {
        printf("Both roots are equal\n");
        x = -b / (2.0 * a);
        printf("Roots is %.2f", x);
    }
    if (d > 0)
    {
        printf("Roots are real and distinct\n");
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("Roots are: %.2f, %.2f\n", x, y);
    }
    return 0;
}