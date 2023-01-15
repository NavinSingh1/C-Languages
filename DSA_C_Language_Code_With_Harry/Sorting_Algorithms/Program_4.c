// Insertion sort in easy way

#include <stdio.h>
#include <conio.h>

void printArray(int *A, int n);
int InsertionSort(int *A, int n);

int main()
{
    int A[50], n;
    printf("Enter the number of array u want\n");
    scanf("%d", &n);
    printf("Enter the element of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Printing the array before sorting\n");
    printArray(A, n);
    InsertionSort(A, n);
    printf("Printing the array after sorting\n");
    printArray(A, n);

    return 0;
}

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int InsertionSort(int *A, int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}