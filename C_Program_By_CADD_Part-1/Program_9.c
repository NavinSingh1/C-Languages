// write a program to enter length and breadth of a rectangle and find it's area

#include <stdio.h>
#include <conio.h>
int main()
{
    int length, breadth, area;
    printf("Enter length and breadth of a rectangle\n");
    scanf("%d%d", &length, &breadth);
    area = length * breadth;
    printf("Area of a rectangle is : %d\n", area);

    return 0;
}