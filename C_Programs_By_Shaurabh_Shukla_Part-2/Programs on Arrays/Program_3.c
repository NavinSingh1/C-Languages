// Write a program to find smallest among 10 numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, smallest;
    printf("Enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    for (i = 1; i < 10; i++)
    {
        if (smallest > a[i])
        {
            smallest = a[i];
        }
    }
    printf("Smallest number is %d\n", smallest);

    return 0;
}