// c program to sorting an array

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5], i, j, temp;
    printf("Enter 5 numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])  // for making this program to print the element in the desending order change this '>' to this '<' (greater to smaller) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Printing the array elements in the ascending order\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}