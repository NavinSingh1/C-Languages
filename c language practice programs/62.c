// program to calculate sum of all even and odd number from a given array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
        scanf("%d", &a[i]);
    for(i=0;i<=9;i++)
        if(a[i]%2==0)
            se=se+a[i];
        else
            so=so+a[i];
    printf("Sum of even = %d\n", se);
    printf("Sum of odd = %d\n", so);
    getch();
}


// NOTE -> last program of c language at number 40 by saurab sukla