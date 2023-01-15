// Quick Sort

#include <stdio.h>
#include <conio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i < j);

    // swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);  // Sort left subarray
        quickSort(A, partitionIndex + 1, high); // Sort right subarrays
    }
}

int main()
{
    int A[50], n;
    printf("Enter the size of array u want\n");
    scanf("%d", &n);
    printf("Enter the element of the arrays\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Printing the array before sorting\n");
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printf("Printing the array after sorting\n");
    printArray(A, n);

    return 0;
}