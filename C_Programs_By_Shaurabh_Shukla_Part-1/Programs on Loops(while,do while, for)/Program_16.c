// Write a program to calculate sum of first N even natural numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i = 2, s = 0;
    printf("Enter a number to find sum of N natural numbers\n");
    scanf("%d", &num);
    while (i <= 2 * num)
    {
        s = s + i;
        i = i + 2;
    }
    printf("sum of first N even natural numbers is : %d\n", s);

    return 0;
}