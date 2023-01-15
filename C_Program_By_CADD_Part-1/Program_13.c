// program to enter base and height of a triangle and find it's area

#include <stdio.h>
#include <conio.h>
int main()
{
    float base, height, area;
    printf("Enter base and height of triangle\n");
    scanf("%f%f", &base, &height);
    area = (base * height) / 2;
    printf("Area of a triangle is %.2f\n", area);

    return 0;
}