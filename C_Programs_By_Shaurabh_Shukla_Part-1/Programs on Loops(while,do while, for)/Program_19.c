// Write a program to count digits in a given number

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number to to count it's digit\n");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("Total digits is: %d\n", count);
    return 0;
}