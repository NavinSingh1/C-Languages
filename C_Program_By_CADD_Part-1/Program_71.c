// program to binary search in c

#include <stdio.h>
#include <conio.h>
int main()
{
    int first = 0, middle = 0, last, search, n, i, array[50];
    printf("Enter size of array\n");
    scanf("%d", &n);
    printf("Enter %d integer in ascending order: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the element which you want to search\n");
    scanf("%d", &search);
    last = n - 1;
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] < search)
        {
            first = middle + 1;
        }
        else if (array[middle] == search)
        {
            printf("%d is found at location %d\n", search, (middle + 1));
            break;
        }
        else
        {
            last = middle - 1;
        }
    }
    if (first > last)
    {
        printf("%d is not found in the array\n", search);
    }
    return 0;
}