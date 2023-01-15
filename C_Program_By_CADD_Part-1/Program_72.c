// program to bubble sort

#include <stdio.h>
#include <conio.h>
void bubble(int a[], int n);
void print(int a[], int n);
int main()
{
    int i, j;
    int a[5] = {10, 35, 32, 13, 26};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before sorting array element are\n");
    print(a, n);
    bubble(a, n);
    printf("\nAfter sorting array element are\n");
    print(a, n);

    return 0;
}

void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}