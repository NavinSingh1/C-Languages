// Bubble Sort Algorithm code

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

void bubbleSort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int a[20];
    int n, i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the element of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Printing the array before sorting\n");
    printArray(a, n); // Printing the Array before sorting
    printf("***********************************\n");
    bubbleSort(a, n); // Function to sort the array
    printf("Printing the array after sorting\n");
    printArray(a, n); // printing the array after sorting

    return 0;
}

////////////Bubble Sort in easy way/////////////////////////
/*
#include <stdio.h>
#include <conio.h>
int bubble(int arr[], int n);
int main()
{
    int arr[20], n, sum, i, j, temp;
    printf("Enter the size of n\n");
    scanf("%d", &n);
    printf("Enter the elements for the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After sorting the element is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/