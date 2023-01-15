// Write a function to calculate sum of squares of first N natural numbers.(all four ways: TNRN, TSRN, TNRS, TSRS)

void sum1(void);
void sum2(int);
int sum3(void);
int sum4(int);

//main function
#include <stdio.h>
#include <conio.h>
int main()
{
    // Note u can call any one function at a time
    // int k,p;
    sum1();
    // sum2(4);
    // k = sum3();
    // printf("Sum is %d", k);
    // p = sum4(6);
    // printf("Sum is %d", p);
}

//function defination
//////////TNRN///////////////
void sum1()
{
    int n, i, s = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i * i;
    }
    printf("Sum is %d\n", s);
}

//////////TSRN///////////////
void sum2(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
    {
        s = s + i * i;
    }
    printf("Sum is %d\n", s);
}

//////////TNRS///////////////
int sum3()
{
    int i, n, s = 0;
    printf("Enter a natural number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i * i;
    }
    return s;
}

//////////TSRS///////////////
int sum4(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
    {
        s = s + i * i;
    }
    return s;
}