// program to count total number of notes in a given number

#include <stdio.h>
#include <conio.h>
int main()
{
    int number, num0, num1, num2, num3, rem0, rem1, rem2, rem3, num4, rem4, num5, rem5, num6, rem6, rem7;
    printf("Enter a number\n");
    scanf("%d", &number);
    num0 = number / 2000;
    rem1 = number % 2000;
    num1 = rem1 / 500;
    rem2 = rem1 % 500;
    num2 = rem2 / 200;
    rem3 = rem2 % 200;
    num3 = rem3 / 100;
    rem4 = rem3 % 100;
    num4 = rem4 / 50;
    rem5 = rem4 % 50;
    num5 = rem5 / 20;
    rem6 = rem5 / 20;
    num6 = rem6 / 10;
    rem7 = rem6 / 10;
    printf("Number of Notes of 2000 is : %d\n", num0);
    printf("Number of Notes of 500 is : %d\n", num1);
    printf("Number of Notes of 200 is : %d\n", num2);
    printf("Number of Notes of 100 is : %d\n", num3);
    printf("Number of Notes of 50 is : %d\n", num4);
    printf("Number of Notes of 20 is : %d\n", num5);
    printf("Number of Notes of 10 is : %d\n", num6);

    return 0;
}