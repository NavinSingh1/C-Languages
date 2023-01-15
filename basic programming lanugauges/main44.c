/*
write a recursive function to calculate the sum of first n natural numbers.
*/
#include<stdio.h>
#include<conio.h>
int addNumbers(int n);
int main()
{
   int num;
   printf("Enter a positive integer\n");
   scanf("%d", &num);
   printf("Sum = %d", addNumbers(num));
   return(0);
}

int addNumbers(int n){
    if(n != 0)
    return n + addNumbers(n - 1);
    else
    return n;
}