//C Program to Calculate Permutation (nPr) and Combination (nCr)
#include<stdio.h>
#include<conio.h>

    long factorial(int);
    long find_npr(int, int);
    long find_ncr(int, int);

int main()
{
    int n,r;
    long npr,ncr;
    printf("Enter the value of n and r respectively: \n");
    scanf("%d%d", &n,&r);

    npr = find_npr(n, r);
    npr = find_ncr(n, r);

    printf("\n\t%dc%d = %ld\n", n, r, ncr);
    printf("\n\t%dp%d = %ld\n", n, r, npr);

    return 0;
}

long find_ncr(int a, int b)
{
    return (factorial(a)/(factorial(b)*factorial(a-b)));
}

long find_npr(int a, int b)
{
    return (factorial(a)/factorial(a-b));
}

long factorial(int c)
{
    if(c == 1 || c == 0)
        return 1;
    else
        return c*factorial(c-1);
}