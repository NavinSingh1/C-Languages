// program to calculate sum of N natural number
#include<stdio.h>
#include<Conio.h>
int main()
{
    int n,s=0,i;
    printf("Enter a natural numbers: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        s=s+i;
    printf("Sum is %d", s);
}