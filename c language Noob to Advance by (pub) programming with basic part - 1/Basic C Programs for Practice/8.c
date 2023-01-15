//C Program For Converting Temperature Celsius Into Fahrenheit
/*
Formula :-
Fahrenheit = ((9/5) * Celsius) + 32; //or you can use 1.8 in place of 9/5
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float cel,fah;

    printf("\nEnter Temperature in Celcius:  ");
    scanf("%f", &cel);

    fah = (1.8 * cel) + 32;
    printf("\nTemperature in Farenheit: %f", fah);

    return 0;
}