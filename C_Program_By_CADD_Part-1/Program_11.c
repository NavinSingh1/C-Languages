// write a program to enter a number and calculate it's square root

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float num, sum;
    printf("Enter a number\n");
    scanf("%f", &num);
    sum = sqrt(num);
    printf("Square root of %.2f is : %.2f\n", num, sum);

    return 0;
}