//Program to find the Largest element in the array
#include <stdio.h>
#include <conio.h>

int returnmax(int array[], int n);

int main()
{
    int arr[] = {1, 12, 3, 5455, 5, 67, 654};
    int max = returnmax(arr, 7);
    printf("The maximum element in this array is %d\n", max);
    for (int i = 0; i < 7; i++)
    {
        printf("The element %d is %d\n", i, arr[i]);
    }
    
    return 0;
}

int returnmax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        array[0] = 999;
        return max;
    }
}
