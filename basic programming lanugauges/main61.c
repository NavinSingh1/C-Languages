//program to comparision of two pointer variables
#include<stdio.h>
#include<conio.h>
int main()
{
    int *p2;
    int *p1;
    p2 = (int *)200;
    p1 = (int *)300;
    if(p1 > p2) {
        printf("P1 is greater than p2");
    } else {
        printf("P2 is greater than p1");
    }
    return 0;

}