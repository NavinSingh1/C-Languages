// write a program to print simple interest

#include <stdio.h>
#include <conio.h>
int main()
{
    float principal, rate, time, simpleinterest;
    printf("Enter principal\n");
    scanf("%f", &principal);
    printf("Enter rate\n");
    scanf("%f", &rate);
    printf("Enter time\n");
    scanf("%f", &time);
    simpleinterest = ((principal * rate * time) / 100);
    printf("Simpleinterest is %.2f\n", simpleinterest);

    return 0;
}