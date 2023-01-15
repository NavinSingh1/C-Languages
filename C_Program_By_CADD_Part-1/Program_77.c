// program to sort an array using function
// using buuble sort

#include <stdio.h>
#include <conio.h>

void bubble_sort(int a[], int n);

int main()
{
    int n, i;
    int arr[10];
    printf("Enter the number of n\n");
    scanf("%d", &n);
    printf("Enter the elements in the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);

    return 0;
}

void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("After sorting all the elements in the array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}