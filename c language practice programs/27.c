// Below is a program to find wheather a number is even or odd without using %(Mod) operator.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    if ((n/2)*2 == n)
    {
        printf("\n\n\t\t %d is Even\n", n);
    }
    else
        printf("\n\n\t\t %d is odd\n", n);
    return 0;
}