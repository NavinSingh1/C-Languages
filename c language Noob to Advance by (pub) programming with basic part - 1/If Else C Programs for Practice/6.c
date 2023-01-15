//C Program For Check Or Not Using If /Else
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;

    printf("Enter any for check year:  ");
    scanf("%d", &year);

    if ((year%4)==0 && (year%400)==0)
    {
        printf("%d is a leap Year. \n", year);
    }
    else if (year%100 == 0)
    {
        printf("%d is a leap year. \n", year);
    }
    else
        printf("%d is a leap year. \n", year);
    
    return 0;
    
}