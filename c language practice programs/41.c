// program to print fibonacci series with recursion 
#include<stdio.h>
#include<conio.h>
int main()
{
    int fib(int);
    int i,n;
    printf("Enter how many terms of fibonacci series you want to see\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d\n", fib(i));
        getch();
}

int fib(int n)
{
    if(n==1||n==2)
        return(1);
        return(fib(n-1)+fib(n-2));
}