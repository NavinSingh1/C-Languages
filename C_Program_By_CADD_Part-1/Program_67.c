// Program to copy all the elements in the first array to the second array

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, b[10];
    printf("Enter the elements\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        b[i] = a[i];
    }
    printf("\nBefore copying the elements from the first array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nAfter copying the elements from the first array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}