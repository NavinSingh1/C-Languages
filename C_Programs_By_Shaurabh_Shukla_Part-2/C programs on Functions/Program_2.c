// Write a function to calculate area of a circle.(Takes Something, Returns Something)

#include <stdio.h>
#include <conio.h>

int area(float r);

int main()
{
    float r, circle;
    printf("Enter the radius\n");
    scanf("%f", &r);
    circle = area(r);
    printf("Area of circle is %.2f\n", circle);
    return 0;
}

int area(float r)
{
    float area;
    area = 3.14 * r * r;
    return area;
}