//C Program to Find Sum of Natural Numbers Using While Loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=1,sum=0;

    printf("\nEnter the natural number: \n");
    scanf("%d", &n);

    while (count<=n)
    {
        sum+=count;
        count++;
    }

    printf("\nSum of Natura Numbers is = %d\n", sum);
    
}

// You can run this program using formula also
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int n,sum=0;

//     printf("\nEnter the natural number: \n");
//     scanf("%d", &n);

//     sum=(n*(n+1))/2;

//     printf("\nSum of Natural Numbers is = %d\n", sum);
    
// }