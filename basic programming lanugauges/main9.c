//write a program to calculate simple interest for a set of values representing principal, no of years and rate of interest.
#include<stdio.h>
#include<conio.h>
int main()
{
    int principle=100, rate=4, years=1;
    int simpleInterest = (principle * rate * years)/100;
    printf("The value of simple interest is %d", simpleInterest);
    getch();
    return(0);
}