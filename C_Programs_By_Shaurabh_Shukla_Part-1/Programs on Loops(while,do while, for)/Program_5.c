// Write a program to print first N natural numbers in reverse order. (N is given by user)

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    printf("Enter the value of N\n");
    scanf("%d", &n);
    printf("Printing first natural numbers entered by the user in reverse order\n");
    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}

/*
for(i=1;i<=n;i++){
    printf("%d\n", n+1-i);
}
*/