//C Program To Print Multiplication Table Using For Loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the number of which table you want to print\n");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    
}