// Linear search

#include <stdio.h>
#include <conio.h>

int linearSearch(int arr[], int size, int element);

int main()
{
    int arr[100], n, i, element, size, found;
    printf("Enter the number of arrays u want\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element u want to find in the array\n");
    scanf("%d", &element);
    size = sizeof(arr) / sizeof(int);
    found = linearSearch(arr, size, element);
    printf("%d element is found at index no %d\n", element, found);
    return 0;
}

int linearSearch(int arr[], int size, int element)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}