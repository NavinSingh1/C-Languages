//write a program to calculate the factorial of a given number using a for loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, n, factorial=1;
    printf("Enter the number to print the factorial of : \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        factorial *= i;
    }
    printf("The value of factorial %d is %d", n, factorial);
    return 0;
}

//make this program once in while loop.