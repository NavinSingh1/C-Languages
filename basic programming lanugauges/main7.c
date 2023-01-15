//calculate the area of a circle and modify the same program to calculate the volume of a cylinder givent its radius and height.
#include <stdio.h>
#include <conio.h>
int main()
{
    int radius = 3;
    float pi = 3.14;
    printf("The area of the circle is %f", pi * radius * radius);
    int height = 3;
    printf("\n and Volume of the cylinder is %f", pi * radius * radius * height);
    getch();
    return (0);
}