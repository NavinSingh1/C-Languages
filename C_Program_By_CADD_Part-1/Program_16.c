// Program to enter principal time rate and calculate it's compund interest

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float principal, rate, time, compoundinterest;
    printf("Enter principal\n");
    scanf("%f", &principal);
    printf("Enter rate\n");
    scanf("%f", &rate);
    printf("Enter time\n");
    scanf("%f", &time);
    compoundinterest = principal * pow((1+rate/100), time);
    printf("Compund interest is: %.2f\n", compoundinterest);

    return 0;
}