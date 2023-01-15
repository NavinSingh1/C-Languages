// printing first 10 odd natural numbers using loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, x=1;
    while (i<=10)
    {
        printf("%d ", x);
        x=x+2;
        i++;
    }
    getch();
}