//Find the Area of the Triangle
//Area = ( Height * Base )/2 
#include<stdio.h>
#include<conio.h>
int main()
{
    float b,h,area;

    printf("Enter height and Base of the Triangle: ");
    scanf("%f%f", &h, &b);

    area = (h*b)/2;
    printf("Area of the Triangle is %f", area);

    return 0;
}