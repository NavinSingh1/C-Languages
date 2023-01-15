// Program to generate 10 distinct number in given range in C

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, j, temp, min, max;
    min = 0;
    max = min + 9;

    srand();
    for (i = 0; i <= 9; i++)
    {
        temp = rand() % 10 + min;
        for (j = 0; j <= i - 1; j++)
        {
            if (temp == a[j])
            {
                break;
            }
        }
        if (i == j)
            a[i] = temp;
        else
            i--;
    }
    for (i = 0; i <= 9; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}