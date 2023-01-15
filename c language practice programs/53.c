// program to calculate sum of digits of a numbers .
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,r,s=0;
    printf("Enter a number\n");
    scanf("%d", &x);
    while (x!=0)
    {
        r=x%10;
        s=s+r;
        x=x/10;
    }
    printf("Sum of digits = %d", s);
    getch();
}