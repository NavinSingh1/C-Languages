// Program to linear search in array

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, n, element, flag;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element which you want to find in the array\n");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            flag = i;
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag != 0)
    {
        printf("%d is found at location %d\n", element, flag);
    }
    else
    {
        printf("%d is not found in the array\n", element);
    }

    return 0;
}