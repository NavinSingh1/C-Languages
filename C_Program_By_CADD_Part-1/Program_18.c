// program to check wheather a year is leap or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a number to check wheather a year is leap year or not\n");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 100 != 0)
        printf("%d is a leap year\n", a);
    else if (a % 400 == 0)
        printf("%d is a leap year\n", a);

    return 0;
}