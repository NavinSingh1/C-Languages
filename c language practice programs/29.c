// Below is a program on sum of n numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum = 0,c,value;

    printf("\n\nEnter the number of integers you want to add:  ");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (c = 1; c <= n; c++)
    {
        scanf("%d", &value);
        sum += value;
    }
    printf("\n\nsum of entered number = %d", sum);
    return 0;
}