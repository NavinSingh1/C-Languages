//write a program to check wheather a number is divisible by 97 or not.
#include<stdio.h>
#include<conio.h>
int main()
{
   int num;
   printf("Enter the number\n");
   scanf("%d", &num);
   printf("Divisbility test return: %d\n", num%97);
   return(0);
}