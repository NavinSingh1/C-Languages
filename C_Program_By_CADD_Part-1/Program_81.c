// array to pointers
// Printing the array elements using pointers

#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5];
    int n, i;
    int *ptr = arr;
    printf("Enter n numbers\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;
    printf("Printing the elements using pointers\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }

    return 0;
}