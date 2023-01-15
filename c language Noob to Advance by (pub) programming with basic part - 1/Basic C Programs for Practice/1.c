//C Program To Find Area And Circumference Of Circle
// use formula of circumference = 2*pi*r
// formula of Area = 2*r*r
#include<stdio.h>
#include<conio.h>
int main()
{
    int rad;
    float Pi = 3.14,area,ci;

    printf("\nEnter radius of circle: ");
    scanf("%d", &rad);

    area = Pi * rad *rad;
    printf("\nArea of the circle: %f", area);

    ci = 2* Pi *rad;
    printf("\nCircumference: %f", ci);

    return 0;    
}