//write a program to print multiplication table of a given number n.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, num;
    //input a number to print the table
    printf("Enter the number to print the table: ");
    scanf("%d", &num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num, i, (num*i));
    }
    return(0);
}