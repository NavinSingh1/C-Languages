/*
write a program using recursion to calculate nth element of fibonachi series.
*/
#include<stdio.h>
#include<conio.h>
int fib (int);
int main()
{
    int n, result;
    printf("Enter the Nth Number: ");
    scanf("%d", &n);
    result = fib(n);
    printf("The %dth number is Fibonacci series is %d\n", n, result);
    return(0);
}
//function for recursion fibonacci call
int fib(int n)
{
    if(n == 0)
       {
           return 0;
       }
    else if(n == 1)
       {
           return 1;
       }
    else
       {
           return (fib (n - 1) + fib (n - 2));
       }
}