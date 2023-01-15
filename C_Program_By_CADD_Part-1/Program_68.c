// program to insert element in the array

#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[100], i, size, position, element;
    printf("Enter size of the array\n");
    scanf("%d", &size);

    printf("Enter elements in the array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element which you want to insert\n");
    scanf("%d", &element);

    printf("Enter the position where you wnat to insert\n");
    scanf("%d", &position);

    for (i = size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;

    printf("After inserting the element in the array\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}