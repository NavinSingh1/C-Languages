// write a program to print n natural number in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for(i=n; i ; i--)
    {
        printf("The value of i is %d\n",i);
    }
    return(0);
}
