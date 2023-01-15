//C Program To Convert Celsius To Fahrenheit And Vice Versa Using Switch Case
// Celsius To Fahrenheit:-
// Fahrenheit = ( Celsius * 9 / 5 ) + 32;

// Fahrenheit To Celsius:-
// Celsius = ( Fahrenheit - 32 ) * 5 / 9;
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,centrigrade,fahrenheit;
    int x;
    printf("1. For Farenheight To Celcius\n");
    printf("2. For Celcius To Farenheight\n");

    printf("\n\nEnter Your Choice\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("\nEnter the value of Farenheight Temperature: ");
        scanf("%f", &a);
        centrigrade=5*(a-32)/9;
        printf("\n\nCelcius Temperature: %f", centrigrade);
        break;

    case 2:
        printf("\nEnter the value of Celcius Temperature: ");
        scanf("%f", &b);
        fahrenheit=((9*b)/5)+32;
        printf("\nFarenheight Temperature: %f", fahrenheit);
        break;
    
    default:
        printf("\n\nWrong Choice....Try Again!!!\n");
    }
    getch();
}