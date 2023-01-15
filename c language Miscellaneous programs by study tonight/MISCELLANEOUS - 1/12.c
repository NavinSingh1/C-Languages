//C Program to convert Temparature in Celsius to Fahrenheit
#include<stdio.h>
#include<conio.h>
int main()
{
    float celsius, fahrenheight;
    printf("\nEnter temperature in Celcius: ");
    scanf("%f", &celsius);

    fahrenheight = (1.8*celsius)+32;

    printf("\nTemperature in Farenheight is: %f", fahrenheight);

    return 0;
    getch();
}