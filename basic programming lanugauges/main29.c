//write a program to print multiplication table of 10 in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, num;
    printf("Enter the number of table to represent in reverse order\n");
    scanf("%d", &num);
    for(i=10;i;i--)
    {
        printf("%d * %d = %d\n", num, i, (num*i));
    }
    return(0);
}