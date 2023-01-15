// Below is a program to find the area and circumference of a circle.
#include<stdio.h>
#include<conio.h>
int main()
{
    int rad;
    float PI = 3.14, area, ci;
    printf("\nEnter the radius of the circle: ");
    scanf("%d", &rad);
    area = PI*rad*rad;
    printf("\nArea of the circle is: %f", area);
    ci = 2*PI*rad;
    printf("\nCircumference of the circle is: %f", ci);

    return 0;

    getch();
}