//Write a Program to calculate area of a circle
#include <stdio.h>
#include <conio.h>

int main()
{
    int r;
    float a;
    printf("Enter the radius of a Circle\n");
    scanf("%d", &r);
    a = 3.14 * r * r;
    printf("The area of a circle is %.2f\n", a);

    return 0;
}