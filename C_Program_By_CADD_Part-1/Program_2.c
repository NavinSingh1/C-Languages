// Write a pogram to find diameter circumference and area of a circle

#include <stdio.h>
#include <conio.h>
int main()
{
    float area, circumference, diameter, r;
    printf("Enter the radius\n");
    scanf("%f", &r);
    diameter = 2 * r;
    circumference = 2 * 3.14 * r;
    area = 3.14 * r * r;
    printf("Diameter = %.2f\n", diameter);
    printf("circumference = %.2f\n", circumference);
    printf("Area = %.2f\n", area);
    return 0;
}