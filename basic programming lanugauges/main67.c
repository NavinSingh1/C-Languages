//write a program contaning function which counts the number of poistive integers in an array.
#include<stdio.h>
#include<conio.h>
int countPositiveNumbers(int* arr, int n)
{
   int pos_count = 0;
   int i;
   for(i=0; i<n; i++){
       if(arr[i] > 0)
         pos_count++;
   }
   return pos_count;
}
//function to find the count of
//negative integers in an array
int countNegativeNumbers(int* arr, int n)
{
    int neg_count = 0;
    int i;
    for(i=0; i<n; i++){
        if(arr[i] < 0)
          neg_count++;
    }
    return neg_count++;
}

//Function to print the array
void printArray(int* arr, int n)
{
    int i;
    printf("Array: ");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

//Driver Program
int main()
{
    int arr[] = { 2, -1, 5, 6, 0, -3 };
    int n;
    n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    printf("count of positive elements = %d\n", countPositiveNumbers(arr,n));
    printf("Count of Negative element = %d\n", countNegativeNumbers(arr, n));

    return 0;
}