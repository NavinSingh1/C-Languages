// Example of extern

#include<stdio.h>
#include<conio.h>
int main()
{
    extern int a;
    printf("%d", a);
    return 0;
}
int a = 20;