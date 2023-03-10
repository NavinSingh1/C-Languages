// Count Sort Algorithm

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int n)
{
    int i, j;
    // Find the maximum element in A
    int max = maximum(A, n);

    // Create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // Initilatize the array element to 0
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Increament the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }

    i = 0; // Counter for count array
    j = 0; // Counter for given array A

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
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
    countSort(A, n);
    printf("Printing the array after sorting\n");
    printArray(A, n);

    return 0;
}