// Program to print first n positive numbers with two bits set Second Logic

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("print first n positive numbers with two bits\n");
    for (i = 2; n; i = i * 2)
    {
        for (j = 1; j < i; j = j * 2)
        {
            printf("%d\n", i + j);
            n--;
            if (n == 0)
                break;
        }
    }
    return 0;
}