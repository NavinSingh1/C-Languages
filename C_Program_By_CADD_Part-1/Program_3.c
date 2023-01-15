// write a program to convert temperature celcius to farenheight

#include <stdio.h>
#include <conio.h>
int main()
{
    float celcius, farenheight;
    printf("Enter a number\n");
    scanf("%f", &celcius);
    farenheight = (celcius * 9 / 5) + 32;
    printf("Farenheight is : %.2f\n", farenheight);

    return 0;
}