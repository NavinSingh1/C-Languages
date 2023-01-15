//write a program to calculate the sum of the numbers occuring in the multiplication table of 8.(consider 8*1 to 8*10)
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=8, i;
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n, i, (n*i));
    }
    return(0);
}