// Write a program to enter length in cms and convert it into metere and kilometere

#include <stdio.h>
#include <conio.h>
int main()
{
    float length, metere, kilometere;
    printf("Enter a length \n");
    scanf("%f", &length);
    metere = length / 100;
    kilometere = length / 100000;
    printf("Metere is: %.2f\n", metere);
    printf("Kilometere is: %.2f\n", kilometere);

    return 0;
}