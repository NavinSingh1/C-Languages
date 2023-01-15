// Program to calculate area of an equilateral triangle

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int side;
    float area;
    printf("Enter the side of an equilateral triangle\n");
    scanf("%d", &side);
    area = sqrt(3) / 4 * (side * side);
    printf("The area of an equilateral triangle is %.2f\n", area);
    return 0;
}