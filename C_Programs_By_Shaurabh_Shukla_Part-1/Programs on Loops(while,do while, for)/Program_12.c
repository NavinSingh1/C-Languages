// Write a program to print table of user’s choice

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    printf("Enter the number of table which u want to print\n");
    scanf("%d", &n);
    printf("The table of %d\n", n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}