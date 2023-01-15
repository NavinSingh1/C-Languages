// write a program to enter length and breadth of a rectangle and find it's perimeter

#include <stdio.h>
#include <conio.h>
int main()
{
    float length, breadth, perimeter;
    printf("Enter length and breadth of a rectangle\n");
    scanf("%f%f", &length, &breadth);
    perimeter = 2 * (length + breadth);
    printf("Perimeter of a rectangle is : %.2f\n", perimeter);
    return 0;
}