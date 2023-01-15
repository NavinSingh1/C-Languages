// Example of Array taking elements in the array and printing it.

#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    int marks[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the marks\n");
        scanf("%d", &marks[i]);
    }
    printf("Printing the marks\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }

    return 0;
}