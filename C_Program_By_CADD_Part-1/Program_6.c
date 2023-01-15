// write a program to convert days into years and months

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, year, rem, month, days;
    printf("Enter a number\n");
    scanf("%d", &a);
    year = a / 365;
    rem = a % 365;
    month = rem / 30;
    days = rem % 30;
    printf("Year = %d\n", year);
    printf("Month = %d\n", month);
    printf("Days = %d\n", days);

    return 0;
}