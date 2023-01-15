//Below is a program adding two numbers using pointers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int first , second, *p, *q, sum;
    printf("Enter two integer to add using pointers:\n");
    scanf("%d%d", &first, &second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("\nThe sum of the entered number is: %d", sum);
    return 0;
    getch();
}