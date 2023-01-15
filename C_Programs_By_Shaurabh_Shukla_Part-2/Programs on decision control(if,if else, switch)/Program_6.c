//C Program to check leap year

#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter a number\n");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("Leap Year\n");
        else
            printf("Not a leap year\n");
    }
    else
    {
        if (year % 4 == 0)
            printf("Leap year\n");
        else
            printf("Not a leap year\n");
    }

    return 0;
}

/*
    int year;
    printf("Enter a number\n");
    scanf("%d", &year);
    if (year % 4)
        printf("Not a leap year\n");
    else if (year % 100)
        printf("Leap year\n");
    else if (year % 400)
        printf("Not a leap year\n");
    else
        printf("Leap year\n");
*/