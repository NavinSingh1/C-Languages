// program to count total number of even and odd element in the array

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, count=0, count1=0;
    printf("Enter the elements to find total numbers of even number and odd number\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    printf("Total even numbers are: %d\n", count);
    printf("Total odd numbers are: %d\n", count1);

    return 0;
}