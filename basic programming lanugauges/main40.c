//write a program to convert celsius temperature into farenhite
#include<stdio.h>
#include<conio.h>
int main()
{
    float celsius, fahrenheit;
    //input temperature in celsius
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    //celsius to farenhite conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f fahrenheit", celsius, fahrenheit);
    return(0);
}