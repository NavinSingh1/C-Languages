// write a program to enter base and height of a triangle and find it's third angle

#include <stdio.h>
#include <conio.h>
int main()
{
    int base, height, area;
    printf("Enter the base and height of a triangle\n");
    scanf("%d%d", &base, &height);
    area = 180 - (base + height);
    printf("Third angle of a Triangle is : %d\n", area);

    return 0;
}