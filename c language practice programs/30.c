// Below is a program to find first n prime numbers using nested for loops, where the value of n is input by the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i = 3, count, c;
    printf("\nEnter the number of prime number required :  ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("\nFirst %d prime number are :  ", n);
        printf("2 ");
    }
    for (count = 2; count <= n; i++)
    {
        for (c = 2; c < i; c++)
        {
            if (i%c == 0)
            break;
        }
        if (c == i)
        {
            printf("%d ", i);
            count++;
        }
    }
    return 0;   
}