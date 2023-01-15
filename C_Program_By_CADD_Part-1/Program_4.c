// write a program to convert temperature farenheight to celcius

#include <stdio.h>
#include <conio.h>
int main()
{
    float celcius, farenheight;
    printf("Enter a number\n");
    scanf("%f", &farenheight);
    celcius = ((farenheight - 32) * 5) / 9;
    printf("Celcius is : %.2f\n", celcius);

    return 0;
}