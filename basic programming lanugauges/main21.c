/*
Write a program to check wheather a year entered by the user is leap year or not. take year as an input from the user.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    //leap year is perfectly visible by 400
    if(year % 400 == 0){
    printf("%d is a leap year.", year);
    }
    //not a leap year if visible by 100
    //but not divisible by 400
    else if(year % 100 == 0){
        printf("%d is not a leap year.", year);
    }
    //leap year if not visible by 100
    //but divisble by 4
    else if(year % 4 == 0){
        printf("%d is a leap year.", year);
    }
    //all other year are not a leap year.
    else{
        printf("%d is not a leap year.", year);
    }
}