// Deletion

#include <stdio.h>
#include <conio.h>

void display(int arr[], int n);
int indDeletion(int arr[], int size, int capacity, int index);
int main()
{
    int arr[100] = {2, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3, value;
    printf("Printing the elements in the array before adding the element\n");
    display(arr, size);
    value = indDeletion(arr, size, 100, index);
    if (value == 1)
    {
        size = size - 1;
        printf("Deletion succesfull\n");
        printf("Printing the elements in the array after Deleting the element\n");
        display(arr, size);
    }
    else
    {
        printf("Insertion not succesfull\n");
    }

    return 0;
}

void display(int arr[], int n)
{
    //Code for travellsing
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indDeletion(int arr[], int size, int capacity, int index)
{
    // code for Deletion
    if (index >= capacity)
    {
        return -1;
    }
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return 1;
}