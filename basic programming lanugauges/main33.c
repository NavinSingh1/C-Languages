//write a program to check wheather a given number is prime or not using loops.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 2, prime = 1;
    printf("Enter a number to check wheather it is prime number or not: \n");
    scanf("%d", &n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime==0){
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }
    return(0);
}
//try this program by the rest of the loops like 
// 1. while loop & do-while loop
