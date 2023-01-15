// Write a recursive function to calculate sum of cubes of first N natural numbers

#include <stdio.h>
#include <conio.h>
int subcubes(int n);
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    printf("Sum is %d\n", subcubes(5));
    return 0;
}

int subcubes(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n * n * n + subcubes(n - 1));
    }
}