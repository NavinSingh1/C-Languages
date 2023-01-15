//program to addition of a number to a pointer
#include<stdio.h>
#include<conio.h>
int main()
{
    int first, second, *p , *q, sum;
    printf("Enter two integers to add using pointer:\n");
    scanf("%d%d", &first, &second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("\n\nThe sum of the entered number is: %d", sum);
    return 0;
}