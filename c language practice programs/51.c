// program to count digits in a given numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int count = 0, x;
    printf("Enter a number: ");
    scanf("%d", &x);
    while (x!=0)
    {
        x=x/10;
        count++;
    }
    printf("Total digits = %d", count);
    getch();
}