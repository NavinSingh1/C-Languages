// program to print all prime numbers between two numbers
#include<Stdio.h>
#include<conio.h>
int main()
{
    int l,u,x,i;
    printf("Enter two number to check inbetween all the prime numbers\n");
    scanf("%d%d", &l,&u);
    for(x=l+1;x<=u-1;x++){
        for(i=2;i<x;i++)
            if(x%i==0)
                break;
        if(i==x)
            printf("%d ", x);
    }
    getch();
}