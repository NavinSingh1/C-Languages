// Array to function examples
// Program to find minimum value in the array using function

#include <stdio.h>
#include <conio.h>
int minarray(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int min, n;
    int number[20];
    printf("Enter n number\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    min = minarray(number, n);
    printf("Minimum number is %d\n", min);

    return 0;
}