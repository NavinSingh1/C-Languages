//write a program to sum first ten natural numbers using while loop.
#include<stdio.h>
#include<conio.h>
int main()
{
   int i, sum=0, n=10;
   for(i=0;i<=n;i++)
   {
       sum += i;
   }
   printf("The value of sum(1 to 10) is %d", sum);
   return(0);
}
