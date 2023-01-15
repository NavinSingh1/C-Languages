// Program to check wheather the year is leap or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year to check if it is a leap year:  \n");
    scanf("%d", &year);

    //divisible by 4, 100 and 400
    if (year%400 == 0)
        printf("\n%d is a leap year\n", year);
    
    //divisible only by 4 and not by 400
    else if (year%100 == 0)
        printf("\n%d is not a leap year\n", year);

    //divisible only by 4 and not by 100
    else if (year%4 == 0)
        printf("\n%d is a leap year\n", year);

    else
        printf("\n%d is not a leap year\n", year);

    return 0;
}
