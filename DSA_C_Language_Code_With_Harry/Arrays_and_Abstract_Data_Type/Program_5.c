// Binary Search

#include <stdio.h>
#include <conio.h>

int BinarySearch(int arr[], int size, int element);

int main()
{
    int arr[100], n, i, element, found;
    printf("Enter the number of arrays u want\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element u want to find in the array\n");
    scanf("%d", &element);
    found = BinarySearch(arr, n, element);
    printf("%d element is found at index no %d\n", element, found);

    return 0;
}

int BinarySearch(int arr[], int n, int element)
{
    int low, mid, high;
    low = 0;
    high = n - 1;
    // keep searching until low will <= high.
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
            break;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // searching ends
    return -1;
}