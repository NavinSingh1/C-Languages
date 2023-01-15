//Write a program to to find greater among three numbers

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;

    printf("Enter the values of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is the greatest among three \n");
        }
        else
        {
            printf("c is the greatest among three \n");
        }
    }
    else if (b > c)
        printf("b is the greatest among three \n");
    else
        printf("c is the greatest among three \n");
    return 0;
}

/*
    int main(){
        int a,b,c,k;
        printf("Enter three number\n");
        scanf("%d%d%d", &a,&b,&c)
        if(a>b && a>c)
            k=a;
        else{
            if(b>a && b>c)
                k=b;
            else(c>a && c>b)
                k=c;
        
        printf("The greatest among the three number is %d\n", k);

    }

*/

/*
int main(){
    int a, b, c;
    printf("Enter three numbers to check which is the greatest among them\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is the greatest number\n", a);
    else if (b > a && b > c)
        printf("%d is the greatest number\n", b);
    else
        printf("%d is the greatest number\n", c);
    }

*/

/*
    int main()
    {
        int a,b,c,k;
        printf("Enter three numbers\n");
        scanf("%d%d%d", &a,&b,&c);
        if(a>b){
            if(a>c)
                k=a;
            else
                k=c;
        }
        else{
            if(b>c)
                k=b;
            else
                k=c;
        }
        printf("Greater number is %d\n", k);
    }

*/

/*
int a, b, c, k;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    k = a > b ? a > c ? a : c : b > c ? b : c;
    printf("%d is the greatest number\n", k);
*/

/*
int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d is the greatest number\n", a > b ? a > c ? a : c : b > c ? b : c);
*/