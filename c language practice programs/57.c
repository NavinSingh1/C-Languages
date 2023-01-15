// Program to calculate product of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p=1,i;
    printf("Enter the first n natural number to calculate it's product: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        p=p*i;
        printf("The product is %d ", p);
    getch();
}