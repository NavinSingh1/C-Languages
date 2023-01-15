// calculate a simple interest
//Formula - Simple Interest = ( Amount * Rate * Time ) / 100;
#include<stdio.h>
#include<conio.h>
int main()
{
    float amount,rate,time,si;

    printf("\nEnter Principal Amount : ");
    scanf("%f", &amount);

    printf("\nEnter Rate of Interest: ");
    scanf("%f", &rate);

    printf("\nEnter Period of Time: ");
    scanf("%f", &time);

    si = (amount*rate*time)/100;
    printf("\nSimple Interest : %f", si);

    return 0;
}